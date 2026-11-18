// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146f14e90

UClass * __cdecl UEnvQueryGenerator_Donut::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Donut",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Donut,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryGenerator_Donut>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Donut>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton;
}

// UEnvQueryGenerator_Donut @ 146f2b090

UEnvQueryGenerator_Donut * __thiscall
UEnvQueryGenerator_Donut::UEnvQueryGenerator_Donut
          (UEnvQueryGenerator_Donut *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Donut__6B_;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->InnerRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->InnerRadius)._padding_ = (longlong)pFVar1;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->OuterRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->OuterRadius)._padding_ = (longlong)pFVar1;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->NumberOfRings).DefaultValue = 0;
  pFVar1 = FIntProperty::StaticClass();
  (this->NumberOfRings)._padding_ = (longlong)pFVar1;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->PointsPerRing).DefaultValue = 0;
  pFVar1 = FIntProperty::StaticClass();
  (this->PointsPerRing)._padding_ = (longlong)pFVar1;
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).DirMode.Value = '\0';
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcAngle).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ArcAngle)._padding_ = (longlong)pFVar1;
  (this->Center).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_Donut @ 146f2b240

UEnvQueryGenerator_Donut * __thiscall
UEnvQueryGenerator_Donut::UEnvQueryGenerator_Donut
          (UEnvQueryGenerator_Donut *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Donut__6B_;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = 0;
  (this->InnerRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->InnerRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->InnerRadius)._padding_ = (longlong)pFVar1;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = 0;
  (this->OuterRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->OuterRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->OuterRadius)._padding_ = (longlong)pFVar1;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = 0;
  (this->NumberOfRings)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->NumberOfRings).DefaultValue = 0;
  pFVar1 = FIntProperty::StaticClass();
  (this->NumberOfRings)._padding_ = (longlong)pFVar1;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = 0;
  (this->PointsPerRing)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->PointsPerRing).DefaultValue = 0;
  pFVar1 = FIntProperty::StaticClass();
  (this->PointsPerRing)._padding_ = (longlong)pFVar1;
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).DirMode.Value = '\0';
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcAngle).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ArcAngle)._padding_ = (longlong)pFVar1;
  (this->Center).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Center).Class.field0_0x0.DebugPtr = pUVar2;
  (this->InnerRadius).DefaultValue = 300.0;
  (this->OuterRadius).DefaultValue = 1000.0;
  (this->NumberOfRings).DefaultValue = 3;
  (this->PointsPerRing).DefaultValue = 8;
  (this->ArcDirection).DirMode.Value = '\0';
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = pUVar2;
  this->bUseSpiralPattern = false;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  (this->ArcAngle).DefaultValue = 360.0;
  return this;
}

// ~UEnvQueryGenerator_Donut @ 146f2eb50

void __thiscall UEnvQueryGenerator_Donut::~UEnvQueryGenerator_Donut(UEnvQueryGenerator_Donut *this)

{
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PointsPerRing)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->NumberOfRings)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->OuterRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->InnerRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateDonutNavPoints @ 146f4b6f0

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
UEnvQueryGenerator_Donut::GenerateDonutNavPoints
          (UEnvQueryGenerator_Donut *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2,FEnvQueryInstance *param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  UObject *pUVar21;
  FProperty *pFVar22;
  float *pfVar23;
  int *piVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135 [5];
  double local_130;
  uint local_128;
  double local_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
  lVar25 = param_3->_padding_;
  plVar3 = (longlong *)(this->InnerRadius)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar21 == (UObject *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
    }
    else {
      (this->InnerRadius)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar21,(int)lVar25);
      FVar4 = (FName)(this->InnerRadius)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar22 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->InnerRadius)._padding_ + 0x10),FVar4);
        if ((pFVar22 == (FProperty *)0x0) ||
           (cVar18 = (**(code **)((this->InnerRadius)._padding_ + 8))(&this->InnerRadius),
           cVar18 == '\0')) {
          local_res20[0] = 0;
          bVar16 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
          if (!bVar16) goto LAB_146f4b7ed;
        }
        (this->InnerRadius)._padding_ = (longlong)pFVar22;
      }
    }
  }
