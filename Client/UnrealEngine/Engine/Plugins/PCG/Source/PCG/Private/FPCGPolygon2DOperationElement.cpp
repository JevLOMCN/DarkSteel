// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator() @ 149ca72d0

void __thiscall
`FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FPCGTaggedData *param_2,TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> *param_3,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> *param_4)

{
  longlong lVar1;
  TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
  *pTVar2;
  TGeneralPolygon2<double> *pTVar3;
  code *pcVar4;
  TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  UObject *pUVar10;
  UPCGPolygon2DData *this_00;
  UClass *pUVar11;
  FPCGTaggedData *this_01;
  UPCGMetadata *pUVar12;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar13;
  FPCGDataPtrWrapper *this_02;
  FObjectPtr_u_0 FVar14;
  FScriptContainerElement *pFVar15;
  TArrayView<__int64_const_,int> *pTVar16;
  uint uVar17;
  undefined1 auVar18 [12];
  FGCScopeGuard local_res8 [8];
  uint local_res10;
  FObjectPtr_u_0 *local_res18;
  FObjectPtr_u_0 local_138;
  TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
  *local_130;
  TObjectPtr<UObject> local_128;
  UPCGPolygon2DData *local_120;
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  TGeneralPolygon2<double> *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TGeneralPolygon2<double> *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<__int64_const_,int> local_d8;
  FPCGInitializeFromDataParams local_c8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_88;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_78;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_68;
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_58;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_48;
  
  uVar17 = 0;
  local_130 = (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_res10 = 0;
  uVar8 = uVar17;
  local_res18 = (FObjectPtr_u_0 *)param_2;
  if (*(char *)((longlong)this + 0x18) != '\0') {
    if (*(char *)((longlong)this + 0x18) == '\x02') {
      auVar18 = SUB1612(*param_4,0);
    }
    else {
      local_108 = 0;
      uStack_100 = 0;
      auVar18 = ZEXT812(0);
    }
    local_e8 = param_3->DataPtr;
    local_f8 = auVar18._0_8_;
    iStack_e0 = param_3->ArrayNum;
    local_78._12_4_ = uStack_dc;
    local_78.ArrayNum = iStack_e0;
    iStack_f0 = auVar18._8_4_;
    local_88._12_4_ = uStack_ec;
    local_88.ArrayNum = iStack_f0;
    local_88.DataPtr = local_f8;
    local_78.DataPtr = local_e8;
    pTVar9 = PCGPolygon2DProcessingHelpers::BuildVertexMapping
                       (&local_118,param_1,&local_78,&local_88);
    if (&local_58 != pTVar9) {
      DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
                ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                  *)0x0,0);
      local_130 = (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                   *)(pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      uVar8 = pTVar9->ArrayNum;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      local_res10 = uVar8;
    }
    DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
              ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
         *)local_118.AllocatorInstance.Data !=
        (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
         *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    do {
      lVar1 = *(longlong *)this;
      bVar6 = IsInGameThread();
      if (lVar1 == 0) {
        if ((!bVar6) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_149ca741c:
        pUVar10 = GetTransientPackageAsObject();
        this_00 = NewObject<UPCGPolygon2DData>(pUVar10);
      }
      else {
        if (bVar6) goto LAB_149ca741c;
        if ((*(char *)(lVar1 + 0x110) != '\0') &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FGCScopeGuard::FGCScopeGuard(local_res8);
        pUVar10 = GetTransientPackageAsObject();
        this_00 = NewObject<UPCGPolygon2DData>(pUVar10);
        FGCScopeGuard::~FGCScopeGuard(local_res8);
        if ((this_00 == (UPCGPolygon2DData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_120 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UPCGPolygon2DData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>
                  ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)(lVar1 + 0x1d0),&local_128,(bool *)&local_120);
      }
      if ((FObjectPtr_u_0 *)param_2 == (FObjectPtr_u_0 *)0x0) {
        lVar1 = *(longlong *)this;
        iVar7 = *(int *)(lVar1 + 0x40);
        if (iVar7 == *(int *)(lVar1 + 0x44)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)(lVar1 + 0x38),(int *)(lVar1 + 0x44));
        }
        *(int *)(lVar1 + 0x40) = iVar7 + 1;
        this_02 = (FPCGDataPtrWrapper *)((longlong)iVar7 * 0x78 + *(longlong *)(lVar1 + 0x38));
        this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
        this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)this_00);
      }
      else {
        local_138 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)param_2;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ca745c:
          if ((UPCGSpatialData *)local_138.Handle == (UPCGSpatialData *)0x0) goto LAB_149ca7549;
          pUVar11 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_138,pUVar11);
          FVar14 = local_138;
          if (!bVar6) goto LAB_149ca7549;
        }
        else {
          if ((UPCGSpatialData *)local_138.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_138.Handle);
            goto LAB_149ca745c;
          }
LAB_149ca7549:
          FVar14.Handle = (UObject *)0x0;
        }
        FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                  (&local_c8,(UPCGSpatialData *)FVar14.Handle);
        local_c8.bInheritMetadata = *(char *)((longlong)this + 0x18) != '\0';
        local_c8.bInheritSpatialData = true;
        local_c8.bInheritAttributes = local_c8.bInheritMetadata;
        UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_c8);
        lVar1 = *(longlong *)this;
        if (((*(FObjectPtr_u_0 **)(lVar1 + 0x38) <= param_2) &&
            (param_2 < *(FObjectPtr_u_0 **)(lVar1 + 0x38) + (longlong)*(int *)(lVar1 + 0x44) * 0xf))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x40);
        if (iVar7 == *(int *)(lVar1 + 0x44)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)(lVar1 + 0x38),(int *)(lVar1 + 0x44));
        }
        *(int *)(lVar1 + 0x40) = iVar7 + 1;
        this_01 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((longlong)iVar7 * 0x78 + *(longlong *)(lVar1 + 0x38)),param_2);
        FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)this_00);
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                   local_c8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                        Data);
        }
        if (local_c8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        }
      }
      pFVar15 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
      if (*(char *)((longlong)this + 0x18) != '\0') {
        pTVar2 = *(TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
                   **)((longlong)this + 0x10);
        uVar8 = 0;
        if ((int)uVar17 < (int)local_res10) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar12 = (UPCGMetadata *)(**(code **)(*(longlong *)this_00 + 0x328))(this_00);
        pTVar13 = PCGPolygon2DProcessingHelpers::ComputeEntryKeysAndInitializeAttributes
                            (&local_68,pUVar12,local_130 + (int)uVar17,pTVar2);
        iVar7 = 0;
        if (&local_48 != pTVar13) {
          pFVar15 = (pTVar13->AllocatorInstance).Data;
          (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar7 = pTVar13->ArrayNum;
          pTVar13->ArrayNum = 0;
          pTVar13->ArrayMax = 0;
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
      local_d8.DataPtr = (long64 *)pFVar15;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar16 = &local_d8;
      if (iVar7 == 0) {
        pTVar16 = (TArrayView<__int64_const_,int> *)0x0;
      }
      uVar8 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      local_d8.ArrayNum = iVar7;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UPCGPolygon2DData::SetPolygon
                (this_00,(TGeneralPolygon2<double> *)
                         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28),pTVar16)
      ;
      UPCGPolygon2DData::SetTransform(this_00,*(TTransform<double> **)((longlong)this + 8),false);
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      iVar7 = param_1->ArrayNum;
      uVar17 = uVar17 + 1;
      param_2 = (FPCGTaggedData *)local_res18;
      uVar8 = local_res10;
    } while ((int)uVar17 < iVar7);
  }
  pTVar3 = (TGeneralPolygon2<double> *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar3,iVar7);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar3,iVar7);
    param_1->ArrayNum = 0;
  }
  pTVar5 = local_130;
  DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
            (local_130,uVar8);
  if (pTVar5 != (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    FMemory::Free(pTVar5);
  }
  return;
}

// ExecuteInternal @ 149cc1410

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGPolygon2DOperationElement::ExecuteInternal
          (FPCGPolygon2DOperationElement *this,FPCGContext *param_1)

{
  TGeneralPolygon2<double> *pTVar1;
  TGeneralPolygon2<double> *pTVar2;
  double dVar3;
  EPCGPolygonOperationMetadataMode EVar4;
  EPCGPolygonOperation EVar5;
  UPCGNode *this_00;
  void *_Src;
  code *pcVar6;
  undefined8 uVar7;
  FObjectPtr_u_0 FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  UPCGPolygon2DOperationSettings *pUVar15;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  FPCGDataCollection *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  FPCGTaggedData *pFVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStackY_878 [32];
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_820;
  bool local_810;
  <lambda_1> local_80f [7];
  ForAnyElementType local_808;
  undefined8 local_800;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_7f8;
  undefined1 local_7e8;
  undefined1 local_7e7 [3];
  uint local_7e4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_7e0;
  uint local_7d0;
  UPCGPolygon2DOperationSettings *local_7c8;
  ForAnyElementType local_7c0;
  undefined8 local_7b8;
  ForAnyElementType local_7b0;
  undefined8 local_7a8;
  uint local_7a0;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_798;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_788;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_778;
  TArray<UPCGMetadata_const_*,TSizedDefaultAllocator<32>_> local_768;
  ForAnyElementType local_758;
  undefined8 local_750;
  FPCGTaggedData *local_748;
  FPCGContext *local_740;
  TGeneralPolygon2<double> *local_738;
  int iStack_730;
  undefined4 uStack_72c;
  TArray<TArray<__int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_728;
  FPCGTaggedData *local_718;
  double local_710;
  TGeneralPolygon2<double> local_708;
  undefined8 local_6e0;
  ForAnyElementType local_6d8;
  int local_6d0;
  int local_6cc;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_6c8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_6b8;
  uint local_6a8;
  FObjectPtr_u_0 local_6a0;
  FObjectPtr_u_0 local_698;
  TArray<TArray<__int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_690;
  FPCGTaggedData *local_680;
  double local_678;
  TArray<UPCGMetadata_const_*,TSizedDefaultAllocator<32>_> local_670;
  TGeneralPolygon2<double> *local_658;
  int iStack_650;
  undefined4 uStack_64c;
  TVector2<double>_u_0 local_648;
  undefined8 local_638;
  undefined8 local_630;
  FPCGContext *local_628;
  TTransform<double> *local_620;
  undefined1 *local_618;
  EPCGPolygonOperationMetadataMode local_610;
  FName local_608;
  FScriptContainerElement *local_600;
  FName local_5f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5f0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5e0;
  FTextFormat local_5d0;
  FText local_5c0;
  TGeneralPolygon2<double> *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  TGeneralPolygon2<double> *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  TGeneralPolygon2<double> *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  TGeneralPolygon2<double> *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  FTextFormat local_568;
  FText local_558;
  TGeneralPolygon2<double> *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  TGeneralPolygon2<double> *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  TGeneralPolygon2<double> *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  TGeneralPolygon2<double> *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  TGeneralPolygon2<double> *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  TGeneralPolygon2<double> *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  TGeneralPolygon2<double> *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  TGeneralPolygon2<double> *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  TGeneralPolygon2<double> *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  TGeneralPolygon2<double> *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  TGeneralPolygon2<double> *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  TGeneralPolygon2<double> *local_498;
  int iStack_490;
  undefined4 uStack_48c;
  TGeneralPolygon2<double> *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  TGeneralPolygon2<double> *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  FFormatArgumentValue local_468;
  TGeneralPolygon2<double> *local_448;
  int iStack_440;
  undefined4 uStack_43c;
  FFormatArgumentValue local_438;
  undefined4 local_418;
  longlong local_410;
  longlong *local_408;
  undefined4 local_400;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_3f8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_3e8;
  FText local_3d8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_3c8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_3b8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_3a8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_398;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_388;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_378;
  FText local_368;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_358;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_348;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_338;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_328;
  FText local_318;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_308;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_2f8;
  FText local_2e8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_2d8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_2c8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_2b8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_2a8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_298;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_288;
  FText local_278;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_268;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_258;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_248;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_238;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_228;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>,int> local_218;
  FText local_208;
  TVector2<double>_u_0 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1cc;
  undefined4 local_1bc;
  FTextFormat local_1b8;
  undefined4 local_19c;
  FTextFormat local_198;
  undefined1 local_188 [64];
  void *local_148;
  undefined4 local_140;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_878;
  bVar34 = -1 < CpuChannel->Enabled;
  local_740 = param_1;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId96,"FPCGPolygon2DOperationElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGPolygon2DOperation.cpp"
               ,0x60);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar33 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_80f[0]);
      if (pFVar33 != (FPCGTaggedData *)0x0) {
        local_7c8 = Cast<UPCGPolygon2DOperationSettings_const_>(&pFVar33->Data);
        goto LAB_149cc1551;
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      pUVar15 = (UPCGPolygon2DOperationSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (pUVar15 != (UPCGPolygon2DOperationSettings *)0x0) {
        local_7c8 = pUVar15;
        pUVar13 = UPCGPolygon2DOperationSettings::StaticClass();
        iVar12 = (int)pUVar13->_padding_;
        if ((iVar12 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar13->_padding_)) goto LAB_149cc1551;
      }
    }
    local_7c8 = (UPCGPolygon2DOperationSettings *)0x0;
  }
  else {
    pUVar13 = UPCGPolygon2DOperationSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar9) {
      local_7c8 = (UPCGPolygon2DOperationSettings *)
                  (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_7c8 = (UPCGPolygon2DOperationSettings *)0x0;
    }
  }
LAB_149cc1551:
  pUVar15 = local_7c8;
  pFVar24 = &param_1->InputData;
  uVar27 = 0;
  if ((local_7c8 == (UPCGPolygon2DOperationSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGPolygon2DOperation.cpp"
                         ,100,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  FPCGDataCollection::GetInputsByPin(pFVar24,&local_778,&PCGPinConstants::DefaultInputLabel);
  uVar26 = 0;
  local_718 = (FPCGTaggedData *)0x0;
  local_7a0 = 0;
  if (pUVar15->Operation == CutWithPaths) {
    FLazyName::Resolve(&PCGPolygon2DUtils::Constants::ClipPathsLabel);
    pTVar16 = FPCGDataCollection::GetInputsByPin(pFVar24,&local_5f0,&local_608);
    uVar19 = uVar27;
    if (&local_248 != pTVar16) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
      local_718 = (FPCGTaggedData *)(pTVar16->AllocatorInstance).Data;
      (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_7a0 = pTVar16->ArrayNum;
      uVar19 = (ulonglong)local_7a0;
      pTVar16->ArrayNum = 0;
      pTVar16->ArrayMax = 0;
    }
    iVar12 = (int)uVar19;
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_5f0.AllocatorInstance.Data,local_5f0.ArrayNum);
  }
  else {
    FLazyName::Resolve(&PCGPolygon2DUtils::Constants::ClipPolysLabel);
    pTVar16 = FPCGDataCollection::GetInputsByPin(pFVar24,&local_5e0,&local_5f8);
    uVar19 = uVar27;
    if (&local_248 != pTVar16) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
      local_718 = (FPCGTaggedData *)(pTVar16->AllocatorInstance).Data;
      (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_7a0 = pTVar16->ArrayNum;
      uVar19 = (ulonglong)local_7a0;
      pTVar16->ArrayNum = 0;
      pTVar16->ArrayMax = 0;
    }
    iVar12 = (int)uVar19;
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_5e0.AllocatorInstance.Data,local_5e0.ArrayNum);
    local_5f0.AllocatorInstance.Data = local_5e0.AllocatorInstance.Data;
  }
  if ((FPCGTaggedData *)local_5f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_5f0.AllocatorInstance.Data);
  }
  local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_138.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_138.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_810 = false;
  local_7e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e0.ArrayNum = 0;
  local_7e0.ArrayMax = 0;
  local_690.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.ArrayNum = 0;
  local_690.ArrayMax = 0;
  local_670.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_670.ArrayNum = 0;
  local_670.ArrayMax = 0;
  local_758.Data = (FScriptContainerElement *)0x0;
  local_750 = 0;
  local_7f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f8.ArrayNum = 0;
  local_7f8.ArrayMax = 0;
  local_728.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_728.ArrayNum = 0;
  local_728.ArrayMax = 0;
  local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_768.ArrayNum = 0;
  local_768.ArrayMax = 0;
  local_7e4 = 0;
  uVar19 = uVar27;
  if (0 < local_778.ArrayNum) {
    do {
      uVar20 = (uint)uVar19;
      uVar23 = uVar26;
      if ((int)uVar20 < local_778.ArrayNum) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      local_698 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)
                  (local_778.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x78))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149cc1813:
        if ((UPCGPolygon2DData *)local_698.Handle != (UPCGPolygon2DData *)0x0) {
          pUVar13 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_698,pUVar13);
          FVar8 = local_698;
          if ((bVar9) && ((UPCGPolygon2DData *)local_698.Handle != (UPCGPolygon2DData *)0x0)) {
            if ((local_758.Data <= (FScriptContainerElement *)&local_7e4) &&
               (((FScriptContainerElement *)&local_7e4 <
                 local_758.Data + (longlong)local_750._4_4_ * 4 &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)))) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            iVar11 = (int)local_750;
            if ((int)local_750 == local_750._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_758,(int *)((longlong)&local_750 + 4));
            }
            local_750 = CONCAT44(local_750._4_4_,iVar11 + 1);
            *(uint *)(local_758.Data + (longlong)iVar11 * 4) = local_7e4;
            PCGPolygon2DProcessingHelpers::AddPolygon
                      ((UPCGPolygon2DData *)FVar8.Handle,&local_7e0,&local_690,&local_670,&local_810
                       ,&local_138);
          }
        }
      }
      else if ((UPCGPolygon2DData *)local_698.Handle != (UPCGPolygon2DData *)0x0) {
        UE::GC::MarkAsReachable(local_698.Handle);
        goto LAB_149cc1813;
      }
      local_7e4 = local_7e4 + 1;
      uVar19 = (ulonglong)local_7e4;
    } while ((int)local_7e4 < local_778.ArrayNum);
  }
  pFVar33 = local_718;
  if (pUVar15->Operation == CutWithPaths) {
    uVar19 = (ulonglong)local_7e0.ArrayNum;
    local_738 = (TGeneralPolygon2<double> *)(local_7e0.AllocatorInstance.Data + uVar19 * 0x28);
    uVar52 = SUB84(__real_7fefffffffffffff,0);
    uVar53 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    pFVar21 = local_7e0.AllocatorInstance.Data + 0x20;
    uVar54 = SUB84(__real_ffefffffffffffff,0);
    uVar55 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    local_710 = __real_ffefffffffffffff;
    local_748 = __real_7fefffffffffffff;
    local_680 = __real_7fefffffffffffff;
    local_678 = __real_ffefffffffffffff;
    local_6a8 = local_7e0.ArrayNum;
    uVar39 = uVar54;
    uVar41 = uVar55;
    uVar43 = uVar54;
    uVar45 = uVar55;
    uVar36 = uVar52;
    uVar37 = uVar53;
    uVar50 = uVar52;
    uVar51 = uVar53;
    while( true ) {
      pTVar1 = local_738;
      if (local_7e0.ArrayNum != (int)uVar19) {
        local_7e8 = 0;
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_7e8);
      }
      pFVar33 = local_718;
      uVar23 = local_7a0;
      pUVar15 = local_7c8;
      if ((TGeneralPolygon2<double> *)(pFVar21 + -0x20) == pTVar1) break;
      UE::Geometry::TPolygon2<double>::Bounds
                ((TPolygon2<double> *)(pFVar21 + -0x20),(TAxisAlignedBox2<double> *)&local_648._s_0)
      ;
      local_7d0 = *(uint *)pFVar21;
      uVar19 = (ulonglong)(int)local_7d0;
      pFVar28 = (((TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                 (pFVar21 + -8))->AllocatorInstance).Data;
      uVar48 = (undefined4)local_630;
      uVar49 = (undefined4)((ulonglong)local_630 >> 0x20);
      uVar39 = (undefined4)local_638;
      uVar41 = (undefined4)((ulonglong)local_638 >> 0x20);
      uVar43 = SUB84(local_648._s_0.Y,0);
      uVar45 = (undefined4)((ulonglong)local_648._8_8_ >> 0x20);
      uVar50 = SUB84(local_648._s_0.X,0);
      uVar51 = (undefined4)((ulonglong)local_648._0_8_ >> 0x20);
      local_600 = pFVar28 + uVar19 * 0x10;
      while( true ) {
        pFVar32 = local_600;
        if (*(uint *)pFVar21 != (uint)uVar19) {
          local_7e7[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_7e7);
        }
        if (pFVar28 == pFVar32) break;
        local_6d0 = *(int *)(pFVar28 + 8);
        lVar30 = (longlong)local_6d0;
        _Src = *(void **)pFVar28;
        local_6d8.Data = (FScriptContainerElement *)0x0;
        if (local_6d0 == 0) {
          local_6cc = 0;
          iVar12 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_6d0,0,&local_6d8,local_6d0,&local_6cc);
          memcpy(local_6d8.Data,_Src,lVar30 << 4);
          iVar12 = local_6d0;
        }
        pFVar32 = local_6d8.Data + (longlong)iVar12 * 0x10;
        FVar25.Data = local_6d8.Data;
        uVar36 = uVar52;
        uVar37 = uVar53;
        uVar38 = uVar52;
        uVar40 = uVar53;
        uVar42 = uVar54;
        uVar44 = uVar55;
        uVar46 = uVar54;
        uVar47 = uVar55;
        iVar11 = iVar12;
        while( true ) {
          if (iVar11 != iVar12) {
            local_80f[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_80f);
            iVar11 = local_6d0;
          }
          if (FVar25.Data == pFVar32) break;
          dVar3 = *(double *)FVar25.Data;
          uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 < (double)CONCAT44(uVar37,uVar36)) {
            uVar36 = SUB84(dVar3,0);
            uVar37 = uVar35;
          }
          if ((double)CONCAT44(uVar44,uVar42) <= dVar3 && dVar3 != (double)CONCAT44(uVar44,uVar42))
          {
            uVar42 = SUB84(dVar3,0);
            uVar44 = uVar35;
          }
          dVar3 = *(double *)(FVar25.Data + 8);
          uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 < (double)CONCAT44(uVar40,uVar38)) {
            uVar38 = SUB84(dVar3,0);
            uVar40 = uVar35;
          }
          if ((double)CONCAT44(uVar47,uVar46) <= dVar3 && dVar3 != (double)CONCAT44(uVar47,uVar46))
          {
            uVar46 = SUB84(dVar3,0);
            uVar47 = uVar35;
          }
          FVar25.Data = FVar25.Data + 0x10;
        }
        if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar51,uVar50)) {
          uVar50 = uVar36;
          uVar51 = uVar37;
        }
        if ((double)CONCAT44(uVar40,uVar38) <= (double)CONCAT44(uVar45,uVar43)) {
          uVar43 = uVar38;
          uVar45 = uVar40;
        }
        if ((double)CONCAT44(uVar41,uVar39) < (double)CONCAT44(uVar44,uVar42) ||
            (double)CONCAT44(uVar41,uVar39) == (double)CONCAT44(uVar44,uVar42)) {
          uVar39 = uVar42;
          uVar41 = uVar44;
        }
        if ((double)CONCAT44(uVar49,uVar48) < (double)CONCAT44(uVar47,uVar46) ||
            (double)CONCAT44(uVar49,uVar48) == (double)CONCAT44(uVar47,uVar46)) {
          uVar48 = uVar46;
          uVar49 = uVar47;
        }
        if (local_6d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data);
        }
        pFVar28 = pFVar28 + 0x10;
        uVar19 = (ulonglong)local_7d0;
      }
      local_630 = CONCAT44(uVar49,uVar48);
      local_638 = CONCAT44(uVar41,uVar39);
      local_648._s_0.Y = (double)CONCAT44(uVar45,uVar43);
      local_648._s_0.X = (double)CONCAT44(uVar51,uVar50);
      if ((double)local_748 < (double)CONCAT44(uVar51,uVar50)) {
        uVar50 = SUB84(local_748,0);
        uVar51 = (undefined4)((ulonglong)local_748 >> 0x20);
      }
      else {
        local_748 = (FPCGTaggedData *)CONCAT44(uVar51,uVar50);
      }
      uVar36 = (int)local_680;
      uVar37 = (int)((ulonglong)local_680 >> 0x20);
      if ((double)CONCAT44(uVar45,uVar43) <= (double)local_680) {
        local_680 = (FPCGTaggedData *)CONCAT44(uVar45,uVar43);
        uVar36 = uVar43;
        uVar37 = uVar45;
      }
      uVar43 = SUB84(local_678,0);
      uVar45 = (int)((ulonglong)local_678 >> 0x20);
      if (local_678 < (double)CONCAT44(uVar41,uVar39) ||
          local_678 == (double)CONCAT44(uVar41,uVar39)) {
        local_678 = (double)CONCAT44(uVar41,uVar39);
        uVar43 = uVar39;
        uVar45 = uVar41;
      }
      uVar39 = SUB84(local_710,0);
      uVar41 = (int)((ulonglong)local_710 >> 0x20);
      if (local_710 < (double)CONCAT44(uVar49,uVar48) ||
          local_710 == (double)CONCAT44(uVar49,uVar48)) {
        local_710 = (double)CONCAT44(uVar49,uVar48);
        uVar39 = uVar48;
        uVar41 = uVar49;
      }
      uVar19 = (ulonglong)local_6a8;
      pFVar21 = pFVar21 + 0x28;
    }
    uVar19 = uVar27;
    param_1 = local_740;
    uVar31 = uVar27;
    if (0 < (int)local_7a0) {
      do {
        dVar3 = pUVar15->SplineMaxDiscretizationError;
        uVar22 = (uint)uVar19;
        local_708.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.Outer.Vertices.ArrayNum = 0;
        local_708.Outer.Vertices.ArrayMax = 0;
        local_708.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar20 = uVar26;
        if ((int)uVar22 < (int)uVar23) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        local_708.Holes.ArrayNum = 0;
        local_708.Holes.ArrayMax = 0;
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_1f8._0_4_ = uVar50;
        local_1f8._4_4_ = uVar51;
        local_1f8._8_4_ = uVar36;
        local_1f8._12_4_ = uVar37;
        local_1e8 = uVar43;
        uStack_1e4 = uVar45;
        uStack_1e0 = uVar39;
        uStack_1dc = uVar41;
        bVar9 = PCGPolygon2DProcessingHelpers::GetEnclosingPolygonFromPath
                          (*(UPCGData **)((pFVar33->Tags).Hash.InlineData + (uVar31 - 0x48)),
                           &local_138,dVar3,(TAxisAlignedBox2<double> *)&local_1f8._s_0,&local_708);
        if (bVar9) {
          if (((local_7f8.AllocatorInstance.Data <= &local_708) &&
              (&local_708 <
               (TGeneralPolygon2<double> *)
               (local_7f8.AllocatorInstance.Data + (longlong)local_7f8.ArrayMax * 0x28))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          lVar30 = (longlong)local_7f8.ArrayNum;
          if (local_7f8.ArrayNum == local_7f8.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_7f8.AllocatorInstance,&local_7f8.ArrayMax);
            local_7f8.ArrayNum = iVar12 + 1;
            pFVar21 = local_7f8.AllocatorInstance.Data + (longlong)iVar12 * 0x28;
          }
          else {
            local_7f8.ArrayNum = local_7f8.ArrayNum + 1;
            pFVar21 = local_7f8.AllocatorInstance.Data + lVar30 * 0x28;
          }
          *(undefined8 *)&pFVar21->field_0x0 = 0;
          *(FScriptContainerElement **)&pFVar21->field_0x0 =
               local_708.Outer.Vertices.AllocatorInstance.Data;
          local_708.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar21 + 8) = local_708.Outer.Vertices.ArrayNum;
          *(int *)(pFVar21 + 0xc) = local_708.Outer.Vertices.ArrayMax;
          local_708.Outer.Vertices.ArrayNum = 0;
          local_708.Outer.Vertices.ArrayMax = 0;
          pFVar21[0x10] = (FScriptContainerElement)local_708.bOuterIsCW;
          *(undefined8 *)(pFVar21 + 0x18) = 0;
          *(FScriptContainerElement **)(pFVar21 + 0x18) = local_708.Holes.AllocatorInstance.Data;
          local_708.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar21 + 0x20) = local_708.Holes.ArrayNum;
          *(int *)(pFVar21 + 0x24) = local_708.Holes.ArrayMax;
          local_708.Holes.ArrayNum = 0;
          local_708.Holes.ArrayMax = 0;
          iVar12 = local_728.ArrayNum;
          if (local_728.ArrayNum == local_728.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_728.AllocatorInstance,&local_728.ArrayMax);
          }
          local_6e0 = 0;
          local_728.ArrayNum = iVar12 + 1;
          *(undefined8 *)&local_728.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 = 0;
          *(undefined8 *)(local_728.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) = 0;
          if (((local_768.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6e0) &&
              ((FScriptContainerElement *)&local_6e0 <
               local_768.AllocatorInstance.Data + (longlong)local_768.ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = local_768.ArrayNum;
          if (local_768.ArrayNum == local_768.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_768.AllocatorInstance,&local_768.ArrayMax);
          }
          local_768.ArrayNum = iVar12 + 1;
          *(undefined8 *)(local_768.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_6e0;
        }
        DestructItems<UE::Geometry::TPolygon2<double>,int>
                  ((TPolygon2<double> *)local_708.Holes.AllocatorInstance.Data,
                   local_708.Holes.ArrayNum);
        if (local_708.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Holes.AllocatorInstance.Data);
        }
        if (local_708.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Outer.Vertices.AllocatorInstance.Data);
        }
        uVar19 = (ulonglong)(uVar22 + 1);
        param_1 = local_740;
        uVar31 = uVar31 + 0x78;
      } while ((int)(uVar22 + 1) < (int)uVar23);
    }
  }
  else {
    uVar19 = uVar27;
    uVar31 = uVar27;
    if (0 < iVar12) {
      do {
        uVar20 = (uint)uVar19;
        uVar23 = uVar26;
        if ((int)uVar20 < iVar12) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_6a0 = (FObjectPtr_u_0)
                    ((FObjectPtr_u_0 *)((pFVar33->Tags).Hash.InlineData + (uVar31 - 0x48)))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149cc2021:
          if ((UPCGPolygon2DData *)local_6a0.Handle != (UPCGPolygon2DData *)0x0) {
            pUVar13 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
            bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_6a0,pUVar13);
            if ((bVar9) && ((UPCGPolygon2DData *)local_6a0.Handle != (UPCGPolygon2DData *)0x0)) {
              PCGPolygon2DProcessingHelpers::AddPolygon
                        ((UPCGPolygon2DData *)local_6a0.Handle,&local_7f8,&local_728,&local_768,
                         &local_810,&local_138);
            }
          }
        }
        else if ((UPCGPolygon2DData *)local_6a0.Handle != (UPCGPolygon2DData *)0x0) {
          UE::GC::MarkAsReachable(local_6a0.Handle);
          goto LAB_149cc2021;
        }
        uVar19 = (ulonglong)(uVar20 + 1);
        uVar31 = uVar31 + 0x78;
      } while ((int)(uVar20 + 1) < iVar12);
    }
  }
  EVar4 = pUVar15->MetadataMode;
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_188._32_8_ = 0;
  local_188._40_4_ = 0;
  local_188._44_4_ = 0x80;
  local_188._48_4_ = 0xffffffff;
  local_188._52_4_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  if ((EVar4 != None) &&
     (PCGPolygon2DProcessingHelpers::AddToPolyMetadataInfoMap
                ((TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
                  *)local_188,&local_7e0,&local_670,&local_690), EVar4 == Full)) {
    PCGPolygon2DProcessingHelpers::AddToPolyMetadataInfoMap
              ((TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
                *)local_188,&local_7f8,&local_768,&local_728);
  }
  local_620 = &local_138;
  local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_618 = local_188;
  local_820.ArrayNum = 0;
  local_820.ArrayMax = 0;
  iVar12 = local_7e0.ArrayNum;
  local_628 = param_1;
  local_610 = EVar4;
  if (pUVar15->Operation == Union) {
    if (local_7e0.ArrayNum < 2) {
      pFVar24 = &param_1->OutputData;
      if ((pFVar24 == (FPCGDataCollection *)&local_778) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar12 = local_778.ArrayNum;
      if (local_778.ArrayNum != 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x78,8,local_778.ArrayNum,(ForAnyElementType *)pFVar24,
                            &(param_1->OutputData).TaggedData.ArrayNum,
                            &(param_1->OutputData).TaggedData.ArrayMax);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar24->TaggedData).AllocatorInstance.Data + (longlong)iVar11 * 0x78,
                   (FPCGTaggedData *)local_778.AllocatorInstance.Data,iVar12);
      }
    }
    else {
      local_488 = (TGeneralPolygon2<double> *)local_7e0.AllocatorInstance.Data;
      if ((local_7e0.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iStack_480 = iVar12;
      local_238._12_4_ = uStack_47c;
      local_238.ArrayNum = iVar12;
      local_238.DataPtr = local_488;
      bVar9 = UE::Geometry::PolygonsUnion(&local_238,&local_820,false);
      if (bVar9) {
        iVar12 = local_7e0.ArrayNum;
        uStack_72c = local_1cc;
        local_478 = (TGeneralPolygon2<double> *)local_7e0.AllocatorInstance.Data;
        local_738 = (TGeneralPolygon2<double> *)0x0;
        iStack_730 = 0;
        if ((local_7e0.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_228._12_4_ = uStack_72c;
        local_228.ArrayNum = iStack_730;
        iStack_470 = iVar12;
        local_218._12_4_ = uStack_46c;
        local_218.ArrayNum = iVar12;
        local_228.DataPtr = local_738;
        local_218.DataPtr = local_478;
        `FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                  (&local_628,&local_820,(FPCGTaggedData *)0x0,&local_218,&local_228);
      }
      else if (pUVar15->bQuiet == false) {
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_208,L"PCGPolygon2DOperation",L"UnionFailed",
                             L"Union operation failed.");
        PCGLog::LogWarningOnGraph(pFVar17,param_1);
        if (local_208.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
        }
      }
    }
  }
  else if (pUVar15->Operation == InnerIntersection) {
    if (local_7e0.ArrayNum < 2) {
      pFVar24 = &param_1->OutputData;
      if ((pFVar24 == (FPCGDataCollection *)&local_778) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar12 = local_778.ArrayNum;
      if (local_778.ArrayNum != 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x78,8,local_778.ArrayNum,(ForAnyElementType *)pFVar24,
                            &(param_1->OutputData).TaggedData.ArrayNum,
                            &(param_1->OutputData).TaggedData.ArrayMax);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar24->TaggedData).AllocatorInstance.Data + (longlong)iVar11 * 0x78,
                   (FPCGTaggedData *)local_778.AllocatorInstance.Data,iVar12);
      }
    }
    else {
      local_808.Data = (FScriptContainerElement *)0x0;
      local_800 = 0;
      if (local_7e0.ArrayNum < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar27 = local_800 & 0xffffffff;
      }
      FVar25.Data = local_7e0.AllocatorInstance.Data;
      iVar12 = (int)uVar27;
      if ((local_808.Data <= local_7e0.AllocatorInstance.Data) &&
         (local_7e0.AllocatorInstance.Data <
          (TGeneralPolygon2<double> *)(local_808.Data + (longlong)(int)local_800._4_4_ * 0x28))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar12 = (int)local_800;
      }
      if (iVar12 == local_800._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_808,(int *)((longlong)&local_800 + 4));
      }
      local_800 = CONCAT44(local_800._4_4_,iVar12 + 1);
      UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
                ((TGeneralPolygon2<double> *)(local_808.Data + (longlong)iVar12 * 0x28),
                 (TGeneralPolygon2<double> *)FVar25.Data);
      uVar23 = 1;
      if (1 < local_7e0.ArrayNum) {
        uStack_72c = local_1bc;
        iStack_730 = 1;
        do {
          uVar20 = uVar26;
          if ((int)uVar23 < local_7e0.ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = (int)local_800;
          local_738 = (TGeneralPolygon2<double> *)
                      (local_7e0.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x28);
          local_448 = (TGeneralPolygon2<double> *)local_808.Data;
          if (((int)local_800 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          local_3f8._12_4_ = uStack_72c;
          local_3f8.ArrayNum = iStack_730;
          iStack_440 = iVar12;
          local_3e8._12_4_ = uStack_43c;
          local_3e8.ArrayNum = iVar12;
          local_3f8.DataPtr = local_738;
          local_3e8.DataPtr = local_448;
          bVar9 = UE::Geometry::PolygonsIntersection(&local_3e8,&local_3f8,&local_820);
          if (!bVar9) {
            if (pUVar15->bQuiet == false) {
              pFVar17 = FText::AsLocalizable_Advanced_LocText
                                  (&local_3d8,L"PCGPolygon2DOperation",L"InnerIntersectionFailed",
                                   L"Inner intersection operation failed at index \'{0}\'.");
              pFVar18 = FTextFormat::FTextFormat(&local_1b8,pFVar17,Default);
              local_468.Type = Int;
              local_468.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_468.TextValue.field0_0x0.TypedValue.Flags = 0;
              local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_6c8.ArrayNum = 1;
              local_468.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar23;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,0,&local_6c8.AllocatorInstance,1,&local_6c8.ArrayMax);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        (local_6c8.AllocatorInstance.Data,&local_468,1);
              local_5d0.TextFormatData.Object = (pFVar18->TextFormatData).Object;
              local_5d0.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar18->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_5d0.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_5d0.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_5d0.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FText::Format(&local_5c0,&local_5d0,&local_6c8);
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_6c8.AllocatorInstance.Data,local_6c8.ArrayNum
                        );
              if ((FFormatArgumentValue *)local_6c8.AllocatorInstance.Data !=
                  (FFormatArgumentValue *)0x0) {
                FMemory::Free(local_6c8.AllocatorInstance.Data);
              }
              if (local_468.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_468.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar18->TextFormatData).SharedReferenceCount.ReferenceController);
              PCGLog::LogWarningOnGraph(&local_5c0,param_1);
              if (local_5c0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
              }
              if (local_3d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
              }
            }
            if ((longlong)local_800 < 0) {
              DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                        ((TGeneralPolygon2<double> *)local_808.Data,(int)local_800);
              bVar9 = local_800._4_4_ != 0;
              local_800 = (ulonglong)local_800._4_4_ << 0x20;
              if (bVar9) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,0,&local_808,0,(int *)((longlong)&local_800 + 4));
              }
            }
            else {
              DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                        ((TGeneralPolygon2<double> *)local_808.Data,(int)local_800);
              local_800 = local_800 & 0xffffffff00000000;
            }
            break;
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_808.Data,(int)local_800);
          if ((TGeneralPolygon2<double> *)local_808.Data != (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_808.Data);
          }
          local_808.Data = local_820.AllocatorInstance.Data;
          local_800._0_4_ = local_820.ArrayNum;
          local_800._4_4_ = local_820.ArrayMax;
          local_820.ArrayNum = 0;
          local_820.ArrayMax = 0;
          local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)0x0,0);
          uVar23 = uVar23 + 1;
          local_820._8_8_ = local_820._8_8_ & 0xffffffff00000000;
        } while ((int)uVar23 < local_7e0.ArrayNum);
      }
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,local_820.ArrayNum);
      if ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data !=
          (TGeneralPolygon2<double> *)0x0) {
        FMemory::Free(local_820.AllocatorInstance.Data);
      }
      iVar12 = local_7e0.ArrayNum;
      local_820.AllocatorInstance.Data = local_808.Data;
      local_820._8_8_ = local_800;
      uStack_72c = local_19c;
      local_5a8 = (TGeneralPolygon2<double> *)local_7e0.AllocatorInstance.Data;
      local_808.Data = (FScriptContainerElement *)0x0;
      local_800 = 0;
      local_738 = (TGeneralPolygon2<double> *)0x0;
      iStack_730 = 0;
      if ((local_7e0.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      local_3c8._12_4_ = uStack_72c;
      local_3c8.ArrayNum = iStack_730;
      iStack_5a0 = iVar12;
      local_3b8._12_4_ = uStack_59c;
      local_3b8.ArrayNum = iVar12;
      local_3c8.DataPtr = local_738;
      local_3b8.DataPtr = local_5a8;
      `FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                (&local_628,&local_820,(FPCGTaggedData *)0x0,&local_3b8,&local_3c8);
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                ((TGeneralPolygon2<double> *)local_808.Data,(int)local_800);
      if ((TGeneralPolygon2<double> *)local_808.Data != (TGeneralPolygon2<double> *)0x0) {
        FMemory::Free(local_808.Data);
      }
    }
  }
  else if (local_7f8.ArrayNum == 0) {
    pFVar24 = &param_1->OutputData;
    if ((pFVar24 == (FPCGDataCollection *)&local_778) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    iVar12 = local_778.ArrayNum;
    if (local_778.ArrayNum != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x78,8,local_778.ArrayNum,(ForAnyElementType *)pFVar24,
                          &(param_1->OutputData).TaggedData.ArrayNum,
                          &(param_1->OutputData).TaggedData.ArrayMax);
      ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                ((pFVar24->TaggedData).AllocatorInstance.Data + (longlong)iVar11 * 0x78,
                 (FPCGTaggedData *)local_778.AllocatorInstance.Data,iVar12);
    }
  }
  else {
    local_7d0 = 0;
    if (0 < local_7e0.ArrayNum) {
      local_710 = 0.0;
      uVar19 = uVar27;
      do {
        dVar3 = local_710;
        uVar20 = (uint)uVar19;
        uVar23 = uVar26;
        if ((int)uVar20 < (int)local_750) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar23 = *(uint *)(local_758.Data + (longlong)dVar3);
        uVar22 = uVar26;
        if ((int)uVar23 < local_778.ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar33 = (FPCGTaggedData *)
                  (local_778.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x78);
        uVar23 = uVar26;
        if ((int)uVar20 < local_7e0.ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        local_748 = pFVar33;
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar1 = (TGeneralPolygon2<double> *)
                 (local_7e0.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x28);
        if ((longlong)local_820._8_8_ < 0) {
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,local_820.ArrayNum
                    );
          bVar9 = local_820.ArrayMax != 0;
          local_820._8_8_ = (ulonglong)(uint)local_820.ArrayMax << 0x20;
          if (bVar9) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&local_820.AllocatorInstance,0,&local_820.ArrayMax);
          }
        }
        else {
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,local_820.ArrayNum
                    );
          local_820._8_8_ = local_820._8_8_ & 0xffffffff00000000;
        }
        pUVar15 = local_7c8;
        iStack_650 = 1;
        EVar5 = local_7c8->Operation;
        iVar12 = local_7f8.ArrayNum;
        uVar23 = uVar20;
        local_658 = pTVar1;
        if (EVar5 == Difference) {
          local_4f8 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
          if ((local_7f8.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iStack_4f0 = iVar12;
          local_2d8._12_4_ = uStack_4ec;
          local_2d8.ArrayNum = iVar12;
          uStack_4e0 = 1;
          local_2c8._12_4_ = uStack_4dc;
          local_2c8.ArrayNum = 1;
          local_2d8.DataPtr = local_4f8;
          local_4e8 = pTVar1;
          local_2c8.DataPtr = pTVar1;
          bVar9 = UE::Geometry::PolygonsDifference(&local_2c8,&local_2d8,&local_820);
          if (!bVar9) goto LAB_149cc3475;
LAB_149cc35fd:
          iVar12 = local_7f8.ArrayNum;
          local_498 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
          if ((local_7f8.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          local_258._12_4_ = uStack_64c;
          local_258.ArrayNum = iStack_650;
          iStack_490 = iVar12;
          local_268._12_4_ = uStack_48c;
          local_268.ArrayNum = iVar12;
          local_268.DataPtr = local_498;
          local_258.DataPtr = local_658;
          `FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                    (&local_628,&local_820,pFVar33,&local_258,&local_268);
        }
        else if ((EVar5 == Intersection) || (EVar5 == ExclusiveOr)) {
LAB_149cc3475:
          if (pUVar15->Operation == Intersection) {
            iVar12 = local_7f8.ArrayNum;
            local_4d8 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
            if ((local_7f8.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            iStack_4d0 = iVar12;
            local_2b8._12_4_ = uStack_4cc;
            local_2b8.ArrayNum = iVar12;
            uStack_4c0 = 1;
            local_2a8._12_4_ = uStack_4bc;
            local_2a8.ArrayNum = 1;
            local_2b8.DataPtr = local_4d8;
            local_4c8 = pTVar1;
            local_2a8.DataPtr = pTVar1;
            bVar9 = UE::Geometry::PolygonsIntersection(&local_2a8,&local_2b8,&local_820);
            if (bVar9) goto LAB_149cc35fd;
          }
          if (pUVar15->Operation == ExclusiveOr) {
            iVar12 = local_7f8.ArrayNum;
            local_4b8 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
            if ((local_7f8.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            iStack_4b0 = iVar12;
            local_298._12_4_ = uStack_4ac;
            local_298.ArrayNum = iVar12;
            uStack_4a0 = 1;
            local_288._12_4_ = uStack_49c;
            local_288.ArrayNum = 1;
            local_298.DataPtr = local_4b8;
            local_4a8 = pTVar1;
            local_288.DataPtr = pTVar1;
            bVar9 = UE::Geometry::PolygonsExclusiveOr(&local_288,&local_298,&local_820);
            if (bVar9) goto LAB_149cc35fd;
          }
          if (pUVar15->bQuiet == false) {
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_278,L"PCGPolygon2DOperation",L"OperationFailed",
                                 L"Polygon operation failed.");
            PCGLog::LogWarningOnGraph(pFVar17,local_740);
            if (local_278.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
            }
          }
        }
        else if (EVar5 == PairwiseIntersection) {
          if (0 < local_7f8.ArrayNum) {
            uVar7._4_4_ = uStack_64c;
            uVar7._0_4_ = 1;
            uVar19 = uVar27;
            do {
              if ((longlong)local_820._8_8_ < 0) {
                DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                          ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,
                           local_820.ArrayNum);
                bVar9 = local_820.ArrayMax != 0;
                local_820._8_8_ = (ulonglong)(uint)local_820.ArrayMax << 0x20;
                if (bVar9) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,0,&local_820.AllocatorInstance,0,&local_820.ArrayMax);
                }
              }
              else {
                DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                          ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,
                           local_820.ArrayNum);
                local_820._8_8_ = local_820._8_8_ & 0xffffffff00000000;
              }
              uVar22 = (uint)uVar19;
              uVar23 = uVar26;
              if ((int)uVar22 < local_7f8.ArrayNum) {
                uVar23 = ~uVar22 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              uStack_590 = 1;
              uStack_580 = 1;
              local_398._12_4_ = uStack_57c;
              local_398.ArrayNum = 1;
              local_598 = (TGeneralPolygon2<double> *)
                          (local_7f8.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x28);
              local_3a8._12_4_ = uStack_58c;
              local_3a8.ArrayNum = 1;
              local_588 = pTVar1;
              local_3a8.DataPtr = local_598;
              local_398.DataPtr = pTVar1;
              bVar9 = UE::Geometry::PolygonsIntersection(&local_398,&local_3a8,&local_820);
              if (bVar9) {
                iVar12 = local_7f8.ArrayNum;
                local_578 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
                if ((local_7f8.ArrayNum < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  uVar10 = (*pcVar6)();
                  return (bool)uVar10;
                }
                iStack_570 = iVar12;
                local_388._12_4_ = uStack_56c;
                local_388.ArrayNum = iVar12;
                local_388.DataPtr = local_578;
                local_378.DataPtr = pTVar1;
                local_378._8_8_ = uVar7;
                `FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                          (&local_628,&local_820,pFVar33,&local_378,&local_388);
              }
              else if (pUVar15->bQuiet == false) {
                pFVar17 = FText::AsLocalizable_Advanced_LocText
                                    (&local_368,L"PCGPolygon2DOperation",
                                     L"PairwiseIntersectionFailed",
                                     L"Pairwise polygon intersection failed at polygon \'{0}\' and clip polygon \'{1}\'."
                                    );
                pFVar18 = FTextFormat::FTextFormat(&local_198,pFVar17,Default);
                local_438.Type = Int;
                local_438.TextValue.field0_0x0.TypedValue.TextData.Reference =
                     (TRefCountPtr<ITextData>)(ITextData *)0x0;
                local_438.TextValue.field0_0x0.TypedValue.Flags = 0;
                local_418 = 0;
                local_408 = (longlong *)0x0;
                local_400 = 0;
                local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_6b8.ArrayNum = 2;
                local_438.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar20;
                local_410 = (longlong)(int)uVar22;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,2,0,&local_6b8.AllocatorInstance,2,&local_6b8.ArrayMax);
                ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                          (local_6b8.AllocatorInstance.Data,&local_438,2);
                local_568.TextFormatData.Object = (pFVar18->TextFormatData).Object;
                local_568.TextFormatData.SharedReferenceCount.ReferenceController =
                     (pFVar18->TextFormatData).SharedReferenceCount.ReferenceController;
                if (local_568.TextFormatData.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_568.TextFormatData.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_568.TextFormatData.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FText::Format(&local_558,&local_568,&local_6b8);
                DestructItems<FFormatArgumentValue,int>
                          ((FFormatArgumentValue *)local_6b8.AllocatorInstance.Data,
                           local_6b8.ArrayNum);
                if ((FFormatArgumentValue *)local_6b8.AllocatorInstance.Data !=
                    (FFormatArgumentValue *)0x0) {
                  FMemory::Free(local_6b8.AllocatorInstance.Data);
                }
                if (local_408 != (longlong *)0x0) {
                  (**(code **)(*local_408 + 0x10))();
                }
                if (local_438.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_438.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
                  )();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pFVar18->TextFormatData).SharedReferenceCount.ReferenceController);
                PCGLog::LogWarningOnGraph(&local_558,local_740);
                if (local_558.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_558.TextData.Reference + 0x10))();
                }
                pFVar33 = local_748;
                if (local_368.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
                  pFVar33 = local_748;
                }
              }
              uVar19 = (ulonglong)(uVar22 + 1);
              uVar23 = local_7d0;
            } while ((int)(uVar22 + 1) < local_7f8.ArrayNum);
          }
        }
        else if (EVar5 == CutWithPaths) {
          local_788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_788.ArrayNum = 0;
          local_788.ArrayMax = 0;
          local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_798.ArrayNum = 0;
          local_798.ArrayMax = 0;
          local_7c0.Data = (FScriptContainerElement *)0x0;
          local_7b8 = 0;
          local_7b0.Data = (FScriptContainerElement *)0x0;
          local_7a8 = 0;
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_7c0,(int *)((longlong)&local_7b8 + 4));
          local_7b8 = CONCAT44(local_7b8._4_4_,iVar12 + 1);
          UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
                    ((TGeneralPolygon2<double> *)(local_7c0.Data + (longlong)iVar12 * 0x28),pTVar1);
          uVar19 = uVar27;
          if (0 < local_7f8.ArrayNum) {
            do {
              uVar22 = (uint)uVar19;
              uVar20 = uVar26;
              if ((int)uVar22 < local_7f8.ArrayNum) {
                uVar20 = ~uVar22 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              pTVar1 = (TGeneralPolygon2<double> *)
                       (local_7f8.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x28);
              uVar19 = uVar27;
              if (0 < (int)local_7b8) {
                do {
                  uVar29 = (uint)uVar19;
                  uVar20 = uVar26;
                  if ((int)uVar29 < (int)local_7b8) {
                    uVar20 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  uStack_540 = 1;
                  local_358._12_4_ = uStack_53c;
                  local_358.ArrayNum = 1;
                  uStack_530 = 1;
                  pTVar2 = (TGeneralPolygon2<double> *)
                           (local_7c0.Data + (longlong)(int)uVar29 * 0x28);
                  local_348._12_4_ = uStack_52c;
                  local_348.ArrayNum = 1;
                  local_548 = pTVar1;
                  local_538 = pTVar2;
                  local_358.DataPtr = pTVar1;
                  local_348.DataPtr = pTVar2;
                  bVar9 = UE::Geometry::PolygonsIntersection(&local_348,&local_358,&local_788);
                  if (!bVar9) {
LAB_149cc334b:
                    if (local_7c8->bQuiet == false) {
                      pFVar17 = FText::AsLocalizable_Advanced_LocText
                                          (&local_318,L"PCGPolygon2DOperation",
                                           L"OperationCutWithPathsFailed",
                                           L"Polygon operation (cut with paths) failed.");
                      PCGLog::LogWarningOnGraph(pFVar17,local_740);
                      if (local_318.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
                      }
                    }
                    goto LAB_149cc32da;
                  }
                  uStack_520 = 1;
                  local_338._12_4_ = uStack_51c;
                  local_338.ArrayNum = 1;
                  uStack_510 = 1;
                  local_328._12_4_ = uStack_50c;
                  local_328.ArrayNum = 1;
                  local_528 = pTVar1;
                  local_518 = pTVar2;
                  local_338.DataPtr = pTVar1;
                  local_328.DataPtr = pTVar2;
                  bVar9 = UE::Geometry::PolygonsDifference(&local_328,&local_338,&local_798);
                  if (!bVar9) goto LAB_149cc334b;
                  iVar12 = local_788.ArrayNum;
                  iVar11 = 0;
                  if (local_788.ArrayNum != 0) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x28,8,local_788.ArrayNum,&local_7b0,(int *)&local_7a8,
                                        (int *)((longlong)&local_7a8 + 4));
                    ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                              (local_7b0.Data + (longlong)iVar11 * 0x28,
                               (TGeneralPolygon2<double> *)local_788.AllocatorInstance.Data,iVar12);
                    iVar11 = local_788.ArrayNum;
                  }
                  iVar12 = local_798.ArrayNum;
                  if (local_798.ArrayNum != 0) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x28,8,local_798.ArrayNum,&local_7b0,(int *)&local_7a8,
                                        (int *)((longlong)&local_7a8 + 4));
                    ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                              (local_7b0.Data + (longlong)iVar11 * 0x28,
                               (TGeneralPolygon2<double> *)local_798.AllocatorInstance.Data,iVar12);
                    iVar11 = local_788.ArrayNum;
                  }
                  if ((longlong)local_788._8_8_ < 0) {
                    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                              ((TGeneralPolygon2<double> *)local_788.AllocatorInstance.Data,iVar11);
                    bVar9 = local_788.ArrayMax != 0;
                    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
                    if (bVar9) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x28,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
                    }
                  }
                  else {
                    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                              ((TGeneralPolygon2<double> *)local_788.AllocatorInstance.Data,iVar11);
                    local_788._8_8_ = local_788._8_8_ & 0xffffffff00000000;
                  }
                  if ((longlong)local_798._8_8_ < 0) {
                    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                              ((TGeneralPolygon2<double> *)local_798.AllocatorInstance.Data,
                               local_798.ArrayNum);
                    bVar9 = local_798.ArrayMax != 0;
                    local_798._8_8_ = (ulonglong)(uint)local_798.ArrayMax << 0x20;
                    if (bVar9) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x28,8,0,&local_798.AllocatorInstance,0,&local_798.ArrayMax);
                    }
                  }
                  else {
                    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                              ((TGeneralPolygon2<double> *)local_798.AllocatorInstance.Data,
                               local_798.ArrayNum);
                    local_798._8_8_ = local_798._8_8_ & 0xffffffff00000000;
                  }
                  uVar19 = (ulonglong)(uVar29 + 1);
                } while ((int)(uVar29 + 1) < (int)local_7b8);
              }
              DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                        ((TGeneralPolygon2<double> *)local_7c0.Data,(int)local_7b8);
              if ((TGeneralPolygon2<double> *)local_7c0.Data != (TGeneralPolygon2<double> *)0x0) {
                FMemory::Free(local_7c0.Data);
              }
              local_7c0.Data = local_7b0.Data;
              local_7b8 = local_7a8;
              local_7a8 = 0;
              local_7b0.Data = (FScriptContainerElement *)0x0;
              DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                        ((TGeneralPolygon2<double> *)0x0,0);
              uVar19 = (ulonglong)(uVar22 + 1);
              local_7a8 = local_7a8 & 0xffffffff00000000;
              pFVar33 = local_748;
            } while ((int)(uVar22 + 1) < local_7f8.ArrayNum);
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,local_820.ArrayNum
                    );
          if ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data !=
              (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_820.AllocatorInstance.Data);
          }
          iVar12 = local_7f8.ArrayNum;
          local_820.AllocatorInstance.Data = local_7c0.Data;
          local_820._8_8_ = local_7b8;
          local_508 = (TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data;
          local_7c0.Data = (FScriptContainerElement *)0x0;
          local_7b8 = 0;
          if ((local_7f8.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          local_2f8._12_4_ = uStack_64c;
          local_2f8.ArrayNum = iStack_650;
          iStack_500 = iVar12;
          local_308._12_4_ = uStack_4fc;
          local_308.ArrayNum = iVar12;
          local_308.DataPtr = local_508;
          local_2f8.DataPtr = local_658;
          `FPCGPolygon2DOperationElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                    (&local_628,&local_820,pFVar33,&local_2f8,&local_308);
LAB_149cc32da:
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_7b0.Data,(int)local_7a8);
          if ((TGeneralPolygon2<double> *)local_7b0.Data != (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_7b0.Data);
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_7c0.Data,(int)local_7b8);
          if ((TGeneralPolygon2<double> *)local_7c0.Data != (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_7c0.Data);
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_798.AllocatorInstance.Data,local_798.ArrayNum
                    );
          if ((TGeneralPolygon2<double> *)local_798.AllocatorInstance.Data !=
              (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_798.AllocatorInstance.Data);
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_788.AllocatorInstance.Data,local_788.ArrayNum
                    );
          if ((TGeneralPolygon2<double> *)local_788.AllocatorInstance.Data !=
              (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_788.AllocatorInstance.Data);
          }
        }
        else {
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_2e8,L"PCGPolygon2DOperation",L"InvalidOperation",
                               L"Invalid polygon operation.");
          PCGLog::LogErrorOnGraph(pFVar17,local_740);
          if (local_2e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
          }
        }
        local_7d0 = uVar23 + 1;
        uVar19 = (ulonglong)local_7d0;
        local_710 = (double)((longlong)local_710 + 4);
      } while ((int)local_7d0 < local_7e0.ArrayNum);
    }
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data,local_820.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_820.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_820.AllocatorInstance.Data);
  }
  local_140 = 0;
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.AllocatorInstance.Data);
  }
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)local_728.AllocatorInstance.Data,
             local_728.ArrayNum);
  if ((TArray<__int64,TSizedDefaultAllocator<32>_> *)local_728.AllocatorInstance.Data !=
      (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_728.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data,local_7f8.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_7f8.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_7f8.AllocatorInstance.Data);
  }
  if (local_758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data);
  }
  if (local_670.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.AllocatorInstance.Data);
  }
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)local_690.AllocatorInstance.Data,
             local_690.ArrayNum);
  if ((TArray<__int64,TSizedDefaultAllocator<32>_> *)local_690.AllocatorInstance.Data !=
      (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_690.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_7e0.AllocatorInstance.Data,local_7e0.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_7e0.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_7e0.AllocatorInstance.Data);
  }
  pFVar33 = local_718;
  DestructItems<FPCGTaggedData,int>(local_718,local_7a0);
  if (pFVar33 != (FPCGTaggedData *)0x0) {
    FMemory::Free(pFVar33);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_778.AllocatorInstance.Data,local_778.ArrayNum);
  if ((FPCGTaggedData *)local_778.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_778.AllocatorInstance.Data);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149cc4f00

EPCGElementExecutionLoopMode __thiscall
FPCGPolygon2DOperationElement::ExecutionLoopMode
          (FPCGPolygon2DOperationElement *this,UPCGSettings *param_1)

{
  char cVar1;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGPolygon2DOperationSettings::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      cVar1 = (char)param_1[1]._padding_;
      if ((cVar1 != '\0') && (cVar1 != '\x04')) {
        return SinglePrimaryPin;
      }
      return NotALoop;
    }
  }
  return NotALoop;
}

