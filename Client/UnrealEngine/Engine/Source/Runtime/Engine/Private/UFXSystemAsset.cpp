// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14814deb0

UClass * __cdecl UFXSystemAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemAsset",
               &Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton,
               StaticRegisterNativesUFXSystemAsset,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UFXSystemAsset>,
               InternalVTableHelperCtorCaller<UFXSystemAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton;
}

// UFXSystemAsset @ 14815b0c0

UFXSystemAsset * __thiscall
UFXSystemAsset::UFXSystemAsset(UFXSystemAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  this->PoolPrimeSize = 0;
  this->ParticlePerfStats = (FParticlePerfStats *)0x0;
  this->PSOPrecachingLaunched = false;
  (this->PrecachePSOsEvent).Reference = (FBaseGraphTask *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayNum = 0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayMax = 0;
  return this;
}

// UFXSystemAsset @ 14815b100

UFXSystemAsset * __thiscall
UFXSystemAsset::UFXSystemAsset(UFXSystemAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  this->PoolPrimeSize = 0;
  this->ParticlePerfStats = (FParticlePerfStats *)0x0;
  this->PSOPrecachingLaunched = false;
  (this->PrecachePSOsEvent).Reference = (FBaseGraphTask *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayNum = 0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayMax = 0;
  return this;
}

// ~UFXSystemAsset @ 148160340

void __thiscall UFXSystemAsset::~UFXSystemAsset(UFXSystemAsset *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  pFVar3 = (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->PrecachePSOsEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14817cf80

UClass * __cdecl UFXSystemAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemAsset",
               &Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton,
               StaticRegisterNativesUFXSystemAsset,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UFXSystemAsset>,
               InternalVTableHelperCtorCaller<UFXSystemAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton;
}

// LaunchPSOPrecaching @ 1481860f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UFXSystemAsset::LaunchPSOPrecaching
          (UFXSystemAsset *this,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  undefined8 *puVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *this_00;
  undefined1 auStackY_98 [32];
  EExtendedTaskPriority local_68;
  ETaskPriority local_67 [7];
  UFXSystemAsset *local_60;
  longlong local_58;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = (FTaskBase *)0x0;
  local_50.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 4;
  bVar4 = IsComponentPSOPrecachingEnabled();
  if (bVar4) {
    PrecacheMaterialPSOs(param_1,&this->MaterialPSOPrecacheRequestIDs,&local_50);
  }
  if (local_50.ArrayNum < 1) goto LAB_148186285;
  pFVar5 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pFVar5 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar5,&local_50);
    pFVar5->_padding_ =
         (longlong)
         &TGraphTask<`UFXSystemAsset::LaunchPSOPrecaching'::`8'::FReleasePrecachePSOsEventTask>::
          _vftable_;
    this_00 = pFVar5;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  this_00[1]._padding_ = 0;
  local_60 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_60);
  UE::Tasks::Private::TranslatePriority(GameThread,local_67,&local_68);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_67[0],local_68,None);
  TaskTrace::Created((ulong64)this_00->TraceId,0xe0);
  LOCK();
  this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
  UNLOCK();
  pTVar1 = &this->PrecachePSOsEvent;
  if (pTVar1 == (TRefCountPtr<FBaseGraphTask> *)&local_58) {
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      puVar6 = (undefined8 *)this_00->_padding_;
      pFVar5 = this_00;
LAB_148186266:
      (*(code *)*puVar6)(pFVar5);
    }
  }
  else {
    pFVar5 = (FTaskBase *)pTVar1->Reference;
    pTVar1->Reference = (FBaseGraphTask *)this_00;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar5->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        puVar6 = (undefined8 *)pFVar5->_padding_;
        goto LAB_148186266;
      }
    }
  }
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
LAB_148186285:
  this->PSOPrecachingLaunched = true;
  FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar7 = local_50.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_50.ArrayNum);
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// StaticRegisterNativesUFXSystemAsset @ 1481a1b50

void __cdecl UFXSystemAsset::StaticRegisterNativesUFXSystemAsset(void)

{
  return;
}

