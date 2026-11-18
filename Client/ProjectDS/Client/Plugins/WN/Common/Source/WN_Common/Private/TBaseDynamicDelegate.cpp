// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// operator() @ 150542c10

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode>
::__Internal_BindDynamic<UWN_CommonSubsystem>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent*___ptr64,EWN_VolumeObserverMode>::__Internal_BindDynamic<UWN_CommonSubsystem>(UWN_CommonSubsystem*___ptr64,void_(__cdecl_UWN_CommonSubsystem::*)(UWN_VolumeComponent*___ptr64,EWN_VolumeObserverMode)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150542c77;
    }
  }
  bVar2 = false;
LAB_150542c77:
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

// operator() @ 150542cb0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>_const_&>
::__Internal_BindDynamic<UWN_CommonSubsystem>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent*___ptr64,EWN_VolumeObserverMode,UE::Math::TVector<double>_const&___ptr64>::__Internal_BindDynamic<UWN_CommonSubsystem>(UWN_CommonSubsystem*___ptr64,void_(__cdecl_UWN_CommonSubsystem::*)(UWN_VolumeComponent*___ptr64,EWN_VolumeObserverMode,UE::Math::TVector<double>_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150542d17;
    }
  }
  bVar2 = false;
LAB_150542d17:
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

