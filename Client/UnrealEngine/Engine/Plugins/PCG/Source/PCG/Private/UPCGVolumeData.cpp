// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 22

// StaticClass @ 1498527a0

UClass * __cdecl UPCGVolumeData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeData",
               &Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton,
               StaticRegisterNativesUPCGVolumeData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVolumeData>,InternalVTableHelperCtorCaller<UPCGVolumeData>,
               local_res8,UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton;
}

// UPCGVolumeData @ 14988f8d0

UPCGVolumeData * __thiscall
UPCGVolumeData::UPCGVolumeData(UPCGVolumeData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  local_res8 = 0;
  (this->VoxelSize).field0_0x0._s_0.X = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Y = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Z = 100.0;
  (this->Volume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Volume).WeakPtr,(FObjectPtr)&local_res8);
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  (this->StrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->StrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->StrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->StrictBounds).IsValid = '\0';
  (this->StrictBounds).Pad[0] = '\0';
  (this->StrictBounds).Pad[1] = '\0';
  (this->StrictBounds).Pad[2] = '\0';
  (this->StrictBounds).Pad[3] = '\0';
  (this->StrictBounds).Pad[4] = '\0';
  (this->StrictBounds).Pad[5] = '\0';
  (this->StrictBounds).Pad[6] = '\0';
  this->VolumeBodyInstance = (FBodyInstance *)0x0;
  return this;
}

// UPCGVolumeData @ 14988f9d0

UPCGVolumeData * __thiscall
UPCGVolumeData::UPCGVolumeData(UPCGVolumeData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  local_res8 = 0;
  (this->VoxelSize).field0_0x0._s_0.X = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Y = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Z = 100.0;
  (this->Volume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Volume).WeakPtr,(FObjectPtr)&local_res8);
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  (this->StrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->StrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->StrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->StrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->StrictBounds).IsValid = '\0';
  (this->StrictBounds).Pad[0] = '\0';
  (this->StrictBounds).Pad[1] = '\0';
  (this->StrictBounds).Pad[2] = '\0';
  (this->StrictBounds).Pad[3] = '\0';
  (this->StrictBounds).Pad[4] = '\0';
  (this->StrictBounds).Pad[5] = '\0';
  (this->StrictBounds).Pad[6] = '\0';
  this->VolumeBodyInstance = (FBodyInstance *)0x0;
  return this;
}

// ~UPCGVolumeData @ 149891ca0

void __thiscall UPCGVolumeData::~UPCGVolumeData(UPCGVolumeData *this)

