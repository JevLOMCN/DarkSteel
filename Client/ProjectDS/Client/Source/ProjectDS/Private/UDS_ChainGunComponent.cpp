// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b43a8f0

UClass * __cdecl UDS_ChainGunComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChainGunComponent",
               &Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton,
               StaticRegisterNativesUDS_ChainGunComponent,0x730,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ChainGunComponent>,
               InternalVTableHelperCtorCaller<UDS_ChainGunComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton;
}

// UDS_ChainGunComponent @ 14b43c1c0

UDS_ChainGunComponent * __thiscall
UDS_ChainGunComponent::UDS_ChainGunComponent(UDS_ChainGunComponent *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *pTVar1;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->scale = 1.0;
  this->chainLength = 5.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  pTVar1 = &(this->AttachStartTo).OtherActor;
  (this->endPoint).field0_0x0._s_0.Y = 0.0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->endPoint).field0_0x0._s_0.Z = 0.0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->endPoint).field0_0x0._s_0.X = 100.0;
  this->AttachStart = true;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachStartToSocket).ComparisonIndex = 0;
  (this->AttachStartToSocket).Number = 0;
  pTVar1 = &(this->attachComponentToStart).OtherActor;
  (this->additiveRotation).field0_0x0._s_0.Z = 45.0;
  this->AttachEnd = true;
  (this->AttachEndToSocket).ComparisonIndex = 0;
  (this->AttachEndToSocket).Number = 0;
  this->skip = 0;
  *(undefined8 *)&this->onCollide = 0;
  *(undefined8 *)&(this->onCollide).field_0x8 = 0;
  *(undefined8 *)&(this->onCollide).field_0x10 = 0;
  (this->additiveRotation).field0_0x0._s_0.X = 0.0;
  (this->additiveRotation).field0_0x0._s_0.Y = 0.0;
  this->RemoveDelayTime = 0.9;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  pTVar1 = &(this->attachComponentToEnd).OtherActor;
  this->rotateStartAttachment = true;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ChainGunInstanceMap = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x20 = 0;
  this->rotateEndAttachment = true;
  this->gravity = 0.98;
  this->stiffness = 10;
  this->friction = 0.3;
  this->selfCollision = false;
  this->chainWidth = 20.0;
  this->selfCollisionWidth = 20.0;
  this->selfCollisionThreshold = 0.05;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x48 = 0;
  this->frame = 0;
  return this;
}

// ~UDS_ChainGunComponent @ 14b43cea0

void __thiscall UDS_ChainGunComponent::~UDS_ChainGunComponent(UDS_ChainGunComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChainGunInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChainGunInstanceMap);
  pvVar1 = (void *)(this->attachComponentToEnd)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->attachComponentToStart)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->onCollide).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->onCollide);
  pvVar1 = (void *)(this->AttachStartTo)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e500

UClass * __cdecl UDS_ChainGunComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChainGunComponent",
               &Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton,
               StaticRegisterNativesUDS_ChainGunComponent,0x730,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ChainGunComponent>,
               InternalVTableHelperCtorCaller<UDS_ChainGunComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChainGunComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_ChainGunComponent @ 14b43e8e0

void __cdecl UDS_ChainGunComponent::StaticRegisterNativesUDS_ChainGunComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_ChainGunComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAttachEndToActor @ 14b43fa30

void __cdecl
UDS_ChainGunComponent::execAttachEndToActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  FName local_res10 [2];
  undefined8 local_res20;
  longlong local_78;
  void *local_70;
  undefined8 local_68;
  longlong lStack_60;
  FWeakObjectPtr local_58;
  FComponentReference local_50;
  
  local_78 = 0;
  local_70 = (void *)0x0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res20 = 0;
  local_68 = 0;
  lStack_60 = 0;
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_70;
  FVar2 = local_res10[0];
  lVar3 = (longlong)(int)local_68;
  local_50._padding_ = 0;
  local_50._padding_._0_4_ = (int)local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50._padding_ = local_78;
  if ((int)local_68 == 0) {
    local_50._padding_._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,0,(ForAnyElementType *)&local_50._padding_,(int)local_68,
               (int *)((longlong)&local_50._padding_ + 4));
    memcpy((void *)local_50._padding_,_Src,lVar3 * 2);
  }
  local_50._padding_ = lStack_60;
  local_50.OtherActor.WeakPtr = local_58;
  AttachEndToActor((UDS_ChainGunComponent *)param_1,&local_50,FVar2);
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execAttachStartToActor @ 14b43fbb0

void __cdecl
UDS_ChainGunComponent::execAttachStartToActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  FName local_res10 [2];
  undefined8 local_res20;
  longlong local_78;
  void *local_70;
  undefined8 local_68;
  longlong lStack_60;
  FWeakObjectPtr local_58;
  FComponentReference local_50;
  
  local_78 = 0;
  local_70 = (void *)0x0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res20 = 0;
  local_68 = 0;
  lStack_60 = 0;
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_70;
  FVar2 = local_res10[0];
  lVar3 = (longlong)(int)local_68;
  local_50._padding_ = 0;
  local_50._padding_._0_4_ = (int)local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50._padding_ = local_78;
  if ((int)local_68 == 0) {
    local_50._padding_._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,0,(ForAnyElementType *)&local_50._padding_,(int)local_68,
               (int *)((longlong)&local_50._padding_ + 4));
    memcpy((void *)local_50._padding_,_Src,lVar3 * 2);
  }
  local_50._padding_ = lStack_60;
  local_50.OtherActor.WeakPtr = local_58;
  AttachStartToActor((UDS_ChainGunComponent *)param_1,&local_50,FVar2);
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execOnShooting @ 14b4408f0

void __cdecl UDS_ChainGunComponent::execOnShooting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  int local_res10 [2];
  void *local_28;
  undefined8 local_20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 3);
  }
  OnShooting((UDS_ChainGunComponent *)param_1,local_res10[0],&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execRemoveChain @ 14b440a60

void __cdecl UDS_ChainGunComponent::execRemoveChain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveChain((UDS_ChainGunComponent *)param_1,local_res10[0]);
  return;
}

// UDS_ChainGunComponent @ 14b8b2a10

UDS_ChainGunComponent * __thiscall
UDS_ChainGunComponent::UDS_ChainGunComponent
          (UDS_ChainGunComponent *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *pTVar1;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->scale = 1.0;
  this->chainLength = 5.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  pTVar1 = &(this->AttachStartTo).OtherActor;
  (this->endPoint).field0_0x0._s_0.Y = 0.0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->endPoint).field0_0x0._s_0.Z = 0.0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->endPoint).field0_0x0._s_0.X = 100.0;
  this->AttachStart = true;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  (this->AttachStartTo)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachStartToSocket).ComparisonIndex = 0;
  (this->AttachStartToSocket).Number = 0;
  pTVar1 = &(this->attachComponentToStart).OtherActor;
  (this->additiveRotation).field0_0x0._s_0.Z = 45.0;
  this->AttachEnd = true;
  (this->AttachEndToSocket).ComparisonIndex = 0;
  (this->AttachEndToSocket).Number = 0;
  this->skip = 0;
  *(undefined8 *)&this->onCollide = 0;
  *(undefined8 *)&(this->onCollide).field_0x8 = 0;
  *(undefined8 *)&(this->onCollide).field_0x10 = 0;
  (this->additiveRotation).field0_0x0._s_0.X = 0.0;
  (this->additiveRotation).field0_0x0._s_0.Y = 0.0;
  this->RemoveDelayTime = 0.9;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  (this->attachComponentToStart)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  pTVar1 = &(this->attachComponentToEnd).OtherActor;
  this->rotateStartAttachment = true;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  (this->attachComponentToEnd)._padding_ = 0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ChainGunInstanceMap = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x20 = 0;
  this->rotateEndAttachment = true;
  this->gravity = 0.98;
  this->stiffness = 10;
  this->friction = 0.3;
  this->selfCollision = false;
  this->chainWidth = 20.0;
  this->selfCollisionWidth = 20.0;
  this->selfCollisionThreshold = 0.05;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->ChainGunInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChainGunInstanceMap).field_0x48 = 0;
  this->field_0x42 = this->field_0x42 | 2;
  this->frame = 0;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x9a = this->field_0x9a | 8;
  return this;
}

// AttachEndToActor @ 14b8b56c0

void __thiscall
UDS_ChainGunComponent::AttachEndToActor
          (UDS_ChainGunComponent *this,FComponentReference *param_1,FName param_2)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  this->AttachEndToSocket = param_2;
  this->AttachEnd = true;
  pvVar1 = (void *)param_1->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// AttachStartToActor @ 14b8b56f0

void __thiscall
UDS_ChainGunComponent::AttachStartToActor
          (UDS_ChainGunComponent *this,FComponentReference *param_1,FName param_2)

{
  (this->AttachStartTo)._padding_ = param_1->_padding_;
  ::FString::operator=((FString *)&(this->AttachStartTo)._padding_,(FString *)&param_1->_padding_);
  (this->AttachStartTo)._padding_ = param_1->_padding_;
  (this->AttachStartTo).OtherActor.WeakPtr = (param_1->OtherActor).WeakPtr;
  this->AttachStartToSocket = param_2;
  this->AttachStart = true;
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  return;
}

// BeginPlay @ 14b8b64e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::BeginPlay(UDS_ChainGunComponent *this)

{
  byte bVar1;
  longlong lVar2;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  lVar2 = (**(code **)(*(longlong *)this + 0x818))(this,0,0,0xffffffff);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 1) != 0)) && (*(longlong *)(lVar2 + 0x108) == 0)) {
    bVar1 = this->field_0x1aa;
    this->field_0x1aa = bVar1 | 4;
    (**(code **)(*(longlong *)this + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    this->field_0x1aa = (this->field_0x1aa ^ bVar1) & 4 ^ this->field_0x1aa;
  }
  return;
}

// OnShooting @ 14b8d9d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_ChainGunComponent::OnShooting
          (UDS_ChainGunComponent *this,int param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FName FVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UActorComponent *this_00;
  TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  int local_1a0 [2];
  uint local_198;
  FChainGunInstance *local_190;
  undefined8 local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  undefined8 local_148;
  FWeakObjectPtr FStack_140;
  UActorComponent *local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  TPairInitializer<int_&,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_&> local_108;
  FScriptContainerElement *local_f8;
  FString local_f0;
  int *local_e0;
  FChainGunInstance **local_d8;
  FName local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a0[0] = param_1;
  if (param_1 == 0) {
    pFVar14 = (param_2->AllocatorInstance).Data;
  }
  else if (param_2->ArrayNum == 0) {
    pFVar14 = (param_2->AllocatorInstance).Data;
  }
  else {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 !=
        *(int *)&(this->ChainGunInstanceMap).field_0x34) {
      puVar15 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->ChainGunInstanceMap).field_0x38;
      }
      iVar7 = *(int *)(puVar15 +
                      (ulonglong)(*(int *)&(this->ChainGunInstanceMap).field_0x48 - 1U & param_1) *
                      4);
      if (iVar7 != -1) {
        lVar18 = *(longlong *)&(this->ChainGunInstanceMap).field_0x0;
        do {
          if (*(int *)((longlong)iVar7 * 0x20 + lVar18) == param_1) goto LAB_14b8d9e84;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar18);
        } while (iVar7 != -1);
      }
    }
    local_e0 = local_1a0;
    local_190 = (FChainGunInstance *)0x0;
    local_d8 = &local_190;
    local_188 = 0;
    TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_&>_>
              ((TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->ChainGunInstanceMap,&local_108,(bool *)&local_e0);
    DestructItems<FChainGunInstance,int>(local_190,(int)local_188);
    if (local_190 != (FChainGunInstance *)0x0) {
      FMemory::Free(local_190);
    }
LAB_14b8d9e84:
    local_198 = param_2->ArrayNum;
    uVar12 = (ulonglong)(int)local_198;
    pFVar14 = (param_2->AllocatorInstance).Data;
    local_f8 = pFVar14 + uVar12 * 8;
    while( true ) {
      pFVar17 = local_f8;
      if (param_2->ArrayNum != (int)uVar12) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a8);
      }
      if (pFVar14 == pFVar17) break;
      uVar2 = *(undefined8 *)pFVar14;
      local_178 = (void *)0x0;
      local_148 = 0;
      FStack_140.ObjectIndex = 0;
      FStack_140.ObjectSerialNumber = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_108.Value = (TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *)0x0;
      FWeakObjectPtr::operator=(&FStack_140,(FObjectPtr)&local_108.Value);
      local_138 = (UActorComponent *)0x0;
      local_168 = uVar2;
      TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
      ::FindChecked((TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->ChainGunInstanceMap,local_1a0[0]);
      ::FString::PrintfImpl(&local_f0,L"instanceComponent_%d_%d");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar16.Data = local_f0.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_d0,(wchar_t *)FVar16.Data);
      FVar3 = *pFVar8;
      pUVar9 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
      if (FVar3 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar10 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
      CheckIsClassChildOf_Internal(pUVar10,pUVar9);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar9);
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_c8._8_8_ = this;
      local_c8._16_8_ = FVar3;
      this_00 = (UActorComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar13 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      local_138 = this_00;
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::RegisterComponent(this_00);
        local_180 = 0;
        (**(code **)(local_138->_padding_ + 0x508))
                  (local_138,this,&FAttachmentTransformRules::KeepWorldTransform);
        (**(code **)(*(longlong *)this + 0xb28))(this,&local_178);
        pTVar11 = TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
                                 *)&this->ChainGunInstanceMap,local_1a0[0]);
        pFVar17 = (pTVar11->AllocatorInstance).Data;
        if ((pFVar17 <= (FScriptContainerElement *)&local_178) &&
           ((FScriptContainerElement *)&local_178 < pFVar17 + (longlong)pTVar11->ArrayMax * 0x68)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar11->ArrayNum;
        if (iVar7 == pTVar11->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x868,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pvVar5 = local_178;
        pTVar11->ArrayNum = iVar7 + 1;
        pFVar17 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x68;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        lVar18 = (longlong)(int)local_170;
        *(int *)&pFVar17[8].field_0x0 = (int)local_170;
        if ((int)local_170 == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xf0,0x10,(int)local_170,0,(ForAnyElementType *)pFVar17,(int)local_170,
                     (int *)(pFVar17 + 0xc));
          memcpy(*(void **)&pFVar17->field_0x0,pvVar5,lVar18 * 0xf0);
        }
        pvVar5 = local_158;
        pFVar1 = pFVar17 + 0x20;
        *(undefined8 *)&pFVar17[0x10].field_0x0 = local_168;
        *(undefined8 *)&pFVar17[0x18].field_0x0 = local_160;
        *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
        lVar18 = (longlong)(int)local_150;
        *(int *)&pFVar17[0x28].field_0x0 = (int)local_150;
        if ((int)local_150 == 0) {
          *(int *)(pFVar17 + 0x2c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_150,0,(ForAnyElementType *)pFVar1,(int)local_150,
                     (int *)(pFVar17 + 0x2c));
          memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,pvVar5,lVar18 * 2);
        }
        *(undefined8 *)&pFVar17[0x30].field_0x0 = local_148;
        *(FWeakObjectPtr *)(pFVar17 + 0x38) = FStack_140;
        *(UActorComponent **)&pFVar17[0x40].field_0x0 = local_138;
        *(undefined4 *)&pFVar17[0x48].field_0x0 = local_130;
        *(undefined8 *)&pFVar17[0x50].field_0x0 = local_128;
        *(undefined8 *)&pFVar17[0x58].field_0x0 = uStack_120;
        *(undefined8 *)&pFVar17[0x60].field_0x0 = local_118;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      uVar12 = (ulonglong)local_198;
      pFVar14 = pFVar14 + 8;
    }
    pFVar14 = (param_2->AllocatorInstance).Data;
  }
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// RemoveAllChain @ 14b8e2a50

