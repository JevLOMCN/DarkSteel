// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// GetEmbeddedToNativeParamsDelegateForSubsystem @ 1418df150

TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy> *
__cdecl FEmbeddedDelegates::GetEmbeddedToNativeParamsDelegateForSubsystem(FName param_1)

{
  uint uVar1;
  TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pTVar2 = TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
                       *)&EmbeddedToNativeDelegateMap,uVar1 + param_1.Number,local_res8);
  return pTVar2;
}

// GetNamedObject @ 1418dfc70

void * __cdecl FEmbeddedDelegates::GetNamedObject(FString *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *pwVar5;
  void *pvVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NamedObjectRegistryLock);
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pvVar6 = (void *)0x0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar2 = TSet<TTuple<FString,void_*>,TDefaultMapHashableKeyFuncs<FString,void_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,void_*>,TDefaultMapHashableKeyFuncs<FString,void_*,0>,FDefaultSetAllocator>
                      *)&NamedObjectRegistry,uVar1,param_1);
  if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x20 + NamedObjectRegistry._0_8_, lVar3 != 0)) {
    pvVar6 = *(void **)(lVar3 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&NamedObjectRegistryLock);
  return pvVar6;
}

// GetNativeToEmbeddedParamsDelegateForSubsystem @ 1418dfd00

TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy> *
__cdecl FEmbeddedDelegates::GetNativeToEmbeddedParamsDelegateForSubsystem(FName param_1)

{
  uint uVar1;
  TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pTVar2 = TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
                       *)&NativeToEmbeddedDelegateMap,uVar1 + param_1.Number,local_res8);
  return pTVar2;
}

// IsEmbeddedSubsystemAvailable @ 1418e2bd0

bool __cdecl FEmbeddedDelegates::IsEmbeddedSubsystemAvailable(FName param_1)

{
  bool bVar1;
  uint uVar2;
  FName *pFVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  longlong lVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (NativeToEmbeddedDelegateMap._8_4_ != NativeToEmbeddedDelegateMap._52_4_) {
    lVar4 = 0x154b7f798;
    if (NativeToEmbeddedDelegateMap._64_8_ != 0) {
      lVar4 = NativeToEmbeddedDelegateMap._64_8_;
    }
    uVar2 = *(uint *)(lVar4 + (ulonglong)
                              (NativeToEmbeddedDelegateMap._72_4_ - 1 & param_1.Number + uVar2) * 4)
    ;
    while (uVar2 != 0xffffffff) {
      pFVar3 = (FName *)((longlong)(int)uVar2 * 0x30 + NativeToEmbeddedDelegateMap._0_8_);
      if (*pFVar3 == param_1) {
        this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar3 + 1);
        if (pFVar3 == (FName *)0x0) {
          this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0;
        }
        if (this == (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
          return false;
        }
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this);
        if (!bVar1) {
          return false;
        }
        return true;
      }
      uVar2 = pFVar3[5].ComparisonIndex.Value;
    }
  }
  return false;
}

// SetNamedObject @ 1418f8f20

void __cdecl FEmbeddedDelegates::SetNamedObject(FString *param_1,void *param_2)

{
  void *local_res10;
  TPairInitializer<FString_const_&,void_*_const_&> local_res18;
  FString *local_18;
  void **local_10;
  
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&NamedObjectRegistryLock);
  local_10 = &local_res10;
  local_18 = param_1;
  TSet<TTuple<FString,void_*>,TDefaultMapHashableKeyFuncs<FString,void_*,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,void_*_const_&>_>
            ((TSet<TTuple<FString,void_*>,TDefaultMapHashableKeyFuncs<FString,void_*,0>,FDefaultSetAllocator>
              *)&NamedObjectRegistry,&local_res18,(bool *)&local_18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&NamedObjectRegistryLock);
  return;
}

