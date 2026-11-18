// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// ComputeUpdateStreamingHash @ 148a8c020

uint __thiscall
UWorldPartitionRuntimeHash::ComputeUpdateStreamingHash(UWorldPartitionRuntimeHash *this)

{
  return 0;
}

// ContainsRuntimeHash @ 148a8c0b0

bool __thiscall
UWorldPartitionRuntimeHash::ContainsRuntimeHash(UWorldPartitionRuntimeHash *this,FString *param_1)

{
  return false;
}

// GetOuterUWorldPartition @ 148a957a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UWorldPartitionRuntimeHash::GetOuterUWorldPartition(UWorldPartitionRuntimeHash *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldPartition *pUVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (UWorldPartition *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1240560329461596353>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                     ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorldPartition *)(*pcVar1)();
    return pUVar3;
  }
  return (UWorldPartition *)0x0;
}

// GetShouldMergeStreamingSourceInfo @ 148a96f70

bool __thiscall
UWorldPartitionRuntimeHash::GetShouldMergeStreamingSourceInfo(UWorldPartitionRuntimeHash *this)

{
  return false;
}

// IsStreaming3D @ 148a9a620

bool __thiscall UWorldPartitionRuntimeHash::IsStreaming3D(UWorldPartitionRuntimeHash *this)

{
  return true;
}

// OnBeginPlay @ 148a9ac80

void __thiscall UWorldPartitionRuntimeHash::OnBeginPlay(UWorldPartitionRuntimeHash *this)

{
  return;
}

// StaticClass @ 148aa2880

UClass * __cdecl UWorldPartitionRuntimeHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeHash,0x78,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHash>,aFStackX_8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton;
}

// UWorldPartitionRuntimeHash @ 148ab5c60

UWorldPartitionRuntimeHash * __thiscall
UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash
          (UWorldPartitionRuntimeHash *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements = 0;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x30 = 0xffffffff;
  (this->InjectedExternalStreamingObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InjectedExternalStreamingObjects).HashSize = 0;
  return this;
}

// UWorldPartitionRuntimeHash @ 148ab5cb0

UWorldPartitionRuntimeHash * __thiscall
UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash
          (UWorldPartitionRuntimeHash *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements = 0;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InjectedExternalStreamingObjects).Elements.field_0x30 = 0xffffffff;
  (this->InjectedExternalStreamingObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InjectedExternalStreamingObjects).HashSize = 0;
  return this;
}

// ~UWorldPartitionRuntimeHash @ 148ab7680