void __thiscall UDS_ChainGunComponent::RemoveAllChain(UDS_ChainGunComponent *this)

{
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TBitArray<FDefaultBitArrayAllocator> *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChainGunInstanceMap).field_0x10;
  iVar2 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  this_00 = &this->ChainGunInstanceMap;
  iVar11 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = iVar11;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)pTVar16;
    }
    uVar9 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8e2afe;
      uVar9 = puVar14[lVar7 + 1];
    }
    uVar5 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    iVar6 = local_res10 + -1 + iVar13;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_14b8e2afe:
  uVar9 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  uVar8 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar5,iVar11);
  TStack_70.CurrentBitIndex = iVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar6;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                       *(int *)&(this->ChainGunInstanceMap).field_0x34);
  local_res20 = pTVar16;
  TStack_70.Array = pTVar16;
  if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar9 != uVar5) {
    puVar12 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)pTVar16;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar11;
      uVar8 = uVar8 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b8e2c00;
      uVar9 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uVar9 = local_res18 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar9) {
      uVar9 = uVar5;
    }
  }
LAB_14b8e2c00:
  do {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 -
        *(int *)&(this->ChainGunInstanceMap).field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) && (TStack_70.Array == pTVar16)) {
      bVar4 = 1 < *(int *)&(this->ChainGunInstanceMap).field_0x48;
      if (!bVar4) {
        TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->ChainGunInstanceMap).field_0x8);
      puVar12 = &(this->ChainGunInstanceMap).field_0xc;
      *(undefined4 *)&(this->ChainGunInstanceMap).field_0x8 = 0;
      if (*(int *)puVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar12);
      }
      *(undefined4 *)&(this->ChainGunInstanceMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ChainGunInstanceMap).field_0x34 = 0;
      iVar2 = *(int *)&(this->ChainGunInstanceMap).field_0x2c;
      *(undefined4 *)&(this->ChainGunInstanceMap).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->ChainGunInstanceMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChainGunInstanceMap).field_0x10,0
                  );
      }
      if (bVar4) {
        *(undefined4 *)&(this->ChainGunInstanceMap).field_0x48 = 1;
        TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      return;
    }
    lVar7 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)&this_00->field_0x0;
    uVar5 = *(int *)(lVar7 + 0x10) - 1;
    if (-1 < (int)uVar5) {
      lVar15 = (longlong)(int)uVar5 * 0x68;
      do {
        uVar10 = ~uVar5 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar5 < *(int *)(lVar7 + 0x10)) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar7 + 8) + 0x40 + lVar15) != 0) {
          uVar8 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x10)) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 8) + 0x40 + lVar15) + 0xc38))();
          uVar8 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x10)) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 8) + 0x40 + lVar15) + 0x4a0))();
        }
        lVar15 = lVar15 + -0x68;
        uVar5 = uVar5 - 1;
        pTVar16 = local_res20;
      } while (-1 < (int)uVar5);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// RemoveChain @ 14b8e2fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::RemoveChain(UDS_ChainGunComponent *this,int param_1)

{
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FChainGunInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 *puVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  longlong lVar9;
  uint uVar10;
  int local_res10 [2];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  this_00 = &this->ChainGunInstanceMap;
  if (*(int *)&(this->ChainGunInstanceMap).field_0x8 !=
      *(int *)&(this->ChainGunInstanceMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ChainGunInstanceMap).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ChainGunInstanceMap).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)((longlong)iVar5 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
          pTVar6 = TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,param_1);
          local_28.Data = (FScriptContainerElement *)0x0;
          iVar5 = pTVar6->ArrayNum;
          pFVar1 = (FChainGunInstance *)(pTVar6->AllocatorInstance).Data;
          local_20 = iVar5;
          if (iVar5 == 0) {
            local_1c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar5,0,&local_28,iVar5,&local_1c);
            ConstructItems<FChainGunInstance,FChainGunInstance,int>(local_28.Data,pFVar1,iVar5);
          }
          uVar10 = local_20 - 1;
          if (-1 < (int)uVar10) {
            lVar9 = (longlong)(int)uVar10 * 0x68;
            do {
              uVar8 = ~uVar10 >> 0x1f;
              uVar4 = 0;
              if ((int)uVar10 < local_20) {
                uVar4 = uVar8;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(longlong *)(local_28.Data + lVar9 + 0x40) != 0) {
                uVar4 = 0;
                if ((int)uVar10 < local_20) {
                  uVar4 = uVar8;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (**(code **)(**(longlong **)(local_28.Data + lVar9 + 0x40) + 0xc38))();
              }
              uVar4 = 0;
              if ((int)uVar10 < local_20) {
                uVar4 = uVar8;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              _Dst = local_28.Data + lVar9;
              if (*(void **)(_Dst + 0x20) != (void *)0x0) {
                FMemory::Free(*(void **)(_Dst + 0x20));
              }
              if (*(void **)_Dst != (void *)0x0) {
                FMemory::Free(*(void **)_Dst);
              }
              iVar5 = (local_20 - uVar10) + -1;
              if (iVar5 != 0) {
                memmove(_Dst,_Dst + 0x68,(longlong)iVar5 * 0x68);
              }
              local_20 = local_20 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x68,8,&local_28,local_20,&local_1c);
              lVar9 = lVar9 + -0x68;
              uVar10 = uVar10 - 1;
            } while (-1 < (int)uVar10);
          }
          local_res10[0] = param_1;
          if (*(int *)&(this->ChainGunInstanceMap).field_0x8 !=
              *(int *)&(this->ChainGunInstanceMap).field_0x34) {
            TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)this_00,param_1,local_res10);
          }
          DestructItems<FChainGunInstance,int>((FChainGunInstance *)local_28.Data,local_20);
          if ((FChainGunInstance *)local_28.Data == (FChainGunInstance *)0x0) {
            return;
          }
          FMemory::Free(local_28.Data);
          return;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar5 != -1);
    }
  }
  RemoveAllChain(this);
  return;
}

// SetAttachParentSocket @ 14b8e6c90

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
UDS_ChainGunComponent::SetAttachParentSocket(UDS_ChainGunComponent *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  code *pcVar3;
  int iVar4;
  UClass *pUVar5;
  USkeletalMesh *pUVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FName local_48;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  USceneComponent::GetParentComponents((USceneComponent *)this,&local_40);
  iVar4 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
  FVar8.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if (local_40.ArrayNum != iVar4) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar8.Data == pFVar1) break;
    this_00 = *(USkeletalMeshComponent **)FVar8.Data;
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
        if (pUVar6 != (USkeletalMesh *)0x0) {
          pcVar3 = *(code **)(*(longlong *)this + 0x508);
          pFVar7 = ::FName::FName(&local_48,"hand_l");
          local_res20[0] = 0x1000000;
          (*pcVar3)(this,this_00,local_res20,*pFVar7);
        }
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// TickComponent @ 14b8eec40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_ChainGunComponent::TickComponent
          (UDS_ChainGunComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  int iVar2;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  iVar1 = this->frame + 1;
  this->frame = iVar1;
  if (((0 < iVar1) && (iVar2 = this->skip + 1, 0 < iVar2)) && (iVar1 % iVar2 == 0)) {
    calculatePoints(this);
    return;
  }
  return;
}

// applyGravity @ 14b8f5880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::applyGravity(UDS_ChainGunComponent *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  UWorld *this_00;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  int iVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  int iVar34;
  uint *puVar35;
  float fVar36;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  
  puVar1 = &(this->ChainGunInstanceMap).field_0x10;
  iVar23 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  iVar31 = 0;
  iVar34 = 0;
  uVar21 = 1;
  iVar22 = 0;
  if (iVar23 != 0) {
    puVar35 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)puVar1;
    }
    uVar28 = *puVar35;
    while (uVar28 == 0) {
      lVar24 = (longlong)iVar31;
      iVar34 = iVar34 + 0x20;
      iVar31 = iVar31 + 1;
      iVar22 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14b8f593e;
      uVar28 = puVar35[lVar24 + 1];
    }
    uVar21 = -uVar28 & uVar28;
    uVar33 = (ulonglong)uVar21 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar22 = (int)lVar24 + -1 + iVar34;
    if (iVar23 < iVar22) {
      iVar22 = iVar23;
    }
  }
