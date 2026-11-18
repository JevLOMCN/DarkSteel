// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f0edc0

UClass * __cdecl UEnvQueryGenerator_PathingGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PathingGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_PathingGrid,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_PathingGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PathingGrid>,local_res8,
               UEnvQueryGenerator_SimpleGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton;
}

// UEnvQueryGenerator_PathingGrid @ 146f2ba10

UEnvQueryGenerator_PathingGrid * __thiscall
UEnvQueryGenerator_PathingGrid::UEnvQueryGenerator_PathingGrid
          (UEnvQueryGenerator_PathingGrid *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid
            ((UEnvQueryGenerator_SimpleGrid *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_PathingGrid__6B_;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->PathToItem)._padding_ = (longlong)pFVar1;
  (this->NavigationFilter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScanRangeMultiplier)._padding_ = (longlong)pFVar1;
  return this;
}

// UEnvQueryGenerator_PathingGrid @ 146f2bad0

UEnvQueryGenerator_PathingGrid * __thiscall
UEnvQueryGenerator_PathingGrid::UEnvQueryGenerator_PathingGrid
          (UEnvQueryGenerator_PathingGrid *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  FFieldClass *pFVar2;
  
  UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid
            ((UEnvQueryGenerator_SimpleGrid *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_PathingGrid__6B_;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem)._padding_ = 0;
  (this->PathToItem).DefaultValue = false;
  pFVar2 = FBoolProperty::StaticClass();
  (this->PathToItem)._padding_ = (longlong)pFVar2;
  (this->NavigationFilter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier).DefaultValue = 0.0;
  pFVar2 = FFloatProperty::StaticClass();
  (this->ScanRangeMultiplier)._padding_ = (longlong)pFVar2;
  lVar1 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  *(uint *)&this->_padding_ = (uint)lVar1 & 0xffffffe7 | 4;
  *(undefined4 *)&this->_padding_ = 0x447a0000;
  *(undefined4 *)&this->_padding_ = 0x42c80000;
  (this->PathToItem).DefaultValue = true;
  (this->ScanRangeMultiplier).DefaultValue = 1.5;
  return this;
}

// ~UEnvQueryGenerator_PathingGrid @ 146f2ec30

void __thiscall
UEnvQueryGenerator_PathingGrid::~UEnvQueryGenerator_PathingGrid
          (UEnvQueryGenerator_PathingGrid *this)

{
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PathToItem)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f58510

UClass * __cdecl UEnvQueryGenerator_PathingGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PathingGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_PathingGrid,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_PathingGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PathingGrid>,local_res8,
               UEnvQueryGenerator_SimpleGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton;
}

// ProjectAndFilterNavPoints @ 146f623c0

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

void __thiscall
UEnvQueryGenerator_PathingGrid::ProjectAndFilterNavPoints
          (UEnvQueryGenerator_PathingGrid *this,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_1,FEnvQueryInstance *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  UObject *pUVar16;
  FProperty *pFVar17;
  float *pfVar18;
  ARecastNavMesh *this_00;
  UClass *pUVar19;
  UClass *pUVar20;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  FNavigationQueryFilter *this_01;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ForElementType<FSetElementId> FVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined1 auStackY_258 [32];
  undefined1 local_218;
  undefined1 local_217 [3];
  uint local_214;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> local_210;
  longlong local_200;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1f8;
  uint local_1e8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1e0;
  UEnvQueryGenerator_PathingGrid *local_1d0;
  ARecastNavMesh *local_1c8;
  longlong local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  FString local_1b0;
  TSharedPtr<FNavigationQueryFilter,1> local_198;
  UClass *local_188;
  FName local_180;
  FName local_178;
  FString local_170;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_130;
  undefined8 local_120;
  undefined8 local_118;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_108;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_f8;
  FRecastDebugPathfindingData local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1d0 = this;
  UEnvQueryGenerator_ProjectedPoints::ProjectAndFilterNavPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1,param_2);
  pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_2->_padding_ + 4));
  lVar34 = param_2->_padding_;
  plVar4 = (longlong *)(this->PathToItem)._padding_;
  if (plVar4 != (longlong *)0x0) {
    if (pUVar16 == (UObject *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      (this->PathToItem)._padding_ = 0;
      (**(code **)(*plVar4 + 0x2b0))(plVar4,pUVar16,(int)lVar34);
      FVar5 = (FName)(this->PathToItem)._padding_;
      if (FVar5 != (FName)0x0) {
        pFVar17 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->PathToItem)._padding_ + 0x10),FVar5);
        if ((pFVar17 == (FProperty *)0x0) ||
           (cVar14 = (**(code **)((this->PathToItem)._padding_ + 8))(&this->PathToItem),
           cVar14 == '\0')) {
          local_218 = 0;
          bVar13 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_218);
          if (!bVar13) goto LAB_146f624b5;
        }
        (this->PathToItem)._padding_ = (longlong)pFVar17;
      }
    }
  }
