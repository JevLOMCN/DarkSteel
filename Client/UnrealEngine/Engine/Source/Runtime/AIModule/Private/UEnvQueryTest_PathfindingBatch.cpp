// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f103a0

UClass * __cdecl UEnvQueryTest_PathfindingBatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_PathfindingBatch",
               &Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_PathfindingBatch,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_PathfindingBatch>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_PathfindingBatch>,local_res8,
               UEnvQueryTest_Pathfinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton;
}

// UEnvQueryTest_PathfindingBatch @ 146f2d500

UEnvQueryTest_PathfindingBatch * __thiscall
UEnvQueryTest_PathfindingBatch::UEnvQueryTest_PathfindingBatch
          (UEnvQueryTest_PathfindingBatch *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding((UEnvQueryTest_Pathfinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_PathfindingBatch__6B_;
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

// UEnvQueryTest_PathfindingBatch @ 146f2d570

UEnvQueryTest_PathfindingBatch * __thiscall
UEnvQueryTest_PathfindingBatch::UEnvQueryTest_PathfindingBatch
          (UEnvQueryTest_PathfindingBatch *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding((UEnvQueryTest_Pathfinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_PathfindingBatch__6B_;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier)._padding_ = 0;
  (this->ScanRangeMultiplier).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ScanRangeMultiplier)._padding_ = (longlong)pFVar1;
  (this->ScanRangeMultiplier).DefaultValue = 1.5;
  return this;
}

// ~UEnvQueryTest_PathfindingBatch @ 146f2f230

void __thiscall
UEnvQueryTest_PathfindingBatch::~UEnvQueryTest_PathfindingBatch
          (UEnvQueryTest_PathfindingBatch *this)

{
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionTitle @ 146f55350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryTest_PathfindingBatch::GetDescriptionTitle
          (UEnvQueryTest_PathfindingBatch *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = UEnvQueryTest_Pathfinding::GetDescriptionTitle
                     ((UEnvQueryTest_Pathfinding *)this,&local_28);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"EnvQueryGenerator",L"PathfindingBatch",L"{0} [batch]");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f593d0

UClass * __cdecl UEnvQueryTest_PathfindingBatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_PathfindingBatch",
               &Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_PathfindingBatch,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_PathfindingBatch>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_PathfindingBatch>,local_res8,
               UEnvQueryTest_Pathfinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton;
}

// RunTest @ 146f6f170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UEnvQueryTest_PathfindingBatch::RunTest
          (UEnvQueryTest_PathfindingBatch *this,FEnvQueryInstance *param_1)

{
  longlong *plVar1;
  FName FVar2;
  UWorld *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  UEnvQueryTest_PathfindingBatch *pUVar8;
  UObject *pUVar9;
  ARecastNavMesh *pAVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  UObject *pUVar17;
  FProperty *pFVar18;
  undefined1 *puVar19;
  char *pcVar20;
  float *pfVar21;
  UClass *pUVar22;
  ARecastNavMesh *pAVar23;
  UClass *pUVar24;
  UClass *pUVar25;
  TSharedPtr<FNavigationQueryFilter_const_,1> *this_00;
  FNavigationQueryFilter *pFVar26;
  TSharedPtr<FNavigationQueryFilter,1> *pTVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  FAIDataProviderFloatValue *pFVar33;
  UNavigationSystemV1 *pUVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  FScriptContainerElement *pFVar38;
  longlong lVar39;
  ulonglong uVar40;
  UEnvQueryTest_PathfindingBatch *this_01;
  FRecastDebugPathfindingData *pFVar41;
  FEnvQueryInstance *this_02;
  ulonglong uVar42;
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_358 [32];
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined1 local_301;
  ForAnyElementType local_300;
  int local_2f8;
  int local_2f4;
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  UEnvQueryTest_PathfindingBatch *local_2e0;
  ForAnyElementType local_2d8;
  int local_2d0 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2c8;
  FEnvQueryInstance *local_2b8;
  ARecastNavMesh *local_2b0;
  FProperty *local_2a8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_2a0;
  undefined8 local_290;
  TReferenceControllerBase<1> *local_288;
  FItemIterator local_280;
  UObject *local_258;
  FItemIterator local_250;
  LARGE_INTEGER local_228;
  UObject *local_220;
  TVector<double>_u_0 local_218;
  LARGE_INTEGER local_200;
  UClass *local_1f8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1f0;
  FProperty *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1d0;
  code *local_1c0 [9];
  undefined1 local_178;
  undefined4 uStack_177;
  undefined2 uStack_173;
  undefined1 uStack_171;
  TSharedPtr<FNavigationQueryFilter,1> local_170;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_160;
  TSharedPtr<FNavigationQueryFilter,1> local_150;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2e0 = this;
  local_2b8 = param_1;
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  plVar1 = (longlong *)this->_padding_;
  lVar39 = param_1->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17,(int)lVar39);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar18 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar18 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_306 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_306);
          if (!bVar11) goto LAB_146f6f269;
        }
        this->_padding_ = (longlong)pFVar18;
      }
    }
  }
