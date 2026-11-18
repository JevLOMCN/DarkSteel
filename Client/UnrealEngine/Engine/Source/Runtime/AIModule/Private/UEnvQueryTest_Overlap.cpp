// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f151b0

UClass * __cdecl UEnvQueryTest_Overlap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Overlap",
               &Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Overlap,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Overlap>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Overlap>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton;
}

// UEnvQueryTest_Overlap @ 146f2d180

UEnvQueryTest_Overlap * __thiscall
UEnvQueryTest_Overlap::UEnvQueryTest_Overlap(UEnvQueryTest_Overlap *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
  (this->OverlapData).ExtentX = 10.0;
  (this->OverlapData).ExtentY = 10.0;
  (this->OverlapData).ExtentZ = 10.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.Y = (double)uVar4;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  puVar2 = &(this->OverlapData).field_0x2c;
  (this->OverlapData).bOnlyBlockingHits = 1;
  (this->OverlapData).bSkipOverlapQuerier = 0;
  (this->OverlapData).bOverlapComplex = 0;
  (this->OverlapData).OverlapChannel = '\0';
  (this->OverlapData).OverlapShape = '\0';
  return this;
}

// UEnvQueryTest_Overlap @ 146f2d200

UEnvQueryTest_Overlap * __thiscall
UEnvQueryTest_Overlap::UEnvQueryTest_Overlap
          (UEnvQueryTest_Overlap *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  UClass *pUVar6;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
  (this->OverlapData).ExtentX = 10.0;
  (this->OverlapData).ExtentY = 10.0;
  (this->OverlapData).ExtentZ = 10.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.Y = (double)uVar5;
  (this->OverlapData).ShapeOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OverlapData).OverlapChannel = '\0';
  (this->OverlapData).OverlapShape = '\0';
  puVar2 = &(this->OverlapData).field_0x2c;
  (this->OverlapData).bOnlyBlockingHits = 1;
  (this->OverlapData).bSkipOverlapQuerier = 0;
  (this->OverlapData).bOverlapComplex = 0;
  *(undefined1 *)&this->_padding_ = 2;
  pUVar6 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->_padding_ = (longlong)pUVar6;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  cVar3 = *(char *)((longlong)&this->_padding_ + 2);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  if (cVar3 != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  return this;
}

// ~UEnvQueryTest_Overlap @ 146f2f1e0

