// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f145a0

UClass * __cdecl UEnvQueryGenerator_Cone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Cone",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Cone,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryGenerator_Cone>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Cone>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton;
}

// UEnvQueryGenerator_Cone @ 146f2acf0

UEnvQueryGenerator_Cone * __thiscall
UEnvQueryGenerator_Cone::UEnvQueryGenerator_Cone
          (UEnvQueryGenerator_Cone *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Cone__6B_;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->AlignedPointsDistance).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->AlignedPointsDistance)._padding_ = (longlong)pFVar1;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ConeDegrees).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ConeDegrees)._padding_ = (longlong)pFVar1;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->AngleStep).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->AngleStep)._padding_ = (longlong)pFVar1;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->Range).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->Range)._padding_ = (longlong)pFVar1;
  (this->CenterActor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_Cone @ 146f2ae30

UEnvQueryGenerator_Cone * __thiscall
UEnvQueryGenerator_Cone::UEnvQueryGenerator_Cone
          (UEnvQueryGenerator_Cone *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Cone__6B_;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = 0;
  (this->AlignedPointsDistance)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->AlignedPointsDistance).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->AlignedPointsDistance)._padding_ = (longlong)pFVar1;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = 0;
  (this->ConeDegrees)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ConeDegrees).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->ConeDegrees)._padding_ = (longlong)pFVar1;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = 0;
  (this->AngleStep)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->AngleStep).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->AngleStep)._padding_ = (longlong)pFVar1;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->Range).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->Range)._padding_ = (longlong)pFVar1;
  (this->CenterActor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->CenterActor).Class.field0_0x0.DebugPtr = pUVar2;
  this->bIncludeContextLocation = '\0';
  (this->AlignedPointsDistance).DefaultValue = 100.0;
  (this->ConeDegrees).DefaultValue = 90.0;
  (this->AngleStep).DefaultValue = 10.0;
  (this->Range).DefaultValue = 1000.0;
  return this;
}

// ~UEnvQueryGenerator_Cone @ 146f2eaa0

void __thiscall UEnvQueryGenerator_Cone::~UEnvQueryGenerator_Cone(UEnvQueryGenerator_Cone *this)

{
  (this->Range)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->AngleStep)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ConeDegrees)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->AlignedPointsDistance)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindDataToDataProviders @ 146f353c0

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
UEnvQueryGenerator_Cone::BindDataToDataProviders
          (UEnvQueryGenerator_Cone *this,FEnvQueryInstance *param_1)

{
  longlong *plVar1;
  FName FVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  FProperty *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  lVar4 = param_1->_padding_;
  plVar1 = (longlong *)(this->AlignedPointsDistance)._padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar7 == (UObject *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (this->AlignedPointsDistance)._padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar7,(int)lVar4);
      FVar2 = (FName)(this->AlignedPointsDistance)._padding_;
      if (FVar2 != (FName)0x0) {
        pFVar8 = UStruct::FindPropertyByName
                           (*(UStruct **)((this->AlignedPointsDistance)._padding_ + 0x10),FVar2);
        if ((pFVar8 == (FProperty *)0x0) ||
           (cVar6 = (**(code **)((this->AlignedPointsDistance)._padding_ + 8))
                              (&this->AlignedPointsDistance), cVar6 == '\0')) {
          local_res8[0] = 0;
          bVar5 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res8);
          if (!bVar5) goto LAB_146f35494;
        }
        (this->AlignedPointsDistance)._padding_ = (longlong)pFVar8;
      }
    }
  }
LAB_146f35494:
  lVar4 = param_1->_padding_;
  plVar1 = (longlong *)(this->ConeDegrees)._padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar7 == (UObject *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (this->ConeDegrees)._padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar7,(int)lVar4);
      FVar2 = (FName)(this->ConeDegrees)._padding_;
      if (FVar2 != (FName)0x0) {
        pFVar8 = UStruct::FindPropertyByName
                           (*(UStruct **)((this->ConeDegrees)._padding_ + 0x10),FVar2);
        if ((pFVar8 == (FProperty *)0x0) ||
           (cVar6 = (**(code **)((this->ConeDegrees)._padding_ + 8))(&this->ConeDegrees),
           cVar6 == '\0')) {
          local_res10[0] = 0;
          bVar5 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res10);
          if (!bVar5) goto LAB_146f35532;
        }
        (this->ConeDegrees)._padding_ = (longlong)pFVar8;
      }
    }
  }
