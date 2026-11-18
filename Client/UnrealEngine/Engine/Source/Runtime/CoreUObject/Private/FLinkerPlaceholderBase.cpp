// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// FLinkerPlaceholderBase @ 1420a27d0

FLinkerPlaceholderBase * __thiscall
FLinkerPlaceholderBase::FLinkerPlaceholderBase(FLinkerPlaceholderBase *this)

{
  this->_padding_ = (longlong)&___7FLinkerPlaceholderBase__6B_;
  this->PackageIndex = 0;
  (this->DeferredObjectType).WeakPtr.ObjectIndex = 0;
  (this->DeferredObjectType).WeakPtr.ObjectSerialNumber = 0;
  this->bResolveWasInvoked = false;
  *(undefined8 *)&this->ReferencingContainers = 0;
  *(undefined8 *)&(this->ReferencingContainers).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingContainers).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingContainers).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingContainers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingContainers).field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingContainers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ReferencingContainers).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencingContainers).field_0x48 = 0;
  *(undefined8 *)&this->ReferencingRawContainers = 0;
  *(undefined8 *)&(this->ReferencingRawContainers).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingRawContainers).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ReferencingRawContainers).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x48 = 0;
  (this->PlaceholderSubobjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaceholderSubobjects).ArrayNum = 0;
  (this->PlaceholderSubobjects).ArrayMax = 0;
  return this;
}

// ~FLinkerPlaceholderBase @ 1420a4bd0

void __thiscall FLinkerPlaceholderBase::~FLinkerPlaceholderBase(FLinkerPlaceholderBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FLinkerPlaceholderBase__6B_;
  pFVar1 = (this->PlaceholderSubobjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferencingRawContainers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferencingRawContainers);
  *(undefined4 *)&(this->ReferencingContainers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferencingContainers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferencingContainers);
  return;
}

// AddReferencingPropertyValue @ 1420a9a50