void __thiscall UEnvQueryTest_Overlap::~UEnvQueryTest_Overlap(UEnvQueryTest_Overlap *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f52fc0

FText * __thiscall
UEnvQueryTest_Overlap::GetDescriptionDetails
          (UEnvQueryTest_Overlap *this,FText *__return_storage_ptr__)

{
  uchar uVar1;
  FScriptContainerElement *pFVar2;
  UPackage *pUVar3;
  FText *pFVar4;
  FString *pFVar5;
  UEnum *this_00;
  longlong lVar6;
  TRefCountPtr<ITextData> TVar7;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FText local_38;
  FString local_28;
  
  if (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape,(UObject *)pUVar3,
                       L"EEnvOverlapShape");
  }
  pFVar4 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton,&local_38,
                      (ulonglong)(this->OverlapData).OverlapShape.Value);
  pFVar5 = FText::ToString(pFVar4);
  TVar7.Reference = (ITextData *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (pFVar5->Data).ArrayNum;
  lVar6 = (longlong)local_40;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar2,lVar6 * 2);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  this_00 = StaticEnum<enum_ECollisionChannel>();
  pFVar4 = UEnum::GetDisplayNameTextByValue
                     (this_00,&local_38,(ulonglong)(this->OverlapData).OverlapChannel.Value);
  pFVar5 = FText::ToString(pFVar4);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar5->Data).ArrayNum;
  lVar6 = (longlong)local_50;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,lVar6 * 2);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  uVar1 = (this->OverlapData).OverlapShape.Value;
  if (uVar1 == '\0') {
    ::FString::PrintfImpl((FString *)&local_38,L"X = %f, Y = %f, Z = %f");
    TVar7.Reference = local_38.TextData.Reference;
  }
  else if (uVar1 == '\x01') {
    ::FString::PrintfImpl((FString *)&local_38,L"Radius = %f");
    TVar7.Reference = local_38.TextData.Reference;
  }
  else if (uVar1 == '\x02') {
    ::FString::PrintfImpl((FString *)&local_38,L"Width = %f, Height = %f");
    TVar7.Reference = local_38.TextData.Reference;
  }
  else {
    pFVar5 = ::FString::FString((FString *)&local_38,"Invalid.");
    if (&local_28 != pFVar5) {
      TVar7.Reference = (ITextData *)(pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
  }
  ::FString::PrintfImpl((FString *)&local_38,L"Using a %s where %s in channel: %s");
  FText::FromString(__return_storage_ptr__,(FString *)&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (TVar7.Reference != (ITextData *)0x0) {
    FMemory::Free(TVar7.Reference);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54ea0

FText * __thiscall
UEnvQueryTest_Overlap::GetDescriptionTitle
          (UEnvQueryTest_Overlap *this,FText *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  UPackage *pUVar1;
  FText *this_00;
  FString *pFVar2;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  FText local_18;
  
  if (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape,(UObject *)pUVar1,
                       L"EEnvOverlapShape");
  }
  this_00 = UEnum::GetDisplayNameTextByValue
                      (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton,&local_18,
                       (ulonglong)(this->OverlapData).OverlapShape.Value);
  pFVar2 = FText::ToString(this_00);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar2->Data).ArrayNum;
  lVar3 = (longlong)local_30;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar3 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  UEnvQueryTypes::GetShortTypeName(&local_18,(UObject *)this);
  FText::ToString(&local_18);
  ::FString::PrintfImpl(&local_28,L"%s: %s");
  FText::FromString(__return_storage_ptr__,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59250

UClass * __cdecl UEnvQueryTest_Overlap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Overlap",
               &Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Overlap,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Overlap>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Overlap>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton;
}

// RunOverlap @ 146f69830

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

bool __thiscall
UEnvQueryTest_Overlap::RunOverlap
          (UEnvQueryTest_Overlap *this,TVector<double> *param_1,FCollisionShape *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3,UWorld *param_4,
          ECollisionChannel param_5,FCollisionQueryParams *param_6)

{
  bool bVar1;
  undefined1 auStackY_f8 [32];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActors(&local_b8,param_3);
  bVar1 = UWorld::OverlapAnyTestByChannel
                    (param_4,param_1,&UE::Math::TQuat<double>::Identity,param_5,param_2,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunOverlapBlocking @ 146f69910

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

bool __thiscall
UEnvQueryTest_Overlap::RunOverlapBlocking
          (UEnvQueryTest_Overlap *this,TVector<double> *param_1,FCollisionShape *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3,UWorld *param_4,
          ECollisionChannel param_5,FCollisionQueryParams *param_6)

{
  bool bVar1;
  undefined1 auStackY_f8 [32];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActors(&local_b8,param_3);
  bVar1 = UWorld::OverlapBlockingTestByChannel
                    (param_4,param_1,&UE::Math::TQuat<double>::Identity,param_5,param_2,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunTest @ 146f6daf0

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
UEnvQueryTest_Overlap::RunTest(UEnvQueryTest_Overlap *this,FEnvQueryInstance *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  FProperty *pFVar13;
  longlong *plVar14;
  FName *pFVar15;
  UClass *pUVar16;
  code *pcVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_228 [32];
  undefined1 local_1c8 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1c0;
  undefined4 local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  TStatId local_1a0;
  AActor *local_198;
  FItemIterator local_190;
  LARGE_INTEGER local_168;
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  FName local_130;
  FName local_128 [2];
  FCollisionQueryParams local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  plVar14 = (longlong *)0x0;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    if (pUVar12 == (UObject *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar8) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))();
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar13 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar13 == (FProperty *)0x0) ||
           (cVar9 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar13), cVar9 == '\0')) {
          local_1c8[0] = 0;
          bVar8 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_1c8);
          if (!bVar8) goto LAB_146f6dbe4;
        }
        this->_padding_ = (longlong)pFVar13;
      }
    }
  }
