// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f14360

UClass * __cdecl UEnvQueryGenerator_ProjectedPoints::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ProjectedPoints",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_ProjectedPoints>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ProjectedPoints>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton;
}

// UEnvQueryGenerator_ProjectedPoints @ 146f2bd50

UEnvQueryGenerator_ProjectedPoints * __thiscall
UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
          (UEnvQueryGenerator_ProjectedPoints *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  (this->ProjectionData).ProjectDown = 1024.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_ProjectedPoints__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ProjectionData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ProjectionData).TraceChannel = '\0';
  (this->ProjectionData).SerializedChannel = '\0';
  (this->ProjectionData).VersionNum = 0;
  (this->ProjectionData).ProjectUp = 1024.0;
  (this->ProjectionData).ExtentX = 10.0;
  (this->ProjectionData).ExtentY = 10.0;
  (this->ProjectionData).ExtentZ = 10.0;
  (this->ProjectionData).PostProjectionVerticalOffset = 0.0;
  (this->ProjectionData).TraceProfileName.ComparisonIndex = 0;
  (this->ProjectionData).TraceProfileName.Number = 0;
  (this->ProjectionData).TraceShape = '\0';
  (this->ProjectionData).TraceMode = '\0';
  puVar2 = &(this->ProjectionData).field_0x38;
  (this->ProjectionData).bTraceComplex = 0;
  (this->ProjectionData).bCanProjectDown = 0;
  (this->ProjectionData).bCanDisableTrace = 1;
  (this->ProjectionData).bCanTraceOnGeometry = 1;
  (this->ProjectionData).bCanTraceOnNavMesh = 1;
  (this->ProjectionData).bOnlyBlockingHits = 1;
  (this->NavDataOverrideContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_ProjectedPoints @ 146f2bde0

UEnvQueryGenerator_ProjectedPoints * __thiscall
UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
          (UEnvQueryGenerator_ProjectedPoints *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UClass *pUVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd | 1;
  this->_padding_ = 0;
  (this->ProjectionData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ProjectionData).TraceChannel = '\0';
  (this->ProjectionData).SerializedChannel = '\0';
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_ProjectedPoints__6B_;
  (this->ProjectionData).VersionNum = 0;
  (this->ProjectionData).ProjectDown = 1024.0;
  (this->ProjectionData).ProjectUp = 1024.0;
  (this->ProjectionData).ExtentX = 10.0;
  (this->ProjectionData).ExtentY = 10.0;
  (this->ProjectionData).ExtentZ = 10.0;
  (this->ProjectionData).PostProjectionVerticalOffset = 0.0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ProjectionData).TraceProfileName.ComparisonIndex = 0;
  (this->ProjectionData).TraceProfileName.Number = 0;
  (this->ProjectionData).TraceShape = '\0';
  (this->ProjectionData).TraceMode = '\0';
  puVar2 = &(this->ProjectionData).field_0x38;
  (this->ProjectionData).bTraceComplex = 0;
  (this->ProjectionData).bCanProjectDown = 0;
  (this->ProjectionData).bCanDisableTrace = 1;
  (this->ProjectionData).bCanTraceOnGeometry = 1;
  (this->ProjectionData).bCanTraceOnNavMesh = 1;
  (this->ProjectionData).bOnlyBlockingHits = 1;
  (this->NavDataOverrideContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ProjectionData).bCanDisableTrace = 1;
  (this->ProjectionData).bCanProjectDown = 1;
  (this->ProjectionData).TraceMode.Value = '\x01';
  (this->ProjectionData).ExtentX = 0.0;
  pUVar3 = UEnvQueryItemType_Point::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->_padding_ = (longlong)pUVar3;
  return this;
}

// ~UEnvQueryGenerator_ProjectedPoints @ 146f2ecf0

void __thiscall
UEnvQueryGenerator_ProjectedPoints::~UEnvQueryGenerator_ProjectedPoints
          (UEnvQueryGenerator_ProjectedPoints *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f58690

UClass * __cdecl UEnvQueryGenerator_ProjectedPoints::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ProjectedPoints",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_ProjectedPoints>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ProjectedPoints>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton;
}

// PostLoad @ 146f5fa00

void __thiscall
UEnvQueryGenerator_ProjectedPoints::PostLoad(UEnvQueryGenerator_ProjectedPoints *this)

{
  TEnumAsByte<ETraceTypeQuery> *pTVar1;
  TEnumAsByte<ECollisionChannel> *pTVar2;
  ECollisionChannel EVar3;
  ETraceTypeQuery EVar4;
  
  UObject::PostLoad((UObject *)this);
  (**(code **)(this->_padding_ + 0x2b0))(this);
  pTVar1 = &(this->ProjectionData).TraceChannel;
  pTVar2 = &(this->ProjectionData).SerializedChannel;
  if ((this->ProjectionData).VersionNum == 0) {
    EVar3 = UEngineTypes::ConvertToCollisionChannel((uint)pTVar1->Value);
    pTVar2->Value = (uchar)EVar3;
  }
  EVar4 = UEngineTypes::ConvertToTraceType((uint)pTVar2->Value);
  pTVar1->Value = (uchar)EVar4;
  (this->ProjectionData).VersionNum = 1;
  return;
}