{
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  ReleaseInternalBodyInstance(this);
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e590

void __thiscall UPCGVolumeData::AddToCrc(UPCGVolumeData *this,FArchiveCrc32 *param_1,bool param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  UScriptStruct *this_01;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if (this->VolumeBodyInstance == (FBodyInstance *)0x0) {
    UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  }
  else {
    this_00 = StaticClass();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    ::operator<<((FArchive *)param_1,&local_18);
    this_01 = FBodyInstance::StaticStruct();
    UScriptStruct::SerializeItem(this_01,(FArchive *)param_1,this->VolumeBodyInstance,(void *)0x0);
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->VoxelSize,0x18);
    if (&this->Bounds == (TBox<double> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Box",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVolumeData.cpp"
                         ,0x72,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar1 = *(uchar **)param_1->_padding_;
    if ((uchar *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&(this->Bounds).IsValid,1);
    }
    else {
      (this->Bounds).IsValid = *puVar1;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
    }
    if ((this->Bounds).IsValid != '\0') {
      UE::Math::operator<<((FArchive *)param_1,&(this->Bounds).Min);
      UE::Math::operator<<((FArchive *)param_1,&(this->Bounds).Max);
    }
    if (&this->StrictBounds == (TBox<double> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Box",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVolumeData.cpp"
                         ,0x72,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar1 = *(uchar **)param_1->_padding_;
    if ((uchar *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&(this->StrictBounds).IsValid,1);
    }
    else {
      (this->StrictBounds).IsValid = *puVar1;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
    }
    if ((this->StrictBounds).IsValid != '\0') {
      UE::Math::operator<<((FArchive *)param_1,&(this->StrictBounds).Min);
      UE::Math::operator<<((FArchive *)param_1,&(this->StrictBounds).Max);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// CopyBaseVolumeData @ 1498a3670

void __thiscall UPCGVolumeData::CopyBaseVolumeData(UPCGVolumeData *this,UPCGVolumeData *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  dVar1 = (this->VoxelSize).field0_0x0._s_0.Y;
  (param_1->VoxelSize).field0_0x0._s_0.X = (this->VoxelSize).field0_0x0._s_0.X;
  (param_1->VoxelSize).field0_0x0._s_0.Y = dVar1;
  (param_1->VoxelSize).field0_0x0._s_0.Z = (this->VoxelSize).field0_0x0._s_0.Z;
  (param_1->Volume).WeakPtr = (this->Volume).WeakPtr;
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  (param_1->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (param_1->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.X;
  (param_1->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  (param_1->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (param_1->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
  (param_1->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (this->Bounds).Pad[0];
  uVar3 = (this->Bounds).Pad[1];
  uVar4 = (this->Bounds).Pad[2];
  uVar5 = (this->Bounds).Pad[3];
  uVar6 = (this->Bounds).Pad[4];
  uVar7 = (this->Bounds).Pad[5];
  uVar8 = (this->Bounds).Pad[6];
  (param_1->Bounds).IsValid = (this->Bounds).IsValid;
  (param_1->Bounds).Pad[0] = uVar2;
  (param_1->Bounds).Pad[1] = uVar3;
  (param_1->Bounds).Pad[2] = uVar4;
  (param_1->Bounds).Pad[3] = uVar5;
  (param_1->Bounds).Pad[4] = uVar6;
  (param_1->Bounds).Pad[5] = uVar7;
  (param_1->Bounds).Pad[6] = uVar8;
  dVar1 = (this->StrictBounds).Min.field0_0x0._s_0.Y;
  (param_1->StrictBounds).Min.field0_0x0._s_0.X = (this->StrictBounds).Min.field0_0x0._s_0.X;
  (param_1->StrictBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->StrictBounds).Max.field0_0x0._s_0.X;
  (param_1->StrictBounds).Min.field0_0x0._s_0.Z = (this->StrictBounds).Min.field0_0x0._s_0.Z;
  (param_1->StrictBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->StrictBounds).Max.field0_0x0._s_0.Z;
  (param_1->StrictBounds).Max.field0_0x0._s_0.Y = (this->StrictBounds).Max.field0_0x0._s_0.Y;
  (param_1->StrictBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (this->StrictBounds).Pad[0];
  uVar3 = (this->StrictBounds).Pad[1];
  uVar4 = (this->StrictBounds).Pad[2];
  uVar5 = (this->StrictBounds).Pad[3];
  uVar6 = (this->StrictBounds).Pad[4];
  uVar7 = (this->StrictBounds).Pad[5];
  uVar8 = (this->StrictBounds).Pad[6];
  (param_1->StrictBounds).IsValid = (this->StrictBounds).IsValid;
  (param_1->StrictBounds).Pad[0] = uVar2;
  (param_1->StrictBounds).Pad[1] = uVar3;
  (param_1->StrictBounds).Pad[2] = uVar4;
  (param_1->StrictBounds).Pad[3] = uVar5;
  (param_1->StrictBounds).Pad[4] = uVar6;
  (param_1->StrictBounds).Pad[5] = uVar7;
  (param_1->StrictBounds).Pad[6] = uVar8;
  return;
}

// CopyInternal @ 1498a5900

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

UPCGSpatialData * __thiscall UPCGVolumeData::CopyInternal(UPCGVolumeData *this,FPCGContext *param_1)

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
  UPCGVolumeData *pUVar13;
  UPCGVolumeData *this_00;
  IPCGGraphExecutionSource *pIVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  undefined1 auStackY_168 [32];
  FGCScopeGuard local_138 [4];
  FWeakObjectPtr local_134;
  FWeakObjectPtr local_128;
  undefined1 local_120 [8];
  UPCGVolumeData *local_118;
  UPCGVolumeData *local_110;
  ulong64 local_108 [4];
  undefined **local_e8;
  FWeakObjectPtr FStack_e0;
  undefined8 local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FWeakObjectPtr FStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  IPCGGraphExecutionSource *local_98;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (FPCGContext *)0x0) {
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749225>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0xa9,"Context != nullptr || IsInGameThread()"), bVar10)) {
      pcVar1 = (code *)swi(3);
      pUVar11 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar11;
    }
  }
  else {
    bVar10 = IsInGameThread();
    if (!bVar10) {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4331830188552749348>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar10)) {
        pcVar1 = (code *)swi(3);
        pUVar11 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar11;
      }
      FGCScopeGuard::FGCScopeGuard(local_138);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPCGVolumeData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard(local_138);
      if ((pUVar13 == (UPCGVolumeData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x12a,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        pUVar11 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar11;
      }
      local_118 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPCGVolumeData *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_120,(bool *)&local_118);
      goto LAB_1498a5977;
    }
  }
  pUVar12 = GetTransientPackageAsObject();
  pUVar13 = NewObject<UPCGVolumeData>(pUVar12);
LAB_1498a5977:
  dVar2 = (this->VoxelSize).field0_0x0._s_0.Y;
  (pUVar13->VoxelSize).field0_0x0._s_0.X = (this->VoxelSize).field0_0x0._s_0.X;
  (pUVar13->VoxelSize).field0_0x0._s_0.Y = dVar2;
  (pUVar13->VoxelSize).field0_0x0._s_0.Z = (this->VoxelSize).field0_0x0._s_0.Z;
  (pUVar13->Volume).WeakPtr = (this->Volume).WeakPtr;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Y;
  (pUVar13->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (pUVar13->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Bounds).Max.field0_0x0._s_0.X;
  (pUVar13->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  (pUVar13->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (pUVar13->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
  (pUVar13->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->Bounds).Pad[0];
  uVar4 = (this->Bounds).Pad[1];
  uVar5 = (this->Bounds).Pad[2];
  uVar6 = (this->Bounds).Pad[3];
  uVar7 = (this->Bounds).Pad[4];
  uVar8 = (this->Bounds).Pad[5];
  uVar9 = (this->Bounds).Pad[6];
  (pUVar13->Bounds).IsValid = (this->Bounds).IsValid;
  (pUVar13->Bounds).Pad[0] = uVar3;
  (pUVar13->Bounds).Pad[1] = uVar4;
  (pUVar13->Bounds).Pad[2] = uVar5;
  (pUVar13->Bounds).Pad[3] = uVar6;
  (pUVar13->Bounds).Pad[4] = uVar7;
  (pUVar13->Bounds).Pad[5] = uVar8;
  (pUVar13->Bounds).Pad[6] = uVar9;
  dVar2 = (this->StrictBounds).Min.field0_0x0._s_0.Y;
  (pUVar13->StrictBounds).Min.field0_0x0._s_0.X = (this->StrictBounds).Min.field0_0x0._s_0.X;
  (pUVar13->StrictBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->StrictBounds).Max.field0_0x0._s_0.X;
  (pUVar13->StrictBounds).Min.field0_0x0._s_0.Z = (this->StrictBounds).Min.field0_0x0._s_0.Z;
  (pUVar13->StrictBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->StrictBounds).Max.field0_0x0._s_0.Z;
  (pUVar13->StrictBounds).Max.field0_0x0._s_0.Y = (this->StrictBounds).Max.field0_0x0._s_0.Y;
  (pUVar13->StrictBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->StrictBounds).Pad[0];
  uVar4 = (this->StrictBounds).Pad[1];
  uVar5 = (this->StrictBounds).Pad[2];
  uVar6 = (this->StrictBounds).Pad[3];
  uVar7 = (this->StrictBounds).Pad[4];
  uVar8 = (this->StrictBounds).Pad[5];
  uVar9 = (this->StrictBounds).Pad[6];
  (pUVar13->StrictBounds).IsValid = (this->StrictBounds).IsValid;
  (pUVar13->StrictBounds).Pad[0] = uVar3;
  (pUVar13->StrictBounds).Pad[1] = uVar4;
  (pUVar13->StrictBounds).Pad[2] = uVar5;
  (pUVar13->StrictBounds).Pad[3] = uVar6;
  (pUVar13->StrictBounds).Pad[4] = uVar7;
  (pUVar13->StrictBounds).Pad[5] = uVar8;
  (pUVar13->StrictBounds).Pad[6] = uVar9;
  if (this->VolumeBodyInstance != (FBodyInstance *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    pIVar14 = (IPCGGraphExecutionSource *)0x0;
    local_134.ObjectIndex = 0;
    local_134.ObjectSerialNumber = 0;
    local_110 = pUVar13;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    FWeakObjectPtr::operator=(&local_134,(FObjectPtr)&local_110);
    local_128 = local_134;
    bVar10 = IsInGameThread();
    if (bVar10) {
      this_00 = (UPCGVolumeData *)FWeakObjectPtr::Get(&local_128);
      if (this_00 != (UPCGVolumeData *)0x0) {
        SetupVolumeBodyInstance(this_00);
      }
    }
    else {
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar10)) {
        pIVar14 = (param_1->ExecutionSource).InterfaceInstance;
      }
      local_e8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::`5'::<lambda_1>,0,0>::
                  _vftable_;
      FStack_e0 = local_128;
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,bool,FPCGContext_*>
                    ::Call;
      local_b8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::`5'::<lambda_1>,0,0>::
                  _vftable_;
      FStack_b0 = local_128;
      local_a0 = (undefined ***)0x0;
      local_a8 = local_d8;
      local_88 = 0;
      local_60 = (longlong *)0x0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      local_38._0_1_ = false;
      local_38._1_1_ = true;
      local_98 = pIVar14;
      local_108[0] = FPCGContext::ScheduleGeneric(param_1,(FPCGScheduleGenericParams *)local_c8);
      if (local_108[0] != 0xffffffffffffffff) {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>
                  (&param_1->DynamicDependencies,(ulong64 *)(local_120 + 4),(bool *)local_108);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_88 != 0) {
        plVar15 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar15 = local_60;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      if (local_c8[0] != (code *)0x0) {
        pppuVar16 = &local_b8;
        if (local_a0 != (undefined ***)0x0) {
          pppuVar16 = local_a0;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return (UPCGSpatialData *)pUVar13;
}

// CreateBasePointData @ 1498ac500

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
UPCGVolumeData::CreateBasePointData
          (UPCGVolumeData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  undefined8 *puVar1;
  UPCGBasePointData *pUVar2;
  undefined1 auStackY_e8 [32];
  UObject *local_b8 [2];
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
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_e8;
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
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x388))(local_a8._0_4_,local_48);
  local_b8[0] = *(UObject **)param_2.Class.field0_0x0;
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_78 = puVar1[2];
  uStack_70 = puVar1[3];
  local_68 = puVar1[4];
  uStack_60 = puVar1[5];
  local_58 = puVar1[6];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8[0]);
  }
  pUVar2 = PCGVolumeSampler::SampleVolume
                     (param_1,(TSubclassOf<UPCGBasePointData>)local_b8,
                      (FVolumeSamplerParams *)&local_a8._s_0,(UPCGSpatialData *)this,
                      (UPCGSpatialData *)0x0);
  if ((pUVar2 != (UPCGBasePointData *)0x0) && (5 < (byte)LogPCG._0_1_)) {
    (**(code **)(pUVar2->_padding_ + 0x488))(pUVar2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return pUVar2;
}

// CreatePointArrayData @ 1498ae4a0

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
UPCGVolumeData::CreatePointArrayData
          (UPCGVolumeData *this,FPCGContext *param_1,TBox<double> *param_2)

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
              (&__CpuProfilerEventSpecId153,"UPCGVolumeData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVolumeData.cpp"
               ,0x99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId153);
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

// CreatePointData @ 1498af660

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
UPCGVolumeData::CreatePointData(UPCGVolumeData *this,FPCGContext *param_1)

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
              (&__CpuProfilerEventSpecId146,"UPCGVolumeData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVolumeData.cpp"
               ,0x92);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId146);
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

// GetBounds @ 1498b5f00

TBox<double> * __thiscall
UPCGVolumeData::GetBounds(UPCGVolumeData *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
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

// GetDataType @ 1498b84d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGVolumeData::GetDataType(UPCGVolumeData *this)

{
  return Volume;
}

// GetDataTypeId @ 1498b93f0

FPCGDataTypeBaseId * __thiscall UPCGVolumeData::GetDataTypeId(UPCGVolumeData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume,(UObject *)pUVar3,
                         L"PCGDataTypeInfoVolume");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b9473;
  }
  else {
LAB_1498b9473:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b94ca;
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
    if (bVar2) goto LAB_1498b94cc;
  }
LAB_1498b94ca:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b94cc:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVolume::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9b50

int __thiscall UPCGVolumeData::GetDimension(UPCGVolumeData *this)

{
  return 3;
}

// GetPrivateStaticClass @ 1498bd490

UClass * __cdecl UPCGVolumeData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeData",
               &Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton,
               StaticRegisterNativesUPCGVolumeData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVolumeData>,InternalVTableHelperCtorCaller<UPCGVolumeData>,
               local_res8,UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton;
}

// GetStrictBounds @ 1498c7850

TBox<double> * __thiscall
UPCGVolumeData::GetStrictBounds(UPCGVolumeData *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->StrictBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->StrictBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->StrictBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->StrictBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->StrictBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->StrictBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->StrictBounds).IsValid;
  uVar6 = (this->StrictBounds).Pad[0];
  uVar7 = (this->StrictBounds).Pad[1];
  uVar8 = (this->StrictBounds).Pad[2];
  uVar9 = (this->StrictBounds).Pad[3];
  uVar10 = (this->StrictBounds).Pad[4];
  uVar11 = (this->StrictBounds).Pad[5];
  uVar12 = (this->StrictBounds).Pad[6];
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

// Initialize @ 1498cddb0

void __thiscall UPCGVolumeData::Initialize(UPCGVolumeData *this,TBox<double> *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = param_1->Pad[0];
  uVar3 = param_1->Pad[1];
  uVar4 = param_1->Pad[2];
  uVar5 = param_1->Pad[3];
  uVar6 = param_1->Pad[4];
  uVar7 = param_1->Pad[5];
  uVar8 = param_1->Pad[6];
  (this->Bounds).IsValid = param_1->IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->StrictBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->StrictBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  (this->StrictBounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->StrictBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  (this->StrictBounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->StrictBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = param_1->Pad[0];
  uVar3 = param_1->Pad[1];
  uVar4 = param_1->Pad[2];
  uVar5 = param_1->Pad[3];
  uVar6 = param_1->Pad[4];
  uVar7 = param_1->Pad[5];
  uVar8 = param_1->Pad[6];
  (this->StrictBounds).IsValid = param_1->IsValid;
  (this->StrictBounds).Pad[0] = uVar2;
  (this->StrictBounds).Pad[1] = uVar3;
  (this->StrictBounds).Pad[2] = uVar4;
  (this->StrictBounds).Pad[3] = uVar5;
  (this->StrictBounds).Pad[4] = uVar6;
  (this->StrictBounds).Pad[5] = uVar7;
  (this->StrictBounds).Pad[6] = uVar8;
  return;
}

// Initialize @ 1498cde20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGVolumeData::Initialize(UPCGVolumeData *this,AVolume *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  UObject *pUVar6;
  FName FVar7;
  AVolume *this_00;
  AVolume *local_res8 [2];
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_40;
  undefined7 uStack_3f;
  
  if (param_1 == (AVolume *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVolume",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVolumeData.cpp"
                       ,0x2b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AVolume *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Volume).WeakPtr,(FObjectPtr)local_res8);
  bVar5 = PCGHelpers::IsRuntimeOrPIE();
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->Volume).WeakPtr);
    if (*(longlong *)&pUVar6[0x12].field_0x8 != 0) {
      FVar7 = FBodyInstance::GetCollisionProfileName
                        ((FBodyInstance *)(*(longlong *)&pUVar6[0x12].field_0x8 + 0x390));
      if ((*(FName *)FVar7 == UCollisionProfile::NoCollision_ProfileName) &&
         (2 < (byte)LogPCG._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
  }
  this_00 = (AVolume *)FWeakObjectPtr::Get(&(this->Volume).WeakPtr);
  AVolume::GetBounds(this_00,(TBoxSphereBounds<double,double> *)&local_a8._s_0);
  local_40 = 1;
  auVar3._8_4_ = SUB84(local_a8._s_0.Y - local_88,0);
  auVar3._0_8_ = local_a8._s_0.X - local_90;
  auVar3._12_4_ = (int)((ulonglong)(local_a8._s_0.Y - local_88) >> 0x20);
  *(undefined1 (*) [16])&(this->Bounds).Min.field0_0x0 = auVar3;
  auVar2._8_4_ = SUB84(local_a8._s_0.X + local_90,0);
  auVar2._0_8_ = local_a8._s_0.Z - local_80;
  auVar2._12_4_ = (int)((ulonglong)(local_a8._s_0.X + local_90) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Min.field0_0x0 + 0x10) = auVar2;
  auVar4._8_4_ = SUB84(local_a8._s_0.Z + local_80,0);
  auVar4._0_8_ = local_88 + local_a8._s_0.Y;
  auVar4._12_4_ = (int)((ulonglong)(local_a8._s_0.Z + local_80) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8) = auVar4;
  (this->Bounds).IsValid = 1;
  (this->Bounds).Pad[0] = (char)uStack_3f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_3f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_3f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_3f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_3f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_3f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_3f >> 0x30);
  SetupVolumeBodyInstance(this);
  return;
}

// ReleaseInternalBodyInstance @ 1498d68b0

void __thiscall UPCGVolumeData::ReleaseInternalBodyInstance(UPCGVolumeData *this)

{
  FBodyInstance *this_00;
  bool bVar1;
  
  if (this->VolumeBodyInstance != (FBodyInstance *)0x0) {
    bVar1 = FBodyInstance::IsValidBodyInstance(this->VolumeBodyInstance);
    if (bVar1) {
      FBodyInstance::TermBody(this->VolumeBodyInstance,false);
    }
    this_00 = this->VolumeBodyInstance;
    if (this_00 != (FBodyInstance *)0x0) {
      FBodyInstance::~FBodyInstance(this_00);
      ::operator_delete(this_00,400);
    }
    this->VolumeBodyInstance = (FBodyInstance *)0x0;
  }
  return;
}

// SamplePoint @ 1498dc110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UPCGVolumeData::SamplePoint
          (UPCGVolumeData *this,TTransform<double> *param_1,TBox<double> *param_2,FPCGPoint *param_3
          ,UPCGMetadata *param_4)

{
  double dVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  AVolume *this_00;
  float fVar4;
  undefined1 auStack_e8 [32];
  float local_c8 [2];
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0._0_4_ = *(undefined4 *)(param_1->Translation).XY.m128d_f64;
  local_c0._4_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
  local_c0._8_4_ = *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
  local_c0._12_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
  local_c0._16_4_ = *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
  local_c0._20_4_ = *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
  pTVar3 = (TBox<double> *)(**(code **)(this->_padding_ + 0x388))(local_c0._0_4_,local_88);
  bVar2 = PCGHelpers::IsInsideBounds(pTVar3,(TVector<double> *)&local_c0._s_0);
  if (!bVar2) {
    return false;
  }
  fVar4 = 0.0;
  bVar2 = FWeakObjectPtr::IsValid(&(this->Volume).WeakPtr);
  if (bVar2) {
    pTVar3 = (TBox<double> *)(**(code **)(this->_padding_ + 0x398))(this,local_88);
    bVar2 = PCGHelpers::IsInsideBounds(pTVar3,(TVector<double> *)&local_c0._s_0);
    if (!bVar2) {
      if (this->VolumeBodyInstance == (FBodyInstance *)0x0) {
        this_00 = (AVolume *)FWeakObjectPtr::Get(&(this->Volume).WeakPtr);
        local_a8._s_0.X = (double)CONCAT44(local_c0._4_4_,local_c0._0_4_);
        local_a8._s_0.Y = (double)CONCAT44(local_c0._12_4_,local_c0._8_4_);
        local_a8._s_0.Z = (double)CONCAT44(local_c0._20_4_,local_c0._16_4_);
        bVar2 = AVolume::EncompassesPoint
                          (this_00,(TVector<double> *)&local_a8._s_0,0.0,(float *)0x0);
        if (!bVar2) goto LAB_1498dc23d;
      }
      else {
        local_c8[0] = -1.0;
        bVar2 = FPhysInterface_Chaos::GetSquaredDistanceToBody
                          (this->VolumeBodyInstance,(TVector<double> *)&local_c0._s_0,local_c8,
                           (TVector<double> *)0x0);
        if ((!bVar2) || (local_c8[0] != 0.0)) goto LAB_1498dc23d;
      }
    }
  }
  fVar4 = __real_3f800000;
LAB_1498dc23d:
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
  dVar1 = (param_2->Max).field0_0x0._s_0.Z;
  param_3->Density = fVar4;
  (param_3->BoundsMax).field0_0x0._s_0.Z = dVar1;
  return 0.0 < fVar4;
}

// SetupVolumeBodyInstance @ 1498f6260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPCGVolumeData::SetupVolumeBodyInstance(UPCGVolumeData *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  UObject *pUVar4;
  FBodyInstance *pFVar5;
  UBodySetup *pUVar6;
  FSingleParticlePhysicsProxy *pFVar7;
  FBodyInstance *pFVar8;
  FInitBodySpawnParams *pFVar9;
  undefined8 local_res8;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->Volume).WeakPtr);
  if ((pUVar4 != (UObject *)0x0) &&
     (plVar2 = *(longlong **)&pUVar4[0x12].field_0x8, plVar2 != (longlong *)0x0)) {
    pFVar8 = (FBodyInstance *)0x0;
    local_res8 = 0;
    pFVar5 = (FBodyInstance *)(**(code **)(*plVar2 + 0x818))(plVar2,0,1);
    pUVar6 = (UBodySetup *)(**(code **)(*plVar2 + 0x800))(plVar2);
    if (((pFVar5 != (FBodyInstance *)0x0) && (pUVar6 != (UBodySetup *)0x0)) &&
       ((pFVar7 = FBodyInstance::GetPhysicsActor(pFVar5),
        pFVar7 == (FSingleParticlePhysicsProxy *)0x0 ||
        (bVar3 = FBodyInstance::IsDynamic(pFVar5), !bVar3)))) {
      ReleaseInternalBodyInstance(this);
      pFVar5 = ::operator_new(400);
      if (pFVar5 != (FBodyInstance *)0x0) {
        pFVar8 = FBodyInstance::FBodyInstance(pFVar5);
      }
      this->VolumeBodyInstance = pFVar8;
      *(byte *)&pFVar8->_padding_ = (byte)pFVar8->_padding_ & 0xdf;
      piVar1 = &this->VolumeBodyInstance->_padding_;
      *(byte *)piVar1 = (byte)*piVar1 & 0xfe;
      pFVar5 = this->VolumeBodyInstance;
      pFVar9 = FInitBodySpawnParams::FInitBodySpawnParams
                         ((FInitBodySpawnParams *)&local_res8,(UPrimitiveComponent *)0x0);
      FBodyInstance::InitBody
                (pFVar5,pUVar6,(TTransform<double> *)(plVar2 + 0x3e),(UPrimitiveComponent *)0x0,
                 (FPhysScene_Chaos *)0x0,pFVar9,(IPhysicsBodyInstanceOwner *)0x0);
    }
  }
  return;
}

// StaticRegisterNativesUPCGVolumeData @ 1498f6b80

void __cdecl UPCGVolumeData::StaticRegisterNativesUPCGVolumeData(void)

{
  return;
}