LAB_146f6dbe4:
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    plVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
  }
  if (plVar14 == (longlong *)0x0) {
    plVar14 = &this->_padding_;
  }
  lVar7 = *plVar14;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_EnvQueryOverlap =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UEnvQueryTest_Overlap::RunTest(FEnvQueryInstance_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryOverlap>
          )0x0;
    pFVar15 = ::FName::FName(&local_130,"EnvQueryOverlap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryOverlap,*pFVar15,L"EnvQueryOverlap",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_1a0.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryOverlap;
  if (StatPtr_EnvQueryOverlap ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UEnvQueryTest_Overlap::RunTest(FEnvQueryInstance_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryOverlap>
       )0x0) {
    pFVar15 = ::FName::FName(local_128,"EnvQueryOverlap");
    local_1a0.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryOverlap,*pFVar15,
                    L"EnvQueryOverlap","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags"
                    ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"EnvQueryOverlap");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_118,::StaticName,&local_1a0,(this->OverlapData).bOverlapComplex,(AActor *)0x0);
  dVar19 = __real_3fb0000000000000;
  uVar4 = (this->OverlapData).OverlapShape.Value;
  fVar2 = (this->OverlapData).ExtentX;
  fVar3 = (this->OverlapData).ExtentZ;
  local_1b0 = 0;
  if (uVar4 == '\0') {
    local_1b0 = 1;
    local_1a8 = (this->OverlapData).ExtentY;
    local_1a4 = fVar3;
  }
  else if (uVar4 == '\x01') {
    dVar19 = (double)fVar2 - (double)fVar2;
    if ((__real_3fb0000000000000 <
         (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatFitsIn<OutType>(In, Precision)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xc0,L"Loss of data caused by narrowing conversion"), bVar8)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    local_1a8 = local_1a0.StatIdPtr._0_4_;
    local_1a4 = local_1a0.StatIdPtr._0_4_;
    local_1b0 = 2;
  }
  else {
    if (uVar4 != '\x02') goto LAB_146f6e15c;
    if ((__real_3fb0000000000000 <
         (double)CONCAT44((uint)((ulonglong)((double)fVar3 - (double)fVar3) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84((double)fVar3 - (double)fVar3,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatFitsIn<OutType>(In, Precision)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xc0,L"Loss of data caused by narrowing conversion"), bVar8)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    dVar18 = (double)fVar2 - (double)fVar2;
    if ((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("FloatFitsIn<OutType>(In, Precision)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xc0,L"Loss of data caused by narrowing conversion"), bVar8)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    local_1a4 = local_1a0.StatIdPtr._0_4_;
    local_1b0 = 3;
    local_1a8 = fVar3;
  }
  pcVar17 = RunOverlap;
  if ((this->OverlapData).bOnlyBlockingHits != 0) {
    pcVar17 = RunOverlapBlocking;
  }
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  local_1ac = fVar2;
  if ((this->OverlapData).bSkipOverlapQuerier != 0) {
    pUVar16 = UEnvQueryContext_Querier::StaticClass();
    FEnvQueryInstance::PrepareContext(param_1,pUVar16,&local_1c0);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_190,(UEnvQueryTest *)this,param_1,-1);
  dVar19 = __real_4170000000000000;
  while (((dVar18 = local_190.Deadline, iVar10 = (int)local_190._padding_,
          lVar6 = local_190._padding_, (int)local_190._padding_ < *(int *)(local_190._padding_ + 8)
          && ((*(byte *)(local_190._padding_ + 0x10c) & 2) == 0)) &&
         ((local_190.Deadline < 0.0 ||
          (QueryPerformanceCounter(&local_168),
          (double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar19 < dVar18)))))
  {
    UEnvQueryTest::GetItemLocation
              ((UEnvQueryTest *)this,(TVector<double> *)&local_160._s_0,param_1,iVar10);
    local_198 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)this,param_1,iVar10);
    if (((local_1c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_198) &&
        ((FScriptContainerElement *)&local_198 <
         local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    iVar10 = local_1c0.ArrayNum;
    if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
    }
    local_148 = local_160._s_0.X + (this->OverlapData).ShapeOffset.field0_0x0._s_0.X;
    local_140 = local_160._s_0.Y + (this->OverlapData).ShapeOffset.field0_0x0._s_0.Y;
    local_1c0.ArrayNum = iVar10 + 1;
    local_138 = local_160._s_0.Z + (this->OverlapData).ShapeOffset.field0_0x0._s_0.Z;
    *(AActor **)(local_1c0.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_198;
    bVar8 = (bool)(*pcVar17)(this,&local_148,&local_1b0,&local_1c0);
    FEnvQueryInstance::FItemIterator::SetScore
              (&local_190,(uint)*(byte *)((longlong)&this->_padding_ + 4),
               (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar8,SUB81(lVar7,0));
    if (local_1c0.ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    iVar11 = (local_1c0.ArrayNum - (local_1c0.ArrayNum + -1)) + -1;
    iVar10 = local_1c0.ArrayNum;
    if (iVar11 != 0) {
      memmove(local_1c0.AllocatorInstance.Data + (longlong)(local_1c0.ArrayNum + -1) * 8,
              local_1c0.AllocatorInstance.Data + (longlong)(local_1c0.ArrayNum + -1) * 8 + 8,
              (longlong)iVar11 << 3);
      iVar10 = local_1c0.ArrayNum;
    }
    local_1c0.ArrayNum = iVar10 + -1;
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_190);
    if ((*(byte *)(local_190._padding_ + 0x10c) & 2) == 0) {
      local_190.ItemScore = 0.0;
      local_190.NumPassedForItem = 0;
      local_190.NumTestsForItem = 0;
      local_190.bForced = '\0';
      local_190.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_190);
    }
  }
  *(int *)(lVar6 + 0xec) = iVar10;
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
LAB_146f6e15c:
  if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Overlap @ 146f76ed0

void __cdecl UEnvQueryTest_Overlap::StaticRegisterNativesUEnvQueryTest_Overlap(void)

{
  return;
}