LAB_14b8f593e:
  uVar28 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  uVar27 = uVar28 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar21,iVar31);
  TStack_c0.CurrentBitIndex = iVar22;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar31 = (int)uVar28 >> 5;
  TStack_c0._28_4_ = iVar22;
  TStack_c0.BaseBitIndex = iVar34;
  uStack_a0 = CONCAT44(uStack_ec,
                       *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                       *(int *)&(this->ChainGunInstanceMap).field_0x34);
  local_res18 = uVar28;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar28 < 0) || (iVar23 < (int)uVar28)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  dVar19 = __real_3f50624dd2f1a9fc;
  uVar21 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar28 != uVar21) {
    puVar32 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar1;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar31 * 4);
    while (uVar28 == 0) {
      lVar24 = (longlong)iVar31;
      uVar27 = uVar27 + 0x20;
      iVar31 = iVar31 + 1;
      uVar28 = uVar21;
      local_res18 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
      goto LAB_14b8f5a70;
      uVar28 = *(uint *)(puVar32 + lVar24 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar28 = (int)lVar24 + -1 + uVar27;
    local_res18 = uVar28;
    if ((int)uVar21 < (int)uVar28) {
      uVar28 = uVar21;
      local_res18 = uVar21;
    }
  }
LAB_14b8f5a70:
  do {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 -
        *(int *)&(this->ChainGunInstanceMap).field_0x34 != (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_c0.CurrentBitIndex == uVar28) &&
       (TStack_c0.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChainGunInstanceMap).field_0x10)) {
      return;
    }
    lVar24 = *(longlong *)&this->ChainGunInstanceMap;
    lVar25 = (longlong)TStack_c0.CurrentBitIndex * 0x20;
    local_res20 = *(uint *)(lVar25 + 0x10 + lVar24);
    uVar33 = (ulonglong)(int)local_res20;
    plVar26 = *(longlong **)(lVar25 + 8 + lVar24);
    plVar29 = plVar26 + uVar33 * 0xd;
    while( true ) {
      if (*(int *)(lVar25 + 0x10 + lVar24) != (int)uVar33) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (plVar26 == plVar29) break;
      iVar23 = (int)plVar26[1];
      uVar21 = 0;
      if (0 < iVar23) {
        lVar30 = 0;
        do {
          uVar27 = ~uVar21 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar21 < iVar23) {
            uVar28 = uVar27;
          }
          if ((uVar28 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          if (*(char *)(lVar30 + *plVar26) != '\0') {
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *plVar26;
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar14 = *plVar26;
            dVar6 = *(double *)(lVar30 + 8 + lVar13);
            dVar7 = *(double *)(lVar30 + 0x10 + lVar13);
            dVar8 = *(double *)(lVar30 + 0x18 + lVar13);
            dVar9 = *(double *)(lVar30 + 0x20 + lVar14);
            dVar10 = *(double *)(lVar30 + 0x28 + lVar14);
            dVar11 = *(double *)(lVar30 + 0x30 + lVar14);
            this_00 = *(UWorld **)&this->field_0xb0;
            if (this_00 == (UWorld *)0x0) {
              this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            fVar36 = UWorld::GetGravityZ(this_00);
            fVar5 = this->gravity;
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *plVar26;
            *(double *)(lVar30 + 0x38 + lVar13) = dVar6 - dVar9;
            *(double *)(lVar30 + 0x40 + lVar13) = dVar7 - dVar10;
            *(double *)(lVar30 + 0x48 + lVar13) =
                 (double)fVar5 * (double)fVar36 * dVar19 + (dVar8 - dVar11);
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            puVar2 = (undefined8 *)(lVar30 + 8 + *plVar26);
            uVar17 = *puVar2;
            uVar18 = puVar2[1];
            uVar12 = *(undefined8 *)(lVar30 + 0x18 + *plVar26);
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *plVar26;
            puVar2 = (undefined8 *)(lVar30 + 0x20 + lVar13);
            *puVar2 = uVar17;
            puVar2[1] = uVar18;
            *(undefined8 *)(lVar30 + 0x30 + lVar13) = uVar12;
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *plVar26;
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pdVar3 = (double *)(lVar30 + 0x10 + lVar13);
            dVar9 = *pdVar3;
            dVar6 = *(double *)(lVar30 + 0x38 + *plVar26);
            pdVar4 = (double *)(lVar30 + 0x40 + *plVar26);
            dVar10 = *pdVar4;
            dVar7 = *(double *)(lVar30 + 8 + lVar13);
            dVar8 = pdVar4[1] + pdVar3[1];
            uVar28 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar28 = uVar27;
            }
            if ((uVar28 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar13 = *plVar26;
            *(double *)(lVar30 + 8 + lVar13) = dVar6 + dVar7;
            auVar16._8_4_ = SUB84(dVar8,0);
            auVar16._0_8_ = dVar10 + dVar9;
            auVar16._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(lVar30 + 0x10 + lVar13) = auVar16;
          }
          iVar23 = (int)plVar26[1];
          uVar21 = uVar21 + 1;
          lVar30 = lVar30 + 0xf0;
        } while ((int)uVar21 < iVar23);
      }
      plVar26 = plVar26 + 0xd;
      uVar33 = (ulonglong)local_res20;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    uVar28 = local_res18;
  } while( true );
}

// calculatePoints @ 14b8f5ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::calculatePoints(UDS_ChainGunComponent *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  UActorComponent *pUVar18;
  UClass *pUVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  int *piVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  int iVar28;
  uint *puVar29;
  longlong lVar30;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [64];
  
  iVar4 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  puVar2 = &(this->ChainGunInstanceMap).field_0x10;
  iVar25 = 0;
  iVar28 = 0;
  uVar16 = 1;
  iVar17 = 0;
  if (iVar4 != 0) {
    puVar29 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)puVar2;
    }
    uVar23 = *puVar29;
    while (uVar23 == 0) {
      iVar25 = iVar25 + 1;
      iVar28 = iVar28 + 0x20;
      iVar17 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14b8f5f6d;
      uVar23 = puVar29[iVar25];
    }
    uVar16 = ~(uVar23 - 1) & uVar23;
    uVar27 = (ulonglong)uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar17 = (int)lVar8 + -1 + iVar28;
    if (iVar4 < iVar17) {
      iVar17 = iVar4;
    }
  }
LAB_14b8f5f6d:
  uVar23 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  uVar31 = uVar23 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uVar16,iVar25);
  TStack_138.CurrentBitIndex = iVar17;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar23 >> 5;
  TStack_138._28_4_ = iVar17;
  TStack_138.BaseBitIndex = iVar28;
  uStack_118 = CONCAT44(uStack_15c,
                        *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                        *(int *)&(this->ChainGunInstanceMap).field_0x34);
  local_res18 = uVar23;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar23 < 0) || (iVar4 < (int)uVar23)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar16 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar23 != uVar16) {
    puVar5 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    puVar26 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar26 = puVar5;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar23 == 0) {
      iVar25 = iVar25 + 1;
      uVar31 = uVar31 + 0x20;
      uVar23 = uVar16;
      local_res18 = uVar16;
      if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar25)
      goto LAB_14b8f6090;
      uVar23 = *(uint *)(puVar26 + (longlong)iVar25 * 4);
    }
    uVar27 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar23 = (int)lVar8 + -1 + uVar31;
    local_res18 = uVar23;
    if ((int)uVar16 < (int)uVar23) {
      uVar23 = uVar16;
      local_res18 = uVar16;
    }
  }