bool __thiscall
FLinkerPlaceholderBase::AddReferencingPropertyValue
          (FLinkerPlaceholderBase *this,FFieldVariant param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FFieldClass *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
  *pTVar7;
  FTlsAutoCleanup *pFVar8;
  uint uVar9;
  undefined1 local_res10 [8];
  FPlaceholderValuePropertyPath local_58;
  void *local_48;
  ulonglong local_40;
  UObject *local_38;
  FPlaceholderValuePropertyPath local_30;
  code *local_20;
  undefined1 *local_18;
  
  pFVar4 = FObjectPropertyBase::StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pFVar4);
  if (!bVar2) {
    pUVar5 = Z_Construct_UClass_UObjectPropertyBase_NoRegister();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pUVar5);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferencingProperty.IsA<FObjectPropertyBase>() || ReferencingProperty.IsA<UObjectPropertyBase>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  local_40 = *(ulonglong *)param_1.Container;
  if ((((local_40 & 1) != 0) && ((UObject *)(local_40 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(local_40 & 0xfffffffffffffffe));
  }
  FPlaceholderValuePropertyPath::FPlaceholderValuePropertyPath(&local_30,(FFieldVariant)&local_40);
  pUVar6 = FLinkerPlaceholderObjectImpl::FindPlaceholderContainer(&local_30);
  if (pUVar6 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_58.PropertyChain._4_8_ = 0;
    local_38 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&local_58.PropertyChain.AllocatorInstance.Data + 4),
               (FObjectPtr)&local_38);
    pTVar7 = TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
                         *)&this->ReferencingContainers,
                        local_58.PropertyChain.ArrayNum ^
                        local_58.PropertyChain.AllocatorInstance.Data._4_4_,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)
                        ((longlong)&local_58.PropertyChain.AllocatorInstance.Data + 4));
    TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
    ::Emplace<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath_const_&>
              (pTVar7,(FPlaceholderValuePropertyPath *)&stack0x00000020,(bool *)&local_30);
    bVar2 = true;
    goto LAB_1420a9bf3;
  }
  local_18 = local_res10;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar8 + 5) < 1) {
    local_48 = (void *)0x0;
LAB_1420a9bed:
    bVar2 = local_48 == (void *)0x0;
  }
  else {
    local_48 = *(void **)pFVar8[4];
    bVar2 = local_48 == (void *)0x0;
    if (!bVar2) {
      uVar9 = ((uint)((ulonglong)local_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_48 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      pTVar7 = TMapBase<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
               ::FindOrAddImpl<void_*_const_&>
                         ((TMapBase<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
                           *)&this->ReferencingRawContainers,uVar9 >> 0x10 ^ uVar9,&local_48);
      TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
      ::Emplace<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath_const_&>
                (pTVar7,&local_58,(bool *)&local_30);
      goto LAB_1420a9bed;
    }
  }
  bVar2 = !bVar2;
LAB_1420a9bf3:
  if (local_30.PropertyChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.PropertyChain.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPlaceholderAsUObject @ 1420c8510

UObject * __thiscall FLinkerPlaceholderBase::GetPlaceholderAsUObject(FLinkerPlaceholderBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.h"
             ,0xa9,L"Pure virtual not implemented (%s)");
  return (UObject *)0x0;
}

// HasBeenFullyResolved @ 1420c8c60

bool __thiscall FLinkerPlaceholderBase::HasBeenFullyResolved(FLinkerPlaceholderBase *this)

{
  char cVar1;
  
  if (this->bResolveWasInvoked != false) {
    cVar1 = (**(code **)(this->_padding_ + 8))();
    if (cVar1 == '\0') {
      return true;
    }
  }
  return false;
}

// HasKnownReferences @ 1420c8cd0

bool __thiscall FLinkerPlaceholderBase::HasKnownReferences(FLinkerPlaceholderBase *this)

{
  if ((*(int *)&(this->ReferencingContainers).field_0x8 -
       *(int *)&(this->ReferencingContainers).field_0x34 < 1) &&
     (*(int *)&(this->ReferencingRawContainers).field_0x8 -
      *(int *)&(this->ReferencingRawContainers).field_0x34 < 1)) {
    return false;
  }
  return true;
}

// IsMarkedResolved @ 1420c98f0

bool __thiscall FLinkerPlaceholderBase::IsMarkedResolved(FLinkerPlaceholderBase *this)

{
  return this->bResolveWasInvoked;
}

// MarkAsResolved @ 1420ca5a0

void __thiscall FLinkerPlaceholderBase::MarkAsResolved(FLinkerPlaceholderBase *this)

{
  this->bResolveWasInvoked = true;
  return;
}

// ResolveAllPlaceholderReferences @ 1420d43f0

int __thiscall
FLinkerPlaceholderBase::ResolveAllPlaceholderReferences
          (FLinkerPlaceholderBase *this,UObject *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = ResolvePlaceholderPropertyValues(this,param_1);
  bVar3 = 1 < *(int *)&(this->ReferencingContainers).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->ReferencingContainers);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ReferencingContainers,0,
                    *(int *)&(this->ReferencingContainers).field_0x8);
  puVar1 = &(this->ReferencingContainers).field_0xc;
  *(undefined4 *)&(this->ReferencingContainers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->ReferencingContainers,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ReferencingContainers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencingContainers).field_0x34 = 0;
  iVar2 = *(int *)&(this->ReferencingContainers).field_0x2c;
  *(undefined4 *)&(this->ReferencingContainers).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ReferencingContainers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingContainers).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ReferencingContainers).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&this->ReferencingContainers);
  }
  bVar3 = 1 < *(int *)&(this->ReferencingRawContainers).field_0x48;
  if (!bVar3) {
    TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->ReferencingRawContainers);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ReferencingRawContainers,0,
                    *(int *)&(this->ReferencingRawContainers).field_0x8);
  puVar1 = &(this->ReferencingRawContainers).field_0xc;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->ReferencingRawContainers,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x34 = 0;
  iVar2 = *(int *)&(this->ReferencingRawContainers).field_0x2c;
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ReferencingRawContainers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingRawContainers).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ReferencingRawContainers).field_0x48 = 1;
    TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&this->ReferencingRawContainers);
  }
  this->bResolveWasInvoked = true;
  return iVar4;
}

// ResolvePlaceholderPropertyValues @ 1420d45f0

