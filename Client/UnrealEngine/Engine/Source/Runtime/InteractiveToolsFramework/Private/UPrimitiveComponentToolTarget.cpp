// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 1496cc0b0

UClass * __cdecl UPrimitiveComponentToolTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PrimitiveComponentToolTarget",
               &Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton,
               StaticRegisterNativesUPrimitiveComponentToolTarget,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPrimitiveComponentToolTarget>,
               InternalVTableHelperCtorCaller<UPrimitiveComponentToolTarget>,local_res8,
               UToolTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton;
}

// UPrimitiveComponentToolTarget @ 1496d3b50

UPrimitiveComponentToolTarget * __thiscall
UPrimitiveComponentToolTarget::UPrimitiveComponentToolTarget
          (UPrimitiveComponentToolTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UToolTarget__;
  this->_padding_ = (longlong)&_vftable__for__IPrimitiveComponentBackedTarget__;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UPrimitiveComponentToolTarget @ 1496d3b90

UPrimitiveComponentToolTarget * __thiscall
UPrimitiveComponentToolTarget::UPrimitiveComponentToolTarget
          (UPrimitiveComponentToolTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UToolTarget__;
  this->_padding_ = (longlong)&_vftable__for__IPrimitiveComponentBackedTarget__;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UPrimitiveComponentToolTarget @ 1496d4a60

void __thiscall
UPrimitiveComponentToolTarget::~UPrimitiveComponentToolTarget(UPrimitiveComponentToolTarget *this)

{
  this->_padding_ = (longlong)&___7ISceneComponentBackedTarget__6B_;
  this->_padding_ = (longlong)&___7UToolTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1496d73e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPrimitiveComponentToolTarget::BeginDestroy(UPrimitiveComponentToolTarget *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPrimitiveComponentToolTarget **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetOwnerActor @ 1496dd160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UPrimitiveComponentToolTarget::GetOwnerActor(UPrimitiveComponentToolTarget *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
  if (cVar1 != '\0') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return *(AActor **)&pUVar2[4].field_0x8;
  }
  return (AActor *)0x0;
}

// GetOwnerComponent @ 1496dd1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
UPrimitiveComponentToolTarget::GetOwnerComponent(UPrimitiveComponentToolTarget *this)

{
  char cVar1;
  UPrimitiveComponent *pUVar2;
  
  cVar1 = (**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
  if (cVar1 != '\0') {
    pUVar2 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return pUVar2;
  }
  return (UPrimitiveComponent *)0x0;
}

// GetOwnerSceneComponent @ 1496dd220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
UPrimitiveComponentToolTarget::GetOwnerSceneComponent(UPrimitiveComponentToolTarget *this)

{
  USceneComponent *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496dd223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USceneComponent *)(**(code **)(this->_padding_ + 0x30))();
  return pUVar1;
}

// GetPrivateStaticClass @ 1496ddae0

UClass * __cdecl UPrimitiveComponentToolTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PrimitiveComponentToolTarget",
               &Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton,
               StaticRegisterNativesUPrimitiveComponentToolTarget,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPrimitiveComponentToolTarget>,
               InternalVTableHelperCtorCaller<UPrimitiveComponentToolTarget>,local_res8,
               UToolTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.InnerSingleton;
}

// GetWorldTransform @ 1496de8e0

TTransform<double> * __thiscall
UPrimitiveComponentToolTarget::GetWorldTransform
          (UPrimitiveComponentToolTarget *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  UObject *pUVar6;
  TTransform<double> *pTVar7;
  
  cVar5 = (**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
  if (cVar5 == '\0') {
    pTVar7 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar7 = (TTransform<double> *)&pUVar6[0xc].field_0x10;
  }
  dVar1 = (pTVar7->Rotation).XY.m128d_f64[1];
  dVar2 = (pTVar7->Rotation).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar7->Translation).XY.m128d_f64[0];
  dVar4 = (pTVar7->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar7->Translation).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (pTVar7->Scale3D).XY.m128d_f64[0];
  dVar4 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar7->Scale3D).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// HitTestComponent @ 1496deba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPrimitiveComponentToolTarget::HitTestComponent
          (UPrimitiveComponentToolTarget *this,TRay<double> *param_1,FHitResult *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPrimitiveComponentToolTarget::HitTestComponent(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
  FVar12;
  bool bVar13;
  undefined1 auStackY_1b8 [32];
  TStatId local_158;
  FName local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  FCollisionQueryParams local_108;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar13 = false;
  local_158.StatIdPtr = local_158.StatIdPtr & 0xffffffff00000000;
  dVar6 = (param_1->Direction).field0_0x0._s_0.X * __real_4290000000000000;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Z * __real_4290000000000000;
  dVar7 = (param_1->Direction).field0_0x0._s_0.Y * __real_4290000000000000 +
          (param_1->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_1->Origin).field0_0x0._s_0.X;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
  cVar9 = (**(code **)(this[-1]._padding_ + 0x2b0))();
  if (cVar9 != '\0') {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar3 = *(code **)(*(longlong *)pUVar10 + 0xa30);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_HitTest =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPrimitiveComponentToolTarget::HitTestComponent(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
            )0x0;
      pFVar11 = ::FName::FName(&local_150,"HitTest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar11,L"HitTest",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar12 = StatPtr_HitTest;
    if (StatPtr_HitTest ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPrimitiveComponentToolTarget::HitTestComponent(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
         )0x0) {
      pFVar11 = ::FName::FName(&local_150,"HitTest");
      FVar12 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPrimitiveComponentToolTarget::HitTestComponent(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar11,L"HitTest",
                            "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                            ST_int64,true,false,MCR_Invalid);
    }
    local_158.StatIdPtr = (TStatIdData *)FVar12;
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"HitTest");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_108,::StaticName,&local_158,true,(AActor *)0x0);
    local_148 = *(undefined4 *)&(param_1->Origin).field0_0x0;
    uStack_144 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4);
    uStack_140 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
    uStack_13c = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
    local_138 = (param_1->Origin).field0_0x0._s_0.Z;
    bVar13 = true;
    local_128._8_4_ = SUB84(dVar7,0);
    local_128._0_8_ = dVar6 + dVar1;
    local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_118 = dVar5 + dVar2;
    cVar9 = (*pcVar3)(pUVar10,param_2,&local_148,local_128);
    if (cVar9 != '\0') {
      bVar8 = true;
      goto LAB_1496dedb6;
    }
  }
  bVar8 = false;
LAB_1496dedb6:
  if (bVar13) {
    if (local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_108.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar8;
}

// InitializeComponent @ 1496df150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPrimitiveComponentToolTarget::InitializeComponent
          (UPrimitiveComponentToolTarget *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPrimitiveComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6609972977989582907>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolTargets\\PrimitiveComponentToolTarget.cpp"
                       ,0x3b,"Component.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsValid @ 1496e26e0

bool __thiscall UPrimitiveComponentToolTarget::IsValid(UPrimitiveComponentToolTarget *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  return bVar1;
}

// SetOwnerVisibility @ 1496e5c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPrimitiveComponentToolTarget::SetOwnerVisibility(UPrimitiveComponentToolTarget *this,bool param_1)

{
  char cVar1;
  USceneComponent *this_00;
  
  cVar1 = (**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
  if (cVar1 != '\0') {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    USceneComponent::SetVisibility(this_00,param_1,DirtyOnly);
  }
  return;
}

// StaticRegisterNativesUPrimitiveComponentToolTarget @ 1496e6750

void __cdecl UPrimitiveComponentToolTarget::StaticRegisterNativesUPrimitiveComponentToolTarget(void)

{
  return;
}

// _getUObject @ 1496e8160

UObject * __thiscall UPrimitiveComponentToolTarget::_getUObject(UPrimitiveComponentToolTarget *this)

{
  return (UObject *)&this[-1]._padding_;
}