LAB_146f4b7ed:
  lVar25 = param_3->_padding_;
  plVar3 = (longlong *)(this->OuterRadius)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar21 == (UObject *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
    }
    else {
      (this->OuterRadius)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar21,(int)lVar25);
      FVar4 = (FName)(this->OuterRadius)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar22 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->OuterRadius)._padding_ + 0x10),FVar4);
        if ((pFVar22 == (FProperty *)0x0) ||
           (cVar18 = (**(code **)((this->OuterRadius)._padding_ + 8))(&this->OuterRadius),
           cVar18 == '\0')) {
          local_138 = 0;
          bVar16 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_138);
          if (!bVar16) goto LAB_146f4b88f;
        }
        (this->OuterRadius)._padding_ = (longlong)pFVar22;
      }
    }
  }
LAB_146f4b88f:
  lVar25 = param_3->_padding_;
  plVar3 = (longlong *)(this->NumberOfRings)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar21 == (UObject *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
    }
    else {
      (this->NumberOfRings)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar21,(int)lVar25);
      FVar4 = (FName)(this->NumberOfRings)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar22 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->NumberOfRings)._padding_ + 0x10),FVar4);
        if ((pFVar22 == (FProperty *)0x0) ||
           (cVar18 = (**(code **)((this->NumberOfRings)._padding_ + 8))(&this->NumberOfRings),
           cVar18 == '\0')) {
          local_137 = 0;
          bVar16 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_137);
          if (!bVar16) goto LAB_146f4b931;
        }
        (this->NumberOfRings)._padding_ = (longlong)pFVar22;
      }
    }
  }
LAB_146f4b931:
  lVar25 = param_3->_padding_;
  plVar3 = (longlong *)(this->PointsPerRing)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar21 == (UObject *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
    }
    else {
      (this->PointsPerRing)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar21,(int)lVar25);
      FVar4 = (FName)(this->PointsPerRing)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar22 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->PointsPerRing)._padding_ + 0x10),FVar4);
        if ((pFVar22 == (FProperty *)0x0) ||
           (cVar18 = (**(code **)((this->PointsPerRing)._padding_ + 8))(&this->PointsPerRing),
           cVar18 == '\0')) {
          local_136 = 0;
          bVar16 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_136);
          if (!bVar16) goto LAB_146f4b9d3;
        }
        (this->PointsPerRing)._padding_ = (longlong)pFVar22;
      }
    }
  }
LAB_146f4b9d3:
  plVar3 = (longlong *)(this->ArcAngle)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar21 == (UObject *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
    }
    else {
      (this->ArcAngle)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar21);
      FVar4 = (FName)(this->ArcAngle)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar22 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->ArcAngle)._padding_ + 0x10),FVar4);
        if ((pFVar22 == (FProperty *)0x0) ||
           (cVar18 = (**(code **)((this->ArcAngle)._padding_ + 8))(&this->ArcAngle,pFVar22),
           cVar18 == '\0')) {
          local_135[0] = 0;
          bVar16 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_135);
          if (!bVar16) goto LAB_146f4ba75;
        }
        (this->ArcAngle)._padding_ = (longlong)pFVar22;
      }
    }
  }