int __thiscall
FLinkerPlaceholderBase::ResolvePlaceholderPropertyValues
          (FLinkerPlaceholderBase *this,UObject *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr *pFVar2;
  TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar3;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  void *pvVar6;
  code *pcVar7;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar8;
  TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  UObject *pUVar13;
  uchar *puVar14;
  UObject *pUVar15;
  FWeakObjectPtr FVar16;
  undefined1 *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  int iVar20;
  FWeakObjectPtr *pFVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_228;
  undefined1 local_227 [3];
  uint local_224;
  int local_220;
  FWeakObjectPtr *local_218;
  int iStack_210;
  uint uStack_20c;
  FWeakObjectPtr local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  FWeakObjectPtr local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  FWeakObjectPtr *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  int local_54;
  
  iVar11 = *(int *)&(this->ReferencingContainers).field_0x28;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingContainers).field_0x10;
  iStack_1b8 = 0;
  local_220 = 0;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&this->ReferencingContainers;
  local_1a0 = 0;
  uStack_1b4 = 1;
  iStack_1a4 = 0;
  if (iVar11 != 0) {
    puVar25 = *(uint **)&(this->ReferencingContainers).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar26;
    }
    uVar24 = *puVar25;
    while (uVar24 == 0) {
      lVar12 = (longlong)iStack_1b8;
      local_1a0 = local_1a0 + 0x20;
      iStack_1b8 = iStack_1b8 + 1;
      iStack_1a4 = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_1b8) goto LAB_1420d46ad;
      uVar24 = puVar25[lVar12 + 1];
    }
    uStack_1b4 = -uVar24 & uVar24;
    uVar5 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_190 = (int)lVar12;
    iStack_1a4 = local_190 + -1 + local_1a0;
    if (iVar11 < iStack_1a4) {
      iStack_1a4 = iVar11;
    }
  }
LAB_1420d46ad:
  iStack_198 = *(int *)&(this->ReferencingContainers).field_0x8 -
               *(int *)&(this->ReferencingContainers).field_0x34;
  uVar24 = *(uint *)&(this->ReferencingContainers).field_0x28;
  uVar23 = uVar24 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
  uStack_1a8 = 0xffffffff;
  TStack_138.CurrentBitIndex = iStack_1a4;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar24 >> 5;
  TStack_138._28_4_ = local_94;
  TStack_138.BaseBitIndex = local_1a0;
  uStack_118 = CONCAT44(uStack_194,iStack_198);
  local_224 = uVar24;
  local_1e8 = pTVar26;
  local_1e0 = pTVar18;
  local_1c0 = (TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
               *)pTVar18;
  local_1b0 = (undefined1 *)pTVar26;
  local_140 = (TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
               *)pTVar18;
  TStack_138.Array = pTVar26;
  if ((((int)uVar24 < 0) || (iVar11 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  uVar19 = *(uint *)&(this->ReferencingContainers).field_0x28;
  if (uVar24 != uVar19) {
    puVar17 = *(undefined1 **)&(this->ReferencingContainers).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar26;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar12 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar19;
      local_224 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar20)
      goto LAB_1420d47c0;
      uVar24 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_18c = (int)lVar12;
    uVar24 = local_18c + -1 + uVar23;
    local_224 = uVar24;
    if ((int)uVar19 < (int)uVar24) {
      uVar24 = uVar19;
      local_224 = uVar19;
    }
  }
LAB_1420d47c0:
  while( true ) {
    pTVar8 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_138.CurrentBitIndex == uVar24) && (TStack_138.Array == pTVar26)) &&
       (pTVar8 == (TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
                   *)pTVar18)) break;
    pFVar21 = (FWeakObjectPtr *)(*(longlong *)pTVar8 + (longlong)TStack_138.CurrentBitIndex * 0x60);
    local_1d8 = *pFVar21;
    bVar10 = FWeakObjectPtr::IsValid(&local_1d8);
    if (bVar10) {
      pUVar13 = FWeakObjectPtr::Get(&local_1d8);
      iVar11 = pFVar21[6].ObjectIndex;
      FVar1 = (FWeakObjectPtr)(pFVar21 + 3);
      iStack_210 = 0;
      pFVar2 = pFVar21 + 1;
      local_1f8 = 0;
      uStack_20c = 1;
      iStack_1fc = 0;
      if (iVar11 != 0) {
        FVar16 = FVar1;
        if (pFVar21[5] != (FWeakObjectPtr)0x0) {
          FVar16 = pFVar21[5];
        }
        uVar24 = *(uint *)FVar16;
        while (uVar24 == 0) {
          lVar12 = (longlong)iStack_210;
          local_1f8 = local_1f8 + 0x20;
          iStack_210 = iStack_210 + 1;
          iStack_1fc = iVar11;
          if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_210)
          goto LAB_1420d48ae;
          uVar24 = ((int *)((longlong)FVar16 + 4))[lVar12];
        }
        uStack_20c = -uVar24 & uVar24;
        uVar5 = (ulonglong)uStack_20c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_188 = (int)lVar12;
        iStack_1fc = local_1f8 + -1 + local_188;
        if (iVar11 < iStack_1fc) {
          iStack_1fc = iVar11;
        }
      }
