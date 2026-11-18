// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 5

// operator() @ 14cee5150

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
`FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,TSoftObjectPtr<UStaticMesh> *param_1)

{
  undefined1 *this_00;
  EMeshLODType EVar1;
  TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  TKeyInitializer<FSoftObjectPath_const_&> local_res8;
  FStaticMeshConversionOptions local_res10;
  FSoftObjectPath *local_res18;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  
  local_res10.bApplyBuildSettings = true;
  local_res10.bRequestTangents = true;
  local_res10.bIgnoreRemoveDegenerates = true;
  local_res10.bUseBuildScale = true;
  local_res10.bUseSectionMaterialIndices = false;
  local_res10.bIncludeNonManifoldSrcInfo = false;
  FText::FText(&local_48);
  this_00 = &(param_1->SoftObjectPtr).field_0x8;
  this_01 = *(TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
              **)((longlong)this + 8);
  EVar1 = *(EMeshLODType *)(*(longlong *)this + 0x139);
  local_res18 = (FSoftObjectPath *)this_00;
  TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FSoftObjectPath_const_&>_>(this_01,&local_res8,(bool *)&local_res18);
  lVar7 = (longlong)(int)local_res8.Key * 600 + *(longlong *)&this_01->Elements;
  pUVar5 = (UStaticMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar5 == (UStaticMesh *)0x0) {
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar5 = (UStaticMesh *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
      goto LAB_14cee51e8;
    }
LAB_14cee5210:
    pUVar5 = (UStaticMesh *)0x0;
  }
  else {
LAB_14cee51e8:
    if (pUVar5 == (UStaticMesh *)0x0) goto LAB_14cee5210;
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar6->_padding_)) goto LAB_14cee5210;
  }
  bVar3 = UE::Conversion::StaticMeshToDynamicMesh
                    (pUVar5,(FDynamicMesh3 *)(lVar7 + 0x20),&local_48,&local_res10,EVar1,
                     *(int *)(*(longlong *)this + 0x13c),true);
  if (!bVar3) {
    PCGLog::LogErrorOnGraph(&local_48,*(FPCGContext **)((longlong)this + 0x10));
    bVar3 = false;
    goto LAB_14cee52f0;
  }
  if (*(char *)(*(longlong *)this + 0x138) != '\0') {
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromStaticMesh
              (pUVar5,&local_68,&local_58,(UGeometryScriptDebug *)0x0);
    if (local_68.ArrayNum != 0) {
      lVar2 = **(longlong **)((longlong)this + 0x18);
      if (local_68.ArrayNum == *(int *)(lVar2 + 0xa8)) {
        iVar4 = memcmp(local_68.AllocatorInstance.Data,*(void **)(lVar2 + 0xa0),
                       (longlong)local_68.ArrayNum << 3);
        if (iVar4 == 0) goto LAB_14cee52d2;
      }
      PCGGeometryHelpers::RemapMaterials
                ((FDynamicMesh3 *)(lVar7 + 0x20),&local_68,
                 (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                 (lVar2 + 0xa0),(FMeshIndexMappings *)0x0);
    }
LAB_14cee52d2:
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  bVar3 = true;
LAB_14cee52f0:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// CanExecuteOnlyOnMainThread @ 14cee8b40

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
FPCGAppendMeshesFromPointsElement::CanExecuteOnlyOnMainThread
          (FPCGAppendMeshesFromPointsElement *this,FPCGContext *param_1)

{
  if ((param_1 != (FPCGContext *)0x0) && (param_1->CurrentPhase != PrepareData)) {
    return false;
  }
  return true;
}

// CreateContext @ 14ceea1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGAppendMeshesFromPointsElement::CreateContext(FPCGAppendMeshesFromPointsElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2e0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2e0);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGAppendMeshesFromPointsContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    *(undefined1 *)&this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    this_00[1]._padding_ =
         (longlong)&FPCGAppendMeshesFromPointsContext::_vftable__for__IPCGAsyncLoadingContext__;
    *(undefined4 *)&this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    *(undefined4 *)((longlong)&this_00[1].OutputData.InactiveOutputPinBitmask + 4) = 0x80;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex = -1;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined4 *)&this_00[1].bInputDataModified = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 14ceeb0d0

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
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGAppendMeshesFromPointsElement::ExecuteInternal
          (FPCGAppendMeshesFromPointsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FPCGDataCollection *pFVar2;
  FName FVar3;
  EPCGAppendMeshesFromPointsMode EVar4;
  UDynamicMesh *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  UPCGDynamicMeshData *pUVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FDynamicMesh3 *pFVar15;
  UClass *pUVar16;
  FPCGTaggedData *this_00;
  FObjectPtr_u_0 FVar17;
  ulonglong uVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  FText *pFVar20;
  int iVar21;
  ForAnyElementType FVar22;
  FObjectPtr_u_0 FVar23;
  FObjectPtr_u_0 FVar24;
  longlong lVar25;
  FObjectPtr_u_0 FVar26;
  FDynamicMesh3 *pFVar27;
  uint uVar28;
  FObjectPtr_u_0 FVar29;
  FObjectPtr_u_0 FVar30;
  FObjectPtr_u_0 FVar31;
  ulonglong uVar32;
  bool *pbVar33;
  FObjectPtr_u_0 FVar34;
  ForElementType<unsigned_int> FVar35;
  FName FVar36;
  uint uVar37;
  undefined8 uVar38;
  FSoftObjectPath *pFVar39;
  bool bVar40;
  undefined1 auStackY_718 [32];
  undefined1 local_6d7;
  undefined1 local_6d6;
  undefined1 local_6d5 [5];
  undefined8 local_6d0;
  FObjectPtr_u_0 local_6c8;
  FDynamicMesh3 *local_6c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_6b8;
  FObjectPtr_u_0 local_6a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_6a0;
  FObjectPtr_u_0 local_690;
  FObjectPtr_u_0 local_688;
  FObjectPtr_u_0 local_680;
  UPCGDynamicMeshData *local_678;
  uint local_670;
  uint uStack_66c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_668;
  undefined4 local_660;
  uint uStack_65c;
  uint uStack_658;
  undefined4 uStack_654;
  UPCGDynamicMeshData *local_650;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_648;
  undefined8 uStack_628;
  uint local_620;
  uint uStack_61c;
  bool *pbStack_618;
  undefined4 local_610;
  int iStack_60c;
  uint uStack_608;
  undefined4 uStack_604;
  FDynamicMeshEditor local_600;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5f8;
  undefined4 local_5e8;
  int local_5e4;
  int local_5e0;
  int local_5dc;
  longlong *local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5d0;
  FPCGDataCollection *local_5b0;
  uint uStack_5a8;
  uint uStack_5a4;
  bool *local_5a0;
  undefined4 uStack_598;
  uint uStack_594;
  uint local_590;
  undefined4 uStack_58c;
  int iStack_588;
  undefined4 uStack_584;
  int local_580;
  FPCGDataCollection *local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_570;
  undefined8 uStack_550;
  FDynamicMesh3 *local_548;
  undefined1 *local_540;
  FPCGContext *local_538;
  UPCGDynamicMeshData **local_530;
  FText local_528;
  undefined1 local_518 [24];
  void *local_500;
  code *local_4e8 [2];
  undefined **local_4d8;
  longlong local_4d0;
  undefined8 local_4c0;
  code *local_4b8 [2];
  undefined **local_4a8;
  longlong local_4a0;
  undefined8 local_490;
  code *local_488 [2];
  undefined **local_478;
  longlong local_470;
  undefined8 local_460;
  code *local_458 [2];
  undefined **local_448;
  longlong local_440;
  undefined8 local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_428;
  FSoftObjectPath local_408;
  undefined4 local_3cc;
  undefined1 local_3c8 [32];
  ForElementType<unsigned_int> local_3a8;
  uint local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  FScriptContainerElement local_390 [8];
  ForAnyElementType local_388;
  uint local_380;
  longlong local_378;
  int local_370;
  int local_36c;
  int local_368;
  FMeshIndexMappings local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_718;
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId190,"FPCGAppendMeshesFromPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
               ,0xbe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId190);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
                          ,0xc1,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  pFVar15 = (FDynamicMesh3 *)
            FPCGContext::GetInputSettings<UPCGAppendMeshesFromPointsSettings>(param_1);
  local_6c0 = pFVar15;
  if ((pFVar15 == (FDynamicMesh3 *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
                          ,0xc4,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_5f8,&PCGAppendMeshesFromPoints::InPointsPinLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_6b8,&PCGAppendMeshesFromPoints::InDynMeshPinLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_6a0,&PCGAppendMeshesFromPoints::InAppendMeshPinLabel);
  FVar26.Handle = (UObject *)0x0;
  if (local_5f8.ArrayNum == 0) {
LAB_14ceeb275:
    FVar17.Handle = FVar26.Handle;
  }
  else {
    if ((local_5f8.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_690 = *(FObjectPtr_u_0 *)local_5f8.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDynamicMeshData *)local_690.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb275;
      UE::GC::MarkAsReachable(local_690.Handle);
    }
    if ((UPCGDynamicMeshData *)local_690.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb275;
    pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_690,pUVar16);
    FVar17 = local_690;
    if (!bVar10) goto LAB_14ceeb275;
  }
  local_6c8 = FVar17;
  if (local_6b8.ArrayNum == 0) {
LAB_14ceeb2fe:
    FVar23.Handle = FVar26.Handle;
  }
  else {
    if ((local_6b8.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_688 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_6b8.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDynamicMeshData *)local_688.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb2fe;
      UE::GC::MarkAsReachable(local_688.Handle);
    }
    if ((UPCGDynamicMeshData *)local_688.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb2fe;
    pUVar16 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_688,pUVar16);
    FVar23 = local_688;
    if (!bVar10) goto LAB_14ceeb2fe;
  }
  if (local_6a0.ArrayNum == 0) {
LAB_14ceeb387:
    FVar29.Handle = FVar26.Handle;
  }
  else {
    if ((local_6a0.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_680 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_6a0.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDynamicMeshData *)local_680.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb387;
      UE::GC::MarkAsReachable(local_680.Handle);
    }
    if ((UPCGDynamicMeshData *)local_680.Handle == (UPCGDynamicMeshData *)0x0) goto LAB_14ceeb387;
    pUVar16 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_680,pUVar16);
    FVar29 = local_680;
    if (!bVar10) goto LAB_14ceeb387;
  }
  FVar34._0_4_ = 0;
  local_6a8 = FVar29;
  if ((((UPCGDynamicMeshData *)FVar17.Handle == (UPCGDynamicMeshData *)0x0) ||
      ((UPCGDynamicMeshData *)FVar23.Handle == (UPCGDynamicMeshData *)0x0)) ||
     ((char)param_1[1].InputData.InactiveOutputPinBitmask == '\0')) {
    pFVar2 = &param_1->OutputData;
    if (pFVar2 != (FPCGDataCollection *)&local_6b8) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar2->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar21 = local_6b8.ArrayNum;
      FVar22.Data = local_6b8.AllocatorInstance.Data;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar12 = *piVar1;
      (param_1->OutputData).TaggedData.ArrayNum = local_6b8.ArrayNum;
      if ((local_6b8.ArrayNum == 0) && (iVar12 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_6b8.ArrayNum,iVar12,(ForAnyElementType *)pFVar2,local_6b8.ArrayNum,
                   piVar1);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar2->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar22.Data,iVar21)
        ;
      }
    }
    goto LAB_14ceec0fa;
  }
  if ((local_6b8.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  FVar22.Data = local_6b8.AllocatorInstance.Data;
  iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                       (longlong)iVar12 * 0x78),(FPCGTaggedData *)FVar22.Data);
  iVar12 = (**(code **)(*(longlong *)local_6c8.Handle + 0x488))(local_6c8.Handle);
  if (iVar12 == 0) goto LAB_14ceec0fa;
  if ((local_6b8.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  local_678 = IPCGDynamicMeshBaseElement::CopyOrSteal
                        ((FPCGTaggedData *)local_6b8.AllocatorInstance.Data,param_1);
  if (local_678 == (UPCGDynamicMeshData *)0x0) goto LAB_14ceec0fa;
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)local_678);
  pUVar8 = local_678;
  pFVar27 = local_6c0;
  local_540 = local_3c8;
  local_3c8._0_8_ = (FScriptContainerElement *)0x0;
  local_3c8._8_8_ = 0;
  local_3a8 = (ForElementType<unsigned_int>)0x0;
  local_3a0 = 0;
  local_39c = 0x80;
  local_398 = -1;
  local_394 = 0;
  local_388.Data = (FScriptContainerElement *)0x0;
  local_380 = 0;
  EVar4 = *(EPCGAppendMeshesFromPointsMode *)&(pFVar15->VertexEdgeLists).ListHeads.Blocks.ArrayNum;
  local_530 = &local_678;
  local_6d0 = 1;
  local_548 = pFVar15;
  local_538 = param_1;
  if (EVar4 == SingleStaticMesh) {
    bVar10 = `FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                       (&local_548,
                        (TSoftObjectPtr<UStaticMesh> *)&(local_6c0->VertexEdgeLists).ListBlocks);
    uVar38 = 1;
    if (!bVar10) goto LAB_14ceec06a;
