// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FModularFeatures @ 141589e90

void __thiscall FModularFeatures::~FModularFeatures(FModularFeatures *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModularFeatureUnregisteredEvent).field_0x8,
             *(int *)&(this->ModularFeatureUnregisteredEvent).field_0x10);
  pvVar1 = *(void **)&(this->ModularFeatureUnregisteredEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModularFeatureUnregisteredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModularFeatureRegisteredEvent).field_0x8,
             *(int *)&(this->ModularFeatureRegisteredEvent).field_0x10);
  pvVar1 = *(void **)&(this->ModularFeatureRegisteredEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModularFeatureRegisteredEvent);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ModularFeaturesMapCriticalSection);
  *(undefined4 *)&(this->ModularFeaturesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModularFeaturesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,IModularFeature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,IModularFeature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,IModularFeature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModularFeaturesMap);
  this->_padding_ = (longlong)&___7IModularFeatures__6B_;
  return;
}

// GetModularFeatureImplementation @ 1415c75c0

IModularFeature * __thiscall
FModularFeatures::GetModularFeatureImplementation(FModularFeatures *this,FName param_1,int param_2)

{
  int iVar1;
  TBaseKeyIterator<1> local_20;
  
  iVar1 = 0;
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_20,
             (TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              *)&this->ModularFeaturesMap,param_1);
  do {
    if (local_20.Index == -1) {
      return (IModularFeature *)0x0;
    }
    if (param_2 == iVar1) {
      return *(IModularFeature **)
              (*(longlong *)&(local_20.Set)->Elements + 8 + (longlong)local_20.Index * 0x18);
    }
    iVar1 = iVar1 + 1;
    if (local_20.NextIndex == -1) {
      return (IModularFeature *)0x0;
    }
    local_20.Index = local_20.NextIndex;
    do {
      local_20.NextIndex =
           *(int *)(*(longlong *)&(local_20.Set)->Elements + 0x10 + (longlong)local_20.Index * 0x18)
      ;
      if (*(FName *)(*(longlong *)&(local_20.Set)->Elements + (longlong)local_20.Index * 0x18) ==
          local_20.Key) break;
      local_20.Index = local_20.NextIndex;
    } while (local_20.NextIndex != -1);
  } while( true );
}

// GetModularFeatureImplementationCount @ 1415c7670

int __thiscall
FModularFeatures::GetModularFeatureImplementationCount(FModularFeatures *this,FName param_1)

{
  int iVar1;
  TBaseKeyIterator<1> local_28;
  
  iVar1 = 0;
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_28,
             (TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              *)&this->ModularFeaturesMap,param_1);
  do {
    if ((local_28.Index == -1) || (iVar1 = iVar1 + 1, local_28.NextIndex == -1)) {
      return iVar1;
    }
    local_28.Index = local_28.NextIndex;
    do {
      local_28.NextIndex =
           *(int *)(*(longlong *)&(local_28.Set)->Elements + 0x10 + (longlong)local_28.Index * 0x18)
      ;
      if (*(FName *)(*(longlong *)&(local_28.Set)->Elements + (longlong)local_28.Index * 0x18) ==
          local_28.Key) break;
      local_28.Index = local_28.NextIndex;
    } while (local_28.NextIndex != -1);
  } while( true );
}

// LockModularFeatureList @ 1415d42e0

void __thiscall FModularFeatures::LockModularFeatureList(FModularFeatures *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001415d42e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ModularFeaturesMapCriticalSection);
  return;
}

// OnModularFeatureRegistered @ 1415d5e90

FOnModularFeatureRegistered * __thiscall
FModularFeatures::OnModularFeatureRegistered(FModularFeatures *this)

{
  return (FOnModularFeatureRegistered *)&this->ModularFeatureRegisteredEvent;
}

// OnModularFeatureUnregistered @ 1415d5ea0

FOnModularFeatureUnregistered * __thiscall
FModularFeatures::OnModularFeatureUnregistered(FModularFeatures *this)

{
  return (FOnModularFeatureUnregistered *)&this->ModularFeatureUnregisteredEvent;
}

// RegisterModularFeature @ 1415db520

void __thiscall
FModularFeatures::RegisterModularFeature
          (FModularFeatures *this,FName param_1,IModularFeature *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName local_res10;
  IModularFeature *local_res18 [2];
  
  lpCriticalSection = &this->ModularFeaturesMapCriticalSection;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
  ::EmplaceUnique<FName_const_&,IModularFeature_*_const_&>
            (&this->ModularFeaturesMap,&local_res10,local_res18);
  TMulticastDelegate<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *)&this->ModularFeatureRegisteredEvent,&local_res10,local_res18[0]);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UnlockModularFeatureList @ 141609980

void __thiscall FModularFeatures::UnlockModularFeatureList(FModularFeatures *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141609984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ModularFeaturesMapCriticalSection);
  return;
}

// UnregisterModularFeature @ 141609b20

void __thiscall
FModularFeatures::UnregisterModularFeature
          (FModularFeatures *this,FName param_1,IModularFeature *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName local_res10;
  
  lpCriticalSection = &this->ModularFeaturesMapCriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
  ::RemoveSingle(&this->ModularFeaturesMap,local_res10,param_2);
  TMulticastDelegate<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *)&this->ModularFeatureUnregisteredEvent,&local_res10,param_2);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

