// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 1496cc170

UClass * __cdecl USceneComponentToolTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentToolTarget",
               &Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton,
               StaticRegisterNativesUSceneComponentToolTarget,0x38,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USceneComponentToolTarget>,
               InternalVTableHelperCtorCaller<USceneComponentToolTarget>,local_res8,
               UToolTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton;
}

// USceneComponentToolTarget @ 1496d3c30

USceneComponentToolTarget * __thiscall
USceneComponentToolTarget::USceneComponentToolTarget
          (USceneComponentToolTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UToolTarget__;
  this->_padding_ = (longlong)&_vftable__for__ISceneComponentBackedTarget__;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// USceneComponentToolTarget @ 1496d3c70

USceneComponentToolTarget * __thiscall
USceneComponentToolTarget::USceneComponentToolTarget
          (USceneComponentToolTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UToolTarget__;
  this->_padding_ = (longlong)&_vftable__for__ISceneComponentBackedTarget__;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~USceneComponentToolTarget @ 1496d4aa0

void __thiscall
USceneComponentToolTarget::~USceneComponentToolTarget(USceneComponentToolTarget *this)

{
  this->_padding_ = (longlong)&___7ISceneComponentBackedTarget__6B_;
  this->_padding_ = (longlong)&___7UToolTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1496d73f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USceneComponentToolTarget::BeginDestroy(USceneComponentToolTarget *this)

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
    while (*(USceneComponentToolTarget **)FVar3 != this) {
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

// GetOwnerActor @ 1496dd1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall USceneComponentToolTarget::GetOwnerActor(USceneComponentToolTarget *this)

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

// GetOwnerSceneComponent @ 1496dd230

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
USceneComponentToolTarget::GetOwnerSceneComponent(USceneComponentToolTarget *this)

{
  char cVar1;
  USceneComponent *pUVar2;
  
  cVar1 = (**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
  if (cVar1 != '\0') {
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return pUVar2;
  }
  return (USceneComponent *)0x0;
}

// GetPrivateStaticClass @ 1496ddc60

UClass * __cdecl USceneComponentToolTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentToolTarget",
               &Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton,
               StaticRegisterNativesUSceneComponentToolTarget,0x38,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USceneComponentToolTarget>,
               InternalVTableHelperCtorCaller<USceneComponentToolTarget>,local_res8,
               UToolTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentToolTarget.InnerSingleton;
}

// GetWorldTransform @ 1496de960

TTransform<double> * __thiscall
USceneComponentToolTarget::GetWorldTransform
          (USceneComponentToolTarget *this,TTransform<double> *__return_storage_ptr__)

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

// InitializeComponent @ 1496df1d0

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
USceneComponentToolTarget::InitializeComponent
          (USceneComponentToolTarget *this,USceneComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  USceneComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2732969724320153644>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolTargets\\SceneComponentToolTarget.cpp"
                       ,0x2c,"Component.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsValid @ 1496e26f0

bool __thiscall USceneComponentToolTarget::IsValid(USceneComponentToolTarget *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  return bVar1;
}

// SetOwnerVisibility @ 1496e5ce0

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
USceneComponentToolTarget::SetOwnerVisibility(USceneComponentToolTarget *this,bool param_1)

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

// StaticRegisterNativesUSceneComponentToolTarget @ 1496e6770

void __cdecl USceneComponentToolTarget::StaticRegisterNativesUSceneComponentToolTarget(void)

{
  return;
}

// _getUObject @ 1496e8170

UObject * __thiscall USceneComponentToolTarget::_getUObject(USceneComponentToolTarget *this)

{
  return (UObject *)&this[-1]._padding_;
}