LAB_146f6f269:
  lVar39 = param_1->_padding_;
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17,(int)lVar39);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar18 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar18 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_305 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_305);
          if (!bVar11) goto LAB_146f6f30d;
        }
        this->_padding_ = (longlong)pFVar18;
      }
    }
  }
LAB_146f6f30d:
  lVar39 = param_1->_padding_;
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17,(int)lVar39);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar18 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar18 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_304 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_304);
          if (!bVar11) goto LAB_146f6f3b6;
        }
        this->_padding_ = (longlong)pFVar18;
      }
    }
  }
LAB_146f6f3b6:
  plVar1 = (longlong *)this->_padding_;
  lVar39 = local_2b8->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17,(int)lVar39);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar18 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar18 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_303 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_303);
          if (!bVar11) goto LAB_146f6f466;
        }
        this->_padding_ = (longlong)pFVar18;
      }
    }
  }
LAB_146f6f466:
  lVar39 = local_2b8->_padding_;
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17,(int)lVar39);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar18 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar18 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar12 == '\0')) {
          local_302 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_302);
          if (!bVar11) goto LAB_146f6f50c;
        }
        this->_padding_ = (longlong)pFVar18;
      }
    }
  }
LAB_146f6f50c:
  pUVar8 = local_2e0;
  pFVar33 = &local_2e0->ScanRangeMultiplier;
  plVar1 = (longlong *)(local_2e0->ScanRangeMultiplier)._padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar17 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      (local_2e0->ScanRangeMultiplier)._padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar17);
      FVar2 = (FName)(pUVar8->ScanRangeMultiplier)._padding_;
      if (FVar2 != (FName)0x0) {
        local_2a8 = UStruct::FindPropertyByName
                              (*(UStruct **)((pUVar8->ScanRangeMultiplier)._padding_ + 0x10),FVar2);
        if ((local_2a8 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(pFVar33->_padding_ + 8))(pFVar33,local_2a8), cVar12 == '\0')) {
          local_301 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_301);
          if (!bVar11) goto LAB_146f6f5c3;
        }
        (pUVar8->ScanRangeMultiplier)._padding_ = (longlong)local_2a8;
      }
    }
  }