LAB_146f4ba75:
  pFVar22 = (FProperty *)(this->ArcAngle)._padding_;
  pfVar23 = (float *)0x0;
  if (pFVar22 != (FProperty *)0x0) {
    pfVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar22,(UObject *)(this->ArcAngle)._padding_,0);
  }
  if (pfVar23 == (float *)0x0) {
    pfVar23 = &(this->ArcAngle).DefaultValue;
  }
  fVar1 = *pfVar23;
  pFVar22 = (FProperty *)(this->InnerRadius)._padding_;
  pfVar23 = (float *)0x0;
  if (pFVar22 != (FProperty *)0x0) {
    pfVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar22,(UObject *)(this->InnerRadius)._padding_,0);
  }
  if (pfVar23 == (float *)0x0) {
    pfVar23 = &(this->InnerRadius).DefaultValue;
  }
  pFVar22 = (FProperty *)(this->OuterRadius)._padding_;
  dVar10 = (double)*pfVar23;
  pfVar23 = (float *)0x0;
  if (pFVar22 != (FProperty *)0x0) {
    pfVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar22,(UObject *)(this->OuterRadius)._padding_,0);
  }
  if (pfVar23 == (float *)0x0) {
    pfVar23 = &(this->OuterRadius).DefaultValue;
  }
  fVar2 = *pfVar23;
  pFVar22 = (FProperty *)(this->NumberOfRings)._padding_;
  piVar24 = (int *)0x0;
  if (pFVar22 != (FProperty *)0x0) {
    piVar24 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar22,(UObject *)(this->NumberOfRings)._padding_,0);
  }
  if (piVar24 == (int *)0x0) {
    piVar24 = &(this->NumberOfRings).DefaultValue;
  }
  uVar26 = *piVar24;
  uVar29 = (ulonglong)uVar26;
  pFVar22 = (FProperty *)(this->PointsPerRing)._padding_;
  local_130 = (double)CONCAT44(local_130._4_4_,uVar26);
  piVar24 = (int *)0x0;
  if (pFVar22 != (FProperty *)0x0) {
    piVar24 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar22,(UObject *)(this->PointsPerRing)._padding_,0);
  }
  dVar8 = 0.0;
  if (piVar24 == (int *)0x0) {
    piVar24 = &(this->PointsPerRing).DefaultValue;
  }
  uVar19 = *piVar24;
  uVar28 = (ulonglong)uVar19;
  if ((((dVar10 < 0.0) || (fVar2 <= 0.0)) || (dVar11 = (double)fVar2, dVar11 < dVar10)) ||
     (((int)uVar26 < 1 || ((int)uVar19 < 1)))) {
    bVar16 = false;
  }
  else {
    local_128 = uVar19;
    local_120 = GetArcBisectorAngle(this,param_3);
    dVar9 = local_120 * __real_3f91df46a2529d39;
    dVar13 = (double)fVar1;
    if (__real_4076800000000000 <= (double)fVar1) {
      dVar13 = __real_4076800000000000;
    }
    uVar27 = uVar19 * param_1->ArrayNum * uVar26;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    dVar11 = (dVar11 - dVar10) / (double)(int)(uVar26 - 1);
    dVar12 = __real_401921fb54442d18 / (double)(int)uVar19;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    piVar24 = &param_2->ArrayMax;
    if (param_2->ArrayMax < (int)uVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar27,&param_2->AllocatorInstance,param_2->ArrayNum,piVar24);
    }
    if (this->bUseSpiralPattern == false) {
      do {
        bVar16 = IsAngleAllowed(this,dVar9,local_120,dVar13,this->bDefineArc);
        if (bVar16) {
          __libm_sse2_sincos_();
          dVar8 = dVar10;
          do {
            iVar20 = param_1->ArrayNum;
            uVar26 = 0;
            if (0 < iVar20) {
              lVar25 = 0;
              do {
                uVar19 = 0;
                if ((int)uVar26 < iVar20) {
                  uVar19 = ~uVar26 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  uVar17 = (*pcVar7)();
                  return (bool)uVar17;
                }
                pFVar5 = (param_1->AllocatorInstance).Data;
                pFVar6 = (param_2->AllocatorInstance).Data;
                dStack_110 = dVar8 * extraout_XMM0_Qa + *(double *)(pFVar5 + lVar25 + 8);
                local_118 = dVar8 * extraout_XMM0_Qb + *(double *)(pFVar5 + lVar25);
                local_108 = *(undefined8 *)(pFVar5 + lVar25 + 0x10);
                uStack_100 = 0;
                if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
                    ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)*piVar24 * 0x20)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  uVar17 = (*pcVar7)();
                  return (bool)uVar17;
                }
                iVar20 = param_2->ArrayNum;
                if (iVar20 == *piVar24) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_2->AllocatorInstance,piVar24);
                }
                uVar26 = uVar26 + 1;
                param_2->ArrayNum = iVar20 + 1;
                lVar25 = lVar25 + 0x18;
                pFVar6 = (param_2->AllocatorInstance).Data;
                pFVar5 = pFVar6 + (longlong)iVar20 * 0x20;
                *(double *)pFVar5 = local_118;
                *(double *)(pFVar5 + 8) = dStack_110;
                auVar14._8_8_ = uStack_100;
                auVar14._0_8_ = local_108;
                *(undefined1 (*) [16])(pFVar6 + (longlong)iVar20 * 0x20 + 0x10) = auVar14;
                iVar20 = param_1->ArrayNum;
              } while ((int)uVar26 < iVar20);
            }
            dVar8 = dVar8 + dVar11;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar29 = (ulonglong)local_130 & 0xffffffff;
        }
        dVar9 = dVar9 + dVar12;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    else {
      local_130 = dVar12 / (double)(int)uVar26;
      dVar15 = local_120;
      do {
        do {
          bVar16 = IsAngleAllowed(this,dVar8 + dVar9,dVar15,dVar13,this->bDefineArc);
          if (bVar16) {
            __libm_sse2_sincos_();
            iVar20 = param_1->ArrayNum;
            uVar26 = 0;
            if (0 < iVar20) {
              lVar25 = 0;
              do {
                uVar19 = 0;
                if ((int)uVar26 < iVar20) {
                  uVar19 = ~uVar26 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  uVar17 = (*pcVar7)();
                  return (bool)uVar17;
                }
                pFVar5 = (param_1->AllocatorInstance).Data;
                pFVar6 = (param_2->AllocatorInstance).Data;
                dStack_f0 = extraout_XMM0_Qa_00 * dVar10 + *(double *)(pFVar5 + lVar25 + 8);
                local_f8 = extraout_XMM0_Qb_00 * dVar10 + *(double *)(pFVar5 + lVar25);
                local_e8 = *(undefined8 *)(pFVar5 + lVar25 + 0x10);
                uStack_e0 = 0;
                if (((pFVar6 <= (FScriptContainerElement *)&local_f8) &&
                    ((FScriptContainerElement *)&local_f8 < pFVar6 + (longlong)*piVar24 * 0x20)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  uVar17 = (*pcVar7)();
                  return (bool)uVar17;
                }
                iVar20 = param_2->ArrayNum;
                if (iVar20 == *piVar24) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_2->AllocatorInstance,piVar24);
                }
                uVar26 = uVar26 + 1;
                param_2->ArrayNum = iVar20 + 1;
                lVar25 = lVar25 + 0x18;
                pFVar6 = (param_2->AllocatorInstance).Data;
                pFVar5 = pFVar6 + (longlong)iVar20 * 0x20;
                *(double *)pFVar5 = local_f8;
                *(double *)(pFVar5 + 8) = dStack_f0;
                pFVar6 = pFVar6 + (longlong)iVar20 * 0x20 + 0x10;
                *(undefined8 *)pFVar6 = local_e8;
                *(undefined8 *)(pFVar6 + 8) = uStack_e0;
                iVar20 = param_1->ArrayNum;
              } while ((int)uVar26 < iVar20);
            }
          }
          dVar9 = dVar9 + dVar12;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
        uVar28 = (ulonglong)local_128;
        dVar10 = dVar10 + dVar11;
        dVar8 = dVar8 + local_130;
        uVar29 = uVar29 - 1;
        dVar15 = local_120;
      } while (uVar29 != 0);
    }
    bVar16 = 0 < param_2->ArrayNum;
  }
  return bVar16;
}