LAB_146f624b5:
  plVar4 = (longlong *)(this->ScanRangeMultiplier)._padding_;
  if (plVar4 != (longlong *)0x0) {
    if (pUVar16 == (UObject *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      (this->ScanRangeMultiplier)._padding_ = 0;
      (**(code **)(*plVar4 + 0x2b0))(plVar4,pUVar16);
      FVar5 = (FName)(this->ScanRangeMultiplier)._padding_;
      if (FVar5 != (FName)0x0) {
        pFVar17 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->ScanRangeMultiplier)._padding_ + 0x10),FVar5);
        if ((pFVar17 == (FProperty *)0x0) ||
           (cVar14 = (**(code **)((this->ScanRangeMultiplier)._padding_ + 8))
                               (&this->ScanRangeMultiplier,pFVar17), cVar14 == '\0')) {
          local_217[0] = 0;
          bVar13 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_217);
          if (!bVar13) goto LAB_146f62557;
        }
        (this->ScanRangeMultiplier)._padding_ = (longlong)pFVar17;
      }
    }
  }
LAB_146f62557:
  pFVar17 = (FProperty *)(this->PathToItem)._padding_;
  if (pFVar17 != (FProperty *)0x0) {
    FProperty::ContainerUObjectPtrToValuePtrInternal
              (pFVar17,(UObject *)(this->PathToItem)._padding_,0);
  }
  pFVar17 = (FProperty *)(this->ScanRangeMultiplier)._padding_;
  if ((pFVar17 == (FProperty *)0x0) ||
     (pfVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar17,(UObject *)(this->ScanRangeMultiplier)._padding_,0),
     pfVar18 == (float *)0x0)) {
    fVar39 = (this->ScanRangeMultiplier).DefaultValue;
  }
  else {
    fVar39 = *pfVar18;
  }
  this_00 = (ARecastNavMesh *)FEQSHelpers::FindNavigationDataForQuery(param_2);
  if (this_00 == (ARecastNavMesh *)0x0) {
    return;
  }
  local_1c8 = this_00;
  pUVar19 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
  iVar35 = (int)pUVar19->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar35) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar35 * 8)
      != &pUVar19->_padding_) {
    return;
  }
  if (pUVar16 == (UObject *)0x0) {
    return;
  }
  lVar34 = this->_padding_;
  pUVar19 = (UClass *)0x0;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  if ((lVar34 != 0) && (pUVar20 = UEnvQueryContext::StaticClass(), pUVar20 != (UClass *)0x0)) {
    iVar35 = (int)pUVar20->_padding_;
    if ((*(int *)(lVar34 + 0x38) < iVar35) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar35 * 8) !=
        &pUVar20->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      pUVar19 = (UClass *)this->_padding_;
    }
  }
  FEnvQueryInstance::PrepareContext(param_2,pUVar19,&local_1f8);
  pUVar19 = (this->NavigationFilter).Class.field0_0x0.DebugPtr;
  if ((pUVar19 == (UClass *)0x0) ||
     (pUVar20 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), pUVar20 == (UClass *)0x0)) {
LAB_146f626d2:
    local_1b8 = ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController;
    this_01 = ((TSharedPtr<FNavigationQueryFilter,1> *)&this_00->_padding_)->Object;
    if (local_1b8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118 = 0;
    local_120 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_1c8 = this_00;
  }
  else {
    iVar35 = (int)pUVar20->_padding_;
    if (((int)pUVar19->_padding_ < iVar35) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar35 * 8) !=
        &pUVar20->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((!bVar13) ||
       (pUVar19 = (this->NavigationFilter).Class.field0_0x0.DebugPtr, pUVar19 == (UClass *)0x0))
    goto LAB_146f626d2;
    local_188 = pUVar19;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    pTVar21 = UNavigationQueryFilter::GetQueryFilter
                        (&local_130,(ANavigationData *)this_00,pUVar16,
                         (TSubclassOf<UNavigationQueryFilter>)&local_188);
    local_1b8 = (pTVar21->SharedReferenceCount).ReferenceController;
    this_01 = pTVar21->Object;
    (pTVar21->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar21->Object = (FNavigationQueryFilter *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
  }
  if (this_01 != (FNavigationQueryFilter *)0x0) {
    FNavigationQueryFilter::GetCopy(this_01,&local_198);
    if (local_198.Object != (FNavigationQueryFilter *)0x0) {
      uVar28 = 0;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148._s_0.X = (double)*(float *)&this->_padding_;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      local_214 = 0;
      local_148._s_0.Z =
           (double)((*(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_) *
                   __real_3f000000);
      local_148._s_0.Y = local_148._s_0.X;
      if (0 < local_1f8.ArrayNum) {
        local_1c0 = 0;
        uVar30 = uVar28;
        while( true ) {
          lVar34 = local_1c0;
          uVar23 = 0;
          if (param_1->ArrayNum == 0) break;
          uVar37 = 0;
          uVar38 = 0;
          iVar35 = (int)uVar28;
          if (0 < param_1->ArrayNum) {
            uVar25 = (uint)uVar30;
            uVar28 = uVar23;
            do {
              uVar27 = 0;
              if ((int)uVar30 < local_1f8.ArrayNum) {
                uVar27 = ~uVar25 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar12.Data = local_1f8.AllocatorInstance.Data;
              uVar24 = (uint)uVar23;
              uVar27 = 0;
              if ((int)uVar24 < param_1->ArrayNum) {
                uVar27 = ~uVar24 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar6 = (param_1->AllocatorInstance).Data;
              uVar23 = (ulonglong)(uVar24 + 1);
              lVar26 = uVar28 + 8;
              pFVar22 = pFVar6 + uVar28;
              lVar33 = uVar28 + 0x10;
              uVar30 = (ulonglong)local_214;
              uVar28 = uVar28 + 0x20;
              dVar36 = (*(double *)(FVar12.Data + lVar34 * 0x18 + 8) - *(double *)(pFVar6 + lVar26))
                       * (*(double *)(FVar12.Data + lVar34 * 0x18 + 8) -
                         *(double *)(pFVar6 + lVar26)) +
                       (*(double *)(FVar12.Data + lVar34 * 0x18) - *(double *)pFVar22) *
                       (*(double *)(FVar12.Data + lVar34 * 0x18) - *(double *)pFVar22) +
                       (*(double *)(FVar12.Data + lVar34 * 0x18 + 0x10) -
                       *(double *)(pFVar6 + lVar33)) *
                       (*(double *)(FVar12.Data + lVar34 * 0x18 + 0x10) -
                       *(double *)(pFVar6 + lVar33));
              if (dVar36 <= (double)CONCAT44(uVar38,uVar37)) {
                dVar36 = (double)CONCAT44(uVar38,uVar37);
              }
              uVar37 = SUB84(dVar36,0);
              uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
            } while ((int)(uVar24 + 1) < param_1->ArrayNum);
            this = local_1d0;
            this_00 = local_1c8;
            iVar35 = local_1e0.ArrayMax;
          }
          uVar25 = (uint)uVar30;
          local_1e0._8_8_ = local_1e0._8_8_ & 0xffffffff00000000;
          if ((iVar35 < 0) && (iVar35 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_1e0.AllocatorInstance,0,&local_1e0.ArrayMax);
          }
          local_108.Object = local_198.Object;
          local_108.SharedReferenceCount.ReferenceController =
               local_198.SharedReferenceCount.ReferenceController;
          local_e8.Nodes.Elements._0_8_ = 0;
          local_e8.Nodes.Elements._8_8_ = 0;
          local_e8.Nodes.Elements._32_8_ = 0;
          local_e8.Nodes.Elements._40_4_ = 0;
          local_e8.Nodes.Elements._44_4_ = 0x80;
          local_e8.Nodes.Elements._48_4_ = 0xffffffff;
          local_e8.Nodes.Elements._52_4_ = 0;
          local_e8.Nodes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_e8.Nodes.HashSize = 0;
          local_e8.BestNode.Index = -1;
          local_e8.Flags = '\0';
          if (local_198.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          uVar27 = ~uVar25 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar25 < local_1f8.ArrayNum) {
            uVar24 = uVar27;
          }
          local_1e8 = uVar27;
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          ARecastNavMesh::GetPolysWithinPathingDistance
                    (this_00,(TVector<double> *)
                             (local_1f8.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x18),
                     SQRT((double)CONCAT44(uVar38,uVar37)) * (double)fVar39,&local_1e0,&local_108,
                     (UObject *)0x0,&local_e8);
          iVar35 = param_1->ArrayNum + -1;
          if (-1 < iVar35) {
            lVar26 = (longlong)iVar35;
            lVar33 = lVar26 << 5;
            do {
              local_200 = lVar26;
              if ((param_1->ArrayNum <= iVar35) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar28 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar33 + 0x18);
              if (local_e8.Nodes.Elements._8_4_ != local_e8.Nodes.Elements._52_4_) {
                FVar31 = (ForElementType<FSetElementId>)&local_e8.Nodes.Hash;
                if (local_e8.Nodes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar31 = local_e8.Nodes.Hash.SecondaryData;
                }
                for (iVar15 = *(int *)((longlong)FVar31 +
                                      ((uVar28 >> 0x20) * 0x17 + uVar28 &
                                      (ulonglong)(local_e8.Nodes.HashSize - 1)) * 4); iVar15 != -1;
                    iVar15 = *(int *)((longlong)iVar15 * 0xa8 + 0xa0 + local_e8.Nodes.Elements._0_8_
                                     )) {
                  if (*(ulonglong *)((longlong)iVar15 * 0xa8 + local_e8.Nodes.Elements._0_8_) ==
                      uVar28) {
                    if ((iVar15 != -1) &&
                       ((longlong)iVar15 * 0xa8 + local_e8.Nodes.Elements._0_8_ != 0))
                    goto LAB_146f62f7b;
                    break;
                  }
                }
              }
              if ((param_1->ArrayNum <= iVar35) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar8 = local_210._8_8_;
              if (*(longlong *)((param_1->AllocatorInstance).Data + lVar33 + 0x18) != 0) {
                iVar15 = local_210.ArrayMax;
                local_210._8_8_ = (ulonglong)(uint)local_210.ArrayMax << 0x20;
                if (((longlong)uVar8 < 0) && (iVar15 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,0,&local_210.AllocatorInstance,0,&local_210.ArrayMax);
                }
                uVar25 = 0;
                if ((int)uVar30 < local_1f8.ArrayNum) {
                  uVar25 = uVar27;
                }
                if ((uVar25 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                dVar36 = *(double *)(local_1f8.AllocatorInstance.Data + local_1c0 * 0x18 + 0x10);
                if ((param_1->ArrayNum <= iVar35) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                dVar2 = *(double *)((param_1->AllocatorInstance).Data + lVar33 + 8);
                if ((param_1->ArrayNum <= iVar35) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_160._s_0.X =
                     (double)*(undefined8 *)((param_1->AllocatorInstance).Data + lVar33);
                local_f8.Object = local_198.Object;
                local_f8.SharedReferenceCount.ReferenceController =
                     local_198.SharedReferenceCount.ReferenceController;
                if (local_198.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_198.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_160._s_0.Y = dVar2;
                local_160._s_0.Z = dVar36;
                ARecastNavMesh::ProjectPointMulti
                          (local_1c8,(TVector<double> *)&local_160._s_0,&local_210,
                           (TVector<double> *)&local_148._s_0,
                           dVar36 - (double)*(float *)&this->_padding_,
                           (double)*(float *)((longlong)&this->_padding_ + 4) + dVar36,&local_f8,
                           (UObject *)0x0);
                uVar25 = 0;
                lVar34 = 0;
                lVar26 = local_200;
                if (0 < local_210.ArrayNum) {
                  lVar29 = 0;
                  lVar32 = local_e8.Nodes.Elements._0_8_;
                  iVar15 = local_210.ArrayNum;
                  do {
                    uVar27 = 0;
                    if ((int)uVar25 < iVar15) {
                      uVar27 = ~uVar25 >> 0x1f;
                    }
                    if (uVar27 == 0) {
                      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar13) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      lVar32 = local_e8.Nodes.Elements._0_8_;
                      iVar15 = local_210.ArrayNum;
                    }
                    uVar28 = *(ulonglong *)(local_210.AllocatorInstance.Data + lVar29 + 0x18);
                    if (local_e8.Nodes.Elements._8_4_ != local_e8.Nodes.Elements._52_4_) {
                      FVar31 = (ForElementType<FSetElementId>)&local_e8.Nodes.Hash;
                      if (local_e8.Nodes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar31 = local_e8.Nodes.Hash.SecondaryData;
                      }
                      for (iVar3 = *(int *)((longlong)FVar31 +
                                           ((uVar28 >> 0x20) * 0x17 + uVar28 &
                                           (ulonglong)(local_e8.Nodes.HashSize - 1)) * 4);
                          iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0xa8 + 0xa0 + lVar32)) {
                        if (*(ulonglong *)((longlong)iVar3 * 0xa8 + lVar32) == uVar28) {
                          if (iVar3 != -1) {
                            lVar26 = (longlong)iVar3 * 0xa8 + lVar32;
                            goto LAB_146f62ed3;
                          }
                          break;
                        }
                      }
                    }
                    lVar26 = 0;
LAB_146f62ed3:
                    if (lVar26 != 0) {
                      uVar27 = 0;
                      if ((int)uVar25 < iVar15) {
                        uVar27 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar8 = *(undefined8 *)(local_210.AllocatorInstance.Data + lVar34 * 0x20);
                      uVar9 = *(undefined8 *)(local_210.AllocatorInstance.Data + lVar34 * 0x20 + 8);
                      uVar10 = *(undefined8 *)
                                (local_210.AllocatorInstance.Data + lVar34 * 0x20 + 0x10);
                      uVar11 = *(undefined8 *)
                                (local_210.AllocatorInstance.Data + lVar34 * 0x20 + 0x10 + 8);
                      if ((param_1->ArrayNum <= iVar35) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      this = local_1d0;
                      pFVar6 = (param_1->AllocatorInstance).Data;
                      pFVar22 = pFVar6 + lVar33;
                      *(undefined8 *)pFVar22 = uVar8;
                      *(undefined8 *)(pFVar22 + 8) = uVar9;
                      pFVar6 = pFVar6 + lVar33 + 0x10;
                      *(undefined8 *)pFVar6 = uVar10;
                      *(undefined8 *)(pFVar6 + 8) = uVar11;
                      fVar1 = *(float *)((longlong)&local_1d0->_padding_ + 4);
                      if ((param_1->ArrayNum <= iVar35) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pFVar22 = (param_1->AllocatorInstance).Data;
                      *(double *)(pFVar22 + lVar33 + 0x10) =
                           (double)fVar1 + *(double *)(pFVar22 + lVar33 + 0x10);
                      lVar26 = local_200;
                      goto LAB_146f62f7b;
                    }
                    uVar25 = uVar25 + 1;
                    lVar34 = lVar34 + 1;
                    lVar29 = lVar29 + 0x20;
                    lVar26 = local_200;
                  } while ((int)uVar25 < iVar15);
                }
              }
              if ((param_1->ArrayNum <= iVar35) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar22 = (param_1->AllocatorInstance).Data + lVar33;
              iVar15 = (param_1->ArrayNum - iVar35) + -1;
              if (iVar15 != 0) {
                memmove(pFVar22,pFVar22 + 0x20,(longlong)iVar15 << 5);
              }
              param_1->ArrayNum = param_1->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
              this = local_1d0;
LAB_146f62f7b:
              uVar30 = (ulonglong)local_214;
              lVar26 = lVar26 + -1;
              lVar33 = lVar33 + -0x20;
              iVar35 = iVar35 + -1;
              lVar34 = local_1c0;
              uVar27 = local_1e8;
              uVar25 = local_214;
              local_200 = lVar26;
            } while (-1 < iVar35);
          }
          local_e8.Nodes.HashSize = 0;
          if (local_e8.Nodes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Nodes.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_e8);
          local_214 = uVar25 + 1;
          uVar30 = (ulonglong)local_214;
          local_1c0 = lVar34 + 1;
          if (local_1f8.ArrayNum <= (int)local_214) break;
          uVar28 = (ulonglong)local_1e0._8_8_ >> 0x20;
          this_00 = local_1c8;
        }
      }
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    goto LAB_146f6314b;
  }
  if ((byte)LogEQS._0_1_ < 2) goto LAB_146f6314b;
  pUVar19 = (this->NavigationFilter).Class.field0_0x0.DebugPtr;
  if ((pUVar19 == (UClass *)0x0) ||
     (pUVar20 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), pUVar20 == (UClass *)0x0)) {
LAB_146f62775:
    ::FString::FString(&local_1b0,L"None");
  }
  else {
    iVar35 = (int)pUVar20->_padding_;
    if (((int)pUVar19->_padding_ < iVar35) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar35 * 8) !=
        &pUVar20->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((!bVar13) ||
       (pUVar19 = (this->NavigationFilter).Class.field0_0x0.DebugPtr, pUVar19 == (UClass *)0x0))
    goto LAB_146f62775;
    local_180 = (FName)pUVar19->_padding_;
    ::FName::ToString(&local_180,&local_1b0);
  }
  local_178 = (FName)this_00->_padding_;
  ::FName::ToString(&local_178,&local_170);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
LAB_146f6314b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryGenerator_PathingGrid @ 146f76d50

void __cdecl
UEnvQueryGenerator_PathingGrid::StaticRegisterNativesUEnvQueryGenerator_PathingGrid(void)

{
  return;
}

