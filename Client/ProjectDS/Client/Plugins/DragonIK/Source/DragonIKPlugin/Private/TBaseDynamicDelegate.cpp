// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// operator() @ 15057a780

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FName,UE::Math::TTransform<double>,float,FHitResult>
::__Internal_BindDynamic<UDragonIKFootStepsComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FName,UE::Math::TTransform<double>,float,FHitResult>::__Internal_BindDynamic<UDragonIKFootStepsComponent>(UDragonIKFootStepsComponent*___ptr64,void_(__cdecl_UDragonIKFootStepsComponent::*)(FName,UE::Math::TTransform<double>,float,FHitResult)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057a7e7;
    }
  }
  bVar2 = false;
LAB_15057a7e7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057a820

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_>_const_&>
::__Internal_BindDynamic<UDragonIKTraceManagerComponent>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8910059622925073288>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8910059622925073288>,
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_>_const&___ptr64>::__Internal_BindDynamic<UDragonIKTraceManagerComponent>(UDragonIKTraceManagerComponent*___ptr64,void_(__cdecl_UDragonIKTraceManagerComponent::*)(TArray<FDragonIKTraceKeyValuePair,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057a887;
    }
  }
  bVar2 = false;
LAB_15057a887:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