// GenerateItems @ 146f4dba0

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
UEnvQueryGenerator_Donut::GenerateItems(UEnvQueryGenerator_Donut *this,FEnvQueryInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar2 = (this->Center).Class.field0_0x0.DebugPtr;
  pUVar5 = (UClass *)0x0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = UEnvQueryContext::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->Center).Class.field0_0x0.DebugPtr;
    }
  }
  FEnvQueryInstance::PrepareContext(param_1,pUVar5,&local_18);
  if (0 < local_18.ArrayNum) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    GenerateDonutNavPoints(this,&local_18,&local_28,param_1);
    (**(code **)(this->_padding_ + 0x2e0))(this,&local_28,param_1);
    (**(code **)(this->_padding_ + 0x2e8))(this,&local_28,param_1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetArcBisectorAngle @ 146f50010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall
UEnvQueryGenerator_Donut::GetArcBisectorAngle
          (UEnvQueryGenerator_Donut *this,FEnvQueryInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  UClass *pUVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_78;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TRotator<double> local_38 [2];
  
  uVar10 = 0;
  uVar11 = 0;
  if (this->bDefineArc == 0) {
    dVar9 = 0.0;
  }
  else {
    pUVar8 = (UClass *)0x0;
    if ((this->ArcDirection).DirMode.Value == '\0') {
      pUVar2 = (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      pUVar6 = pUVar8;
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar5 = UEnvQueryContext::StaticClass(), pUVar5 != (UClass *)0x0)) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar6 = (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr;
        }
      }
      FEnvQueryInstance::PrepareContext(param_1,pUVar6,&local_88);
      pUVar2 = (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr;
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar6 = UEnvQueryContext::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar8 = (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr;
        }
      }
      FEnvQueryInstance::PrepareContext(param_1,pUVar8,&local_98);
      FVar7.Data = local_98.AllocatorInstance.Data;
      if ((0 < local_88.ArrayNum) && (0 < local_98.ArrayNum)) {
        if ((local_88.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          dVar9 = (double)(*pcVar3)();
          return dVar9;
        }
        local_68._s_0.X = *(double *)FVar7.Data - *(double *)local_88.AllocatorInstance.Data;
        local_68._s_0.Z =
             *(double *)(FVar7.Data + 0x10) - *(double *)(local_88.AllocatorInstance.Data + 0x10);
        local_68._s_0.Y =
             *(double *)(FVar7.Data + 8) - *(double *)(local_88.AllocatorInstance.Data + 8);
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_68._s_0,&local_50,__real_3e45798ee0000000,
                   &UE::Math::TVector<double>::ZeroVector);
        UE::Math::TVector<double>::ToOrientationRotator(&local_50,local_38);
        uVar10 = SUB84(local_38[0].Yaw,0);
        uVar11 = (undefined4)((ulonglong)local_38[0].Yaw >> 0x20);
      }
      FVar7.Data = local_88.AllocatorInstance.Data;
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
        FVar7.Data = local_88.AllocatorInstance.Data;
      }
    }
    else {
      pUVar2 = (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar6 = UEnvQueryContext::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar8 = (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr;
        }
      }
      FEnvQueryInstance::PrepareContext(param_1,pUVar8,&local_78);
      FVar7.Data = local_78.AllocatorInstance.Data;
      if (0 < local_78.ArrayNum) {
        uVar10 = SUB84(*(double *)(local_78.AllocatorInstance.Data + 8),0);
        uVar11 = (undefined4)((ulonglong)*(double *)(local_78.AllocatorInstance.Data + 8) >> 0x20);
      }
    }
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    dVar9 = (double)CONCAT44(uVar11,uVar10);
  }
  return dVar9;
}

