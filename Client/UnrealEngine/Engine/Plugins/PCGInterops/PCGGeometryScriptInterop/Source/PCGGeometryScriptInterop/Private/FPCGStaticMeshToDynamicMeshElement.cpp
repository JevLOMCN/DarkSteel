// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 4

// CanExecuteOnlyOnMainThread @ 14cee8b90

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
FPCGStaticMeshToDynamicMeshElement::CanExecuteOnlyOnMainThread
          (FPCGStaticMeshToDynamicMeshElement *this,FPCGContext *param_1)

{
  if ((param_1 != (FPCGContext *)0x0) && (param_1->CurrentPhase != PrepareData)) {
    return false;
  }
  return true;
}

// CreateContext @ 14ceea3d0

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
FPCGStaticMeshToDynamicMeshElement::CreateContext(FPCGStaticMeshToDynamicMeshElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x288);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x288);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGStaticMeshToDynamicMeshContext::_vftable__for__FPCGContext__
    ;
    this_00[1]._padding_ =
         (longlong)&FPCGStaticMeshToDynamicMeshContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 14cef1080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshToDynamicMeshElement::ExecuteInternal
          (FPCGStaticMeshToDynamicMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  EMeshLODType EVar2;
  code *pcVar3;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  UPCGStaticMeshToDynamicMeshSettings *pUVar9;
  UStaticMesh *pUVar10;
  UClass *pUVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  TSoftObjectPtr<UMaterialInterface> *pTVar14;
  FString *pFVar15;
  FText *pFVar16;
  UObject *pUVar17;
  UPCGDynamicMeshData *this_00;
  FPCGDataPtrWrapper *this_01;
  TPersistentObjectPtr<FSoftObjectPath> *this_02;
  bool bVar18;
  <lambda_1> local_res10 [8];
  FStaticMeshConversionOptions local_res18;
  TPersistentObjectPtr<FSoftObjectPath> *local_res20;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_398;
  UObject *local_388;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_380;
  TArray<FName,TSizedDefaultAllocator<32>_> local_370;
  FText local_360;
  FTextFormat local_350;
  FText local_340;
  FFormatArgumentValue local_328;
  undefined4 local_308;
  longlong local_300;
  longlong *local_2f8;
  undefined4 local_2f0;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FString local_2b8;
  FText local_2a8;
  FTextFormat local_298;
  FText local_288;
  FTextFormat local_278;
  FDynamicMesh3 local_268;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"FPCGStaticMeshToDynamicMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
                         ,0x6d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar9 = FPCGContext::GetInputSettings<UPCGStaticMeshToDynamicMeshSettings>(param_1);
  if ((pUVar9 == (UPCGStaticMeshToDynamicMeshSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
                         ,0x70,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar10 = (UStaticMesh *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar9->StaticMesh);
  if (pUVar10 == (UStaticMesh *)0x0) {
LAB_14cef168b:
    if (*(longlong *)&(pUVar9->StaticMesh).SoftObjectPtr.field_0x8 == 0) goto LAB_14cef16cd;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2a8,L"PCGStaticMeshToDynamicMeshElementElement",L"StaticMeshNull",
                         L"Static mesh failed to load.");
    PCGLog::LogErrorOnGraph(pFVar12,param_1);
    local_360.TextData.Reference = local_2a8.TextData.Reference;
  }
  else {
    pUVar11 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar11->_padding_)) goto LAB_14cef168b;
    if (pUVar9->bExtractMaterials == false) {
LAB_14cef13b4:
      EVar2 = pUVar9->RequestedLODType;
      iVar8 = pUVar9->RequestedLODIndex;
      local_res18.bApplyBuildSettings = true;
      local_res18.bRequestTangents = true;
      local_res18.bIgnoreRemoveDegenerates = true;
      local_res18.bUseBuildScale = true;
      local_res18.bUseSectionMaterialIndices = false;
      local_res18.bIncludeNonManifoldSrcInfo = false;
      FText::FText(&local_360);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
      bVar5 = UE::Conversion::StaticMeshToDynamicMesh
                        (pUVar10,&local_268,&local_360,&local_res18,EVar2,iVar8,true);
      if (bVar5) {
        local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.ArrayNum = 0;
        local_398.ArrayMax = 0;
        if (pUVar9->bExtractMaterials != false) {
          if ((pUVar9->OverrideMaterials).ArrayNum == 0) {
            local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_370.ArrayNum = 0;
            local_370.ArrayMax = 0;
            UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromStaticMesh
                      (pUVar10,&local_398,&local_370,(UGeometryScriptDebug *)0x0);
            if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.AllocatorInstance.Data);
            }
          }
          else {
            iVar8 = (pUVar9->OverrideMaterials).ArrayNum;
            this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)
                      (pUVar9->OverrideMaterials).AllocatorInstance.Data;
            local_res20 = this_02 + iVar8;
            while( true ) {
              pTVar4 = local_res20;
              if ((pUVar9->OverrideMaterials).ArrayNum != iVar8) {
                local_res10[0] = (<lambda_1>)0x0;
                `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if (this_02 == pTVar4) break;
              pUVar17 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
              if (pUVar17 == (UObject *)0x0) {
LAB_14cef14b8:
                local_388 = (UObject *)0x0;
              }
              else {
                pUVar11 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                iVar7 = (int)pUVar11->_padding_;
                if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar7) ||
                   (local_388 = pUVar17,
                   (longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar7 * 8)
                   != &pUVar11->_padding_)) goto LAB_14cef14b8;
              }
              if (((local_398.AllocatorInstance.Data <= (FScriptContainerElement *)&local_388) &&
                  ((FScriptContainerElement *)&local_388 <
                   local_398.AllocatorInstance.Data + (longlong)local_398.ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar7 = local_398.ArrayNum;
              if (local_398.ArrayNum == local_398.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_398.AllocatorInstance,&local_398.ArrayMax);
              }
              local_398.ArrayNum = iVar7 + 1;
              this_02 = this_02 + 1;
              *(UObject **)(local_398.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_388;
            }
          }
        }
        this_00 = FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(param_1);
        UPCGDynamicMeshData::Initialize(this_00,&local_268,&local_398);
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        this_01 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78)
        ;
        this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
        this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
        if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.AllocatorInstance.Data);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
          goto LAB_14cef16c2;
        }
      }
      else {
        PCGLog::LogErrorOnGraph(&local_360,param_1);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
    }
    else {
      iVar8 = (pUVar9->OverrideMaterials).ArrayNum;
      if (iVar8 == 0) goto LAB_14cef13b4;
      iVar7 = (pUVar10->StaticMaterials).ArrayNum;
      if (iVar7 == iVar8) {
        pTVar14 = TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_FPCGStaticMeshToDynamicMeshElement::ExecuteInternal_::__l30::<lambda_1>_>
                            (&pUVar9->OverrideMaterials,local_res10[0]);
        if (pTVar14 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
          pFVar15 = FSoftObjectPath::ToString
                              ((FSoftObjectPath *)&(pTVar14->SoftObjectPtr).field_0x8,&local_2b8);
          pFVar12 = FText::FromString(&local_288,pFVar15);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_2c8,L"PCGStaticMeshToDynamicMeshElementElement",
                               L"UnloadedMaterial",L"Material {0} failed to load.");
          pFVar13 = FTextFormat::FTextFormat(&local_278,pFVar16,Default);
          pFVar12 = FText::Format<FText>(&local_2d8,pFVar13,pFVar12);
          PCGLog::LogErrorOnGraph(pFVar12,(FPCGContext *)0x0);
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
          }
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
          }
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          goto LAB_14cef16cd;
        }
        goto LAB_14cef13b4;
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_2e8,L"PCGStaticMeshToDynamicMeshElementElement",
                           L"MismatchMaterials",
                           L"Mismatch number between Static mesh materials ({0}) and override materials ({1})"
                          );
      pFVar13 = FTextFormat::FTextFormat(&local_298,pFVar12,Default);
      local_328.Type = Int;
      local_328.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_328.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_308 = 0;
      local_2f8 = (longlong *)0x0;
      local_2f0 = 0;
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 2;
      local_328.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar7;
      local_300 = (longlong)iVar8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_380.AllocatorInstance,2,&local_380.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_380.AllocatorInstance.Data,&local_328,2);
      local_350.TextFormatData.Object = (pFVar13->TextFormatData).Object;
      local_350.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_350.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_350.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_350.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_340,&local_350,&local_380);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
      if ((FFormatArgumentValue *)local_380.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
      if (local_2f8 != (longlong *)0x0) {
        (**(code **)(*local_2f8 + 0x10))();
      }
      if (local_328.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_328.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
      PCGLog::LogErrorOnGraph(&local_340,(FPCGContext *)0x0);
      local_360.TextData.Reference = local_2e8.TextData.Reference;
      if (local_340.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
        local_360.TextData.Reference = local_2e8.TextData.Reference;
      }
    }
  }
LAB_14cef16c2:
  if (local_360.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_360.TextData.Reference + 0x10))();
  }
LAB_14cef16cd:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// PrepareDataInternal @ 14cef7790

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
FPCGStaticMeshToDynamicMeshElement::PrepareDataInternal
          (FPCGStaticMeshToDynamicMeshElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGStaticMeshToDynamicMeshSettings *pUVar6;
  bool bVar7;
  <lambda_1> local_res10;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId81,"FPCGStaticMeshToDynamicMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
               ,0x51);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar6 = FPCGContext::GetInputSettings<UPCGStaticMeshToDynamicMeshSettings>(param_1);
  if ((pUVar6 == (UPCGStaticMeshToDynamicMeshSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGStaticMeshToDynamicMeshElement.cpp"
                         ,0x57,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data != '\0') ||
     (puVar1 = &(pUVar6->StaticMesh).SoftObjectPtr.field_0x8, *(longlong *)puVar1 == 0)) {
    bVar3 = true;
    goto LAB_14cef798e;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar5 = 0;
  if (pUVar6->bExtractMaterials == false) {
LAB_14cef78ab:
    if (puVar1 < local_28.AllocatorInstance.Data + (longlong)local_28.ArrayMax * 0x20) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_28.ArrayNum;
    }
  }
  else {
    Algo::
    Transform<TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,_FPCGStaticMeshToDynamicMeshElement::PrepareDataInternal_::__l22::<lambda_1>_>
              (&pUVar6->OverrideMaterials,&local_28,local_res10);
    iVar5 = local_28.ArrayNum;
    if (local_28.AllocatorInstance.Data <= puVar1) goto LAB_14cef78ab;
  }
  if (iVar5 == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  local_28.ArrayNum = iVar5 + 1;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x20),
             (FSoftObjectPath *)puVar1);
  bVar3 = IPCGAsyncLoadingContext::RequestResourceLoad
                    ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_28,
                     pUVar6->bSynchronousLoad == false);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FSoftObjectPath *)local_28.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
LAB_14cef798e:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