LAB_146f35532:
  lVar4 = param_1->_padding_;
  plVar1 = (longlong *)(this->AngleStep)._padding_;
  if (plVar1 != (longlong *)0x0) {
    if (pUVar7 == (UObject *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (this->AngleStep)._padding_ = 0;
      (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar7,(int)lVar4);
      FVar2 = (FName)(this->AngleStep)._padding_;
      if (FVar2 != (FName)0x0) {
        pFVar8 = UStruct::FindPropertyByName
                           (*(UStruct **)((this->AngleStep)._padding_ + 0x10),FVar2);
        if ((pFVar8 == (FProperty *)0x0) ||
           (cVar6 = (**(code **)((this->AngleStep)._padding_ + 8))(&this->AngleStep), cVar6 == '\0')
           ) {
          local_res18[0] = 0;
          bVar5 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
          if (!bVar5) goto LAB_146f355d6;
        }
        (this->AngleStep)._padding_ = (longlong)pFVar8;
      }
    }
  }
LAB_146f355d6:
  lVar4 = param_1->_padding_;
  plVar1 = (longlong *)(this->Range)._padding_;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (pUVar7 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1120252505884721189>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                       ,0x25,"Owner");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->Range)._padding_ = 0;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,pUVar7,(int)lVar4);
  FVar2 = (FName)(this->Range)._padding_;
  if (FVar2 == (FName)0x0) {
    return;
  }
  pFVar8 = UStruct::FindPropertyByName(*(UStruct **)((this->Range)._padding_ + 0x10),FVar2);
  if (((pFVar8 == (FProperty *)0x0) ||
      (cVar6 = (**(code **)((this->Range)._padding_ + 8))(&this->Range,pFVar8), cVar6 == '\0')) &&
     (bVar5 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20), !bVar5))
  {
    return;
  }
  (this->Range)._padding_ = (longlong)pFVar8;
  return;
}