// GetDescriptionDetails @ 146f512a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_Donut::GetDescriptionDetails
          (UEnvQueryGenerator_Donut *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_318
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_308
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2f8
  ;
  FText local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FFormatArgumentValue local_248;
  FFormatArgumentValue local_228;
  FFormatArgumentValue local_208;
  FFormatArgumentValue local_1e8;
  FFormatArgumentValue local_1c8;
  FFormatArgumentValue local_1a8;
  FFormatArgumentValue local_188;
  FFormatArgumentValue local_168;
  FFormatArgumentValue local_148;
  FText local_128;
  FString local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FString local_d8;
  FText local_c8;
  FString local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  local_318.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.Pairs.ArrayNum = 0;
  local_318.Pairs.ArrayMax = 0;
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->InnerRadius,&local_118);
  pFVar4 = FText::FromString(&local_128,pFVar3);
  local_168.Type = Text;
  FText::FText((FText *)&local_168.TextValue,pFVar4);
  if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_2d8,L"InnerRadius");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_318,&local_2d8,&local_168);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_168.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->OuterRadius,&local_b8);
  pFVar4 = FText::FromString(&local_a8,pFVar3);
  local_148.Type = Text;
  FText::FText((FText *)&local_148.TextValue,pFVar4);
  if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_2c8,L"OuterRadius");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_318,&local_2c8,&local_148);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->NumberOfRings,&local_d8);
  pFVar4 = FText::FromString(&local_c8,pFVar3);
  local_1c8.Type = Text;
  FText::FText((FText *)&local_1c8.TextValue,pFVar4);
  if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_2b8,L"NumRings");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_318,&local_2b8,&local_1c8);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->PointsPerRing,&local_98);
  pFVar4 = FText::FromString(&local_58,pFVar3);
  local_1a8.Type = Text;
  FText::FText((FText *)&local_1a8.TextValue,pFVar4);
  if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_2a8,L"NumPerRing");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_318,&local_2a8,&local_1a8);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"EnvQueryGenerator",L"DonutDescription",
                      L"radius: {InnerRadius} to {OuterRadius}\nrings: {NumRings}, points per ring: {NumPerRing}"
                     );
  pFVar5 = FTextFormat::FTextFormat(&local_48,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar5,&local_318);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (this->bDefineArc != 0) {
    local_228.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_308.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Pairs.ArrayNum = 0;
    local_308.Pairs.ArrayMax = 0;
    local_228.Type = Text;
    if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
    }
    local_228.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_298,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_308,&local_298,&local_228);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_248.field1_0x8.FloatValue = (this->ArcAngle).DefaultValue;
    local_248.Type = Float;
    local_248.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_248.TextValue.field0_0x0.TypedValue.Flags = 0;
    ::FString::FString(&local_288,L"AngleValue");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_308,&local_288,&local_248);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar4 = FEnvDirection::ToText(&this->ArcDirection,&local_78);
    local_188.Type = Text;
    FText::FText((FText *)&local_188.TextValue,pFVar4);
    if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_278,L"ArcDirection");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_308,&local_278,&local_188);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_188.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"EnvQueryGenerator",L"DescriptionWithArc",
                        L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}");
    pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
    pFVar4 = FText::Format(&local_68,pFVar5,&local_308);
    FText::operator=(__return_storage_ptr__,pFVar4);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_308.Pairs.AllocatorInstance.Data,
               local_308.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_308.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_308.Pairs.AllocatorInstance.Data);
    }
  }
  FEnvTraceData::ToText((FEnvTraceData *)&this->_padding_,&local_2e8,Brief);
  bVar2 = FText::IsEmpty(&local_2e8);
  if (!bVar2) {
    local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_2f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Pairs.ArrayNum = 0;
    local_2f8.Pairs.ArrayMax = 0;
    local_1e8.Type = Text;
    if (local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_1e8.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if (local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_268,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2f8,&local_268,&local_1e8);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_208.Type = Text;
    local_208.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_2e8.TextData.Reference;
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 8))
                (local_2e8.TextData.Reference,local_res18);
    }
    local_208.TextValue.field0_0x0.TypedValue.Flags = local_2e8.Flags;
    if (local_208.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_258,L"ProjectionDescription");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2f8,&local_258,&local_208);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_208.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_208.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"EnvQueryGenerator",L"OnCircle_DescriptionWithProjection",
                        L"{Description}, {ProjectionDescription}");
    pFVar5 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
    pFVar4 = FText::Format(&local_f8,pFVar5,&local_2f8);
    FText::operator=(__return_storage_ptr__,pFVar4);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2f8.Pairs.AllocatorInstance.Data,
               local_2f8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2f8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2f8.Pairs.AllocatorInstance.Data);
    }
  }
  if (local_2e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_318.Pairs.AllocatorInstance.Data,
             local_318.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_318.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_318.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54340

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_Donut::GetDescriptionTitle
          (UEnvQueryGenerator_Donut *this,FText *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UClass *pUVar5;
  FTextFormat *pFVar6;
  UClass *pUVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b8;
  FString local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FFormatArgumentValue local_68;
  FFormatArgumentValue local_48;
  FText local_28;
  FTextFormat local_18;
  
  local_b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Pairs.ArrayNum = 0;
  local_b8.Pairs.ArrayMax = 0;
  UEnvQueryTypes::GetShortTypeName(&local_98,(UObject *)this);
  local_68.Type = Text;
  FText::FText((FText *)&local_68.TextValue,&local_98);
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_a8,L"DescriptionTitle");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_b8,&local_a8,&local_68);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  pUVar7 = (this->Center).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_146f5442b;
  }
  else if (pUVar7 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146f5442b:
    pUVar5 = UEnvQueryContext::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_146f5445b;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146f5445b:
  UEnvQueryTypes::GetShortTypeName(&local_78,(UObject *)pUVar7);
  local_48.Type = Text;
  FText::FText((FText *)&local_48.TextValue,&local_78);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_88,L"DescribeContext");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_b8,&local_88,&local_48);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"EnvQueryGenerator",L"DescriptionGenerateDonutAroundContext",
                      L"{DescriptionTitle}: generate items around {DescribeContext}");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_b8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_b8.Pairs.AllocatorInstance.Data,
             local_b8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_b8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_b8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58390