LAB_1420d48ae:
      uVar23 = pFVar21[6].ObjectIndex;
      iStack_1f4 = local_74;
      iStack_1f0 = pFVar21[2].ObjectIndex - pFVar21[7].ObjectSerialNumber;
      uVar24 = uVar23 & 0xffffffe0;
      TStack_168._padding_ = CONCAT44(uStack_20c,iStack_210);
      uStack_200 = 0xffffffff;
      TStack_168.CurrentBitIndex = iStack_1fc;
      TStack_168.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar23 >> 5;
      TStack_168._28_4_ = local_74;
      TStack_168.BaseBitIndex = local_1f8;
      uStack_148 = CONCAT44(uStack_1ec,iStack_1f0);
      local_218 = pFVar2;
      local_208 = FVar1;
      local_170 = pFVar2;
      TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
      if ((((int)uVar23 < 0) || (iVar11 < (int)uVar23)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      uVar19 = pFVar21[6].ObjectIndex;
      if (uVar23 != uVar19) {
        FVar16 = FVar1;
        if (pFVar21[5] != (FWeakObjectPtr)0x0) {
          FVar16 = pFVar21[5];
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar12 = (longlong)iVar20;
          uVar24 = uVar24 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar19;
          if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar20)
          goto LAB_1420d49c0;
          uVar23 = ((int *)((longlong)FVar16 + 4))[lVar12];
        }
        uVar5 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_184 = (int)lVar12;
        uVar23 = local_184 + -1 + uVar24;
        if ((int)uVar19 < (int)uVar23) {
          uVar23 = uVar19;
        }
      }
LAB_1420d49c0:
      do {
        pFVar21 = local_170;
        if (local_170[1].ObjectIndex - local_170[6].ObjectSerialNumber != (int)uStack_148) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_168.CurrentBitIndex == uVar23) && ((FWeakObjectPtr)TStack_168.Array == FVar1))
           && (pTVar18 = local_1e0, pTVar26 = local_1e8, uVar24 = local_224, pFVar21 == pFVar2))
        break;
        FVar16 = *pFVar21;
        iVar11 = *(int *)((longlong)FVar16 + 8 + (longlong)TStack_168.CurrentBitIndex * 0x18);
        pTVar4 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)
                 ((longlong)FVar16 + (longlong)TStack_168.CurrentBitIndex * 0x18);
        uVar19 = iVar11 - 1;
        uVar24 = 0;
        if ((int)uVar19 < iVar11) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          iVar11 = (*pcVar7)();
          return iVar11;
        }
        uVar5 = *(ulonglong *)
                 ((pTVar4->AllocatorInstance).Data + (longlong)pTVar4->ArrayNum * 8 + -8);
        if ((((uVar5 & 1) == 0) || ((UObject *)(uVar5 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
           (UE::GC::GIsIncrementalReachabilityPending == false)) {
          local_1d0 = uVar5;
          if ((uVar5 & 1) != 0) goto LAB_1420d4a96;
        }
        else {
          UE::GC::MarkAsReachable((UObject *)(uVar5 & 0xfffffffffffffffe));
LAB_1420d4a96:
          local_1d0 = uVar5;
          if (((UObject *)(uVar5 & 0xfffffffffffffffe) != (UObject *)0x0) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)(uVar5 & 0xfffffffffffffffe));
          }
        }
        puVar14 = ResolvePropertyAddress((FFieldVariant)&local_1d0,pUVar13);
        pUVar15 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
        iVar11 = FLinkerPlaceholderObjectImpl::ResolvePlaceholderValues
                           (pTVar4,pTVar4->ArrayNum + -1,puVar14,pUVar15,param_1);
        local_220 = local_220 + iVar11;
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      } while( true );
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  iStack_210 = 0;
  local_1f8 = 0;
  uStack_20c = 1;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingRawContainers).field_0x10;
  iVar11 = *(int *)&(this->ReferencingRawContainers).field_0x28;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&this->ReferencingRawContainers;
  iStack_1fc = 0;
  if (iVar11 != 0) {
    puVar25 = *(uint **)&(this->ReferencingRawContainers).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar26;
    }
    uVar24 = *puVar25;
    while (uVar24 == 0) {
      lVar12 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_210) goto LAB_1420d4bbd;
      uVar24 = puVar25[lVar12 + 1];
    }
    uStack_20c = -uVar24 & uVar24;
    uVar5 = (ulonglong)uStack_20c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_180 = (int)lVar12;
    iStack_1fc = local_1f8 + -1 + local_180;
    if (iVar11 < iStack_1fc) {
      iStack_1fc = iVar11;
    }
  }