LAB_14ceeba99:
    uVar13 = (uint)uVar38;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2f8);
    local_678->bDynamicMeshBoundsAreDirty = true;
    local_678->bDynamicMeshOctreeIsDirty = true;
    local_600.Mesh = (((local_678->DynamicMesh).field0_0x0.DebugPtr)->Mesh).Ptr;
    (**(code **)(*(longlong *)local_6c8.Handle + 0x500))(local_6c8.Handle,&local_378);
    EVar4 = *(EPCGAppendMeshesFromPointsMode *)&(pFVar27->VertexEdgeLists).ListHeads.Blocks.ArrayNum
    ;
    if (EVar4 == StaticMeshFromAttribute) {
      local_6c8.Handle = (UObject *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      uVar28 = (uint)param_1[1].OutputData.InactiveOutputPinBitmask;
      local_6a8.Handle = (UObject *)&param_1[1].OutputData;
      uStack_594 = FVar34._0_4_;
      FVar31._0_4_ = 0;
      if (uVar28 != 0) {
        pbVar33 = *(bool **)&param_1[1].OutputData.DataCrcs.ArrayNum;
        if (pbVar33 == (bool *)0x0) {
          pbVar33 = &param_1[1].OutputData.bCancelExecutionOnEmpty;
        }
        uVar14 = *(uint *)pbVar33;
        FVar17.Handle = FVar26.Handle;
        FVar23.Handle = FVar26.Handle;
        FVar34._0_4_ = 0;
        FVar31._0_4_ = 0;
        while (uVar14 == 0) {
          FVar34._0_4_ = FVar23._0_4_ + 0x20;
          FVar34._4_4_ = 0;
          FVar31._0_4_ = FVar17._0_4_ + 1;
          FVar31._4_4_ = 0;
          uStack_594 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)FVar31._0_4_)
          goto LAB_14ceebb86;
          uVar14 = *(uint *)(pbVar33 + (longlong)FVar17._0_4_ * 4 + 4);
          FVar17 = FVar31;
          FVar23 = FVar34;
        }
        uVar13 = -uVar14 & uVar14;
        uVar32 = (ulonglong)uVar13 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_5dc = (int)lVar25;
        uStack_594 = (FVar34._0_4_ - 1) + local_5dc;
        if ((int)uVar28 < (int)uStack_594) {
          uStack_594 = uVar28;
        }
      }
