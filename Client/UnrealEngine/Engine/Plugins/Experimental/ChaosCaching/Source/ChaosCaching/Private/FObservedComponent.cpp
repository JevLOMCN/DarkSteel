// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 8

// StaticStruct @ 14dadd590

UScriptStruct * __cdecl FObservedComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObservedComponent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FObservedComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObservedComponent,(UObject *)pUVar1,
                         L"ObservedComponent");
  }
  return Z_Registration_Info_UScriptStruct_FObservedComponent.OuterSingleton;
}

// FObservedComponent @ 14dae7130

FObservedComponent * __thiscall FObservedComponent::FObservedComponent(FObservedComponent *this)

{
  undefined1 *this_00;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_01;
  undefined8 local_res8;
  
  (this->CacheName).ComparisonIndex = 0;
  (this->CacheName).Number = 0;
  (this->ComponentRef)._padding_ = 0;
  (this->ComponentRef)._padding_ = 0;
  (this->ComponentRef)._padding_ = 0;
  (this->ComponentRef)._padding_ = 0;
  this_01 = &(this->ComponentRef).OtherActor;
  local_res8 = 0;
  this_01->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_res8);
  (this->SoftComponentRef)._padding_ = 0;
  this_00 = &(this->SoftComponentRef).OtherActor.SoftObjectPtr.field_0x18;
  (this->SoftComponentRef)._padding_ = 0;
  (this->SoftComponentRef)._padding_ = 0;
  (this->SoftComponentRef)._padding_ = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftComponentRef).OtherActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftComponentRef).OtherActor.SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftComponentRef).OtherActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftComponentRef).OtherActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=
            (&(this->SoftComponentRef).OtherActor.SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->USDCacheDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->USDCacheDirectory).Path.Data.ArrayNum = 0;
  (this->USDCacheDirectory).Path.Data.ArrayMax = 0;
  *(undefined8 *)&(this->TickRecord).LastEventPerTrack = 0;
  *(undefined8 *)&(this->TickRecord).LastEventPerTrack.field_0x8 = 0;
  *(undefined8 *)&(this->TickRecord).LastEventPerTrack.field_0x20 = 0;
  this->bHasNotifyBreaks = false;
  this->Cache = (UChaosCache *)0x0;
  this->bIsSimulating = true;
  this->bPlaybackEnabled = true;
  (this->TickRecord).CurrentDt = 0.0;
  (this->TickRecord).LastTime = 0.0;
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x28 = 0;
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x2c = 0x80;
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x34 = 0;
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TickRecord).LastEventPerTrack.field_0x40 = 0;
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x48 = 0;
  *&(this->TickRecord).SpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TickRecord).SpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TickRecord).SpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TickRecord).SpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TickRecord).SpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TickRecord).SpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->BestFitAdapter = (FComponentCacheAdapter *)0x0;
  *(undefined8 *)&this->OnDestroying = 0;
  *(undefined8 *)&(this->OnDestroying).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroying).field_0x10 = 0;
  return this;
}

// ~FObservedComponent @ 14dae8a50

void __thiscall FObservedComponent::~FObservedComponent(FObservedComponent *this)

{
  undefined1 *puVar1;
  TDelegate<void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FReadAccessScope local_28;
  
  this_00 = &this->OnDestroying;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  puVar1 = &(this->OnDestroying).field_0x8;
  if ((*(int *)&(this->OnDestroying).field_0x10 != 0) &&
     (plVar2 = *(longlong **)puVar1, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)puVar1;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  *(undefined4 *)&(this->TickRecord).LastEventPerTrack.field_0x48 = 0;
  pvVar3 = *(void **)&(this->TickRecord).LastEventPerTrack.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TickRecord).LastEventPerTrack);
  pFVar4 = (this->USDCacheDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pvVar3 = *(void **)&(this->SoftComponentRef).OtherActor.SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->SoftComponentRef)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->ComponentRef)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return;
}

// GetComponent @ 14daf7b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FObservedComponent::GetComponent(FObservedComponent *this,AActor *param_1)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPrimitiveComponent *)
           FSoftComponentReference::GetComponent(&this->SoftComponentRef,param_1);
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// GetComponent @ 14daf7b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FObservedComponent::GetComponent(FObservedComponent *this,AActor *param_1)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPrimitiveComponent *)
           FSoftComponentReference::GetComponent(&this->SoftComponentRef,param_1);
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// IsEnabled @ 14dafa770

bool __thiscall FObservedComponent::IsEnabled(FObservedComponent *this,ECacheMode param_1)

{
  if ((param_1 != Record) && (this->bPlaybackEnabled == false)) {
    return false;
  }
  return true;
}

// PostSerialize @ 14daff230

void __thiscall FObservedComponent::PostSerialize(FObservedComponent *this,FArchive *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *local_res10 [3];
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(this->ComponentRef).OtherActor.WeakPtr), bVar2)) {
    local_res10[0] = FWeakObjectPtr::Get(&(this->ComponentRef).OtherActor.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    FSoftObjectPtr::operator=
              (&(this->SoftComponentRef).OtherActor.SoftObjectPtr,(FObjectPtr)local_res10);
    (this->SoftComponentRef)._padding_ = (this->ComponentRef)._padding_;
    (this->SoftComponentRef)._padding_ = (this->ComponentRef)._padding_;
    iVar1 = (int)(this->ComponentRef)._padding_;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange
              ((FString *)&(this->SoftComponentRef)._padding_,
               (wchar_t *)(this->ComponentRef)._padding_,iVar3);
  }
  return;
}

// ResetRuntimeData @ 14db03920

void __thiscall FObservedComponent::ResetRuntimeData(FObservedComponent *this,EStartMode param_1)

{
  this->bTriggered = param_1 == Timed;
  this->AbsoluteTime = 0.0;
  this->TimeSinceTrigger = 0.0;
  this->Cache = (UChaosCache *)0x0;
  (this->TickRecord).LastTime = 0.0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&(this->TickRecord).LastEventPerTrack);
  return;
}