LAB_146f6f5c3:
  if (((FProperty *)local_2e0->_padding_ == (FProperty *)0x0) ||
     (puVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)local_2e0->_padding_,(UObject *)this->_padding_,0),
     puVar19 == (undefined1 *)0x0)) {
    uVar13 = (undefined1)local_2e0->_padding_;
  }
  else {
    uVar13 = *puVar19;
  }
  this_01 = local_2e0;
  if (((FProperty *)local_2e0->_padding_ == (FProperty *)0x0) ||
     (pcVar20 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)local_2e0->_padding_,(UObject *)this->_padding_,0),
     pcVar20 == (char *)0x0)) {
    cVar12 = (char)this_01->_padding_;
  }
  else {
    cVar12 = *pcVar20;
  }
  if (((FProperty *)this_01->_padding_ == (FProperty *)0x0) ||
     (pcVar20 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this_01->_padding_,(UObject *)this->_padding_,0),
     pcVar20 == (char *)0x0)) {
    cVar14 = (char)this_01->_padding_;
  }
  else {
    cVar14 = *pcVar20;
  }
  if (((FProperty *)this_01->_padding_ == (FProperty *)0x0) ||
     (pfVar21 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this_01->_padding_,(UObject *)this->_padding_,0),
     pfVar21 == (float *)0x0)) {
    fVar48 = *(float *)&this_01->_padding_;
  }
  else {
    fVar48 = *pfVar21;
  }
  if (((FProperty *)this_01->_padding_ == (FProperty *)0x0) ||
     (pfVar21 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this_01->_padding_,(UObject *)this->_padding_,0),
     pfVar21 == (float *)0x0)) {
    fVar47 = *(float *)&this_01->_padding_;
  }
  else {
    fVar47 = *pfVar21;
  }
  pFVar18 = (FProperty *)(this_01->ScanRangeMultiplier)._padding_;
  if ((pFVar18 == (FProperty *)0x0) ||
     (pfVar21 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar18,(UObject *)(pUVar8->ScanRangeMultiplier)._padding_,0),
     pfVar21 == (float *)0x0)) {
    fVar46 = (this_01->ScanRangeMultiplier).DefaultValue;
  }
  else {
    fVar46 = *pfVar21;
  }
  this_02 = local_2b8;
  pUVar3 = (local_2b8->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar34 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar34 == (UNavigationSystemV1 *)0x0) {
LAB_146f6f73e:
    pUVar34 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar22 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar15 = (int)pUVar22->_padding_;
    if ((*(int *)(*(longlong *)&pUVar34->field_0x10 + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar34->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar22->_padding_)) goto LAB_146f6f73e;
  }
  pUVar22 = (UClass *)0x0;
  if (pUVar34 == (UNavigationSystemV1 *)0x0) {
    return;
  }
  if (pUVar17 == (UObject *)0x0) {
    return;
  }
  pAVar23 = (ARecastNavMesh *)
            UEnvQueryTest_Pathfinding::FindNavigationData
                      ((UEnvQueryTest_Pathfinding *)this_01,pUVar34,pUVar17);
  if (pAVar23 == (ARecastNavMesh *)0x0) {
    return;
  }
  local_2b0 = pAVar23;
  pUVar24 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
  iVar15 = (int)pUVar24->_padding_;
  if (*(int *)(pAVar23->_padding_ + 0x38) < iVar15) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar23->_padding_ + 0x30) + (longlong)iVar15 * 8)
      != &pUVar24->_padding_) {
    return;
  }
  lVar39 = this_01->_padding_;
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 0;
  local_2c8.ArrayMax = 0;
  pUVar24 = pUVar22;
  if ((lVar39 != 0) && (pUVar25 = UEnvQueryContext::StaticClass(), pUVar25 != (UClass *)0x0)) {
    iVar15 = (int)pUVar25->_padding_;
    if ((*(int *)(lVar39 + 0x38) < iVar15) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar39 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar25->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      pUVar24 = (UClass *)this_01->_padding_;
    }
  }
  bVar11 = FEnvQueryInstance::PrepareContext(this_02,pUVar24,&local_2c8);
  if (!bVar11) goto LAB_146f70668;
  iVar15 = local_2c8.ArrayNum;
  uVar35 = local_2c8._8_8_ & 0xffffffff;
  local_290 = 0;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8 = 0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f4 = 0;
  if (local_2c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar35);
  }
  local_2f8 = 0;
  if ((local_2c8.ArrayNum != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_2c8.ArrayNum,&local_300,0,&local_2f4), pAVar10 = pAVar23, 0 < iVar15)) {
    do {
      local_2b0 = pAVar10;
      if ((local_300.Data <= (FScriptContainerElement *)&local_290) &&
         (((FScriptContainerElement *)&local_290 < local_300.Data + (longlong)local_2f4 * 8 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_2f8 == local_2f4) {
        local_2f8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_300,&local_2f4);
      }
      iVar15 = local_2f8 + 1;
      *(undefined8 *)(local_300.Data + (longlong)local_2f8 * 8) = local_290;
      uVar35 = uVar35 - 1;
      local_2f8 = iVar15;
      pAVar10 = local_2b0;
    } while (uVar35 != 0);
  }
  (**(code **)(this_01->_padding_ + 0x2d8))(this_01,&local_258,this_02);
  pUVar9 = local_258;
  if ((local_258 == (UObject *)0x0) ||
     (pUVar24 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), pUVar24 == (UClass *)0x0)) {
LAB_146f6fa0d:
    pTVar4 = ((FSharedReferencer<1> *)&pAVar23->_padding_)->ReferenceController;
    local_1f0.Object = ((TSharedPtr<FNavigationQueryFilter,1> *)&pAVar23->_padding_)->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0.SharedReferenceCount.ReferenceController = pTVar4;
    pFVar26 = TSharedPtr<FNavigationQueryFilter_const_,1>::operator->(&local_1f0);
    pTVar27 = FNavigationQueryFilter::GetCopy(pFVar26,&local_150);
    local_288 = (pTVar27->SharedReferenceCount).ReferenceController;
    pFVar18 = (FProperty *)pTVar27->Object;
    (pTVar27->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar27->Object = (FNavigationQueryFilter *)0x0;
    local_2a8 = pFVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    local_2b0 = pAVar23;
  }
  else {
    iVar15 = (int)pUVar24->_padding_;
    if ((*(int *)&pUVar9[1].field_0x10 < iVar15) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar9[1].field_0x8 + (longlong)iVar15 * 8) !=
        &pUVar24->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((!bVar11) || (local_258 == (UObject *)0x0)) goto LAB_146f6fa0d;
    local_220 = local_258;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_258);
    }
    this_00 = UNavigationQueryFilter::GetQueryFilter
                        (&local_160,(ANavigationData *)pAVar23,pUVar17,
                         (TSubclassOf<UNavigationQueryFilter>)&local_220);
    pFVar26 = TSharedPtr<FNavigationQueryFilter_const_,1>::operator->(this_00);
    pTVar27 = FNavigationQueryFilter::GetCopy(pFVar26,&local_170);
    local_288 = (pTVar27->SharedReferenceCount).ReferenceController;
    pFVar18 = (FProperty *)pTVar27->Object;
    (pTVar27->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar27->Object = (FNavigationQueryFilter *)0x0;
    local_2a8 = pFVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
  }
  if ((pFVar18 == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar18->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)pFVar18->_padding_ + 0x38))
            ((longlong *)pFVar18->_padding_,cVar12 == '\0');
  if ((pFVar18 == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (int)this_02->_padding_;
  local_1f8 = (UClass *)(pFVar18->_padding_ + 8);
  if (pFVar18->_padding_ == 0) {
    local_1f8 = pUVar22;
  }
  local_1e0 = pFVar18;
  if (0 < iVar15) {
    lVar39 = 0;
    do {
      uVar30 = 0;
      uVar31 = (uint)pUVar22;
      uVar32 = 0;
      if ((int)uVar31 < iVar15) {
        uVar32 = ~uVar31 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar32 = *(uint *)(lVar39 + 4 + this_02->_padding_);
      if (((uVar32 >> 0x1e & 1) == 0) && (-1 < (int)uVar32)) {
        UEnvQueryTest::GetItemLocation
                  ((UEnvQueryTest *)this_01,(TVector<double> *)&local_218._s_0,this_02,uVar31);
        uStack_177 = 0;
        uStack_173 = 0;
        uStack_171 = 0;
        local_128 = local_218._s_0.X;
        dStack_120 = local_218._s_0.Y;
        local_b8 = local_b8 & 0xfffffffc | 4;
        local_178 = 0;
        local_e0 = 0;
        local_118 = local_218._s_0.Z;
        local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dStack_c0 = 0.0;
        local_1c0[3] = (code *)0x0;
        local_1c0[4] = (code *)0x0;
        local_1c0[5] = (code *)0x0;
        local_1c0[6] = (code *)0x0;
        local_1c0[7] = (code *)0x0;
        local_1c0[8] = (code *)0x0;
        dStack_110 = 0.0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        if ((local_2f0.Data <= (FScriptContainerElement *)&local_128) &&
           (((FScriptContainerElement *)&local_128 <
             local_2f0.Data + (longlong)local_2e8._4_4_ * 0x78 &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = (int)local_2e8;
        if ((int)local_2e8 == local_2e8._4_4_) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&local_2f0,(int *)((longlong)&local_2e8 + 4));
        }
        local_2e8 = CONCAT44(local_2e8._4_4_,iVar15 + 1);
        lVar28 = (longlong)iVar15 * 0x78;
        *(double *)(local_2f0.Data + lVar28) = local_128;
        *(double *)(local_2f0.Data + lVar28 + 8) = dStack_120;
        *(double *)(local_2f0.Data + lVar28 + 0x10) = local_118;
        *(double *)(local_2f0.Data + lVar28 + 0x10 + 8) = dStack_110;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x20) = uStack_108;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x20 + 8) = uStack_100;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x30) = uStack_f8;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x30 + 8) = local_f0;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x40) = uStack_e8;
        *(undefined8 *)(local_2f0.Data + lVar28 + 0x40 + 8) = local_e0;
        *(double *)(local_2f0.Data + lVar28 + 0x50) = local_d8;
        *(double *)(local_2f0.Data + lVar28 + 0x50 + 8) = dStack_d0;
        *(double *)(local_2f0.Data + lVar28 + 0x60) = local_c8;
        *(double *)(local_2f0.Data + lVar28 + 0x60 + 8) = dStack_c0;
        *(ulonglong *)(local_2f0.Data + lVar28 + 0x70) = CONCAT44(uStack_b4,local_b8);
        if (0 < local_2c8.ArrayNum) {
          lVar36 = 0;
          lVar28 = lVar36;
          do {
            uVar37 = ~uVar30 >> 0x1f;
            uVar32 = 0;
            if ((int)uVar30 < local_2c8.ArrayNum) {
              uVar32 = uVar37;
            }
            if ((uVar32 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar32 = 0;
            if ((int)uVar30 < local_2f8) {
              uVar32 = uVar37;
            }
            dVar44 = (*(double *)(local_2c8.AllocatorInstance.Data + lVar28 + 8) - local_218._s_0.Y)
                     * (*(double *)(local_2c8.AllocatorInstance.Data + lVar28 + 8) -
                       local_218._s_0.Y) +
                     (*(double *)(local_2c8.AllocatorInstance.Data + lVar28) - local_218._s_0.X) *
                     (*(double *)(local_2c8.AllocatorInstance.Data + lVar28) - local_218._s_0.X) +
                     (*(double *)(local_2c8.AllocatorInstance.Data + lVar28 + 0x10) -
                     local_218._s_0.Z) *
                     (*(double *)(local_2c8.AllocatorInstance.Data + lVar28 + 0x10) -
                     local_218._s_0.Z);
            if ((uVar32 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar32 = 0;
            if ((int)uVar30 < local_2f8) {
              uVar32 = uVar37;
            }
            dVar6 = *(double *)(local_300.Data + lVar36);
            if (*(double *)(local_300.Data + lVar36) <= dVar44) {
              dVar6 = dVar44;
            }
            if ((uVar32 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar30 = uVar30 + 1;
            lVar28 = lVar28 + 0x18;
            *(double *)(local_300.Data + lVar36) = dVar6;
            lVar36 = lVar36 + 8;
            this_01 = local_2e0;
            this_02 = local_2b8;
          } while ((int)uVar30 < local_2c8.ArrayNum);
        }
      }
      iVar15 = (int)this_02->_padding_;
      pUVar22 = (UClass *)(ulonglong)(uVar31 + 1);
      lVar39 = lVar39 + 8;
      pAVar23 = local_2b0;
      local_1e0 = local_2a8;
    } while ((int)(uVar31 + 1) < iVar15);
  }
  lVar39 = pAVar23->_padding_;
  local_1d8 = local_288;
  if (local_288 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_288->SharedReferenceCount = (atomic<int>)((int)local_288->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_140 = *(undefined4 *)&((TVector<double> *)&pAVar23->_padding_)->field0_0x0;
  uStack_13c = *(undefined4 *)((longlong)&((TVector<double> *)&pAVar23->_padding_)->field0_0x0 + 4);
  uStack_138 = (undefined4)pAVar23->_padding_;
  uStack_134 = *(undefined4 *)((longlong)&pAVar23->_padding_ + 4);
  uVar35 = 0;
  local_130 = pAVar23->_padding_;
  (**(code **)(lVar39 + 0x890))(pAVar23,&local_2f0,&local_140,&local_1e0);
  iVar15 = local_2c8.ArrayNum;
  local_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0[0] = 0;
  local_2d0[1] = 0;
  if (local_2c8.ArrayNum < 1) {
    if (local_2c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_2c8._8_8_ & 0xffffffff);
    }
  }
  else {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x58,8,local_2c8.ArrayNum,&local_2d8,local_2d0,local_2d0 + 1);
    DefaultConstructItems<FRecastDebugPathfindingData,int>
              (local_2d8.Data + (longlong)iVar16 * 0x58,iVar15);
  }
  pAVar23 = local_2b0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (0 < local_2c8.ArrayNum) {
    uVar40 = uVar35;
    uVar42 = uVar35;
    do {
      uVar31 = (uint)uVar35;
      uVar30 = 0;
      uVar37 = ~uVar31 >> 0x1f;
      uVar32 = uVar30;
      if ((int)uVar31 < local_2f8) {
        uVar32 = uVar37;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar11 = (longlong)local_2a0._8_8_ < 0;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = *(ulonglong *)(local_300.Data + uVar42);
      auVar45 = sqrtpd(auVar45,auVar45);
      local_2a0._8_8_ = local_2a0._8_8_ & 0xffffffff00000000;
      if (bVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_2a0.AllocatorInstance,0,&local_2a0.ArrayMax);
      }
      uVar32 = uVar30;
      if ((int)uVar31 < local_2d0[0]) {
        uVar32 = uVar37;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_2d8.Data[uVar40 + 0x54] = (FScriptContainerElement)0x4;
      if ((int)uVar31 < local_2d0[0]) {
        uVar30 = uVar37;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1d0.Object = (FNavigationQueryFilter *)local_2a8;
      pFVar41 = (FRecastDebugPathfindingData *)(local_2d8.Data + (longlong)(int)uVar31 * 0x58);
      local_1d0.SharedReferenceCount.ReferenceController = local_288;
      if (local_288 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_288->SharedReferenceCount = (atomic<int>)((int)local_288->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar32 = 0;
      if ((int)uVar31 < local_2c8.ArrayNum) {
        uVar32 = uVar37;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ARecastNavMesh::GetPolysWithinPathingDistance
                (pAVar23,(TVector<double> *)
                         (local_2c8.AllocatorInstance.Data + (longlong)(int)uVar31 * 0x18),
                 auVar45._0_8_ * (double)fVar46,&local_2a0,&local_1d0,(UObject *)0x0,pFVar41);
      uVar35 = (ulonglong)(uVar31 + 1);
      uVar42 = uVar42 + 8;
      uVar40 = uVar40 + 0x58;
      this_01 = local_2e0;
      this_02 = local_2b8;
    } while ((int)(uVar31 + 1) < local_2c8.ArrayNum);
  }
  uVar35 = 0;
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  if ((this_01->_padding_ & 1) == 0) {
    FEnvQueryInstance::FItemIterator::FItemIterator(&local_250,(UEnvQueryTest *)this_01,this_02,-1);
    dVar44 = __real_4170000000000000;
    local_250.Deadline = __real_bff0000000000000;
    uVar40 = uVar35;
    while (((dVar6 = local_250.Deadline, iVar15 = (int)local_250._padding_,
            lVar39 = local_250._padding_, uVar32 = 0,
            (int)local_250._padding_ < *(int *)(local_250._padding_ + 8) &&
            ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0)) &&
           ((local_250.Deadline < 0.0 ||
            (QueryPerformanceCounter(&local_228),
            (double)local_228.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar44 < dVar6)))))
    {
      uVar30 = (uint)uVar35;
      if (0 < local_2c8.ArrayNum) {
        lVar39 = 0;
        do {
          uVar31 = 0;
          if ((int)uVar30 < (int)local_2e8) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar7.Data = local_2f0.Data;
          uVar31 = 0;
          if ((int)uVar32 < local_2d0[0]) {
            uVar31 = ~uVar32 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar28 = 0;
          uVar35 = *(ulonglong *)(FVar7.Data + uVar40 + 0x68);
          if (*(int *)(local_2d8.Data + lVar39 + 8) != *(int *)(local_2d8.Data + lVar39 + 0x34)) {
            pFVar38 = *(FScriptContainerElement **)(local_2d8.Data + lVar39 + 0x38 + 8);
            pFVar29 = local_2d8.Data + lVar39 + 0x38;
            if (pFVar38 != (FScriptContainerElement *)0x0) {
              pFVar29 = pFVar38;
            }
            iVar15 = *(int *)(pFVar29 +
                             ((ulonglong)(*(int *)(local_2d8.Data + lVar39 + 0x48) - 1) &
                             (uVar35 >> 0x20) * 0x17 + uVar35) * 4);
            if (iVar15 != -1) {
              lVar36 = *(longlong *)(local_2d8.Data + lVar39);
              do {
                if (*(ulonglong *)((longlong)iVar15 * 0xa8 + lVar36) == uVar35) {
                  if (iVar15 != -1) {
                    lVar28 = (longlong)iVar15 * 0xa8 + lVar36;
                  }
                  break;
                }
                iVar15 = *(int *)((longlong)iVar15 * 0xa8 + 0xa0 + lVar36);
              } while (iVar15 != -1);
            }
          }
          FEnvQueryInstance::FItemIterator::SetScore
                    (&local_250,(uint)*(byte *)((longlong)&this_01->_padding_ + 4),
                     (uint)*(byte *)((longlong)&this_01->_padding_ + 2),lVar28 != 0,(bool)uVar13);
          uVar32 = uVar32 + 1;
          lVar39 = lVar39 + 0x58;
        } while ((int)uVar32 < local_2c8.ArrayNum);
      }
      FEnvQueryInstance::FItemIterator::StoreTestResult(&local_250);
      if ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0) {
        local_250.ItemScore = 0.0;
        local_250.NumPassedForItem = 0;
        local_250.NumTestsForItem = 0;
        local_250.bForced = '\0';
        local_250.bPassed = '\x01';
        FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_250);
      }
      uVar35 = (ulonglong)(uVar30 + 1);
      uVar40 = uVar40 + 0x78;
    }
  }
  else {
    local_1c0[0] = (code *)0x0;
    local_1c0[1] = NodePoolHelpers::GetPathCost;
    local_1c0[2] = NodePoolHelpers::GetPathLength;
    FEnvQueryInstance::FItemIterator::FItemIterator(&local_280,(UEnvQueryTest *)this_01,this_02,-1);
    fVar46 = __real_7f7fc99e;
    dVar44 = __real_4170000000000000;
    local_280.Deadline = __real_bff0000000000000;
    while (((dVar6 = local_280.Deadline, iVar15 = (int)local_280._padding_,
            lVar39 = local_280._padding_, uVar32 = 0,
            (int)local_280._padding_ < *(int *)(local_280._padding_ + 8) &&
            ((*(byte *)(local_280._padding_ + 0x10c) & 2) == 0)) &&
           ((local_280.Deadline < 0.0 ||
            (QueryPerformanceCounter(&local_200),
            (double)local_200.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar44 < dVar6)))))
    {
      uVar30 = (uint)uVar35;
      if (0 < local_2c8.ArrayNum) {
        do {
          pcVar5 = local_1c0[(byte)local_2e0->_padding_];
          uVar31 = 0;
          if ((int)uVar30 < (int)local_2e8) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar38 = local_2f0.Data + (longlong)(int)uVar30 * 0x78;
          uVar31 = 0;
          if ((int)uVar32 < local_2d0[0]) {
            uVar31 = ~uVar32 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar43 = (float)(*pcVar5)(local_2d8.Data + (longlong)(int)uVar32 * 0x58,pFVar38,local_1f8)
          ;
          FEnvQueryInstance::FItemIterator::SetScore
                    (&local_280,(uint)*(byte *)((longlong)&local_2e0->_padding_ + 4),
                     (uint)*(byte *)((longlong)&local_2e0->_padding_ + 2),fVar43,fVar48,fVar47);
          if ((cVar14 != '\0') && (fVar46 <= fVar43)) {
            local_280.ItemScore = -3.4028235e+38;
            local_280._34_1_ = local_280._34_1_ & 0xfe | 2;
          }
          uVar32 = uVar32 + 1;
        } while ((int)uVar32 < local_2c8.ArrayNum);
      }
      FEnvQueryInstance::FItemIterator::StoreTestResult(&local_280);
      if ((*(byte *)(local_280._padding_ + 0x10c) & 2) == 0) {
        local_280.ItemScore = 0.0;
        local_280.NumPassedForItem = 0;
        local_280.NumTestsForItem = 0;
        local_280.bForced = '\0';
        local_280.bPassed = '\x01';
        FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_280);
      }
      uVar35 = (ulonglong)(uVar30 + 1);
    }
  }
  *(int *)(lVar39 + 0xec) = iVar15;
  DestructItems<FRecastDebugPathfindingData,int>
            ((FRecastDebugPathfindingData *)local_2d8.Data,local_2d0[0]);
  if ((FRecastDebugPathfindingData *)local_2d8.Data != (FRecastDebugPathfindingData *)0x0) {
    FMemory::Free(local_2d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_288);
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  if (local_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
LAB_146f70668:
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_PathfindingBatch @ 146f76ef0

void __cdecl
UEnvQueryTest_PathfindingBatch::StaticRegisterNativesUEnvQueryTest_PathfindingBatch(void)

{
  return;
}

