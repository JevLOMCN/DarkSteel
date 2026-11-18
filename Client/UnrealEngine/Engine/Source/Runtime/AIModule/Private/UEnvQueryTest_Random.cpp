// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f133d0

UClass * __cdecl UEnvQueryTest_Random::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Random",
               &Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Random,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Random>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Random>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton;
}

// UEnvQueryTest_Random @ 146f2d790

UEnvQueryTest_Random * __thiscall
UEnvQueryTest_Random::UEnvQueryTest_Random(UEnvQueryTest_Random *this,FVTableHelper *param_1)

{
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryTest_Random__6B_;
  return this;
}

// UEnvQueryTest_Random @ 146f2d7c0

UEnvQueryTest_Random * __thiscall
UEnvQueryTest_Random::UEnvQueryTest_Random(UEnvQueryTest_Random *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->field_0xf8 = 0;
  *(undefined ***)this = &___7UEnvQueryTest_Random__6B_;
  pUVar1 = UEnvQueryItemType::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x1e8 = pUVar1;
  return this;
}

// ~UEnvQueryTest_Random @ 146f2f290

void __thiscall UEnvQueryTest_Random::~UEnvQueryTest_Random(UEnvQueryTest_Random *this)

{
  *(undefined ***)this = &___7UEnvQueryTest_Random__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f53650

FText * __thiscall
UEnvQueryTest_Random::GetDescriptionDetails
          (UEnvQueryTest_Random *this,FText *__return_storage_ptr__)

{
  UEnvQueryTest::DescribeFloatTestParams((UEnvQueryTest *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59550

UClass * __cdecl UEnvQueryTest_Random::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Random",
               &Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Random,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Random>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Random>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton;
}

// RunTest @ 146f716d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryTest_Random::RunTest(UEnvQueryTest_Random *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  FName FVar4;
  FName FVar5;
  float fVar6;
  double dVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  UObject *pUVar13;
  FProperty *pFVar14;
  float *pfVar15;
  float *pfVar16;
  LARGE_INTEGER local_res10;
  undefined1 local_res18 [16];
  FItemIterator local_b8 [3];
  
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar13 == (UObject *)0x0) {
    return;
  }
  plVar3 = *(longlong **)&this->field_0x98;
  pfVar16 = (float *)0x0;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)&this->field_0x90 = 0;
    (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar13);
    FVar4.ComparisonIndex.Value = *(uint *)&this->field_0xa0;
    FVar4.Number = *(uint *)&this->field_0xa4;
    if (FVar4 != (FName)0x0) {
      pFVar14 = UStruct::FindPropertyByName
                          (*(UStruct **)(*(longlong *)&this->field_0x98 + 0x10),FVar4);
      if ((pFVar14 == (FProperty *)0x0) ||
         (cVar11 = (**(code **)(*(longlong *)&this->field_0x88 + 8))(&this->field_0x88,pFVar14),
         cVar11 == '\0')) {
        local_res10.s.LowPart._0_1_ = 0;
        bVar12 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_res10);
        if (!bVar12) goto LAB_146f717ab;
      }
      *(FProperty **)&this->field_0x90 = pFVar14;
    }
  }
LAB_146f717ab:
  pfVar15 = pfVar16;
  if (*(FProperty **)&this->field_0x90 != (FProperty *)0x0) {
    pfVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (*(FProperty **)&this->field_0x90,*(UObject **)&this->field_0x98,0);
  }
  if (pfVar15 == (float *)0x0) {
    pfVar15 = (float *)&this->field_0xb8;
  }
  fVar1 = *pfVar15;
  plVar3 = *(longlong **)&this->field_0xd0;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)&this->field_0xc8 = 0;
    (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar13);
    FVar5.ComparisonIndex.Value = *(uint *)&this->field_0xd8;
    FVar5.Number = *(uint *)&this->field_0xdc;
    if ((FVar5 != (FName)0x0) &&
       (((pFVar14 = UStruct::FindPropertyByName
                              (*(UStruct **)(*(longlong *)&this->field_0xd0 + 0x10),FVar5),
         pFVar14 != (FProperty *)0x0 &&
         (cVar11 = (**(code **)(*(longlong *)&this->field_0xc0 + 8))(&this->field_0xc0,pFVar14),
         cVar11 != '\0')) ||
        (bVar12 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18),
        bVar12)))) {
      *(FProperty **)&this->field_0xc8 = pFVar14;
    }
  }
  if (*(FProperty **)&this->field_0xc8 != (FProperty *)0x0) {
    pfVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (*(FProperty **)&this->field_0xc8,*(UObject **)&this->field_0xd0,0);
  }
  if (pfVar16 == (float *)0x0) {
    pfVar16 = (float *)&this->field_0xf0;
  }
  fVar2 = *pfVar16;
  FEnvQueryInstance::FItemIterator::FItemIterator(local_b8,(UEnvQueryTest *)this,param_1,-1);
  dVar7 = __real_4170000000000000;
  fVar6 = __real_3f800000;
  while (((dVar10 = local_b8[0].Deadline, iVar9 = (int)local_b8[0]._padding_,
          lVar8 = local_b8[0]._padding_,
          (int)local_b8[0]._padding_ < *(int *)(local_b8[0]._padding_ + 8) &&
          ((*(byte *)(local_b8[0]._padding_ + 0x10c) & 2) == 0)) &&
         ((local_b8[0].Deadline < 0.0 ||
          (QueryPerformanceCounter(&local_res10),
          (double)CONCAT71(local_res10.QuadPart._1_7_,local_res10.s.LowPart._0_1_) *
          FGenericPlatformTime::SecondsPerCycle + dVar7 < dVar10))))) {
    UAISystem::RandomStream.Seed = UAISystem::RandomStream.Seed * 0xbb38435 + 0x3619636b;
    FEnvQueryInstance::FItemIterator::SetScore
              (local_b8,(uint)(byte)this->field_0x34,(uint)(byte)this->field_0x4a,
               (float)(UAISystem::RandomStream.Seed >> 9 | 0x3f800000) - fVar6,fVar1,fVar2);
    FEnvQueryInstance::FItemIterator::StoreTestResult(local_b8);
    if ((*(byte *)(local_b8[0]._padding_ + 0x10c) & 2) == 0) {
      local_b8[0].ItemScore = 0.0;
      local_b8[0].NumPassedForItem = 0;
      local_b8[0].NumTestsForItem = 0;
      INSERT(local_b8[0]._34_1_,'\0',1,1);
      INSERT(local_b8[0]._34_1_,'\x01',0,1);
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)local_b8);
    }
  }
  *(int *)(lVar8 + 0xec) = iVar9;
  return;
}

// StaticRegisterNativesUEnvQueryTest_Random @ 146f76f10

void __cdecl UEnvQueryTest_Random::StaticRegisterNativesUEnvQueryTest_Random(void)

{
  return;
}