// ProjectAndFilterNavPoints @ 146f631a0

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
UEnvQueryGenerator_ProjectedPoints::ProjectAndFilterNavPoints
          (UEnvQueryGenerator_ProjectedPoints *this,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,FEnvQueryInstance *param_2)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  UClass *pUVar8;
  longlong lVar9;
  UClass *pUVar10;
  undefined8 uVar11;
  ANavigationData *pAVar12;
  UObject *pUVar13;
  ANavigationData *pAVar14;
  ForAnyElementType FVar15;
  ANavigationData *pAVar16;
  undefined1 local_res8 [8];
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_48;
  
  pAVar16 = (ANavigationData *)0x0;
  pAVar12 = pAVar16;
  local_res10 = param_1;
  if ((this->ProjectionData).TraceMode.Value == '\0') goto LAB_146f633bc;
  pUVar10 = (this->NavDataOverrideContext).Class.field0_0x0.DebugPtr;
  if ((pUVar10 != (UClass *)0x0) &&
     (pUVar8 = UEnvQueryContext::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar10->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) &&
       (pUVar10 = (this->NavDataOverrideContext).Class.field0_0x0.DebugPtr, pUVar10 != (UClass *)0x0
       )) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      pUVar8 = UEnvQueryContext::StaticClass();
      pAVar14 = pAVar16;
      if (pUVar8 != (UClass *)0x0) {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar10->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pAVar14 = (ANavigationData *)(this->NavDataOverrideContext).Class.field0_0x0.DebugPtr;
        }
      }
      bVar7 = FEnvQueryInstance::PrepareContext(param_2,(UClass *)pAVar14,&local_48);
      if (bVar7) {
        lVar9 = (**(code **)(this->_padding_ + 0x180))(this);
        if ((lVar9 != 0) &&
           (pAVar14 = *(ANavigationData **)(lVar9 + 0x1a0), pAVar14 != (ANavigationData *)0x0)) {
          pUVar10 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)(pAVar14->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar10->_padding_)) goto LAB_146f632cf;
        }
        pAVar14 = pAVar16;
LAB_146f632cf:
        iVar3 = local_48.ArrayNum;
        pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
        FVar15.Data = local_48.AllocatorInstance.Data;
        do {
          if (local_48.ArrayNum != iVar3) {
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          pAVar12 = pAVar16;
          if (FVar15.Data == pFVar1) break;
          pAVar12 = *(ANavigationData **)FVar15.Data;
          if (pAVar12 != (ANavigationData *)0x0) {
            pUVar10 = Z_Construct_UClass_ANavigationData_NoRegister();
            iVar4 = (int)pUVar10->_padding_;
            if ((iVar4 <= *(int *)(pAVar12->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar10->_padding_)) break;
            pUVar10 = Z_Construct_UClass_APawn_NoRegister();
            iVar4 = (int)pUVar10->_padding_;
            if ((iVar4 <= *(int *)(pAVar12->_padding_ + 0x38)) &&
               (((longlong *)
                 *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar10->_padding_ && (pAVar14 != (ANavigationData *)0x0)))) goto LAB_146f6335c;
          }
          FVar15.Data = FVar15.Data + 8;
        } while( true );
      }
      goto LAB_146f63395;
    }
  }
  goto LAB_146f633a9;
LAB_146f6335c:
  pcVar5 = *(code **)(pAVar14->_padding_ + 0x358);
  uVar11 = (**(code **)(pAVar12->_padding_ + 0x10))();
  pAVar12 = (ANavigationData *)(*pcVar5)(pAVar14,uVar11);
LAB_146f63395:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (pAVar12 != (ANavigationData *)0x0) goto LAB_146f633bc;
LAB_146f633a9:
  pAVar12 = FEQSHelpers::FindNavigationDataForQuery(param_2);
LAB_146f633bc:
  pTVar6 = local_res10;
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_2->_padding_ + 4));
  if (((pAVar12 != (ANavigationData *)0x0) && (pUVar13 != (UObject *)0x0)) &&
     ((this->ProjectionData).TraceMode.Value == '\x01')) {
    FEQSHelpers::RunNavProjection(pAVar12,pUVar13,&this->ProjectionData,pTVar6,Discard);
  }
  uVar2 = (this->ProjectionData).TraceMode.Value;
  if ((uVar2 == '\x02') || (uVar2 == '\x03')) {
    FEQSHelpers::RunPhysProjection
              ((param_2->World).field0_0x0.DebugPtr,&this->ProjectionData,pTVar6,Discard);
  }
  return;
}

// StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints @ 146f76d70

void __cdecl
UEnvQueryGenerator_ProjectedPoints::StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints(void)

{
  return;
}

// StoreNavPoints @ 146f77560

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
UEnvQueryGenerator_ProjectedPoints::StoreNavPoints
          (UEnvQueryGenerator_ProjectedPoints *this,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,FEnvQueryInstance *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  
  FEnvQueryInstance::ReserveItemData(param_2,(int)param_2->_padding_ + param_1->ArrayNum);
  iVar9 = param_1->ArrayNum;
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < iVar9) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < iVar9) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + uVar8;
      local_38._s_0.X = (double)*(undefined8 *)pFVar1;
      local_38._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      pFVar2 = pFVar2 + uVar8 + 0x10;
      local_38._s_0.Z = (double)*(undefined8 *)pFVar2;
      uStack_20 = *(undefined8 *)(pFVar2 + 8);
      FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point>
                (param_2,(FNavLocation *)&local_38._s_0);
      iVar9 = param_1->ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x20;
    } while ((int)(uVar6 + 1) < iVar9);
  }
  uVar5 = *(uint *)((longlong)&param_2->_padding_ + 4);
  uVar6 = 0;
  if ((int)uVar5 < (param_2->Options).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_2->Options).AllocatorInstance.Data;
  *(uint *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x28) =
       (uint)((this->ProjectionData).TraceMode.Value == '\x01') |
       *(uint *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x28) & 0xfffffffe;
  return;
}