void __thiscall
UWorldPartitionRuntimeHash::~UWorldPartitionRuntimeHash(UWorldPartitionRuntimeHash *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  (this->InjectedExternalStreamingObjects).HashSize = 0;
  FVar1 = (this->InjectedExternalStreamingObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InjectedExternalStreamingObjects).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateExternalStreamingObject @ 148ac37e0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URuntimeHashExternalStreamingObjectBase * __cdecl
UWorldPartitionRuntimeHash::CreateExternalStreamingObject
          (TSubclassOf<URuntimeHashExternalStreamingObjectBase> param_1,UObject *param_2,
          UWorld *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  URuntimeHashExternalStreamingObjectBase *pUVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if (lVar2 != 0) {
    pUVar6 = URuntimeHashExternalStreamingObjectBase::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_148ac3850;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_148ac3850:
  FVar4 = local_b8;
  if (local_b8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = URuntimeHashExternalStreamingObjectBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  FVar5 = local_b8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_b8.Number = FVar4.Number;
  local_a8._16_4_ = local_b8.ComparisonIndex.Value;
  local_a8._20_4_ = local_b8.Number;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b8 = FVar5;
  local_a8._8_8_ = param_2;
  pUVar8 = (URuntimeHashExternalStreamingObjectBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_b8 = (FName)param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FSoftObjectPtr::operator=(&(pUVar8->OuterWorld).SoftObjectPtr,(FObjectPtr)&local_b8);
  return pUVar8;
}

// CreateRuntimeCell @ 148ac3d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldPartitionRuntimeCell * __thiscall
UWorldPartitionRuntimeHash::CreateRuntimeCell
          (UWorldPartitionRuntimeHash *this,UClass *param_1,UClass *param_2,FString *param_3,
          FString *param_4,UObject *param_5)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  UWorldPartitionRuntimeCell *pUVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UWorldPartitionRuntimeCellData *pUVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  FString local_2b0;
  FString local_2a0;
  FName local_290;
  FGuid local_288;
  FString local_278;
  undefined1 local_268 [128];
  undefined1 local_1e8 [128];
  undefined1 local_168;
  uint local_167;
  uint uStack_163;
  uint uStack_15f;
  uint uStack_15b;
  FArchiveState local_148;
  FMD5 local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pFVar5 = ::FString::FString(&local_278,param_3);
  FArchiveState::FArchiveState(&local_148);
  local_148._padding_ = (longlong)&___7FArchiveMD5__6B_;
  FMD5::FMD5(&local_b8);
  (**(code **)(local_148._padding_ + 200))(&local_148,0);
  (**(code **)(local_148._padding_ + 0xd8))(&local_148,1);
  (**(code **)(local_148._padding_ + 0x108))(&local_148,0);
  ::operator<<((FArchive *)&local_148,pFVar5);
  local_168 = 0;
  FMD5::Final(&local_b8,(uchar *)&local_167);
  local_168 = 1;
  local_288.A = local_167;
  local_288.B = uStack_163;
  local_288.C = uStack_15f;
  local_288.D = uStack_15b;
  if ((((uStack_15b == 0 && uStack_163 == 0) && local_167 == 0) && uStack_15f == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellNameGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                         ,0xe6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UWorldPartitionRuntimeCell *)(*pcVar3)();
    return pUVar6;
  }
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  FGuid::AppendString(&local_288,&local_2b0,Base36Encoded);
  FMD5::~FMD5(&local_b8);
  FArchive::~FArchive((FArchive *)&local_148);
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::FString::ConcatFF(&local_2a0,&local_2b0,param_4);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (param_5 != (UObject *)0x0) {
    this = (UWorldPartitionRuntimeHash *)param_5;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2a0.Data.ArrayNum != 0) {
    FVar11.Data = local_2a0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_290,(wchar_t *)FVar11.Data);
  FVar2 = *pFVar7;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = UWorldPartitionRuntimeCell::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_268,param_1);
  local_268._48_8_ = (FObjectInstancingGraph *)0x0;
  local_268._56_8_ = (UPackage *)0x0;
  local_268._24_4_ = RF_NoFlags;
  local_268._40_8_ = (UObject *)0x0;
  local_268[0x20] = false;
  local_268._8_8_ = this;
  local_268._16_8_ = FVar2;
  pUVar6 = (UWorldPartitionRuntimeCell *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_268);
  if (local_268._64_8_ != 0) {
    plVar10 = (longlong *)(local_268 + 0x50);
    if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_268._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_2b8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UWorldPartitionRuntimeCellData::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,param_2);
  local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1e8._56_8_ = (UPackage *)0x0;
  local_1e8._16_4_ = 0;
  local_1e8._20_4_ = 0;
  local_1e8._24_4_ = RF_NoFlags;
  local_1e8._40_8_ = (UObject *)0x0;
  local_1e8[0x20] = false;
  local_1e8._8_8_ = pUVar6;
  pUVar9 = (UWorldPartitionRuntimeCellData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar10 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UWorldPartitionRuntimeCellData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (pUVar6->RuntimeCellData).field0_0x0.DebugPtr = pUVar9;
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  return pUVar6;
}

// Draw2D @ 148ac54d0

bool __thiscall
UWorldPartitionRuntimeHash::Draw2D
          (UWorldPartitionRuntimeHash *this,FWorldPartitionDraw2DContext *param_1)

{
  return false;
}

// Draw3D @ 148ac7500

void __thiscall
UWorldPartitionRuntimeHash::Draw3D
          (UWorldPartitionRuntimeHash *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ForEachStreamingCells @ 148aca5b0

void __thiscall
UWorldPartitionRuntimeHash::ForEachStreamingCells
          (UWorldPartitionRuntimeHash *this,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_1)

{
  return;
}

// ForEachStreamingCellsQuery @ 148aca600

void __thiscall
UWorldPartitionRuntimeHash::ForEachStreamingCellsQuery
          (UWorldPartitionRuntimeHash *this,FWorldPartitionStreamingQuerySource *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_2,
          FWorldPartitionQueryCache *param_3)

{
  return;
}

// ForEachStreamingCellsSources @ 148aca660

void __thiscall
UWorldPartitionRuntimeHash::ForEachStreamingCellsSources
          (UWorldPartitionRuntimeHash *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*,EStreamingSourceTargetState)>
          *param_2,FWorldPartitionStreamingContext *param_3)

{
  return;
}

// GetCustomHLODActorSourceCellOverride @ 148accbf0

FGuid * __thiscall
UWorldPartitionRuntimeHash::GetCustomHLODActorSourceCellOverride
          (UWorldPartitionRuntimeHash *this,FGuid *param_1)

{
  return (FGuid *)0x0;
}

// GetPrivateStaticClass @ 148acfb50

UClass * __cdecl UWorldPartitionRuntimeHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeHash,0x78,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHash>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton;
}

// GetStandaloneHLODActorSourceCellOverride @ 148ad12b0

FGuid * __thiscall
UWorldPartitionRuntimeHash::GetStandaloneHLODActorSourceCellOverride
          (UWorldPartitionRuntimeHash *this,FGuid *param_1)

{
  return (FGuid *)0x0;
}

// GetStreamingPerformance @ 148ad13a0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeHash::GetStreamingPerformance
          (UWorldPartitionRuntimeHash *this,
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          *param_1)

{
  return Good;
}

// GetStreamingPerformance @ 148ad13b0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeHash::GetStreamingPerformance
          (UWorldPartitionRuntimeHash *this,
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          *param_1,bool *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  EWorldPartitionStreamingPerformance EVar9;
  char cVar10;
  EWorldPartitionStreamingPerformance EVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  bool bVar22;
  byte local_res18 [8];
  ulonglong local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId636,"UWorldPartitionRuntimeHash::GetStreamingPerformance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
               ,0x27c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId636);
  }
  EVar9 = Good;
  *param_2 = false;
  iVar16 = *(int *)&(param_1->Elements).field_0x34;
  iVar3 = *(int *)&(param_1->Elements).field_0x8;
  if (iVar3 == iVar16) {
LAB_148ad168e:
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return EVar9;
  }
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  local_res20 = CONCAT44(local_res20._4_4_,1);
  iVar19 = 0;
  iVar14 = 0;
  iVar12 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        iVar14 = *(int *)&(param_1->Elements).field_0x28;
        iVar12 = iVar4;
        goto LAB_148ad14d4;
      }
      uVar15 = puVar20[lVar13 + 1];
    }
    iVar14 = *(int *)&(param_1->Elements).field_0x28;
    local_res20 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = local_res20 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (int)lVar13 + -1 + iVar19;
    if (iVar14 < iVar12) {
      iVar12 = iVar4;
    }
  }
