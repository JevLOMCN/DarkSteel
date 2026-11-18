// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b40d250

UClass * __cdecl UDS_ActorAttachedWidgetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActorAttachedWidgetComponent",
               &Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton,
               StaticRegisterNativesUDS_ActorAttachedWidgetComponent,0x790,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ActorAttachedWidgetComponent>,
               InternalVTableHelperCtorCaller<UDS_ActorAttachedWidgetComponent>,local_res8,
               UDS_WidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton;
}

// UDS_ActorAttachedWidgetComponent @ 14b4113d0

UDS_ActorAttachedWidgetComponent * __thiscall
UDS_ActorAttachedWidgetComponent::UDS_ActorAttachedWidgetComponent
          (UDS_ActorAttachedWidgetComponent *this,FVTableHelper *param_1)

{
  UDS_WidgetComponent::UDS_WidgetComponent((UDS_WidgetComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->WidgetPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.PackageName.Number = 0;
  (this->WidgetPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.AssetName.Number = 0;
  (this->WidgetPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetPath).SubPathString.Data.ArrayNum = 0;
  (this->WidgetPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~UDS_ActorAttachedWidgetComponent @ 14b411ee0

void __thiscall
UDS_ActorAttachedWidgetComponent::~UDS_ActorAttachedWidgetComponent
          (UDS_ActorAttachedWidgetComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->WidgetPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_WidgetComponent::~UDS_WidgetComponent((UDS_WidgetComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b413660

UClass * __cdecl UDS_ActorAttachedWidgetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActorAttachedWidgetComponent",
               &Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton,
               StaticRegisterNativesUDS_ActorAttachedWidgetComponent,0x790,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ActorAttachedWidgetComponent>,
               InternalVTableHelperCtorCaller<UDS_ActorAttachedWidgetComponent>,local_res8,
               UDS_WidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActorAttachedWidgetComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_ActorAttachedWidgetComponent @ 14b414280

void __cdecl
UDS_ActorAttachedWidgetComponent::StaticRegisterNativesUDS_ActorAttachedWidgetComponent(void)

{
  return;
}

// UDS_ActorAttachedWidgetComponent @ 14bc2a8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDS_ActorAttachedWidgetComponent * __thiscall
UDS_ActorAttachedWidgetComponent::UDS_ActorAttachedWidgetComponent
          (UDS_ActorAttachedWidgetComponent *this,FObjectInitializer *param_1)

{
  UDS_WidgetComponent::UDS_WidgetComponent((UDS_WidgetComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->WidgetPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.PackageName.Number = 0;
  (this->WidgetPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WidgetPath).AssetPath.AssetName.Number = 0;
  (this->WidgetPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetPath).SubPathString.Data.ArrayNum = 0;
  (this->WidgetPath).SubPathString.Data.ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  return this;
}

// Init @ 14bc46e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ActorAttachedWidgetComponent::Init
          (UDS_ActorAttachedWidgetComponent *this,FSoftObjectPath *param_1)

{
  UAssetManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ActorAttachedWidgetComponent *local_res8;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [24];
  TVector2<double>_u_0 local_88;
  code *local_78;
  FMRSWRecursiveAccessDetector *pFStack_70;
  char *local_68;
  TSharedPtr<FStreamableHandle,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  FSoftObjectPath::operator=(&this->WidgetPath,param_1);
  local_88._s_0.X = ___xmm_4008000000000000404f800000000000;
  local_88._s_0.Y = _UNK_152798ef8;
  this->field_0x5b0 = 1;
  UWidgetComponent::SetDrawSize((UWidgetComponent *)this,(TVector2<double> *)&local_88._s_0);
  pUVar1 = UAssetManager::Get();
  local_a0._0_4_ = 0x24;
  local_a0._4_4_ = 0x28;
  local_88._s_0.X = 0.0;
  local_a0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\ActorComponent\\DS_ActorAttachedWidgetComponent.cpp"
  ;
  local_88._s_0.Y = 0.0;
  local_a0._16_8_ =
       "void __cdecl UDS_ActorAttachedWidgetComponent::Init(const struct FSoftObjectPath &)";
  local_78 = OnWidgetLoaded;
  pFStack_70 = (FMRSWRecursiveAccessDetector *)
               ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_b0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ActorAttachedWidgetComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = local_78;
    puVar2[5] = pFStack_70;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_78._4_4_ = local_a0._4_4_;
  local_78._0_4_ = local_a0._0_4_;
  pFStack_70 = (FMRSWRecursiveAccessDetector *)local_a0._8_8_;
  local_68 = (char *)local_a0._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar1->StreamableManager,&local_58,param_1,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,0,false,false,
             (FString *)&local_88._s_0,(FSourceLocation *)&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)local_a0);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0._8_8_,(FDestructionSentinel *)local_a0);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  return;
}

// OnWidgetLoaded @ 14bc53a40

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ActorAttachedWidgetComponent::OnWidgetLoaded(UDS_ActorAttachedWidgetComponent *this)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_EntityBase *pFVar9;
  FName FVar10;
  UWorld *pUVar11;
  undefined1 auStackY_3d8 [32];
  FWeakObjectPtr local_398;
  FWeakObjectPtr local_390;
  TPairInitializer<FName_const_&,__int64_&> local_388;
  FName local_378;
  ulong64 local_370;
  UObject *local_368;
  UDS_UserWidget *local_360;
  FName *local_358;
  ulong64 *local_350;
  undefined1 local_348 [32];
  ForAnyElementType local_328;
  undefined8 local_320;
  TBitArray<FDefaultBitArrayAllocator> local_318;
  undefined4 local_2f8;
  undefined4 local_2f4;
  void *local_2e8;
  undefined4 local_2e0;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  TBitArray<FDefaultBitArrayAllocator> local_2c8;
  undefined4 local_2a8;
  undefined4 local_2a4;
  _func___cdecl_void_FObjectInitializer_ptr *local_298;
  undefined4 local_290;
  FUObjectCppClassStaticFunctions local_288;
  undefined8 local_280;
  TBitArray<FDefaultBitArrayAllocator> local_278;
  undefined4 local_258;
  undefined4 local_254;
  ForAnyElementType local_248;
  int local_240;
  TObjectPtr<UObject>_u_0 local_238;
  undefined8 local_230;
  TBitArray<FDefaultBitArrayAllocator> local_228;
  undefined4 local_208;
  undefined4 local_204;
  void *local_1f8;
  undefined4 local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  TBitArray<FDefaultBitArrayAllocator> local_1d8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  void *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [32];
  void *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  FSchemaOwner local_158;
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  pUVar6 = FSoftObjectPath::ResolveObject(&this->WidgetPath);
  if (pUVar6 == (UObject *)0x0) {
LAB_14bc53ae7:
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14bc53b14;
    }
LAB_14bc53b11:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UBlueprint_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bc53ae7;
    lVar2 = *(longlong *)&pUVar6[1].field_0x8;
    if ((lVar2 == 0) || (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 == (UClass *)0x0))
    goto LAB_14bc53b11;
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bc53b11;
    pUVar6 = *(UObject **)&pUVar6[1].field_0x8;
  }
LAB_14bc53b14:
  if (pUVar6 == (UObject *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&this->WidgetPath,(FString *)(local_348 + 8));
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ActorAttachedWidgetComponent::OnWidgetLoaded",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x38,L"Failed to load widget class : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if ((void *)local_348._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_348._8_8_);
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4984967063551344697>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\ActorComponent\\DS_ActorAttachedWidgetComponent.cpp"
                       ,0x39,"false");
    if (bVar5) {
code_r0x00014bc53c94:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar3 = *(UObject **)&this->field_0xa8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_390.ObjectIndex = 0;
    local_390.ObjectSerialNumber = 0;
    local_388.Value = (long64 *)pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_390,(FObjectPtr)&local_388.Value);
    pFVar9 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_390);
    if (pFVar9 == (FDS_EntityBase *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4984967063551344704>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\ActorComponent\\DS_ActorAttachedWidgetComponent.cpp"
                         ,0x40,"false");
      if (bVar5) goto code_r0x00014bc53c94;
    }
    else {
      local_328.Data = (FScriptContainerElement *)0x0;
      local_320 = 0;
      local_318.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_318.NumBits = 0;
      local_318.MaxBits = 0x80;
      local_2f8 = 0xffffffff;
      local_2f4 = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      local_2d8.Data = (FScriptContainerElement *)0x0;
      local_2d0 = 0;
      local_2c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2c8.NumBits = 0;
      local_2c8.MaxBits = 0x80;
      local_2a8 = 0xffffffff;
      local_2a4 = 0;
      local_298 = (_func___cdecl_void_FObjectInitializer_ptr *)0x0;
      local_290 = 0;
      local_288.AddReferencedObjects = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0
      ;
      local_280._0_4_ = 0;
      local_280._4_4_ = 0;
      local_278.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_278.NumBits = 0;
      local_278.MaxBits = 0x80;
      local_258 = 0xffffffff;
      local_254 = 0;
      local_248.Data = (FScriptContainerElement *)0x0;
      local_240 = 0;
      local_238.DebugPtr = (UObject *)0x0;
      local_230 = (void *)0x0;
      local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_228.NumBits = 0;
      local_228.MaxBits = 0x80;
      local_208 = 0xffffffff;
      local_204 = 0;
      local_1f8 = (void *)0x0;
      local_1f0 = 0;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      local_1e0 = 0;
      local_1d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1d8.NumBits = 0;
      local_1d8.MaxBits = 0x80;
      local_1b8 = 0xffffffff;
      local_1b4 = 0;
      local_1a8 = (void *)0x0;
      local_1a0 = 0;
      local_198._0_8_ = (FScriptContainerElement *)0x0;
      local_198._8_8_ = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_16c = 0x80;
      local_168 = 0xffffffff;
      local_164 = 0;
      local_158.SchemaView = 0;
      local_150 = 0;
      local_370 = pFVar9->EntityID;
      ::FName::FName(&local_378,"entityID");
      local_358 = &local_378;
      local_350 = &local_370;
      TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,__int64_&>_>
                ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                  *)&local_238.ObjectPtr,&local_388,(bool *)&local_358);
      FVar10 = DS_Util::GetUniqueClassName((UClass *)local_348);
      FVar10 = *(FName *)FVar10;
      local_368 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pUVar11 = *(UWorld **)&this->field_0xb0;
      if (pUVar11 == (UWorld *)0x0) {
        pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      local_360 = CreateWidget<UDS_UserWidget,UWorld_*>
                            (pUVar11,(TSubclassOf<UUserWidget>)&local_368,FVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_360 != (UDS_UserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_360);
      }
      local_398.ObjectIndex = 0;
      local_398.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_360 != (UDS_UserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_360);
      }
      FWeakObjectPtr::operator=(&local_398,(FObjectPtr)&local_360);
      pUVar6 = FWeakObjectPtr::Get(&local_398);
      (**(code **)(*(longlong *)pUVar6 + 0x4f0))(pUVar6,&local_328);
      pcVar4 = *(code **)(*(longlong *)this + 0xb58);
      FWeakObjectPtr::Get(&local_398);
      (*pcVar4)(this);
      local_150 = 0;
      if ((void *)local_158.SchemaView != (void *)0x0) {
        FMemory::Free((void *)local_158.SchemaView);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_198,0,local_198._8_4_);
      bVar5 = local_198._12_4_ != 0;
      local_198._8_8_ = (ulonglong)(uint)local_198._12_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
      }
      local_168 = 0xffffffff;
      local_164 = 0;
      local_170 = 0;
      if (0x80 < local_16c) {
        local_16c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
      }
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
      local_1a0 = 0;
      if (local_1a8 != (void *)0x0) {
        FMemory::Free(local_1a8);
      }
      bVar5 = local_1e0._4_4_ != 0;
      local_1e0 = (ulonglong)local_1e0._4_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
      }
      local_1b8 = 0xffffffff;
      local_1b4 = 0;
      local_1d8.NumBits = 0;
      if (0x80 < (uint)local_1d8.MaxBits) {
        local_1d8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1d8,0);
      }
      if ((SRWLOCK)local_1d8.AllocatorInstance.SecondaryData != (SRWLOCK)0x0) {
        FMemory::Free((void *)local_1d8.AllocatorInstance.SecondaryData);
      }
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      local_1f0 = 0;
      if (local_1f8 != (void *)0x0) {
        FMemory::Free(local_1f8);
      }
      bVar5 = local_230._4_4_ != 0;
      local_230 = (void *)((ulonglong)local_230._4_4_ << 0x20);
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&local_238.ObjectPtr,0,
                   (int *)((longlong)&local_230 + 4));
      }
      local_208 = 0xffffffff;
      local_204 = 0;
      local_228.NumBits = 0;
      if (0x80 < (uint)local_228.MaxBits) {
        local_228.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_228,0);
      }
      if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_228.AllocatorInstance.SecondaryData);
      }
      if (local_238.DebugPtr != (UObject *)0x0) {
        FMemory::Free(local_238.DebugPtr);
      }
      local_240 = 0;
      if (local_248.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data);
      }
      bVar5 = local_280._4_4_ != 0;
      local_280 = (ulonglong)local_280._4_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&local_288,0,(int *)((longlong)&local_280 + 4));
      }
      local_258 = 0xffffffff;
      local_254 = 0;
      local_278.NumBits = 0;
      if (0x80 < (uint)local_278.MaxBits) {
        local_278.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_278,0);
      }
      if (local_278.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_278.AllocatorInstance.SecondaryData);
      }
      if (local_288.AddReferencedObjects !=
          (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) {
        FMemory::Free(local_288.AddReferencedObjects);
      }
      local_290 = 0;
      if (local_298 != (_func___cdecl_void_FObjectInitializer_ptr *)0x0) {
        FMemory::Free(local_298);
      }
      bVar5 = local_2d0._4_4_ != 0;
      local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,&local_2d8,0,(int *)((longlong)&local_2d0 + 4));
      }
      local_2a8 = 0xffffffff;
      local_2a4 = 0;
      local_2c8.NumBits = 0;
      if (0x80 < (uint)local_2c8.MaxBits) {
        local_2c8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2c8,0);
      }
      if (local_2c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2c8.AllocatorInstance.SecondaryData);
      }
      if (local_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data);
      }
      local_2e0 = 0;
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      bVar5 = local_320._4_4_ != 0;
      local_320 = (ulonglong)local_320._4_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&local_328,0,(int *)((longlong)&local_320 + 4));
      }
      local_2f8 = 0xffffffff;
      local_2f4 = 0;
      local_318.NumBits = 0;
      if (0x80 < (uint)local_318.MaxBits) {
        local_318.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_318,0);
      }
      if (local_318.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_318.AllocatorInstance.SecondaryData);
      }
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
    }
  }
  return;
}