LAB_14b8f6090:
  do {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 -
        *(int *)&(this->ChainGunInstanceMap).field_0x34 != (int)uStack_118) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_138.CurrentBitIndex == uVar23) &&
       (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      applyGravity(this);
      solveConstraint(this);
      resolveCollision(this);
      updateMeshes(this);
      updateAttachments(this);
      return;
    }
    lVar8 = *(longlong *)&this->ChainGunInstanceMap;
    lVar30 = (longlong)TStack_138.CurrentBitIndex * 0x20;
    local_res20 = *(uint *)(lVar30 + 0x10 + lVar8);
    uVar27 = (ulonglong)(int)local_res20;
    lVar6 = *(longlong *)(lVar30 + 8 + lVar8);
    lVar24 = uVar27 * 0x68;
    piVar22 = (int *)(lVar6 + 8);
    this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)(lVar6 + 0x38);
    while( true ) {
      if (*(int *)(lVar30 + 0x10 + lVar8) != (int)uVar27) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      plVar1 = (longlong *)(piVar22 + -2);
      if (plVar1 == (longlong *)(lVar24 + lVar6)) break;
      if (1 < *piVar22) {
        bVar15 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if ((!bVar15) &&
           (pUVar18 = FComponentReference::GetComponent
                                ((FComponentReference *)(piVar22 + 4),*(AActor **)&this->field_0xa8)
           , pUVar18 != (UActorComponent *)0x0)) {
          pUVar19 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar4 = (int)pUVar19->_padding_;
          if ((iVar4 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
             (((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
               &pUVar19->_padding_ && (this->AttachEndToSocket != (FName)0x0)))) {
            puVar20 = (undefined8 *)
                      (**(code **)(pUVar18->_padding_ + 0x528))
                                (pUVar18,local_c8,this->AttachEndToSocket);
            uVar3 = puVar20[1];
            *(undefined8 *)(piVar22 + 0x12) = *puVar20;
            *(undefined8 *)(piVar22 + 0x14) = uVar3;
            *(undefined8 *)(piVar22 + 0x16) = puVar20[2];
          }
        }
        if ((*piVar22 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined1 *)*plVar1 = 0;
        bVar15 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                           (&(this->AttachStartTo).OtherActor,(void *)0x0);
        if (bVar15) {
          local_100 = *(undefined8 *)&this->field_0x220;
          uVar32 = (undefined4)local_100;
          uVar33 = (undefined4)((ulonglong)local_100 >> 0x20);
          uVar34 = *(undefined4 *)&this->field_0x210;
          uVar35 = *(undefined4 *)&this->field_0x214;
          uVar36 = *(undefined4 *)&this->field_0x218;
          uVar37 = *(undefined4 *)&this->field_0x21c;
          local_110 = uVar34;
          uStack_10c = uVar35;
          uStack_108 = uVar36;
          uStack_104 = uVar37;
          if ((*piVar22 < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
LAB_14b8f633b:
          lVar7 = *plVar1;
          *(undefined4 *)(lVar7 + 8) = uVar34;
          *(undefined4 *)(lVar7 + 0xc) = uVar35;
          *(undefined4 *)(lVar7 + 0x10) = uVar36;
          *(undefined4 *)(lVar7 + 0x14) = uVar37;
          *(ulonglong *)(lVar7 + 0x18) = CONCAT44(uVar33,uVar32);
        }
        else {
          pUVar18 = FComponentReference::GetComponent
                              (&this->AttachStartTo,*(AActor **)&this->field_0xa8);
          if (pUVar18 != (UActorComponent *)0x0) {
            pUVar19 = Z_Construct_UClass_USceneComponent_NoRegister();
            iVar4 = (int)pUVar19->_padding_;
            if (((iVar4 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar19->_padding_)) && (this->AttachStartToSocket != (FName)0x0)) {
              (**(code **)(pUVar18->_padding_ + 0x528))(pUVar18,local_b0,this->AttachStartToSocket);
              puVar21 = (undefined4 *)
                        (**(code **)(pUVar18->_padding_ + 0x528))
                                  (pUVar18,local_98,this->AttachStartToSocket);
              uVar34 = *puVar21;
              uVar35 = puVar21[1];
              uVar36 = puVar21[2];
              uVar37 = puVar21[3];
              uVar32 = (undefined4)*(undefined8 *)(puVar21 + 4);
              uVar33 = (undefined4)((ulonglong)*(undefined8 *)(puVar21 + 4) >> 0x20);
              if ((*piVar22 < 1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              goto LAB_14b8f633b;
            }
          }
        }
        uVar23 = *piVar22 - 1;
        uVar16 = 0;
        if ((int)uVar23 < *piVar22) {
          uVar16 = ~uVar23 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined1 *)((longlong)*piVar22 * 0xf0 + -0xf0 + *plVar1) = 0;
        bVar15 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)(piVar22 + 0xc),(void *)0x0);
        if (bVar15) {
          local_f8 = *(double *)&this->field_0x210;
          dStack_f0 = *(double *)&this->field_0x218;
          local_e8 = *(double *)&this->field_0x220;
          dVar12 = local_f8 + (this->endPoint).field0_0x0._s_0.X;
          uVar23 = *piVar22 - 1;
          local_d0 = local_e8 + (this->endPoint).field0_0x0._s_0.Z;
          dVar11 = dStack_f0 + (this->endPoint).field0_0x0._s_0.Y;
          uVar16 = 0;
          if ((int)uVar23 < *piVar22) {
            uVar16 = ~uVar23 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar4 = *piVar22;
          lVar7 = *plVar1;
          auVar10._8_4_ = SUB84(dVar11,0);
          auVar10._0_8_ = dVar12;
          auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          *(undefined1 (*) [16])((longlong)iVar4 * 0xf0 + -0xe8 + lVar7) = auVar10;
          *(double *)((longlong)iVar4 * 0xf0 + -0xd8 + lVar7) = local_d0;
        }
        else {
          pUVar18 = FComponentReference::GetComponent
                              ((FComponentReference *)(piVar22 + 4),*(AActor **)&this->field_0xa8);
          if (pUVar18 != (UActorComponent *)0x0) {
            pUVar19 = Z_Construct_UClass_USceneComponent_NoRegister();
            iVar4 = (int)pUVar19->_padding_;
            if (((iVar4 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar19->_padding_)) && (this->AttachEndToSocket != (FName)0x0)) {
              puVar20 = (undefined8 *)
                        (**(code **)(pUVar18->_padding_ + 0x528))
                                  (pUVar18,local_80,this->AttachEndToSocket);
              uVar13 = *puVar20;
              uVar14 = puVar20[1];
              uVar23 = *piVar22 - 1;
              uVar3 = puVar20[2];
              uVar16 = 0;
              if ((int)uVar23 < *piVar22) {
                uVar16 = ~uVar23 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar4 = *piVar22;
              lVar7 = *plVar1;
              puVar20 = (undefined8 *)((longlong)iVar4 * 0xf0 + -0xe8 + lVar7);
              *puVar20 = uVar13;
              puVar20[1] = uVar14;
              *(undefined8 *)((longlong)iVar4 * 0xf0 + -0xd8 + lVar7) = uVar3;
            }
          }
        }
      }
      piVar22 = piVar22 + 0x1a;
      uVar27 = (ulonglong)local_res20;
      this_00 = this_00 + 0xd;
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    uVar23 = local_res18;
  } while( true );
}

// initChain @ 14b8f65f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_ChainGunComponent::initChain(UDS_ChainGunComponent *this,FChainGunInstance *param_1)

{
  int *piVar1;
  int *piVar2;
  UInstancedStaticMeshComponent *pUVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  UActorComponent *pUVar12;
  UClass *pUVar13;
  double *pdVar14;
  TQuat<double> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auStackY_348 [32];
  AActor *local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [32];
  TQuat<double> local_288;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined1 auStack_170 [16];
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  TRotator<double> TStack_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  float local_98;
  uint uStack_94;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar18 = 0;
  if ((this->AttachStartToSocket == (FName)0x0) || (this->AttachEndToSocket == (FName)0x0)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2958188390459113386>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\ChainGun\\DS_ChainGunComponent.cpp"
                        ,0x56,"false");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    piVar1 = &(param_1->ChainPoints).ArrayMax;
    piVar2 = &(param_1->ChainPoints).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,(ForAnyElementType *)param_1,0,piVar1);
    }
    local_2e0 = *(double *)&this->field_0x210;
    dStack_2d8 = *(double *)&this->field_0x218;
    local_2d0 = *(double *)&this->field_0x220;
    (this->chainStart).field0_0x0._s_0.X = local_2e0;
    (this->chainStart).field0_0x0._s_0.Y = dStack_2d8;
    (this->chainStart).field0_0x0._s_0.Z = local_2d0;
    local_300 = param_1->TargetActor;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_300 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_300);
    }
    FWeakObjectPtr::operator=(&(param_1->AttachEndTo).OtherActor.WeakPtr,(FObjectPtr)&local_300);
    bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                       (&(param_1->AttachEndTo).OtherActor,(void *)0x0);
    if ((!bVar10) &&
       (pUVar12 = FComponentReference::GetComponent
                            (&param_1->AttachEndTo,*(AActor **)&this->field_0xa8),
       pUVar12 != (UActorComponent *)0x0)) {
      pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar19 = (int)pUVar13->_padding_;
      if ((iVar19 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         (((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
           &pUVar13->_padding_ && (this->AttachEndToSocket != (FName)0x0)))) {
        pdVar14 = (double *)
                  (**(code **)(pUVar12->_padding_ + 0x528))
                            (pUVar12,local_2a8,this->AttachEndToSocket);
        dVar7 = pdVar14[1];
        (param_1->ChainEndLocation).field0_0x0._s_0.X = *pdVar14;
        (param_1->ChainEndLocation).field0_0x0._s_0.Y = dVar7;
        (param_1->ChainEndLocation).field0_0x0._s_0.Z = pdVar14[2];
      }
    }
    dVar7 = (param_1->ChainEndLocation).field0_0x0._s_0.X - (this->chainStart).field0_0x0._s_0.X;
    dVar8 = (param_1->ChainEndLocation).field0_0x0._s_0.Y - (this->chainStart).field0_0x0._s_0.Y;
    dVar9 = (param_1->ChainEndLocation).field0_0x0._s_0.Z - (this->chainStart).field0_0x0._s_0.Z;
    auVar22._0_8_ = dVar8 * dVar8;
    auVar22._8_8_ = 0;
    auVar25._0_8_ = dVar7 * dVar7 + auVar22._0_8_ + dVar9 * dVar9;
    auVar25._8_8_ = 0;
    auVar22 = sqrtpd(auVar22,auVar25);
    iVar19 = (int)((float)auVar22._0_8_ / (this->chainLength * this->scale));
    param_1->SegmentCount = iVar19;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,iVar19,(ForAnyElementType *)param_1,piVar2,piVar1);
    pUVar3 = param_1->MeshComponent;
    if (pUVar3 != (UInstancedStaticMeshComponent *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0xb28))(pUVar3,this->chainMesh);
      (**(code **)(param_1->MeshComponent->_padding_ + 0xc38))();
      iVar19 = UInstancedStaticMeshComponent::GetInstanceCount(param_1->MeshComponent);
      if ((iVar19 == 0) &&
         (fVar26 = __real_3f800000 / (float)param_1->SegmentCount, uVar20 = uVar18,
         0 < param_1->SegmentCount)) {
        do {
          auStack_170 = ZEXT816(0);
          dStack_160 = 0.0;
          local_158 = ZEXT816(0);
          local_148 = 0.0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          TStack_110.Pitch = 0.0;
          TStack_110.Yaw = 0.0;
          TStack_110.Roll = 0.0;
          local_178 = 1;
          pTVar15 = UE::Math::TRotator<double>::Quaternion(&TStack_110,&local_288);
          local_2b8 = pTVar15->Z;
          dStack_2b0 = pTVar15->W;
          local_2c8 = pTVar15->X;
          dStack_2c0 = pTVar15->Y;
          uStack_1c0 = auStack_170._8_8_;
          local_d8 = auStack_170._0_8_;
          uStack_d0 = auStack_170._8_8_;
          local_c8 = dStack_160;
          uStack_c0 = 0;
          uVar17 = (uint)uVar18;
          local_98 = (float)(int)uVar17 * fVar26;
          dVar6 = (double)((float)(int)uVar17 / (float)param_1->SegmentCount);
          dVar21 = dVar8 * dVar6 + (this->chainStart).field0_0x0._s_0.Y;
          dStack_260 = dVar7 * dVar6 + (this->chainStart).field0_0x0._s_0.X;
          dStack_250 = dVar9 * dVar6 + (this->chainStart).field0_0x0._s_0.Z;
          uVar23 = SUB84(dVar21,0);
          uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dStack_2f0 = (double)this->scale;
          local_2f8 = dStack_2f0 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          auVar5._8_4_ = uVar23;
          auVar5._0_8_ = dStack_260;
          auVar5._12_4_ = uVar24;
          local_158._8_4_ = uVar23;
          local_158._0_8_ = dStack_260;
          local_158._12_4_ = uVar24;
          local_2e8 = dStack_2f0 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          dStack_2f0 = dStack_2f0 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uStack_a0 = 0;
          auStack_170._8_8_ = auVar5._8_8_;
          local_268 = CONCAT71(uStack_177,local_178);
          local_258 = auStack_170._8_8_;
          uStack_240 = local_158._8_8_;
          uStack_230 = uStack_140;
          local_228 = local_138;
          uStack_220 = uStack_130;
          local_218 = local_128;
          uStack_210 = uStack_120;
          local_208 = local_118;
          dStack_200 = TStack_110.Pitch;
          local_1f8 = TStack_110.Yaw;
          dStack_1f0 = TStack_110.Roll;
          local_1c8 = auStack_170._0_8_;
          local_1b8 = dStack_160;
          uStack_1b0 = 0;
          local_188 = CONCAT44(uVar17,local_98);
          uStack_190 = 0;
          uStack_180 = uStack_90;
          uVar11 = 0;
          if ((int)uVar17 < *piVar2) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          local_248 = dStack_260;
          local_238 = dStack_250;
          local_1e8 = local_2c8;
          dStack_1e0 = dStack_2c0;
          local_1d8 = local_2b8;
          dStack_1d0 = dStack_2b0;
          local_1a8 = local_2f8;
          dStack_1a0 = dStack_2f0;
          local_198 = local_2e8;
          auStack_170 = auVar5;
          dStack_160 = dStack_250;
          local_148 = dStack_250;
          local_f8 = local_2c8;
          dStack_f0 = dStack_2c0;
          local_e8 = local_2b8;
          dStack_e0 = dStack_2b0;
          local_b8 = local_2f8;
          dStack_b0 = dStack_2f0;
          local_a8 = local_2e8;
          uStack_94 = uVar17;
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = (param_1->ChainPoints).AllocatorInstance.Data + uVar20;
          *(undefined8 *)pFVar16 = local_268;
          *(double *)(pFVar16 + 8) = dStack_260;
          *(undefined8 *)(pFVar16 + 0x10) = local_258;
          *(double *)(pFVar16 + 0x18) = dStack_250;
          *(double *)(pFVar16 + 0x20) = local_248;
          *(undefined8 *)(pFVar16 + 0x28) = uStack_240;
          *(double *)(pFVar16 + 0x30) = local_238;
          *(undefined8 *)(pFVar16 + 0x38) = uStack_230;
          *(undefined8 *)(pFVar16 + 0x40) = local_228;
          *(undefined8 *)(pFVar16 + 0x48) = uStack_220;
          *(undefined8 *)(pFVar16 + 0x50) = local_218;
          *(undefined8 *)(pFVar16 + 0x58) = uStack_210;
          *(undefined8 *)(pFVar16 + 0x60) = local_208;
          *(double *)(pFVar16 + 0x68) = dStack_200;
          *(double *)(pFVar16 + 0x70) = local_1f8;
          *(double *)(pFVar16 + 0x78) = dStack_1f0;
          *(double *)(pFVar16 + 0x80) = local_1e8;
          *(double *)(pFVar16 + 0x88) = dStack_1e0;
          *(double *)(pFVar16 + 0x90) = local_1d8;
          *(double *)(pFVar16 + 0x98) = dStack_1d0;
          *(undefined8 *)(pFVar16 + 0xa0) = local_1c8;
          *(undefined8 *)(pFVar16 + 0xa8) = uStack_1c0;
          *(undefined8 *)(pFVar16 + 0xb0) = local_1b8;
          *(undefined8 *)(pFVar16 + 0xb8) = uStack_1b0;
          *(double *)(pFVar16 + 0xc0) = local_1a8;
          *(double *)(pFVar16 + 200) = dStack_1a0;
          *(undefined4 *)(pFVar16 + 0xd0) = (undefined4)local_198;
          *(undefined4 *)(pFVar16 + 0xd4) = local_198._4_4_;
          *(undefined4 *)(pFVar16 + 0xd8) = (undefined4)uStack_190;
          *(undefined4 *)(pFVar16 + 0xdc) = uStack_190._4_4_;
          *(undefined8 *)(pFVar16 + 0xe0) = local_188;
          *(undefined8 *)(pFVar16 + 0xe8) = uStack_180;
          (**(code **)(param_1->MeshComponent->_padding_ + 0xbb0))
                    (param_1->MeshComponent,&local_f8,0);
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar20 = uVar20 + 0xf0;
        } while ((int)(uVar17 + 1) < param_1->SegmentCount);
      }
    }
  }
  return;
}

// resolveCollision @ 14b8f6c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::resolveCollision(UDS_ChainGunComponent *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  ForAnyElementType FVar15;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ECollisionChannel EVar21;
  uint uVar22;
  FName *pFVar23;
  undefined8 *puVar24;
  byte bVar25;
  longlong lVar26;
  uint uVar27;
  longlong *plVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  UDS_ChainGunComponent *pUVar36;
  uint *puVar37;
  int iVar38;
  longlong lVar39;
  longlong *plVar40;
  uint uVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 unaff_XMM7 [16];
  float fVar48;
  undefined1 auStackY_398 [32];
  undefined1 local_328;
  undefined1 local_327 [7];
  UDS_ChainGunComponent *local_320;
  longlong local_318;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_310;
  longlong *local_300;
  longlong local_2f8;
  uint local_2f0;
  longlong local_2e8;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_2e0;
  int local_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  UWorld *local_2b0;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  int iStack_28c;
  int local_288;
  int iStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  int local_274;
  TStatId local_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  FCollisionShape local_220;
  TVector<double>_u_0 local_210;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_1f8;
  undefined8 uStack_1f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  FName local_1c8;
  FName local_1c0;
  FCollisionResponseContainer_u_0 local_1b8;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_198;
  undefined8 uStack_190;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  FCollisionQueryParams local_168;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2b0 = *(UWorld **)&this->field_0xb0;
  local_320 = this;
  if (local_2b0 == (UWorld *)0x0) {
    local_2b0 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  iVar18 = (**(code **)(*(longlong *)this + 0x5e0))(this);
  if (iVar18 != 0) {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar18 = 0;
    if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_CableCollision =
           (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UDS_ChainGunComponent::resolveCollision(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_CableCollision>
            )0x0;
      pFVar23 = ::FName::FName(&local_1c8,"CableCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_CableCollision,*pFVar23,L"CableCollision",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_270.StatIdPtr = (TStatIdData *)StatPtr_CableCollision;
    if (StatPtr_CableCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UDS_ChainGunComponent::resolveCollision(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_CableCollision>
         )0x0) {
      pFVar23 = ::FName::FName(&local_1c0,"CableCollision");
      local_270.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_CableCollision,*pFVar23,
                      L"CableCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"CableCollision");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_168,::StaticName,&local_270,false,(AActor *)0x0);
    puVar24 = (undefined8 *)(**(code **)(*(longlong *)this + 0x5c8))(this);
    FCollisionResponseContainer::FCollisionResponseContainer
              ((FCollisionResponseContainer *)&local_1b8._s_0);
    local_1b8._0_8_ = *puVar24;
    local_1b8._8_8_ = puVar24[1];
    puVar1 = &(this->ChainGunInstanceMap).field_0x10;
    local_1f8 = &this->ChainGunInstanceMap;
    local_1b8._16_8_ = puVar24[2];
    local_1b8._24_8_ = puVar24[3];
    iVar19 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
    uStack_29c = 1;
    iStack_28c = iVar18;
    local_288 = iVar18;
    if (iVar19 != 0) {
      puVar37 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
      if (puVar37 == (uint *)0x0) {
        puVar37 = (uint *)puVar1;
      }
      uStack_29c = *puVar37;
      local_288 = 0;
      iVar18 = 0;
      while (uStack_29c == 0) {
        lVar26 = (longlong)iVar18;
        local_288 = local_288 + 0x20;
        iVar18 = iVar18 + 1;
        uStack_29c = 1;
        iStack_28c = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14b8f6e6d;
        uStack_29c = puVar37[lVar26 + 1];
      }
      uStack_29c = -uStack_29c & uStack_29c;
      uVar35 = (ulonglong)uStack_29c * 2 + 1;
      lVar26 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_278 = (int)lVar26;
      iStack_28c = local_278 + -1 + local_288;
      if (iVar19 < iStack_28c) {
        iStack_28c = iVar19;
      }
    }
LAB_14b8f6e6d:
    iStack_280 = *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                 *(int *)&(this->ChainGunInstanceMap).field_0x34;
    uVar22 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
    bVar25 = (byte)uVar22 & 0x1f;
    iVar38 = (int)uVar22 >> 5;
    uStack_2cc = 1 << bVar25;
    uVar29 = -1 << bVar25;
    uVar33 = uVar22 & 0xffffffe0;
    uStack_290 = 0xffffffff;
    TStack_248._padding_ = CONCAT44(uStack_29c,iVar18);
    TStack_248.CurrentBitIndex = iStack_28c;
    TStack_248.UnvisitedBitMask = 0xffffffff;
    TStack_248._28_4_ = iStack_28c;
    TStack_248.BaseBitIndex = local_288;
    uStack_228 = CONCAT44(uStack_27c,iStack_280);
    local_2d0 = iVar38;
    pTStack_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_2c0 = uVar29;
    uStack_2bc = uVar22;
    uStack_2b8 = uVar33;
    local_2a8 = local_1f8;
    iStack_2a0 = iVar18;
    local_298 = puVar1;
    iStack_284 = iStack_28c;
    local_250 = local_1f8;
    TStack_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar22 < 0) || (iVar19 < (int)uVar22)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar27 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
    if (uVar22 != uVar27) {
      puVar34 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
      if (puVar34 == (undefined1 *)0x0) {
        puVar34 = puVar1;
      }
      uVar29 = uVar29 & *(uint *)(puVar34 + (longlong)iVar38 * 4);
      while (uVar29 == 0) {
        uStack_2b8 = uVar33 + 0x20;
        local_2d0 = iVar38 + 1;
        if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2d0)
        goto LAB_14b8f6fa8;
        uVar29 = *(uint *)(puVar34 + (longlong)iVar38 * 4 + 4);
        local_2c0 = 0xffffffff;
        iVar38 = local_2d0;
        uVar33 = uStack_2b8;
      }
      uStack_2cc = -uVar29 & uVar29;
      uVar35 = (ulonglong)uStack_2cc * 2 + 1;
      lVar26 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_274 = (int)lVar26;
      uStack_2bc = local_274 + -1 + uVar33;
      if ((int)uVar27 < (int)uStack_2bc) {
LAB_14b8f6fa8:
        uStack_2bc = uVar27;
      }
    }
    uStack_1f0 = CONCAT44(uStack_2cc,local_2d0);
    uStack_1e0 = CONCAT44(uStack_2bc,local_2c0);
    uStack_1d8 = CONCAT44(uStack_2b4,uStack_2b8);
    local_1d0 = *(int *)&(local_320->ChainGunInstanceMap).field_0x8 -
                *(int *)&(local_320->ChainGunInstanceMap).field_0x34;
    pTStack_1e8 = pTStack_2c8;
    local_178._8_4_ = local_1d0;
    local_178._0_8_ = uStack_1d8;
    local_178._12_4_ = uStack_1cc;
    local_188 = pTStack_2c8;
    fVar48 = __real_3f000000;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_198 = local_1f8;
    uStack_190 = uStack_1f0;
    uStack_180 = uStack_1e0;
    while( true ) {
      pTVar16 = local_250;
      if (*(int *)&local_250->field_0x8 - *(int *)&local_250->field_0x34 != (int)uStack_228) {
        local_328 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_328);
      }
      if (((TStack_248.CurrentBitIndex == uStack_180._4_4_) && (TStack_248.Array == local_188)) &&
         (pTVar16 == local_198)) break;
      local_258 = *(longlong *)pTVar16;
      local_260 = (longlong)TStack_248.CurrentBitIndex * 0x20;
      local_2f0 = *(uint *)(local_260 + 0x10 + local_258);
      uVar35 = (ulonglong)(int)local_2f0;
      plVar40 = *(longlong **)(local_260 + 8 + local_258);
      plVar30 = plVar40 + 1;
      plVar28 = plVar40 + uVar35 * 0xd;
      local_268 = plVar28;
      while( true ) {
        local_300 = plVar40;
        if (*(int *)(local_260 + 0x10 + local_258) != (int)uVar35) {
          local_327[0] = 0;
          `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_327);
        }
        if (plVar40 == plVar28) break;
        iVar18 = (int)plVar40[1];
        uVar33 = 0;
        local_318 = 0;
        if (0 < iVar18) {
          local_2e8 = 0;
          do {
            lVar31 = local_2e8;
            lVar26 = local_318;
            uVar41 = ~uVar33 >> 0x1f;
            uVar27 = 0;
            if ((int)uVar33 < iVar18) {
              uVar27 = uVar41;
            }
            if ((uVar27 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(char *)(lVar31 + *plVar40) != '\0') {
              pUVar36 = local_320;
              if (local_320->selfCollision != false) {
                uVar27 = 0;
                if ((int)uVar33 < (int)plVar40[1]) {
                  uVar27 = uVar41;
                }
                if ((uVar27 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar18 = (int)plVar40[1];
                uVar27 = 0;
                pUVar36 = local_320;
                lVar26 = local_318;
                if (0 < iVar18) {
                  lVar31 = local_318 * 0xf0;
                  lVar39 = 0;
                  do {
                    if (uVar33 != uVar27) {
                      iVar19 = -(uVar27 - uVar33);
                      if (iVar19 < 0) {
                        iVar19 = uVar27 - uVar33;
                      }
                      if (2 < iVar19) {
                        uVar20 = 0;
                        if ((int)uVar27 < iVar18) {
                          uVar20 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar20 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        uVar20 = 0;
                        if ((int)uVar33 < (int)*plVar30) {
                          uVar20 = uVar41;
                        }
                        lVar26 = *local_300;
                        if ((uVar20 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        lVar32 = *local_300;
                        dVar10 = *(double *)(lVar39 + 0x10 + lVar26) -
                                 *(double *)(lVar32 + 0x10 + lVar31);
                        dVar8 = *(double *)(lVar39 + 8 + lVar26) - *(double *)(lVar32 + 8 + lVar31);
                        dVar42 = *(double *)(lVar39 + 0x18 + lVar26) -
                                 *(double *)(lVar32 + 0x18 + lVar31);
                        auVar44._0_8_ = dVar42 * dVar42;
                        auVar44._8_8_ = 0;
                        auVar45._8_8_ = 0;
                        auVar45._0_8_ = dVar10 * dVar10 + dVar8 * dVar8 + auVar44._0_8_;
                        auVar45 = sqrtpd(auVar44,auVar45);
                        pUVar36 = local_320;
                        if ((float)auVar45._0_8_ < local_320->selfCollisionWidth) {
                          uVar20 = 0;
                          if ((int)uVar33 < (int)*plVar30) {
                            uVar20 = uVar41;
                          }
                          if ((uVar20 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          lVar26 = *local_300;
                          uVar20 = 0;
                          if ((int)uVar27 < (int)*plVar30) {
                            uVar20 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar20 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          plVar40 = local_300;
                          lVar32 = *local_300;
                          dVar46 = *(double *)(lVar26 + 8 + lVar31) -
                                   *(double *)(lVar39 + 8 + lVar32);
                          dVar42 = *(double *)(lVar26 + 0x10 + lVar31) -
                                   *(double *)(lVar39 + 0x10 + lVar32);
                          dVar10 = *(double *)(lVar26 + 0x18 + lVar31) -
                                   *(double *)(lVar39 + 0x18 + lVar32);
                          dVar8 = (double)local_320->selfCollisionThreshold;
                          auVar9._8_8_ = 0;
                          auVar9._0_8_ = dVar42 * dVar42 + dVar46 * dVar46 + dVar10 * dVar10;
                          auVar45 = sqrtpd(unaff_XMM7,auVar9);
                          unaff_XMM7._8_8_ = auVar45._8_8_;
                          dVar47 = (auVar45._0_8_ - (double)local_320->selfCollisionWidth) /
                                   (double)local_320->selfCollisionWidth;
                          dVar46 = dVar47 * dVar46;
                          dVar42 = dVar47 * dVar42;
                          unaff_XMM7._0_8_ = dVar47 * dVar10;
                          if (((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar29,
                                                         SUB84(dVar46,0) & uVar22)) ||
                              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar29,
                                                        SUB84(dVar42,0) & uVar22))) ||
                             (pUVar36 = local_320,
                             dVar8 < (double)CONCAT44((uint)((ulonglong)unaff_XMM7._0_8_ >> 0x20) &
                                                      uVar29,SUB84(unaff_XMM7._0_8_,0) & uVar22))) {
                            uVar20 = 0;
                            if ((int)uVar33 < (int)*plVar30) {
                              uVar20 = uVar41;
                            }
                            if ((uVar20 == 0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            lVar26 = *plVar40;
                            unaff_XMM7._0_8_ =
                                 unaff_XMM7._0_8_ + *(double *)(lVar26 + 0x60 + lVar31);
                            *(double *)(lVar26 + 0x50 + lVar31) =
                                 dVar46 + *(double *)(lVar26 + 0x50 + lVar31);
                            *(double *)(lVar26 + 0x58 + lVar31) =
                                 dVar42 + *(double *)(lVar26 + 0x58 + lVar31);
                            *(double *)(lVar26 + 0x60 + lVar31) = unaff_XMM7._0_8_;
                            pUVar36 = local_320;
                          }
                        }
                      }
                    }
                    iVar18 = (int)*plVar30;
                    uVar27 = uVar27 + 1;
                    lVar39 = lVar39 + 0xf0;
                    plVar40 = local_300;
                    lVar26 = local_318;
                  } while ((int)uVar27 < iVar18);
                }
              }
              local_220.field1_0x4.Box.HalfExtentX = pUVar36->chainWidth * fVar48;
              local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_310.ArrayNum = 0;
              local_310.ArrayMax = 0;
              local_220.ShapeType = Sphere;
              EVar21 = (**(code **)(*(longlong *)pUVar36 + 0x5f0))();
              uVar27 = 0;
              if ((int)uVar33 < (int)plVar40[1]) {
                uVar27 = uVar41;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar31 = *plVar40;
              lVar39 = lVar26 * 0xf0;
              uVar27 = 0;
              if ((int)uVar33 < (int)plVar40[1]) {
                uVar27 = uVar41;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar32 = *plVar40;
              local_210._s_0.Z =
                   *(double *)(lVar39 + 0x48 + lVar32) + *(double *)(lVar31 + 0x18 + lVar39);
              local_210._s_0.Y =
                   *(double *)(lVar39 + 0x40 + lVar32) + *(double *)(lVar31 + 0x10 + lVar39);
              local_210._s_0.X =
                   *(double *)(lVar39 + 0x38 + lVar32) + *(double *)(lVar31 + 8 + lVar39);
              uVar27 = 0;
              if ((int)uVar33 < (int)plVar40[1]) {
                uVar27 = uVar41;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              bVar17 = UWorld::SweepMultiByChannel
                                 (local_2b0,&local_310,(TVector<double> *)(*plVar40 + 8 + lVar39),
                                  (TVector<double> *)&local_210._s_0,
                                  &UE::Math::TQuat<double>::Identity,EVar21,&local_220,&local_168,
                                  (FCollisionResponseParams *)&local_1b8._s_0);
              FVar15.Data = local_310.AllocatorInstance.Data;
              pUVar36 = local_320;
              if (bVar17) {
                iVar18 = local_310.ArrayNum;
                local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2e0.ArrayNum = local_310.ArrayNum;
                if (local_310.ArrayNum == 0) {
                  local_2e0.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x100,8,local_310.ArrayNum,0,&local_2e0.AllocatorInstance,
                             local_310.ArrayNum,&local_2e0.ArrayMax);
                  ConstructItems<FHitResult,FHitResult,int>
                            (local_2e0.AllocatorInstance.Data,(FHitResult *)FVar15.Data,iVar18);
                }
                FOnChainCollide_DelegateWrapper
                          ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                           &pUVar36->onCollide,&local_2e0);
                if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e0.AllocatorInstance.Data);
                }
                fVar14 = __real_38d1b717;
                uVar27 = 0;
                local_2f8 = 0;
                if (0 < local_310.ArrayNum) {
                  lVar31 = 0;
                  do {
                    uVar29 = ~uVar27 >> 0x1f;
                    uVar22 = 0;
                    if ((int)uVar27 < local_310.ArrayNum) {
                      uVar22 = uVar29;
                    }
                    iVar18 = local_310.ArrayNum;
                    if (uVar22 == 0) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar17) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar18 = local_310.ArrayNum;
                    }
                    if (((byte)local_310.AllocatorInstance.Data[lVar31 + 0xad] & 2) == 0) {
                      uVar22 = 0;
                      if ((int)uVar27 < iVar18) {
                        uVar22 = uVar29;
                      }
                      if ((uVar22 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar12 = *(undefined8 *)(local_310.AllocatorInstance.Data + lVar31 + 0x10);
                      uVar13 = *(undefined8 *)(local_310.AllocatorInstance.Data + lVar31 + 0x10 + 8)
                      ;
                      uVar2 = *(undefined8 *)(local_310.AllocatorInstance.Data + lVar31 + 0x20);
                      uVar22 = 0;
                      if ((int)uVar33 < (int)*plVar30) {
                        uVar22 = uVar41;
                      }
                      if ((uVar22 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      lVar26 = *plVar40;
                      lVar32 = (longlong)(int)uVar27;
                      puVar24 = (undefined8 *)(lVar26 + 8 + lVar39);
                      *puVar24 = uVar12;
                      puVar24[1] = uVar13;
                      *(undefined8 *)(lVar26 + 0x18 + lVar39) = uVar2;
                    }
                    else {
                      uVar22 = 0;
                      if ((int)uVar27 < iVar18) {
                        uVar22 = uVar29;
                      }
                      if (uVar22 == 0) {
                        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar17) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        iVar18 = local_310.ArrayNum;
                      }
                      FVar15.Data = local_310.AllocatorInstance.Data;
                      uVar22 = 0;
                      if ((int)uVar27 < iVar18) {
                        uVar22 = uVar29;
                      }
                      if ((uVar22 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      dVar46 = (double)*(float *)(local_310.AllocatorInstance.Data + lVar31 + 0xa0);
                      dVar8 = *(double *)(FVar15.Data + lVar31 + 0x40);
                      dVar10 = *(double *)(FVar15.Data + lVar31 + 0x48);
                      dVar42 = *(double *)(FVar15.Data + lVar31 + 0x50);
                      uVar22 = 0;
                      if ((int)uVar33 < (int)*plVar30) {
                        uVar22 = uVar41;
                      }
                      if ((uVar22 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      lVar26 = *plVar40;
                      *(double *)(lVar26 + 8 + lVar39) =
                           dVar46 * dVar8 + *(double *)(lVar26 + 8 + lVar39);
                      *(double *)(lVar26 + 0x10 + lVar39) =
                           dVar46 * dVar10 + *(double *)(lVar26 + 0x10 + lVar39);
                      *(double *)(lVar26 + 0x18 + lVar39) =
                           dVar46 * dVar42 + *(double *)(lVar26 + 0x18 + lVar39);
                      lVar32 = local_2f8;
                    }
                    uVar22 = 0;
                    if ((int)uVar33 < (int)*plVar30) {
                      uVar22 = uVar41;
                    }
                    if ((uVar22 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    lVar26 = *local_300;
                    uVar22 = 0;
                    if ((int)uVar33 < (int)*plVar30) {
                      uVar22 = uVar41;
                    }
                    if ((uVar22 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    lVar6 = *local_300;
                    dVar42 = *(double *)(lVar26 + 8 + lVar39) - *(double *)(lVar6 + 0x20 + lVar39);
                    dVar8 = *(double *)(lVar26 + 0x10 + lVar39) - *(double *)(lVar6 + 0x28 + lVar39)
                    ;
                    dVar10 = *(double *)(lVar26 + 0x18 + lVar39) -
                             *(double *)(lVar6 + 0x30 + lVar39);
                    uVar22 = 0;
                    if ((int)uVar27 < local_310.ArrayNum) {
                      uVar22 = uVar29;
                    }
                    if (uVar22 == 0) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar17) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    lVar32 = lVar32 * 0x100;
                    dVar46 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x48);
                    dVar47 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x40);
                    dVar3 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x50);
                    uVar22 = 0;
                    if ((int)uVar27 < local_310.ArrayNum) {
                      uVar22 = uVar29;
                    }
                    iVar18 = local_310.ArrayNum;
                    if (uVar22 == 0) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar17) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar18 = local_310.ArrayNum;
                    }
                    dVar11 = (double)(float)(dVar8 * dVar46 + dVar42 * dVar47 + dVar10 * dVar3);
                    dVar46 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x40);
                    dVar47 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x48);
                    dVar3 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x50);
                    uVar22 = 0;
                    if ((int)uVar27 < iVar18) {
                      uVar22 = uVar29;
                    }
                    if ((uVar22 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    dVar43 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x40);
                    dVar4 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x48);
                    dVar5 = *(double *)(local_310.AllocatorInstance.Data + lVar32 + 0x50);
                    uVar22 = 0;
                    if ((int)uVar33 < (int)*plVar30) {
                      uVar22 = uVar41;
                    }
                    if ((uVar22 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    plVar40 = local_300;
                    lVar26 = *local_300;
                    *(double *)(lVar26 + 0x20 + lVar39) =
                         dVar11 * dVar43 + *(double *)(lVar26 + 0x20 + lVar39);
                    *(double *)(lVar26 + 0x28 + lVar39) =
                         dVar11 * dVar4 + *(double *)(lVar26 + 0x28 + lVar39);
                    *(double *)(lVar26 + 0x30 + lVar39) =
                         dVar11 * dVar5 + *(double *)(lVar26 + 0x30 + lVar39);
                    if (fVar14 < local_320->friction) {
                      dVar43 = (double)local_320->friction;
                      uVar22 = 0;
                      if ((int)uVar33 < (int)*plVar30) {
                        uVar22 = uVar41;
                      }
                      if ((uVar22 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      lVar26 = *plVar40;
                      dVar42 = (dVar42 - dVar11 * dVar46) * dVar43 +
                               *(double *)(lVar26 + 0x20 + lVar39);
                      *(double *)(lVar26 + 0x20 + lVar39) = dVar42;
                      *(double *)(lVar26 + 0x28 + lVar39) =
                           (dVar8 - dVar11 * dVar47) * dVar43 + *(double *)(lVar26 + 0x28 + lVar39);
                      *(double *)(lVar26 + 0x30 + lVar39) =
                           (dVar10 - dVar11 * dVar3) * dVar43 + *(double *)(lVar26 + 0x30 + lVar39);
                    }
                    unaff_XMM7._8_8_ = 0;
                    unaff_XMM7._0_8_ = dVar42;
                    local_2f8 = local_2f8 + 1;
                    uVar27 = uVar27 + 1;
                    lVar31 = lVar31 + 0x100;
                    lVar26 = local_318;
                    fVar48 = __real_3f000000;
                    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                    uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                  } while ((int)uVar27 < local_310.ArrayNum);
                }
              }
              lVar31 = local_2e8;
              if ((FHitResult *)local_310.AllocatorInstance.Data != (FHitResult *)0x0) {
                FMemory::Free(local_310.AllocatorInstance.Data);
                lVar31 = local_2e8;
              }
            }
            uVar27 = 0;
            if ((int)uVar33 < (int)plVar40[1]) {
              uVar27 = uVar41;
            }
            if ((uVar27 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar18 = (int)plVar40[1];
            local_318 = lVar26 + 1;
            local_2e8 = lVar31 + 0xf0;
            uVar33 = uVar33 + 1;
            plVar28 = local_268;
          } while ((int)uVar33 < iVar18);
        }
        plVar40 = plVar40 + 0xd;
        plVar30 = plVar30 + 0xd;
        uVar35 = (ulonglong)local_2f0;
      }
      TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
    }
    if (local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_168.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// solveConstraint @ 14b8f7f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::solveConstraint(UDS_ChainGunComponent *this)

{
  undefined1 *puVar1;
  float fVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  int iVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_298;
  undefined4 uStack_24c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  undefined1 local_200 [48];
  longlong local_1d0;
  FWeakObjectPtr local_1c8;
  UInstancedStaticMeshComponent *local_1c0;
  int local_1b8;
  TVector<double>_u_0 local_1b0;
  undefined1 local_198 [48];
  longlong local_168;
  FWeakObjectPtr local_160;
  UInstancedStaticMeshComponent *local_158;
  int local_150;
  TVector<double>_u_0 local_148;
  undefined1 local_130 [48];
  longlong local_100;
  FWeakObjectPtr local_f8;
  UInstancedStaticMeshComponent *local_f0;
  int local_e8;
  TVector<double>_u_0 local_e0;
  undefined1 local_c8 [48];
  longlong local_98;
  FWeakObjectPtr local_90;
  UInstancedStaticMeshComponent *local_88;
  int local_80;
  TVector<double>_u_0 local_78 [2];
  
  puVar1 = &(this->ChainGunInstanceMap).field_0x10;
  iVar9 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  iVar18 = 0;
  uVar7 = 1;
  iVar21 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar22 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar15 = *puVar22;
    iVar21 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14b8f7fdd;
      uVar15 = puVar22[lVar10 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar20 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar21;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14b8f7fdd:
  uVar15 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_228._padding_ = CONCAT44(uVar7,iVar18);
  TStack_228.CurrentBitIndex = iVar8;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_228._28_4_ = iVar8;
  TStack_228.BaseBitIndex = iVar21;
  uStack_208 = CONCAT44(uStack_24c,
                        *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                        *(int *)&(this->ChainGunInstanceMap).field_0x34);
  local_res20 = uVar15;
  TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar15 != uVar7) {
    puVar19 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar7;
      local_res20 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14b8f8110;
      uVar15 = *(uint *)(puVar19 + lVar10 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar13;
    local_res20 = uVar15;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
      local_res20 = uVar7;
    }
  }
LAB_14b8f8110:
  do {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 -
        *(int *)&(this->ChainGunInstanceMap).field_0x34 != (int)uStack_208) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_228.CurrentBitIndex == uVar15) &&
       (TStack_228.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChainGunInstanceMap).field_0x10)) {
      return;
    }
    lVar10 = *(longlong *)&this->ChainGunInstanceMap;
    lVar11 = (longlong)TStack_228.CurrentBitIndex * 0x20;
    uVar7 = *(uint *)(lVar11 + 0x10 + lVar10);
    uVar20 = (ulonglong)(int)uVar7;
    plVar12 = *(longlong **)(lVar11 + 8 + lVar10);
    plVar23 = plVar12 + 1;
    plVar16 = plVar12 + uVar20 * 0xd;
    while( true ) {
      if (*(int *)(lVar11 + 0x10 + lVar10) != (int)uVar20) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (plVar12 == plVar16) break;
      iVar9 = (int)plVar12[1];
      if (1 < iVar9) {
        uVar15 = 0;
        if (0 < iVar9 + -1) {
          do {
            uVar14 = uVar15 + 1;
            fVar2 = this->chainLength;
            uVar13 = 0;
            if ((int)uVar14 < iVar9) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *plVar12;
            uVar13 = 0;
            if ((int)uVar15 < (int)*plVar23) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar4 = (void *)*plVar12;
            local_200._8_4_ = (undefined4)plVar12[1];
            lVar17 = (longlong)(int)local_200._8_4_;
            local_200._0_8_ = (FScriptContainerElement *)0x0;
            if (local_200._8_4_ == 0) {
              local_200._12_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xf0,0x10,local_200._8_4_,0,(ForAnyElementType *)local_200,local_200._8_4_,
                         (int *)(local_200 + 0xc));
              memcpy((void *)local_200._0_8_,pvVar4,lVar17 * 0xf0);
            }
            local_200._16_8_ = plVar12[2];
            local_200._24_8_ = plVar12[3];
            ::FString::FString((FString *)(local_200 + 0x20),(FString *)(plVar12 + 4));
            local_1d0 = plVar12[6];
            local_1b0._s_0.X = (double)plVar12[10];
            local_1b0._s_0.Y = (double)plVar12[0xb];
            local_1b0._s_0.Z = (double)plVar12[0xc];
            local_1c8 = *(FWeakObjectPtr *)(plVar12 + 7);
            local_1c0 = (UInstancedStaticMeshComponent *)plVar12[8];
            local_1b8 = (int)plVar12[9];
            updatePoint(this,(FChainGunInstance *)local_200,(longlong)(int)uVar15,
                        (FDS_ChainPoint *)((longlong)(int)uVar15 * 0xf0 + (longlong)pvVar4),
                        (FDS_ChainPoint *)((longlong)(int)uVar14 * 0xf0 + lVar3),fVar2,1);
            iVar9 = (int)plVar12[1];
            uVar15 = uVar14;
          } while ((int)uVar14 < iVar9 + -1);
        }
        fVar2 = this->chainLength;
        uVar15 = iVar9 - 1;
        uVar13 = 0;
        if ((int)uVar15 < iVar9) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = (int)plVar12[1] - 2;
        lVar3 = *plVar12;
        uVar13 = 0;
        if ((int)uVar14 < (int)plVar12[1]) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_198._8_4_ = (undefined4)plVar12[1];
        lVar17 = (longlong)(int)local_198._8_4_;
        pvVar4 = (void *)*plVar12;
        iVar9 = local_198._8_4_ + -1;
        local_198._0_8_ = (FScriptContainerElement *)0x0;
        if (local_198._8_4_ == 0) {
          local_198._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xf0,0x10,local_198._8_4_,0,(ForAnyElementType *)local_198,local_198._8_4_,
                     (int *)(local_198 + 0xc));
          memcpy((void *)local_198._0_8_,pvVar4,lVar17 * 0xf0);
        }
        local_198._16_8_ = plVar12[2];
        local_198._24_8_ = plVar12[3];
        ::FString::FString((FString *)(local_198 + 0x20),(FString *)(plVar12 + 4));
        local_168 = plVar12[6];
        local_148._s_0.X = (double)plVar12[10];
        local_148._s_0.Y = (double)plVar12[0xb];
        local_148._s_0.Z = (double)plVar12[0xc];
        local_160 = *(FWeakObjectPtr *)(plVar12 + 7);
        local_158 = (UInstancedStaticMeshComponent *)plVar12[8];
        local_150 = (int)plVar12[9];
        updatePoint(this,(FChainGunInstance *)local_198,(longlong)iVar9,
                    (FDS_ChainPoint *)((longlong)(int)uVar14 * 0xf0 + (longlong)pvVar4),
                    (FDS_ChainPoint *)((longlong)(int)uVar15 * 0xf0 + lVar3),fVar2,1);
        local_298 = 0;
        if (0 < this->stiffness) {
          do {
            iVar9 = (int)plVar12[1];
            uVar15 = 0;
            if (0 < iVar9 + -1) {
              do {
                fVar2 = this->chainLength;
                uVar13 = uVar15 + 1;
                uVar14 = 0;
                if ((int)uVar13 < iVar9) {
                  uVar14 = ~uVar13 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar3 = *plVar12;
                uVar14 = 0;
                if ((int)uVar15 < (int)plVar12[1]) {
                  uVar14 = ~uVar15 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_130._8_4_ = (undefined4)plVar12[1];
                lVar17 = (longlong)(int)local_130._8_4_;
                pvVar4 = (void *)*plVar12;
                local_130._0_8_ = (FScriptContainerElement *)0x0;
                if (local_130._8_4_ == 0) {
                  local_130._12_4_ = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xf0,0x10,local_130._8_4_,0,(ForAnyElementType *)local_130,
                             local_130._8_4_,(int *)(local_130 + 0xc));
                  memcpy((void *)local_130._0_8_,pvVar4,lVar17 * 0xf0);
                }
                local_130._16_8_ = plVar12[2];
                local_130._24_8_ = plVar12[3];
                ::FString::FString((FString *)(local_130 + 0x20),(FString *)(plVar12 + 4));
                local_100 = plVar12[6];
                local_e0._s_0.X = (double)plVar12[10];
                local_e0._s_0.Y = (double)plVar12[0xb];
                local_e0._s_0.Z = (double)plVar12[0xc];
                local_f8 = *(FWeakObjectPtr *)(plVar12 + 7);
                local_f0 = (UInstancedStaticMeshComponent *)plVar12[8];
                local_e8 = (int)plVar12[9];
                updatePoint(this,(FChainGunInstance *)local_130,(longlong)(int)uVar15,
                            (FDS_ChainPoint *)((longlong)(int)uVar15 * 0xf0 + (longlong)pvVar4),
                            (FDS_ChainPoint *)((longlong)(int)uVar13 * 0xf0 + lVar3),fVar2,1);
                iVar9 = (int)plVar12[1];
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < iVar9 + -1);
            }
            fVar2 = this->chainLength;
            uVar15 = iVar9 - 2;
            uVar13 = 0;
            if ((int)uVar15 < iVar9) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar14 = (int)plVar12[1] - 1;
            lVar3 = *plVar12;
            uVar13 = 0;
            if ((int)uVar14 < (int)plVar12[1]) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_c8._8_4_ = (undefined4)plVar12[1];
            lVar17 = (longlong)(int)local_c8._8_4_;
            pvVar4 = (void *)*plVar12;
            iVar9 = local_c8._8_4_ + -1;
            local_c8._0_8_ = (FScriptContainerElement *)0x0;
            if (local_c8._8_4_ == 0) {
              local_c8._12_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xf0,0x10,local_c8._8_4_,0,(ForAnyElementType *)local_c8,local_c8._8_4_,
                         (int *)(local_c8 + 0xc));
              memcpy((void *)local_c8._0_8_,pvVar4,lVar17 * 0xf0);
            }
            local_c8._16_8_ = plVar12[2];
            local_c8._24_8_ = plVar12[3];
            ::FString::FString((FString *)(local_c8 + 0x20),(FString *)(plVar12 + 4));
            local_98 = plVar12[6];
            local_78[0]._0_8_ = plVar12[10];
            local_78[0]._8_8_ = plVar12[0xb];
            local_78[0]._16_8_ = plVar12[0xc];
            local_90 = *(FWeakObjectPtr *)(plVar12 + 7);
            local_88 = (UInstancedStaticMeshComponent *)plVar12[8];
            local_80 = (int)plVar12[9];
            updatePoint(this,(FChainGunInstance *)local_c8,(longlong)iVar9,
                        (FDS_ChainPoint *)((longlong)(int)uVar14 * 0xf0 + (longlong)pvVar4),
                        (FDS_ChainPoint *)((longlong)(int)uVar15 * 0xf0 + lVar3),fVar2,1);
            local_298 = local_298 + 1;
          } while (local_298 < this->stiffness);
        }
      }
      plVar12 = plVar12 + 0xd;
      plVar23 = plVar23 + 0xd;
      uVar20 = (ulonglong)uVar7;
    }
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    uVar15 = local_res20;
  } while( true );
}

// updateAttachments @ 14b8f8920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ChainGunComponent::updateAttachments(UDS_ChainGunComponent *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  USceneComponent *pUVar12;
  UClass *pUVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  
  iVar17 = 0;
  iVar4 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  puVar3 = &(this->ChainGunInstanceMap).field_0x10;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar3;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      iVar17 = iVar17 + 1;
      iVar19 = iVar19 + 0x20;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14b8f89cc;
      uVar15 = puVar20[iVar17];
    }
    uVar10 = ~(uVar15 - 1) & uVar15;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar19;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14b8f89cc:
  uVar15 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar10,iVar17);
  TStack_b8.CurrentBitIndex = iVar11;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iVar11;
  TStack_b8.BaseBitIndex = iVar19;
  uStack_98 = CONCAT44(uStack_dc,
                       *(int *)&(this->ChainGunInstanceMap).field_0x8 -
                       *(int *)&(this->ChainGunInstanceMap).field_0x34);
  local_res18 = uVar15;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar15 != uVar10) {
    puVar5 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    puVar18 = puVar3;
    if (puVar5 != (undefined1 *)0x0) {
      puVar18 = puVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      iVar17 = iVar17 + 1;
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar10;
      local_res18 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar17)
      goto LAB_14b8f8ae0;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar15 = (uVar14 - 1) + (int)lVar7;
    local_res18 = uVar15;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
      local_res18 = uVar10;
    }
  }
LAB_14b8f8ae0:
  do {
    if (*(int *)&(this->ChainGunInstanceMap).field_0x8 -
        *(int *)&(this->ChainGunInstanceMap).field_0x34 != (int)uStack_98) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b8.CurrentBitIndex == uVar15) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) {
      return;
    }
    lVar21 = (longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)&this->ChainGunInstanceMap;
    lVar7 = *(longlong *)(lVar21 + 8);
    iVar4 = *(int *)(lVar21 + 0x10);
    piVar16 = (int *)(lVar7 + 8);
    while( true ) {
      if (*(int *)(lVar21 + 0x10) != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      plVar1 = (longlong *)(piVar16 + -2);
      if (plVar1 == (longlong *)((longlong)iVar4 * 0x68 + lVar7)) break;
      if (*piVar16 < 1) {
LAB_14b8f8eef:
        piVar16 = piVar16 + 0x1a;
      }
      else {
        bVar9 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          (&(this->attachComponentToStart).OtherActor,(void *)0x0);
        if ((!bVar9) &&
           (pUVar12 = (USceneComponent *)
                      FComponentReference::GetComponent
                                (&this->attachComponentToStart,*(AActor **)&this->field_0xa8),
           pUVar12 != (USceneComponent *)0x0)) {
          pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar17 = (int)pUVar13->_padding_;
          if ((iVar17 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
              &pUVar13->_padding_)) {
            if (this->rotateStartAttachment == false) {
              if ((*piVar16 < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *plVar1;
              local_88._s_0.X = *(double *)(lVar6 + 8);
              local_88._s_0.Y = *(double *)(lVar6 + 0x10);
              local_88._s_0.Z = *(double *)(lVar6 + 0x18);
              USceneComponent::SetWorldLocation
                        (pUVar12,(TVector<double> *)&local_88._s_0,false,(FHitResult *)0x0,None);
            }
            else {
              if ((*piVar16 < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *plVar1;
              if ((*piVar16 < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              USceneComponent::SetWorldLocationAndRotationNoPhysics
                        (pUVar12,(TVector<double> *)(*plVar1 + 8),(TRotator<double> *)(lVar6 + 0x68)
                        );
            }
          }
        }
        bVar9 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          (&(this->attachComponentToEnd).OtherActor,(void *)0x0);
        if (bVar9) goto LAB_14b8f8eef;
        pUVar12 = (USceneComponent *)
                  FComponentReference::GetComponent
                            (&this->attachComponentToEnd,*(AActor **)&this->field_0xa8);
        if (pUVar12 == (USceneComponent *)0x0) {
LAB_14b8f8d12:
          pUVar12 = (USceneComponent *)0x0;
        }
        else {
          pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar17 = (int)pUVar13->_padding_;
          if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar17) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
              &pUVar13->_padding_)) goto LAB_14b8f8d12;
        }
        uVar15 = *piVar16 - 1;
        uVar10 = 0;
        if ((int)uVar15 < *piVar16) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = *piVar16 - 1;
        lVar6 = *plVar1;
        uVar10 = 0;
        if ((int)uVar15 < *piVar16) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        USceneComponent::SetWorldLocationAndRotationNoPhysics
                  (pUVar12,(TVector<double> *)(*plVar1 + (longlong)(*piVar16 + -1) * 0xf0 + 8),
                   (TRotator<double> *)((longlong)(int)uVar15 * 0xf0 + lVar6 + 0x68));
        if (pUVar12 == (USceneComponent *)0x0) goto LAB_14b8f8eef;
        if (this->rotateEndAttachment == false) {
          if ((*piVar16 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *plVar1;
          local_68._s_0.X = *(double *)(lVar6 + 8);
          local_68._s_0.Y = *(double *)(lVar6 + 0x10);
          local_68._s_0.Z = *(double *)(lVar6 + 0x18);
          USceneComponent::SetWorldLocation
                    (pUVar12,(TVector<double> *)&local_68._s_0,false,(FHitResult *)0x0,None);
          goto LAB_14b8f8eef;
        }
        if ((*piVar16 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *plVar1;
        if ((*piVar16 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        USceneComponent::SetWorldLocationAndRotationNoPhysics
                  (pUVar12,(TVector<double> *)(*plVar1 + 8),(TRotator<double> *)(lVar6 + 0x68));
        piVar16 = piVar16 + 0x1a;
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    uVar15 = local_res18;
  } while( true );
}

// updateMeshes @ 14b8f8f40

void __thiscall UDS_ChainGunComponent::updateMeshes(UDS_ChainGunComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  bool bVar13;
  TQuat<double> *pTVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar26;
  longlong *plVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  ulonglong in_stack_ffffffffffffff00;
  TQuat<double> local_e8;
  int local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  TMap<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChainGunInstanceMap).field_0x10;
  local_e8.Y._0_4_ = 0;
  iVar15 = *(int *)&(this->ChainGunInstanceMap).field_0x28;
  pTVar26 = &this->ChainGunInstanceMap;
  local_c8 = 0;
  local_e8.Y._4_4_ = 1;
  local_e8.W._4_4_ = 0;
  if (iVar15 != 0) {
    puVar25 = *(uint **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar28;
    }
    uVar22 = *puVar25;
    while (uVar22 == 0) {
      lVar16 = (longlong)local_e8.Y._0_4_;
      local_c8 = local_c8 + 0x20;
      local_e8.Y._0_4_ = local_e8.Y._0_4_ + 1;
      local_e8.W._4_4_ = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e8.Y._0_4_)
      goto LAB_14b8f8fee;
      uVar22 = puVar25[lVar16 + 1];
    }
    local_e8.Y._4_4_ = -uVar22 & uVar22;
    uVar17 = (ulonglong)local_e8.Y._4_4_ * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_b8 = (int)lVar16;
    local_e8.W._4_4_ = local_b8 + -1 + local_c8;
    if (iVar15 < local_e8.W._4_4_) {
      local_e8.W._4_4_ = iVar15;
    }
  }
LAB_14b8f8fee:
  uVar22 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  iStack_c0 = *(int *)&(this->ChainGunInstanceMap).field_0x8 -
              *(int *)&(this->ChainGunInstanceMap).field_0x34;
  local_e8.W._0_4_ = 0xffffffff;
  uVar20 = uVar22 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_e8.Y._4_4_,local_e8.Y._0_4_);
  TStack_90.CurrentBitIndex = local_e8.W._4_4_;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar22 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_c8;
  uStack_70 = CONCAT44(uStack_bc,iStack_c0);
  local_res18 = uVar22;
  local_e8.X = (double)pTVar26;
  local_e8.Z = (double)pTVar28;
  local_a8 = pTVar28;
  local_a0 = pTVar26;
  local_98 = pTVar26;
  TStack_90.Array = pTVar28;
  if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = *(uint *)&(this->ChainGunInstanceMap).field_0x28;
  if (uVar22 != uVar23) {
    puVar24 = *(undefined1 **)&(this->ChainGunInstanceMap).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = (undefined1 *)pTVar28;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      lVar16 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      local_res18 = uVar23;
      uVar22 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14b8f9100;
      uVar22 = *(uint *)(puVar24 + lVar16 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_b4 = (int)lVar16;
    local_res18 = local_b4 + -1 + uVar20;
    uVar22 = local_res18;
    if ((int)uVar23 < (int)local_res18) {
      local_res18 = uVar23;
      uVar22 = uVar23;
    }
  }
LAB_14b8f9100:
  do {
    pTVar12 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar22) && (TStack_90.Array == pTVar28)) &&
       (pTVar12 == pTVar26)) {
      return;
    }
    local_b0 = (longlong *)((longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)pTVar12 + 8);
    local_res20 = *(uint *)(local_b0 + 1);
    uVar17 = (ulonglong)(int)local_res20;
    plVar21 = (longlong *)*local_b0;
    plVar27 = plVar21 + 1;
    plVar19 = plVar21 + uVar17 * 0xd;
    while( true ) {
      if ((int)local_b0[1] != (int)uVar17) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FChainGunInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (plVar21 == plVar19) break;
      if (plVar21[8] != 0) {
        iVar15 = (int)plVar21[1];
        uVar22 = 0;
        if (0 < iVar15) {
          lVar16 = 0;
          do {
            uVar23 = ~uVar22 >> 0x1f;
            uVar20 = 0;
            if ((int)uVar22 < iVar15) {
              uVar20 = uVar23;
            }
            if (uVar20 == 0) {
              in_stack_ffffffffffffff00 = (ulonglong)iVar15;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            uVar17 = (ulonglong)(int)*plVar27;
            lVar5 = *plVar21;
            uVar20 = 0;
            if ((int)uVar22 < (int)*plVar27) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff00 = uVar17, bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar1 = (undefined8 *)(lVar16 + 8 + *plVar21);
            uVar8 = puVar1[1];
            uVar4 = *(undefined8 *)(lVar16 + 0x18 + *plVar21);
            puVar2 = (undefined8 *)(lVar5 + 0xa0 + lVar16);
            *puVar2 = *puVar1;
            puVar2[1] = uVar8;
            puVar1 = (undefined8 *)(lVar5 + 0xb0 + lVar16);
            *puVar1 = uVar4;
            puVar1[1] = 0;
            uVar17 = (ulonglong)(int)plVar21[1];
            uVar20 = 0;
            if ((int)uVar22 < (int)plVar21[1]) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff00 = uVar17, bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = (ulonglong)(int)plVar21[1];
            lVar5 = *plVar21;
            uVar20 = 0;
            if ((int)uVar22 < (int)plVar21[1]) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff00 = uVar17, bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar14 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)(*plVar21 + 0x68 + lVar16),&local_e8);
            dVar9 = pTVar14->Y;
            dVar10 = pTVar14->Z;
            dVar11 = pTVar14->W;
            pdVar3 = (double *)(lVar5 + 0x80 + lVar16);
            *pdVar3 = pTVar14->X;
            pdVar3[1] = dVar9;
            pdVar3 = (double *)(lVar5 + 0x90 + lVar16);
            *pdVar3 = dVar10;
            pdVar3[1] = dVar11;
            plVar6 = (longlong *)plVar21[8];
            uVar17 = (ulonglong)(int)plVar21[1];
            pcVar7 = *(code **)(*plVar6 + 0xbf0);
            uVar20 = 0;
            if ((int)uVar22 < (int)plVar21[1]) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff00 = uVar17, bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
            (*pcVar7)(plVar6,uVar22,*plVar21 + 0x80 + lVar16,1,1,in_stack_ffffffffffffff00);
            iVar15 = (int)plVar21[1];
            uVar22 = uVar22 + 1;
            lVar16 = lVar16 + 0xf0;
          } while ((int)uVar22 < iVar15);
        }
      }
      plVar21 = plVar21 + 0xd;
      uVar17 = (ulonglong)local_res20;
      plVar27 = plVar27 + 0xd;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    pTVar26 = local_a0;
    pTVar28 = local_a8;
    uVar22 = local_res18;
  } while( true );
}

// updatePoint @ 14b8f93e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_ChainGunComponent::updatePoint
          (UDS_ChainGunComponent *this,FChainGunInstance *param_1,ulong64 param_2,
          FDS_ChainPoint *param_3,FDS_ChainPoint *param_4,float param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  bool bVar15;
  TRotator<double> *pTVar16;
  longlong lVar17;
  TVector<double>_u_0 *this_00;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TRotator<double> local_e0;
  TRotator<double> local_c8;
  TRotator<double> local_b0 [5];
  
  dVar1 = (param_3->position).field0_0x0._s_0.Y;
  dVar2 = (param_3->position).field0_0x0._s_0.Z;
  dVar3 = (param_4->position).field0_0x0._s_0.X;
  dVar4 = (param_4->position).field0_0x0._s_0.Y;
  dVar10 = dVar3 - (param_3->position).field0_0x0._s_0.X;
  dVar5 = (param_4->position).field0_0x0._s_0.Z;
  dVar11 = dVar4 - dVar1;
  dVar12 = dVar5 - dVar2;
  auVar24._0_8_ = dVar12 * dVar12;
  auVar24._8_8_ = 0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + auVar24._0_8_;
  auVar25 = sqrtpd(auVar24,auVar25);
  if (auVar25._0_8_ == 0.0) {
    pvVar18 = (void *)(param_1->AttachEndTo)._padding_;
    goto LAB_14b8f9a1f;
  }
  fVar23 = (float)auVar25._0_8_;
  fVar23 = (fVar23 - param_5) / fVar23;
  if (param_3->free == false) {
    if (param_4->free != false) {
      dVar26 = (double)fVar23;
      dVar1 = (param_4->force).field0_0x0._s_0.Z;
      dVar2 = (param_4->force).field0_0x0._s_0.Y;
      (param_4->position).field0_0x0._s_0.X =
           dVar3 - (dVar26 * dVar10 + (param_4->force).field0_0x0._s_0.X);
      (param_4->position).field0_0x0._s_0.Z = dVar5 - (dVar26 * dVar12 + dVar1);
      (param_4->position).field0_0x0._s_0.Y = dVar4 - (dVar26 * dVar11 + dVar2);
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_4->force).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->force).field0_0x0._s_0.Y = (double)uVar14;
      goto LAB_14b8f9643;
    }
  }
  else {
    dVar3 = (param_3->force).field0_0x0._s_0.X;
    dVar4 = (param_3->force).field0_0x0._s_0.Y;
    dVar5 = (param_3->force).field0_0x0._s_0.Z;
    if (param_4->free == false) {
      dVar26 = (double)fVar23;
      (param_3->position).field0_0x0._s_0.X =
           dVar26 * dVar10 + dVar3 + (param_3->position).field0_0x0._s_0.X;
      (param_3->position).field0_0x0._s_0.Y = dVar26 * dVar11 + dVar4 + dVar1;
      (param_3->position).field0_0x0._s_0.Z = dVar26 * dVar12 + dVar5 + dVar2;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_3->force).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_3->force).field0_0x0._s_0.Y = (double)uVar14;
      (param_3->force).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      dVar26 = (double)(fVar23 * __real_3f000000);
      (param_3->position).field0_0x0._s_0.X =
           dVar26 * dVar10 + dVar3 + (param_3->position).field0_0x0._s_0.X;
      (param_3->position).field0_0x0._s_0.Y = dVar26 * dVar11 + dVar4 + dVar1;
      (param_3->position).field0_0x0._s_0.Z = dVar26 * dVar12 + dVar5 + dVar2;
      dVar1 = (param_4->force).field0_0x0._s_0.Y;
      dVar2 = (param_4->force).field0_0x0._s_0.Z;
      dVar3 = (param_4->position).field0_0x0._s_0.Y;
      (param_4->position).field0_0x0._s_0.X =
           (param_4->position).field0_0x0._s_0.X -
           (dVar26 * dVar10 + (param_4->force).field0_0x0._s_0.X);
      dVar4 = (param_4->position).field0_0x0._s_0.Z;
      (param_4->position).field0_0x0._s_0.Y = dVar3 - (dVar26 * dVar11 + dVar1);
      (param_4->position).field0_0x0._s_0.Z = dVar4 - (dVar26 * dVar12 + dVar2);
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_3->force).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_3->force).field0_0x0._s_0.Y = (double)uVar14;
      (param_3->force).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_4->force).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->force).field0_0x0._s_0.Y = (double)uVar14;
LAB_14b8f9643:
      (param_4->force).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  iVar6 = (param_1->ChainPoints).ArrayNum;
  uVar21 = (uint)param_2;
  if (param_2 == 0) {
    uVar13 = false;
    if (1 < iVar6) {
      uVar13 = 0xff;
    }
    if ((!(bool)uVar13) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = (param_1->ChainPoints).AllocatorInstance.Data;
    if (((param_1->ChainPoints).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar7 = (param_1->ChainPoints).AllocatorInstance.Data;
    local_128._s_0.Z = *(double *)(pFVar8 + 0x108) - *(double *)(pFVar7 + 0x18);
    local_128._s_0.Y = *(double *)(pFVar8 + 0x100) - *(double *)(pFVar7 + 0x10);
    local_128._s_0.X = *(double *)(pFVar8 + 0xf8) - *(double *)(pFVar7 + 8);
    pTVar16 = UE::Math::TVector<double>::ToOrientationRotator
                        ((TVector<double> *)&local_128._s_0,&local_e0);
  }
  else {
    if (param_2 == (longlong)(iVar6 + -1)) {
      uVar19 = 0;
      if ((int)uVar21 < iVar6) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar19 = uVar21 - 1;
      pFVar8 = (param_1->ChainPoints).AllocatorInstance.Data;
      lVar22 = (longlong)(int)uVar21 * 0xf0;
      uVar21 = 0;
      if ((int)uVar19 < (param_1->ChainPoints).ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar16 = &local_c8;
      lVar17 = (longlong)(int)uVar19 * 0xf0;
      pFVar7 = (param_1->ChainPoints).AllocatorInstance.Data;
      local_110._s_0.Z = *(double *)(pFVar8 + lVar22 + 0x18) - *(double *)(pFVar7 + lVar17 + 0x18);
      local_110._s_0.Y = *(double *)(pFVar8 + lVar22 + 0x10) - *(double *)(pFVar7 + lVar17 + 0x10);
      local_110._s_0.X = *(double *)(pFVar8 + lVar22 + 8) - *(double *)(pFVar7 + lVar17 + 8);
      this_00 = &local_110;
    }
    else {
      uVar20 = uVar21 + 1;
      uVar19 = 0;
      if ((int)uVar20 < iVar6) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (param_1->ChainPoints).AllocatorInstance.Data;
      uVar21 = uVar21 - 1;
      lVar22 = (longlong)(int)uVar20 * 0xf0;
      uVar19 = 0;
      if ((int)uVar21 < (param_1->ChainPoints).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar16 = local_b0;
      lVar17 = (longlong)(int)uVar21 * 0xf0;
      pFVar7 = (param_1->ChainPoints).AllocatorInstance.Data;
      local_f8._s_0.Z = *(double *)(pFVar8 + lVar22 + 0x18) - *(double *)(pFVar7 + lVar17 + 0x18);
      local_f8._s_0.Y = *(double *)(pFVar8 + lVar22 + 0x10) - *(double *)(pFVar7 + lVar17 + 0x10);
      local_f8._s_0.X = *(double *)(pFVar8 + lVar22 + 8) - *(double *)(pFVar7 + lVar17 + 8);
      this_00 = &local_f8;
    }
    pTVar16 = UE::Math::TVector<double>::ToOrientationRotator
                        ((TVector<double> *)&this_00->_s_0,pTVar16);
  }
  dVar1 = pTVar16->Yaw;
  (param_3->rotation).Pitch = pTVar16->Pitch;
  (param_3->rotation).Yaw = dVar1;
  (param_3->rotation).Roll = pTVar16->Roll;
  dVar3 = (double)param_2;
  dVar1 = (this->additiveRotation).field0_0x0._s_0.X;
  dVar2 = (this->additiveRotation).field0_0x0._s_0.Y;
  (param_3->rotation).Roll =
       dVar3 * (this->additiveRotation).field0_0x0._s_0.Z + (param_3->rotation).Roll;
  (param_3->rotation).Pitch = dVar3 * dVar1 + (param_3->rotation).Pitch;
  (param_3->rotation).Yaw = dVar3 * dVar2 + (param_3->rotation).Yaw;
  pvVar18 = (void *)(param_1->AttachEndTo)._padding_;
LAB_14b8f9a1f:
  if (pvVar18 != (void *)0x0) {
    FMemory::Free(pvVar18);
  }
  pFVar8 = (param_1->ChainPoints).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