LAB_148ad14d4:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44((int)local_res20,iVar17);
  TStack_70.CurrentBitIndex = iVar12;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iVar12;
  TStack_70.BaseBitIndex = iVar19;
  uStack_50 = CONCAT44(uStack_7c,iVar3 - iVar16);
  iVar16 = (int)uVar15 >> 5;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar14 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar5) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_148ad15d1;
      uVar15 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_148ad15d1:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) goto LAB_148ad168e;
    plVar6 = *(longlong **)
              (*(longlong *)&param_1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    cVar10 = (**(code **)(*plVar6 + 0x2f0))(plVar6);
    if ((cVar10 == '\0') && (iVar16 = (**(code **)(*plVar6 + 0x318))(plVar6), iVar16 != 5)) {
      EVar11 = (**(code **)(this->_padding_ + 0x328))(this,plVar6,local_res18);
      *param_2 = (bool)(*param_2 | local_res18[0]);
      if (((EVar9 < EVar11) && (EVar9 = EVar11, local_res18[0] != 0)) && (Slow < EVar11))
      goto LAB_148ad168e;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetStreamingPerformanceForCell @ 148ad16e0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeHash::GetStreamingPerformanceForCell
          (UWorldPartitionRuntimeHash *this,UWorldPartitionRuntimeCell *param_1)

{
  return Good;
}

// GetStreamingPerformanceForCell @ 148ad16f0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeHash::GetStreamingPerformanceForCell
          (UWorldPartitionRuntimeHash *this,UWorldPartitionRuntimeCell *param_1,bool *param_2)

{
  float fVar1;
  UWorldPartitionRuntimeCellData *pUVar2;
  EWorldPartitionStreamingPerformance EVar3;
  EWorldPartitionStreamingPerformance EVar4;
  
  EVar4 = Good;
  if ((param_1->bBlockOnSlowLoading != false) &&
     (pUVar2 = (param_1->RuntimeCellData).field0_0x0.DebugPtr,
     pUVar2->bCachedWasRequestedByBlockingSource != false)) {
    fVar1 = pUVar2->CachedMinBlockOnSlowStreamingRatio;
    if (0.0 < fVar1) {
      if (GBlockOnSlowStreamingRatio <= fVar1) {
        EVar4 = Good;
        if (fVar1 < GBlockOnSlowStreamingWarningFactor * GBlockOnSlowStreamingRatio) {
          EVar4 = Slow;
        }
      }
      else {
        EVar4 = Critical;
      }
    }
    else {
      EVar4 = Immediate;
    }
  }
  fVar1 = ((param_1->RuntimeCellData).field0_0x0.DebugPtr)->CachedMinSlowStreamingRatio;
  if (0.0 < fVar1) {
    if (GSlowStreamingRatio <= fVar1) {
      if (GSlowStreamingWarningFactor * GSlowStreamingRatio <= fVar1) goto LAB_148ad1789;
      EVar3 = Slow;
    }
    else {
      EVar3 = Critical;
    }
  }
  else {
    EVar3 = Immediate;
  }
  if (EVar4 < EVar3) {
    *param_2 = false;
    return EVar3;
  }
LAB_148ad1789:
  *param_2 = Slow < EVar4;
  return EVar4;
}

// GetWorldAssetStreamingCells @ 148ad1de0

TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeHash::GetWorldAssetStreamingCells
          (UWorldPartitionRuntimeHash *this,
          TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGuid *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// InjectExternalStreamingObject @ 148ad2790

/* WARNING: Removing unreachable block (ram,0x000148ad287f) */
/* WARNING: Removing unreachable block (ram,0x000148ad2888) */
/* WARNING: Removing unreachable block (ram,0x000148ad28b3) */
/* WARNING: Removing unreachable block (ram,0x000148ad28b9) */
/* WARNING: Removing unreachable block (ram,0x000148ad28cb) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeHash::InjectExternalStreamingObject
          (UWorldPartitionRuntimeHash *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> local_res18;
  FWeakObjectPtr local_res20;
  URuntimeHashExternalStreamingObjectBase *local_38 [4];
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7206290042707246431>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x2a1,"InExternalStreamingObject");
    if (!bVar2) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((((uint)param_1->_padding_ >> 0x1e & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(InExternalStreamingObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                         ,0x2a5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_38[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_38);
  TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>
            (&this->InjectedExternalStreamingObjects,&local_res18,(bool *)&local_res20);
  return true;
}

// IsCellRelevantFor @ 148ad3d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeHash::IsCellRelevantFor(UWorldPartitionRuntimeHash *this,bool param_1)

{
  bool bVar1;
  ENetMode EVar2;
  UWorld *this_00;
  UWorldPartition *this_01;
  
  if (param_1) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    bVar1 = UWorld::IsGameWorld(this_00);
    if (bVar1) {
      EVar2 = UWorld::InternalGetNetMode(this_00);
      if (EVar2 == NM_DedicatedServer) {
        return false;
      }
      if (EVar2 == NM_ListenServer) {
        this_01 = GetOuterUWorldPartition(this);
        bVar1 = UWorldPartition::IsServerStreamingEnabled(this_01);
        return bVar1;
      }
    }
  }
  return true;
}

// IsExternalStreamingObjectInjected @ 148ad4480

bool __thiscall
UWorldPartitionRuntimeHash::IsExternalStreamingObjectInjected
          (UWorldPartitionRuntimeHash *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar1 = TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>_>
                    (&this->InjectedExternalStreamingObjects,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>
                      *)&local_res10);
  return iVar1 != -1;
}

// RegisterWorldAssetStreaming @ 148ad6720

FGuid * __thiscall
UWorldPartitionRuntimeHash::RegisterWorldAssetStreaming
          (UWorldPartitionRuntimeHash *this,FGuid *__return_storage_ptr__,
          FRegisterWorldAssetStreamingParams *param_1)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// RemoveExternalStreamingObject @ 148ad89a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeHash::RemoveExternalStreamingObject
          (UWorldPartitionRuntimeHash *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FWeakObjectPtr local_res10;
  URuntimeHashExternalStreamingObjectBase *local_res18;
  FWeakObjectPtr local_res20;
  FName local_38;
  FString local_30;
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7206290042707246414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x2b2,"InExternalStreamingObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    if ((((uint)param_1->_padding_ >> 0x1e & 1) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(InExternalStreamingObject)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                           ,0x2b6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_res20 = local_res10;
    if (*(int *)&(this->InjectedExternalStreamingObjects).Elements.field_0x8 !=
        *(int *)&(this->InjectedExternalStreamingObjects).Elements.field_0x34) {
      iVar4 = TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::
              RemoveImpl<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>_>
                        (&this->InjectedExternalStreamingObjects,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>
                          *)&local_res20);
      if (iVar4 != 0) {
        return true;
      }
    }
    if (2 < (byte)LogWorldPartition._0_1_) {
      local_38 = (FName)param_1->_padding_;
      ::FName::ToString(&local_38,&local_30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// StaticRegisterNativesUWorldPartitionRuntimeHash @ 148adb910

void __cdecl UWorldPartitionRuntimeHash::StaticRegisterNativesUWorldPartitionRuntimeHash(void)

{
  return;
}

// SupportsWorldAssetStreaming @ 148adb990

bool __thiscall
UWorldPartitionRuntimeHash::SupportsWorldAssetStreaming
          (UWorldPartitionRuntimeHash *this,FName *param_1)

{
  return false;
}

// UnregisterWorldAssetStreaming @ 148add1b0

bool __thiscall
UWorldPartitionRuntimeHash::UnregisterWorldAssetStreaming
          (UWorldPartitionRuntimeHash *this,FGuid *param_1)

{
  return false;
}