UClass * __cdecl UEnvQueryGenerator_Donut::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Donut",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Donut,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryGenerator_Donut>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Donut>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton;
}

// IsAngleAllowed @ 146f5b810

bool __thiscall
UEnvQueryGenerator_Donut::IsAngleAllowed
          (UEnvQueryGenerator_Donut *this,double param_1,double param_2,double param_3,bool param_4)

{
  double dVar1;
  
  if (param_4) {
    dVar1 = FGenericPlatformMath::Fmod
                      (param_1 * __real_404ca5dc1a63c1f8 - param_2,__real_4076800000000000);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + __real_4076800000000000;
    }
    if (__real_4066800000000000 < dVar1) {
      dVar1 = dVar1 - __real_4076800000000000;
    }
    return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           __real_3f847ae147ae147b < param_3;
  }
  return true;
}

// StaticRegisterNativesUEnvQueryGenerator_Donut @ 146f76d30

void __cdecl UEnvQueryGenerator_Donut::StaticRegisterNativesUEnvQueryGenerator_Donut(void)

{
  return;
}

// __VTableCtorCaller @ 146f7f150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UEnvQueryGenerator_Donut::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_ProjectedPoints *this;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UEnvQueryGenerator_ProjectedPoints *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_Donut__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].ProjectionData = 0;
    this[1].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].ProjectionData.ProjectDown = 0.0;
    this[1].ProjectionData.ProjectUp = 0.0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1].ProjectionData.ExtentX = 0.0;
    pFVar3 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[1].ProjectionData.ProjectDown = pFVar3;
    *(undefined8 *)&this[1].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[1].ProjectionData.field_0x38 = 0;
    this[1].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[1].ProjectionData.TraceChannel = '\0';
    this[1].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[1].ProjectionData.field_0x2a = 0;
    this[1].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined ***)&this[1].ProjectionData.ExtentZ = &___7FAIDataProviderIntValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FIntProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FIntProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].ProjectionData = 0;
    this[2].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined1 *)&this[2].ProjectionData.ProjectDown = 0;
    this[2].ProjectionData.TraceChannel = '\0';
    this[2].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[2].ProjectionData.field_0x2a = 0;
    this[2].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[2].ProjectionData.field_0x38 = 0;
    this[2].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2].ProjectionData.ExtentZ = 0.0;
    this[2].ProjectionData.PostProjectionVerticalOffset = 0.0;
    *(undefined ***)&this[2].ProjectionData.ExtentX = &___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[3]._padding_ = 0;
    pUVar2 = (UClass *)FFloatProperty::StaticClass();
    this[2].NavDataOverrideContext.Class.field0_0x0.DebugPtr = pUVar2;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