LAB_14ceebb86:
      TStack_648.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
      uStack_58c = local_3cc;
      iStack_588 = param_1[1].OutputData.TaggedData.ArrayNum -
                   param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber;
      uVar14 = (uint)param_1[1].OutputData.InactiveOutputPinBitmask;
      uStack_598 = 0xffffffff;
      TStack_648._padding_ = CONCAT44(uVar13,FVar31._0_4_);
      uVar37 = uVar14 & 0xffffffe0;
      TStack_648.CurrentBitIndex = uStack_594;
      TStack_648.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_648._28_4_ = local_3cc;
      TStack_648.BaseBitIndex = FVar34._0_4_;
      uStack_628 = CONCAT44(uStack_584,iStack_588);
      local_6d0 = CONCAT44(local_6d0._4_4_,uVar14);
      local_650 = (UPCGDynamicMeshData *)local_6a8;
      local_5b0 = (FPCGDataCollection *)local_6a8;
      uStack_5a8 = FVar31._0_4_;
      uStack_5a4 = uVar13;
      local_5a0 = (bool *)TStack_648.Array;
      local_590 = FVar34._0_4_;
      if ((((int)uVar14 < 0) || ((int)uVar28 < (int)uVar14)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar34._0_4_ = (uint)*(longlong *)&(local_6c8.Handle)->field_0x18;
      if (uVar14 != FVar34._0_4_) {
        local_6d0 = CONCAT44(local_6d0._4_4_,FVar34._0_4_);
        FVar17.Handle = *(FObjectPtr_u_0 *)&(local_6c8.Handle)->field_0x10;
        if ((UPCGDynamicMeshData *)*(FObjectPtr_u_0 *)&(local_6c8.Handle)->field_0x10 ==
            (UPCGDynamicMeshData *)0x0) {
          FVar17 = local_6c8;
        }
        uVar13 = -1 << ((byte)uVar14 & 0x1f) &
                 *(uint *)((longlong)&(FVar17.Handle)->field_0x0 + (longlong)iVar12 * 4);
        while (uVar13 == 0) {
          lVar25 = (longlong)iVar12;
          uVar37 = uVar37 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = FVar34._0_4_;
          if ((int)((FVar34._0_4_ - 1) + ((int)(FVar34._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14ceebcc0;
          uVar13 = *(uint *)(&(FVar17.Handle)->field_0x4 + lVar25 * 4);
        }
        uVar32 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_5e0 = (int)lVar25;
        uVar14 = local_5e0 + -1 + uVar37;
        if ((int)FVar34._0_4_ < (int)uVar14) {
          uVar14 = FVar34._0_4_;
        }
        local_6d0 = CONCAT44(local_6d0._4_4_,uVar14);
      }
LAB_14ceebcc0:
      while( true ) {
        pUVar8 = local_650;
        if ((int)local_650->_padding_ - *(int *)((longlong)&local_650->_padding_ + 4) !=
            (int)uStack_628) {
          local_6d6 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6d6);
        }
        if (((TStack_648.CurrentBitIndex == uVar14) &&
            ((UObject *)TStack_648.Array == local_6c8.Handle)) &&
           (pUVar8 == (UPCGDynamicMeshData *)local_6a8.Handle)) break;
        pFVar39 = (FSoftObjectPath *)
                  ((longlong)TStack_648.CurrentBitIndex * 0x38 + pUVar8->_padding_);
        FVar34._0_4_ = ::GetTypeHash(pFVar39);
        iVar12 = TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FSoftObjectPath>
                           ((TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
                             *)local_3c8,FVar34._0_4_,pFVar39);
        FVar17.Handle = FVar26.Handle;
        if (((iVar12 == -1) ||
            (FVar17.Handle = (UObject *)(local_3c8._0_8_ + (longlong)iVar12 * 600),
            (UPCGDynamicMeshData *)FVar17.Handle == (UPCGDynamicMeshData *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        local_6c0 = (FDynamicMesh3 *)&(FVar17.Handle)->field_0x20;
        if ((local_6c0 == (FDynamicMesh3 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("MeshToAppend",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
                                ,0x160,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar15 = local_6c0;
        FVar36 = pFVar39[1].AssetPath.PackageName;
        FVar34._0_4_ = pFVar39[1].AssetPath.AssetName.ComparisonIndex.Value;
        FVar3 = (FName)((longlong)FVar36 + (longlong)(int)FVar34._0_4_ * 4);
        while( true ) {
          if (pFVar39[1].AssetPath.AssetName.ComparisonIndex.Value != FVar34._0_4_) {
            local_6d5[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_6d5);
          }
          if (FVar36 == FVar3) break;
          uVar13 = *(uint *)FVar36;
          uVar28 = 0;
          if ((int)uVar13 < local_368) {
            uVar28 = ~uVar13 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          local_4c0 = 0;
          local_490 = 0;
          local_4d0 = (longlong)((int)uVar13 % local_36c) * (longlong)local_370 + local_378;
          local_4d8 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                       ::_vftable_;
          local_4e8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                         ::Call;
          local_4a8 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
          local_4b8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                         ::Call;
          local_4a0 = local_4d0;
          UE::Geometry::FDynamicMeshEditor::AppendMesh
                    (&local_600,pFVar15,&local_2f8,
                     (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                      *)local_4b8,
                     (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                      *)local_4e8,false);
          FVar36 = (FName)((longlong)FVar36 + 4);
        }
        TStack_648.UnvisitedBitMask = TStack_648.UnvisitedBitMask & ~TStack_648._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_648);
        uVar14 = (uint)local_6d0;
      }
    }
    else {
      if (EVar4 == SingleStaticMesh) {
        FVar34._0_4_ = ::GetTypeHash((FSoftObjectPath *)
                                     &(((TSoftObjectPtr<UStaticMesh> *)
                                       &(pFVar27->VertexEdgeLists).ListBlocks)->SoftObjectPtr).
                                      field_0x8);
        iVar12 = TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FSoftObjectPath>
                           ((TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
                             *)local_3c8,FVar34._0_4_,
                            (FSoftObjectPath *)
                            &(((TSoftObjectPtr<UStaticMesh> *)&(pFVar27->VertexEdgeLists).ListBlocks
                              )->SoftObjectPtr).field_0x8);
        FVar17.Handle = FVar26.Handle;
        if (((iVar12 == -1) ||
            (FVar17.Handle = (UObject *)(local_3c8._0_8_ + (longlong)iVar12 * 600),
            (UPCGDynamicMeshData *)FVar17.Handle == (UPCGDynamicMeshData *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar15 = (FDynamicMesh3 *)&(FVar17.Handle)->field_0x20;
LAB_14ceebf61:
        if (pFVar15 != (FDynamicMesh3 *)0x0) {
          while (iVar12 = FVar26._0_4_, iVar12 != local_368) {
            local_478 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                         ::_vftable_;
            local_488[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                           ::Call;
            local_470 = (longlong)(iVar12 % local_36c) * (longlong)local_370 + local_378;
            local_460 = 0;
            local_430 = 0;
            local_448 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                         ::_vftable_;
            local_458[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                           ::Call;
            local_440 = local_470;
            UE::Geometry::FDynamicMeshEditor::AppendMesh
                      (&local_600,pFVar15,&local_2f8,
                       (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                        *)local_458,
                       (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                        *)local_488,false);
            FVar26._0_4_ = iVar12 + 1;
            FVar26._4_4_ = 0;
          }
          goto LAB_14ceec05e;
        }
      }
      else if (*(longlong *)&FVar29.Handle[3].field_0x20 != 0) {
        pFVar15 = *(FDynamicMesh3 **)(*(longlong *)&FVar29.Handle[3].field_0x20 + 0xb8);
        goto LAB_14ceebf61;
      }
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_528,L"PCGAppendMeshesFromPointsElement",L"InvalidDynMeshToAppend",
                           L"Invalid Dynamic mesh to append");
      PCGLog::LogErrorOnGraph(pFVar20,param_1);
      if (local_528.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
      }
    }
LAB_14ceec05e:
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2f8);
  }
  else if (EVar4 == StaticMeshFromAttribute) {
    uVar13 = param_1[1].OutputData.TaggedData.ArrayNum -
             param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber;
    if (uVar13 != 0) {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
      }
      TSparseArrayBase<600,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<600,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_3c8,uVar13);
      if (uVar13 < 4) {
        uVar13 = 1;
      }
      else {
        uVar32 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_5e8 = (undefined4)lVar25;
        uVar13 = 1 << ((byte)lVar25 & 0x1f);
      }
      if ((local_380 == 0) || ((int)local_380 < (int)uVar13)) {
        local_380 = uVar13;
        if (local_388.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_388,0,0,4);
        }
        if (uVar13 != 0) {
          uVar28 = uVar13;
          if (uVar13 < 2) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar28 = 0;
              goto LAB_14ceeb6ae;
            }
          }
          else {
LAB_14ceeb6ae:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar28,4);
          }
          if (0 < (int)uVar13) {
            uVar32 = (ulonglong)uVar13;
            FVar17.Handle = FVar26.Handle;
            do {
              FVar22.Data = local_390;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                FVar22.Data = local_388.Data;
              }
              uVar18 = (longlong)(int)uVar13 - 1U & (ulonglong)FVar17.Handle;
              FVar17.Handle = (UObject *)&(FVar17.Handle)->field_0x1;
              *(undefined4 *)(FVar22.Data + uVar18 * 4) = 0xffffffff;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
        }
        if (local_380 != 0) {
          pTStack_668 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10);
          uStack_66c = 1;
          local_670 = 0;
          uStack_65c = 0;
          uStack_658 = 0;
          FVar17.Handle = FVar26.Handle;
          if (local_3a0 != 0) {
            FVar35 = (ForElementType<unsigned_int>)((longlong)local_3c8 + 0x10);
            if (local_3a8 != (ForElementType<unsigned_int>)0x0) {
              FVar35 = local_3a8;
            }
            uVar13 = *(uint *)FVar35;
            FVar23.Handle = FVar26.Handle;
            FVar29.Handle = FVar26.Handle;
            while (uVar13 == 0) {
              FVar29._0_4_ = FVar29._0_4_ + 0x20;
              FVar29._4_4_ = 0;
              iVar12 = FVar23._0_4_;
              FVar23._0_4_ = iVar12 + 1;
              FVar23._4_4_ = 0;
              local_670 = FVar23._0_4_;
              uStack_658 = FVar29._0_4_;
              if ((int)((local_3a0 - 1) + ((int)(local_3a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)FVar23._0_4_) goto LAB_14ceeb7bc;
              uVar13 = ((uint *)((longlong)FVar35 + 4))[iVar12];
            }
            uStack_66c = -uVar13 & uVar13;
            uVar32 = (ulonglong)uStack_66c * 2 + 1;
            lVar25 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_5e4 = (int)lVar25;
            FVar17._0_4_ = local_5e4 + -1 + uStack_658;
            FVar17._4_4_ = 0;
            uStack_65c = FVar17._0_4_;
            if ((int)local_3a0 < (int)FVar17._0_4_) {
LAB_14ceeb7bc:
              FVar17._4_4_ = 0;
              FVar17._0_4_ = local_3a0;
              uStack_65c = local_3a0;
            }
          }
          local_660 = 0xffffffff;
          local_5d8 = (longlong *)local_3c8;
          local_5d0._padding_ = CONCAT44(uStack_66c,local_670);
          local_5d0.CurrentBitIndex = uStack_65c;
          local_5d0.UnvisitedBitMask = 0xffffffff;
          local_5d0._28_4_ = uStack_654;
          local_5d0.BaseBitIndex = uStack_658;
          local_5d0.Array = pTStack_668;
          if (FVar17._0_4_ < (int)local_3a0) {
            do {
              pFVar39 = (FSoftObjectPath *)((longlong)FVar17._0_4_ * 600 + *local_5d8);
              uVar13 = ::GetTypeHash(pFVar39);
              uVar13 = local_380 - 1 & uVar13;
              *(uint *)((longlong)&pFVar39[0x12].SubPathString.Data.AllocatorInstance.Data + 4) =
                   uVar13;
              FVar22.Data = local_390;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                FVar22.Data = local_388.Data;
              }
              uVar32 = (longlong)(int)local_380 - 1U & (longlong)(int)uVar13;
              *(undefined4 *)&pFVar39[0x12].SubPathString.Data.AllocatorInstance.Data =
                   *(undefined4 *)(FVar22.Data + uVar32 * 4);
              *(int *)(FVar22.Data + uVar32 * 4) = FVar17._0_4_;
              local_5d0.UnvisitedBitMask = local_5d0.UnvisitedBitMask & ~local_5d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5d0);
              FVar17._4_4_ = 0;
              FVar17._0_4_ = local_5d0.CurrentBitIndex;
            } while (local_5d0.CurrentBitIndex < (local_5d0.Array)->NumBits);
          }
        }
      }
    }
    TStack_648.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
    iVar12 = (int)param_1[1].OutputData.InactiveOutputPinBitmask;
    local_650 = (UPCGDynamicMeshData *)&param_1[1].OutputData;
    uStack_61c = (uint)local_6d0;
    local_620 = 0;
    iStack_60c = 0;
    uStack_608 = 0;
    if (iVar12 != 0) {
      pbVar33 = *(bool **)&param_1[1].OutputData.DataCrcs.ArrayNum;
      if (pbVar33 == (bool *)0x0) {
        pbVar33 = (bool *)TStack_648.Array;
      }
      uVar13 = *(uint *)pbVar33;
      FVar24.Handle = FVar26.Handle;
      FVar30.Handle = FVar26.Handle;
      while (uVar13 == 0) {
        FVar30._0_4_ = FVar30._0_4_ + 0x20;
        FVar30._4_4_ = 0;
        iVar21 = FVar24._0_4_;
        FVar24._0_4_ = iVar21 + 1;
        FVar24._4_4_ = 0;
        local_620 = FVar24._0_4_;
        uStack_608 = FVar30._0_4_;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)FVar24._0_4_)
        goto LAB_14ceeb91b;
        uVar13 = *(uint *)(pbVar33 + (longlong)iVar21 * 4 + 4);
      }
      uStack_61c = -uVar13 & uVar13;
      uVar32 = (ulonglong)uStack_61c * 2 + 1;
      lVar25 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_580 = (int)lVar25;
      iStack_60c = local_580 + -1 + uStack_608;
      if (iVar12 < iStack_60c) {
LAB_14ceeb91b:
        iStack_60c = iVar12;
      }
    }
    local_610 = 0xffffffff;
    TStack_648._padding_ = CONCAT44(uStack_61c,local_620);
    TStack_648.CurrentBitIndex = iStack_60c;
    TStack_648.UnvisitedBitMask = 0xffffffff;
    TStack_648._28_4_ = uStack_604;
    TStack_648.BaseBitIndex = uStack_608;
    uStack_628 = CONCAT44(uStack_628._4_4_,
                          param_1[1].OutputData.TaggedData.ArrayNum -
                          param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber);
    uStack_550 = uStack_628;
    pbStack_618 = (bool *)TStack_648.Array;
    local_578 = (FPCGDataCollection *)local_650;
    TStack_570._padding_ = TStack_648._padding_;
    TStack_570.Array = TStack_648.Array;
    TStack_570._16_8_ = TStack_648._16_8_;
    TStack_570._24_8_ = TStack_648._24_8_;
    pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_428,TStack_648.Array,
                         (int)param_1[1].OutputData.InactiveOutputPinBitmask);
    TStack_648._padding_ = pTVar19->_padding_;
    pUVar8 = (UPCGDynamicMeshData *)pTVar19->Array;
    uVar9._0_4_ = pTVar19->UnvisitedBitMask;
    uVar9._4_4_ = pTVar19->CurrentBitIndex;
    TStack_648.BaseBitIndex = pTVar19->BaseBitIndex;
    TStack_648._28_4_ = *(undefined4 *)&pTVar19->field_0x1c;
    TStack_648.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar8;
    TStack_648._16_8_ = uVar9;
    while( true ) {
      pFVar2 = local_578;
      if ((local_578->TaggedData).ArrayNum -
          (((TWeakInterfacePtr<IPCGGraphExecutionSource> *)(local_578 + 1))->ObjectInstance).WeakPtr
          .ObjectSerialNumber != (int)uStack_550) {
        local_6d7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6d7);
      }
      if (((TStack_570.CurrentBitIndex == uVar9._4_4_) &&
          ((UPCGDynamicMeshData *)TStack_570.Array == pUVar8)) &&
         (pFVar27 = local_6c0, FVar29 = local_6a8, uVar38 = local_6d0,
         pFVar2 == &param_1[1].OutputData)) goto LAB_14ceeba99;
      pFVar39 = FSoftObjectPath::FSoftObjectPath
                          (&local_408,
                           (FSoftObjectPath *)
                           ((pFVar2->TaggedData).AllocatorInstance.Data +
                           (longlong)TStack_570.CurrentBitIndex * 0x38));
      local_518._0_8_ = 0;
      FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_518 + 8),pFVar39);
      pFVar6 = (pFVar39->SubPathString).Data.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      bVar10 = `FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                         (&local_548,(TSoftObjectPtr<UStaticMesh> *)local_518);
      if (local_500 != (void *)0x0) {
        FMemory::Free(local_500);
      }
      if (!bVar10) break;
      TStack_570.UnvisitedBitMask = TStack_570.UnvisitedBitMask & ~TStack_570._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_570);
    }
  }
  else if (EVar4 == DynamicMesh) {
    if ((UPCGDynamicMeshData *)FVar29.Handle != (UPCGDynamicMeshData *)0x0) {
      uVar38 = local_6d0;
      if ((*(int *)&FVar29.Handle[4].field_0x8 != 0) &&
         (bVar10 = TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator==
                             (&local_678->Materials,
                              (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                              (FVar29.Handle + 4)), pFVar27 = local_6c0, uVar38 = local_6d0, !bVar10
         )) {
        if ((local_6a0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        FVar17.Handle =
             (UObject *)
             IPCGDynamicMeshBaseElement::CopyOrSteal
                       ((FPCGTaggedData *)local_6a0.AllocatorInstance.Data,param_1);
        pUVar5 = (((TObjectPtr<UDynamicMesh> *)&FVar17.Handle[3].field_0x20)->field0_0x0).DebugPtr;
        *(bool *)(FVar17.Handle + 0x14) = true;
        FVar17.Handle[0x11].field_0x10 = 1;
        PCGGeometryHelpers::RemapMaterials
                  ((pUVar5->Mesh).Ptr,
                   (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(FVar29.Handle + 4),
                   &pUVar8->Materials,(FMeshIndexMappings *)0x0);
        pFVar27 = local_6c0;
        FVar29.Handle = FVar17.Handle;
        uVar38 = local_6d0;
      }
      goto LAB_14ceeba99;
    }
    PCGLog::InputOutput::LogTypedDataNotFoundWarning
              (DynamicMesh,PCGAppendMeshesFromPoints::InAppendMeshPinLabel,param_1);
  }
LAB_14ceec06a:
  local_380 = 0;
  if (local_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_3c8);
LAB_14ceec0fa:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_6a0.AllocatorInstance.Data,local_6a0.ArrayNum);
  if ((FPCGTaggedData *)local_6a0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_6b8.AllocatorInstance.Data,local_6b8.ArrayNum);
  if ((FPCGTaggedData *)local_6b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_6b8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum);
  if ((FPCGTaggedData *)local_5f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_5f8.AllocatorInstance.Data);
  }
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// PrepareDataInternal @ 14cef4e30

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
FPCGAppendMeshesFromPointsElement::PrepareDataInternal
          (FPCGAppendMeshesFromPointsElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  code *pcVar3;
  IPCGAttributeAccessor *pIVar4;
  bool bVar5;
  undefined1 uVar6;
  UPCGAppendMeshesFromPointsSettings *pUVar7;
  UPCGBasePointData *pUVar8;
  FString *pFVar9;
  int iVar10;
  bool bVar11;
  IPCGAttributeAccessorKeys *local_res10;
  IPCGAttributeAccessor *local_res18;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c8;
  <lambda_1> local_b8;
  FText local_a8;
  FString local_98;
  FPCGAttributePropertySelector local_88;
  FSoftObjectPath local_48;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId115,"FPCGAppendMeshesFromPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
               ,0x73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
                         ,0x76,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar7 = FPCGContext::GetInputSettings<UPCGAppendMeshesFromPointsSettings>(param_1);
  if ((pUVar7 == (UPCGAppendMeshesFromPointsSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGAppendMeshesFromPoints.cpp"
                         ,0x79,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data == '\0') {
    if (pUVar7->Mode == SingleStaticMesh) {
      puVar1 = &(pUVar7->StaticMesh).SoftObjectPtr.field_0x8;
      if (*(longlong *)puVar1 != 0) {
        *(undefined1 *)&param_1[1].InputData.InactiveOutputPinBitmask = 1;
        bVar5 = pUVar7->bSynchronousLoad;
        FSoftObjectPath::FSoftObjectPath(&local_48,(FSoftObjectPath *)puVar1);
        local_e8.ArrayNum = 1;
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
        ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                  (local_e8.AllocatorInstance.Data,&local_48,1);
        bVar5 = IPCGAsyncLoadingContext::RequestResourceLoad
                          ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_e8,bVar5 == false
                          );
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
        if ((FSoftObjectPath *)local_e8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
        if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14cef524c;
      }
    }
    else {
      if (pUVar7->Mode == StaticMeshFromAttribute) {
        FPCGDataCollection::GetInputsByPin
                  (&param_1->InputData,&local_c8,&PCGAppendMeshesFromPoints::InPointsPinLabel);
        if (local_c8.ArrayNum == 0) {
LAB_14cef521c:
          bVar5 = true;
        }
        else {
          if ((local_c8.ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pUVar8 = Cast<UPCGBasePointData_const_>
                             ((FPCGDataPtrWrapper *)local_c8.AllocatorInstance.Data);
          if (pUVar8 == (UPCGBasePointData *)0x0) goto LAB_14cef521c;
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    (&pUVar7->MeshAttribute,(FPCGAttributePropertyInputSelector *)&local_88,
                     (UPCGData *)pUVar8);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)&local_res18,(FPCGAttributePropertySelector *)pUVar8,
                     SUB81(&local_88,0));
          PCGAttributeAccessorHelpers::CreateConstKeys
                    ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)pUVar8);
          pIVar4 = local_res18;
          if ((local_res18 == (IPCGAttributeAccessor *)0x0) ||
             (local_res10 == (IPCGAttributeAccessorKeys *)0x0)) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_88,param_1);
LAB_14cef51cf:
            bVar5 = true;
          }
          else {
            uVar2 = local_res18->UnderlyingType;
            if ((0xe < uVar2) ||
               ((PCG::Private::BroadcastableTypes.Values[uVar2][0xd] == false &&
                (PCG::Private::ConstructibleTypes.Values[0xd][uVar2] == false)))) {
              pFVar9 = FPCGAttributePropertySelector::ToString(&local_88,&local_98,false);
              FText::FromString(&local_a8,pFVar9);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              PCGLog::Metadata::LogFailToGetAttributeError<FSoftObjectPath>
                        (&local_a8,pIVar4,param_1);
              if (local_a8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
              }
              goto LAB_14cef51cf;
            }
            local_b8.Callback.StaticMeshesToLoad = &local_d8;
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = 0;
            local_d8.ArrayMax = 0;
            local_b8.Callback.Context = (FPCGAppendMeshesFromPointsContext *)param_1;
            PCGMetadataElementCommon::
            ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,_FPCGAppendMeshesFromPointsElement::PrepareDataInternal_::__l28::<lambda_1>_>_::__l2::<lambda_1>_>
                      (local_res10,local_res18,&local_b8,AllowBroadcastAndConstructible,0x100,-1);
            if (local_d8.ArrayNum == 0) {
              bVar5 = true;
              iVar10 = 0;
            }
            else {
              *(undefined1 *)&param_1[1].InputData.InactiveOutputPinBitmask = 1;
              bVar5 = IPCGAsyncLoadingContext::RequestResourceLoad
                                ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_d8,
                                 pUVar7->bSynchronousLoad == false);
              iVar10 = local_d8.ArrayNum;
            }
            DestructItems<FSoftObjectPath,int>
                      ((FSoftObjectPath *)local_d8.AllocatorInstance.Data,iVar10);
            if ((FSoftObjectPath *)local_d8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
              FMemory::Free(local_d8.AllocatorInstance.Data);
            }
          }
          if (local_res10 != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)local_res10->_padding_)(local_res10,1);
          }
          if (local_res18 != (IPCGAttributeAccessor *)0x0) {
            (**(code **)local_res18->_padding_)(local_res18,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_88.ExtraNames.AllocatorInstance.Data,
                     local_88.ExtraNames.ArrayNum);
          if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
          }
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
        if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
        goto LAB_14cef524c;
      }
      *(undefined1 *)&param_1[1].InputData.InactiveOutputPinBitmask = 1;
    }
  }
  bVar5 = true;
LAB_14cef524c:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