// GenerateItems @ 146f4cfd0

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
UEnvQueryGenerator_Cone::GenerateItems(UEnvQueryGenerator_Cone *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  TVector<double>_u_0 *pTVar19;
  longlong lVar20;
  UClass *pUVar21;
  int iVar22;
  uint uVar23;
  UClass *pUVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float local_res8;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1e8;
  float local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined1 local_138 [16];
  TVector<double>_u_0 local_128;
  double local_110;
  double dStack_108;
  double local_100;
  TVector<double> local_f8 [8];
  
  pUVar18 = (this->CenterActor).Class.field0_0x0.DebugPtr;
  pUVar24 = (UClass *)0x0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  pUVar21 = pUVar24;
  if ((pUVar18 != (UClass *)0x0) &&
     (pUVar17 = UEnvQueryContext::StaticClass(), pUVar17 != (UClass *)0x0)) {
    iVar25 = (int)pUVar17->_padding_;
    if (((int)pUVar18->_padding_ < iVar25) ||
       ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar25 * 8) !=
        &pUVar17->_padding_)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      pUVar21 = (this->CenterActor).Class.field0_0x0.DebugPtr;
    }
  }
  FEnvQueryInstance::PrepareContext(param_1,pUVar21,&local_1e8);
  if (0 < local_1e8.ArrayNum) {
    BindDataToDataProviders(this,param_1);
    pFVar2 = (FProperty *)(this->ConeDegrees)._padding_;
    pUVar18 = pUVar24;
    if (pFVar2 != (FProperty *)0x0) {
      pUVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar2,(UObject *)(this->ConeDegrees)._padding_,0);
    }
    fVar13 = __real_43b38000;
    if (pUVar18 == (UClass *)0x0) {
      pUVar18 = (UClass *)&(this->ConeDegrees).DefaultValue;
    }
    fVar45 = (float)((uint)*(float *)&pUVar18->_padding_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (__real_43b38000 <= fVar45) {
      fVar45 = __real_43b38000;
    }
    if (fVar45 <= 0.0) {
      fVar45 = 0.0;
    }
    if (fVar45 != 0.0) {
      pFVar2 = (FProperty *)(this->AlignedPointsDistance)._padding_;
      pUVar18 = pUVar24;
      if (pFVar2 != (FProperty *)0x0) {
        pUVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (pFVar2,(UObject *)(this->AlignedPointsDistance)._padding_,0);
      }
      if (pUVar18 == (UClass *)0x0) {
        pUVar18 = (UClass *)&(this->AlignedPointsDistance).DefaultValue;
      }
      fVar1 = *(float *)&pUVar18->_padding_;
      pFVar2 = (FProperty *)(this->AngleStep)._padding_;
      pUVar18 = pUVar24;
      if (pFVar2 != (FProperty *)0x0) {
        pUVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (pFVar2,(UObject *)(this->AngleStep)._padding_,0);
      }
      if (pUVar18 == (UClass *)0x0) {
        pUVar18 = (UClass *)&(this->AngleStep).DefaultValue;
      }
      pFVar2 = (FProperty *)(this->Range)._padding_;
      fVar46 = *(float *)&pUVar18->_padding_;
      if (fVar13 <= *(float *)&pUVar18->_padding_) {
        fVar46 = fVar13;
      }
      if (fVar46 <= __real_3f800000) {
        fVar46 = __real_3f800000;
      }
      pUVar18 = pUVar24;
      if (pFVar2 != (FProperty *)0x0) {
        pUVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (pFVar2,(UObject *)(this->Range)._padding_,0);
      }
      fVar13 = __real_3f000000;
      local_res8 = __real_bf000000;
      if (pUVar18 == (UClass *)0x0) {
        pUVar18 = (UClass *)&(this->Range).DefaultValue;
      }
      fVar29 = *(float *)&pUVar18->_padding_;
      if (__real_7f7fffff <= *(float *)&pUVar18->_padding_) {
        fVar29 = __real_7f7fffff;
      }
      local_1f8.Data = (FScriptContainerElement *)0x0;
      local_1f0 = 0;
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      iVar25 = (int)ROUND((fVar29 + fVar29) / fVar1 - __real_3f000000) >> 1;
      uVar26 = 1 - ((int)ROUND(__real_bf000000 - (fVar45 + fVar45) / fVar46) >> 1) *
                   local_1e8.ArrayNum * iVar25;
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if (0 < (int)uVar26) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar26,&local_1f8,0,(int *)((longlong)&local_1f0 + 4));
      }
      if (0 < local_1e8.ArrayNum) {
        uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
        uVar48 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
        uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
        uVar50 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
        uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
        uVar52 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
        uVar53 = (undefined4)__real_3ff0000000000000;
        uVar54 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_res8 = fVar45 * local_res8;
        fVar45 = fVar45 * fVar13;
        local_138 = ZEXT416((uint)fVar45);
        pUVar18 = pUVar24;
        uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
        uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
        uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
        uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_1d8 = local_res8;
        do {
          uVar23 = (uint)pUVar24;
          uVar26 = 0;
          if ((int)uVar23 < local_1e8.ArrayNum) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
            uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
            uVar48 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
            uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
            uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          if (*(USceneComponent **)
               (*(longlong *)(local_1e8.AllocatorInstance.Data + (longlong)&pUVar18->_padding_) +
               0x1b8) == (USceneComponent *)0x0) {
            local_128._0_4_ = uVar41;
            local_128._4_4_ = uVar42;
            local_128._8_4_ = uVar43;
            local_128._12_4_ = uVar44;
            pTVar19 = &local_128;
            local_128._s_0.Z = (double)uVar40;
          }
          else {
            pTVar19 = &USceneComponent::GetForwardVector
                                 (*(USceneComponent **)
                                   (*(longlong *)
                                     (local_1e8.AllocatorInstance.Data +
                                     (longlong)&pUVar18->_padding_) + 0x1b8),local_f8)->field0_0x0;
            uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
            uVar48 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
            uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
            uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
            uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          local_150 = (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X;
          dStack_148 = (pTVar19->_s_0).Y;
          local_140 = (pTVar19->_s_0).Z;
          uVar26 = 0;
          if ((int)uVar23 < local_1e8.ArrayNum) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
            uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
            uVar48 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
            uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
            uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          lVar20 = *(longlong *)
                    (*(longlong *)(local_1e8.AllocatorInstance.Data + (longlong)&pUVar18->_padding_)
                    + 0x1b8);
          if (lVar20 == 0) {
            local_1a8 = (double)CONCAT44(uVar36,uVar35);
            uStack_1a0 = (double)CONCAT44(uVar38,uVar37);
            local_198 = (double)uVar32;
          }
          else {
            local_1a8 = *(double *)(lVar20 + 0x210);
            uStack_1a0 = *(double *)(lVar20 + 0x218);
            local_110 = local_1a8;
            dStack_108 = uStack_1a0;
            local_100 = *(double *)(lVar20 + 0x220);
            local_198 = *(double *)(lVar20 + 0x220);
          }
          dVar14 = local_198;
          uVar27 = SUB84(uStack_1a0,0);
          uVar28 = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
          uVar30 = SUB84(local_1a8,0);
          uVar31 = (undefined4)((ulonglong)local_1a8 >> 0x20);
          local_1b8 = uStack_1a0;
          local_1b0 = local_1a8;
          if (local_res8 < fVar45) {
            uVar35 = SUB84(local_140,0);
            uVar36 = (undefined4)((ulonglong)local_140 >> 0x20);
            local_1d0 = dStack_148;
            local_1c8 = local_150;
            local_1c0 = local_140;
            do {
              __libm_sse2_sincos_();
              dVar8 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
              dVar7 = (double)CONCAT44(uVar54,uVar53) - dVar8;
              dVar6 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                      (double)CONCAT44(uVar50,uVar49);
              iVar22 = 1;
              dVar39 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                       (double)CONCAT44(uVar48,uVar47);
              dVar9 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
                      (double)CONCAT44(uVar52,uVar51);
              dVar5 = (double)CONCAT44(uVar50,uVar49) * (double)CONCAT44(uVar52,uVar51) * dVar7;
              dVar10 = (double)CONCAT44(uVar48,uVar47) * (double)CONCAT44(uVar52,uVar51) * dVar7;
              dVar33 = (double)CONCAT44(uVar48,uVar47) * (double)CONCAT44(uVar50,uVar49) * dVar7;
              dVar4 = (dVar5 - dVar39) * local_1d0;
              dVar12 = ((double)CONCAT44(uVar52,uVar51) * (double)CONCAT44(uVar52,uVar51) * dVar7 +
                       dVar8) * local_1c8;
              dVar11 = (dVar10 - dVar6) * local_1c8;
              dVar39 = (dVar39 + dVar5) * local_1c8;
              dVar5 = (dVar33 - dVar9) * local_1c0;
              dVar9 = (dVar9 + dVar33) * local_1d0;
              dVar33 = ((double)CONCAT44(uVar50,uVar49) * (double)CONCAT44(uVar50,uVar49) * dVar7 +
                       dVar8) * local_1d0;
              dVar7 = ((double)CONCAT44(uVar48,uVar47) * (double)CONCAT44(uVar48,uVar47) * dVar7 +
                      dVar8) * local_1c0;
              if (0 < iVar25) {
                dVar8 = (double)fVar1;
                do {
                  dStack_178 = 0.0;
                  dVar34 = (double)iVar22;
                  local_190 = (dVar12 + dVar4 + (dVar6 + dVar10) * (double)CONCAT44(uVar36,uVar35))
                              * dVar34 * dVar8 + local_1b0;
                  dStack_188 = (dVar33 + dVar39 + dVar5) * dVar34 * dVar8 + local_1b8;
                  local_180 = (dVar11 + dVar9 + dVar7) * dVar34 * dVar8 + dVar14;
                  if (((local_1f8.Data <= (FScriptContainerElement *)&local_190) &&
                      ((FScriptContainerElement *)&local_190 <
                       local_1f8.Data + (longlong)local_1f0._4_4_ * 0x20)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if ((int)local_1f0 == local_1f0._4_4_) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&local_1f8,(int *)((longlong)&local_1f0 + 4));
                    local_1f0 = CONCAT44(local_1f0._4_4_,iVar16);
                  }
                  lVar20 = (longlong)(int)local_1f0;
                  iVar22 = iVar22 + 1;
                  local_1f0 = CONCAT44(local_1f0._4_4_,(int)local_1f0 + 1);
                  *(double *)(local_1f8.Data + lVar20 * 0x20) = local_190;
                  *(double *)(local_1f8.Data + lVar20 * 0x20 + 8) = dStack_188;
                  *(double *)(local_1f8.Data + lVar20 * 0x20 + 0x10) = local_180;
                  *(double *)(local_1f8.Data + lVar20 * 0x20 + 0x10 + 8) = dStack_178;
                } while (iVar22 <= iVar25);
                uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
                uVar48 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
                uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
                uVar50 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
                uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
                uVar52 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
              }
              local_res8 = local_res8 + fVar46;
              uVar35 = SUB84(local_1c0,0);
              uVar36 = (undefined4)((ulonglong)local_1c0 >> 0x20);
              uVar53 = (undefined4)__real_3ff0000000000000;
              uVar54 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            } while (local_res8 < (float)local_138._0_4_);
            uVar27 = SUB84(local_1b8,0);
            uVar28 = (undefined4)((ulonglong)local_1b8 >> 0x20);
            uVar30 = SUB84(local_1b0,0);
            uVar31 = (undefined4)((ulonglong)local_1b0 >> 0x20);
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
            uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
            uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
            fVar45 = (float)local_138._0_4_;
            local_res8 = local_1d8;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          if (this->bIncludeContextLocation != 0) {
            local_170 = CONCAT44(uVar31,uVar30);
            uStack_168 = CONCAT44(uVar28,uVar27);
            local_160 = dVar14;
            dStack_158 = 0.0;
            if (((local_1f8.Data <= (FScriptContainerElement *)&local_170) &&
                ((FScriptContainerElement *)&local_170 <
                 local_1f8.Data + (longlong)local_1f0._4_4_ * 0x20)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((int)local_1f0 == local_1f0._4_4_) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_1f8,(int *)((longlong)&local_1f0 + 4));
              local_1f0 = CONCAT44(local_1f0._4_4_,iVar22);
            }
            lVar20 = (longlong)(int)local_1f0;
            local_1f0 = CONCAT44(local_1f0._4_4_,(int)local_1f0 + 1);
            *(undefined8 *)(local_1f8.Data + lVar20 * 0x20) = local_170;
            *(undefined8 *)(local_1f8.Data + lVar20 * 0x20 + 8) = uStack_168;
            *(double *)(local_1f8.Data + lVar20 * 0x20 + 0x10) = local_160;
            *(double *)(local_1f8.Data + lVar20 * 0x20 + 0x10 + 8) = dStack_158;
            uVar47 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
            uVar48 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
            uVar49 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
            uVar50 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
            uVar51 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            uVar41 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
            uVar43 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
            uVar44 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          pUVar24 = (UClass *)(ulonglong)(uVar23 + 1);
          pUVar18 = (UClass *)&pUVar18->_padding_;
        } while ((int)(uVar23 + 1) < local_1e8.ArrayNum);
      }
      (**(code **)(this->_padding_ + 0x2e0))(this,&local_1f8,param_1);
      (**(code **)(this->_padding_ + 0x2e8))(this,&local_1f8,param_1);
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data);
      }
    }
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// GetDescriptionDetails @ 146f50f90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_Cone::GetDescriptionDetails
          (UEnvQueryGenerator_Cone *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  FText local_118;
  FString local_108;
  FString local_f8;
  FFormatArgumentValue local_e8;
  FFormatArgumentValue local_c8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->AngleStep,&local_88);
  pFVar4 = FText::FromString(&local_58,pFVar3);
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->ConeDegrees,&local_98);
  pFVar5 = FText::FromString(&local_48,pFVar3);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"EnvQueryGenerator",L"ConeDescription",
                      L"degrees: {0}, angle step: {1}");
  pFVar7 = FTextFormat::FTextFormat(&local_38,pFVar6,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar7,pFVar5,pFVar4);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FEnvTraceData::ToText((FEnvTraceData *)&this->_padding_,&local_118,Brief);
  bVar2 = FText::IsEmpty(&local_118);
  if (!bVar2) {
    local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Pairs.ArrayNum = 0;
    local_128.Pairs.ArrayMax = 0;
    local_e8.Type = Text;
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
    }
    local_e8.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
    ::FString::FString(&local_108,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_108,&local_e8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    local_c8.Type = Text;
    local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_118.TextData.Reference;
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 8))
                (local_118.TextData.Reference,local_res10);
    }
    local_c8.TextValue.field0_0x0.TypedValue.Flags = local_118.Flags;
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
    ::FString::FString(&local_f8,L"ProjectionDescription");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_f8,&local_c8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"EnvQueryGenerator",L"ConeDescriptionWithProjection",
                        L"{Description}, {ProjectionDescription}");
    pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
    pFVar4 = FText::Format(&local_78,pFVar7,&local_128);
    FText::operator=(__return_storage_ptr__,pFVar4);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
               local_128.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_128.Pairs.AllocatorInstance.Data);
    }
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54140

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_Cone::GetDescriptionTitle
          (UEnvQueryGenerator_Cone *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  UClass *local_res8;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_res8 = (this->CenterActor).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar1 = UEnvQueryTypes::DescribeContext(&local_28,(TSubclassOf<UEnvQueryContext>)&local_res8);
  UEnvQueryTypes::GetShortTypeName(&local_48,(UObject *)this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"EnvQueryGenerator",L"ConeDescriptionGenerateAroundContext",
                      L"{0}: generate in front of {1}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar3,&local_48,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58210

UClass * __cdecl UEnvQueryGenerator_Cone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Cone",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Cone,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryGenerator_Cone>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Cone>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryGenerator_Cone @ 146f76d10

void __cdecl UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone(void)

{
  return;
}