LAB_1420d4bbd:
  iStack_1f4 = local_54;
  iStack_1f0 = *(int *)&(this->ReferencingRawContainers).field_0x8 -
               *(int *)&(this->ReferencingRawContainers).field_0x34;
  uVar24 = *(uint *)&(this->ReferencingRawContainers).field_0x28;
  uVar23 = uVar24 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uStack_20c,iStack_210);
  uStack_200 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_1fc;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar24 >> 5;
  TStack_d8._28_4_ = local_54;
  TStack_d8.BaseBitIndex = local_1f8;
  uStack_b8 = CONCAT44(uStack_1ec,iStack_1f0);
  local_224 = uVar24;
  local_218 = (FWeakObjectPtr *)pTVar18;
  local_208 = (FWeakObjectPtr)pTVar26;
  local_1e8 = pTVar18;
  local_1e0 = pTVar26;
  local_e0 = (TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
              *)pTVar18;
  TStack_d8.Array = pTVar26;
  if ((((int)uVar24 < 0) || (iVar11 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  uVar19 = *(uint *)&(this->ReferencingRawContainers).field_0x28;
  if (uVar24 != uVar19) {
    puVar17 = *(undefined1 **)&(this->ReferencingRawContainers).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar26;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar12 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar19;
      local_224 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar20)
      goto LAB_1420d4ce0;
      uVar24 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_17c = (int)lVar12;
    uVar24 = (uVar23 - 1) + local_17c;
    local_224 = uVar24;
    if ((int)uVar19 < (int)uVar24) {
      uVar24 = uVar19;
      local_224 = uVar19;
    }
  }
LAB_1420d4ce0:
  pTVar3 = local_e0;
  if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
    local_228 = 0;
    `TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_228);
  }
  if (((TStack_d8.CurrentBitIndex == uVar24) && (TStack_d8.Array == pTVar26)) &&
     (pTVar3 == (TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
                 *)pTVar18)) {
    return local_220;
  }
  puVar22 = (undefined8 *)(*(longlong *)pTVar3 + (longlong)TStack_d8.CurrentBitIndex * 0x60);
  pvVar6 = (void *)*puVar22;
  if ((pvVar6 == (void *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawValue",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                          ,0x245,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  iVar11 = *(int *)(puVar22 + 6);
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar22 + 3);
  iStack_210 = 0;
  pTVar3 = (TMap<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>_>
            *)(puVar22 + 1);
  local_1f8 = 0;
  uStack_20c = 1;
  iStack_1fc = 0;
  if (iVar11 != 0) {
    pTVar18 = pTVar26;
    if ((TBitArray<FDefaultBitArrayAllocator> *)puVar22[5] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)puVar22[5];
    }
    uVar24 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar24 == 0) {
      lVar12 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_210) goto LAB_1420d4dde;
      uVar24 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStack_20c = -uVar24 & uVar24;
    uVar5 = (ulonglong)uStack_20c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (int)lVar12;
    iStack_1fc = local_1f8 + -1 + local_178;
    if (iVar11 < iStack_1fc) {
      iStack_1fc = iVar11;
    }
  }
LAB_1420d4dde:
  uVar24 = *(uint *)(puVar22 + 6);
  iStack_1f4 = iStack_1a4;
  iStack_1f0 = *(int *)(puVar22 + 2) - *(int *)((longlong)puVar22 + 0x3c);
  uVar23 = uVar24 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_20c,iStack_210);
  uStack_200 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_1fc;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar24 >> 5;
  TStack_108._28_4_ = iStack_1a4;
  TStack_108.BaseBitIndex = local_1f8;
  uStack_e8 = CONCAT44(uStack_1ec,iStack_1f0);
  local_218 = (FWeakObjectPtr *)pTVar3;
  local_208 = (FWeakObjectPtr)pTVar26;
  local_110 = pTVar3;
  TStack_108.Array = pTVar26;
  if ((((int)uVar24 < 0) || (iVar11 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  uVar19 = *(uint *)(puVar22 + 6);
  if (uVar24 != uVar19) {
    pTVar18 = pTVar26;
    if ((TBitArray<FDefaultBitArrayAllocator> *)puVar22[5] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)puVar22[5];
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar12 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar20)
      goto LAB_1420d4ef0;
      uVar24 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_174 = (int)lVar12;
    uVar24 = (uVar23 - 1) + local_174;
    if ((int)uVar19 < (int)uVar24) {
      uVar24 = uVar19;
    }
  }
LAB_1420d4ef0:
  do {
    pTVar9 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_227[0] = 0;
      `TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
    }
    if (((TStack_108.CurrentBitIndex == uVar24) && (TStack_108.Array == pTVar26)) &&
       (pTVar9 == pTVar3)) break;
    lVar12 = *(longlong *)pTVar9;
    iVar11 = *(int *)(lVar12 + 8 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    pTVar4 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)
             (lVar12 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    uVar19 = iVar11 - 1;
    uVar23 = 0;
    if ((int)uVar19 < iVar11) {
      uVar23 = ~uVar19 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      iVar11 = (*pcVar7)();
      return iVar11;
    }
    uVar5 = *(ulonglong *)((pTVar4->AllocatorInstance).Data + (longlong)pTVar4->ArrayNum * 8 + -8);
    if ((((uVar5 & 1) == 0) || ((UObject *)(uVar5 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      local_1c8 = uVar5;
      if ((uVar5 & 1) != 0) goto LAB_1420d4fc2;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar5 & 0xfffffffffffffffe));
LAB_1420d4fc2:
      local_1c8 = uVar5;
      if (((UObject *)(uVar5 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)(uVar5 & 0xfffffffffffffffe));
      }
    }
    puVar14 = ResolvePropertyAddress((FFieldVariant)&local_1c8,pvVar6);
    pUVar13 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
    iVar11 = FLinkerPlaceholderObjectImpl::ResolvePlaceholderValues
                       (pTVar4,pTVar4->ArrayNum + -1,puVar14,pUVar13,param_1);
    local_220 = local_220 + iVar11;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  } while( true );
  TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  pTVar18 = local_1e8;
  pTVar26 = local_1e0;
  uVar24 = local_224;
  goto LAB_1420d4ce0;
}

// SetupPlaceholderSubobject @ 1420da6b0

void __thiscall
FLinkerPlaceholderBase::SetupPlaceholderSubobject
          (FLinkerPlaceholderBase *this,ULinkerPlaceholderExportObject *param_1)

{
  int *piVar1;
  TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ULinkerPlaceholderExportObject *local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pTVar2 = &this->PlaceholderSubobjects;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar3 + (longlong)(this->PlaceholderSubobjects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PlaceholderSubobjects).ArrayNum;
  piVar1 = &(this->PlaceholderSubobjects).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PlaceholderSubobjects).ArrayNum = iVar6 + 1;
  *(ULinkerPlaceholderExportObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10;
  pUVar7 = (UObject *)(**(code **)(this->_padding_ + 0x18))(this);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar8->_padding_)) {
      *(UObject **)&local_res10->field_0xf0 = pUVar7;
      return;
    }
    pFVar9 = GetTypeName<ULinkerPlaceholderExportObject>(&local_28);
    pwVar10 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_18,pUVar7);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar10,pwVar11);
  }
  pFVar9 = GetTypeName<ULinkerPlaceholderExportObject>(&local_38);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar10);
}

