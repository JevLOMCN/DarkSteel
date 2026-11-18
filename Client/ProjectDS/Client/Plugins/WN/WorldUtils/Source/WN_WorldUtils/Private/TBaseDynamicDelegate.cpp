// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 4

// operator() @ 150549fd0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int>
::__Internal_BindDynamic<AWN_PhasingVolume>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int>::__Internal_BindDynamic<AWN_PhasingVolume>(AWN_PhasingVolume*___ptr64,void_(__cdecl_AWN_PhasingVolume::*)(UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054a037;
    }
  }
  bVar2 = false;
LAB_15054a037:
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

// operator() @ 15054a070

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
::__Internal_BindDynamic<AWN_PhasingVolume>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int,bool,FHitResult_const&___ptr64>::__Internal_BindDynamic<AWN_PhasingVolume>(AWN_PhasingVolume*___ptr64,void_(__cdecl_AWN_PhasingVolume::*)(UPrimitiveComponent*___ptr64,AActor*___ptr64,UPrimitiveComponent*___ptr64,int,bool,FHitResult_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054a0d7;
    }
  }
  bVar2 = false;
LAB_15054a0d7:
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

// operator() @ 15054a110

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,EWN_VolumeObserverMode,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const&___ptr64>::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>(UWN_WorldUtils_Subsystem*___ptr64,void_(__cdecl_UWN_WorldUtils_Subsystem::*)(EWN_VolumeObserverMode,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054a177;
    }
  }
  bVar2 = false;
LAB_15054a177:
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

// operator() @ 15054a1b0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,EWN_VolumeObserverMode,UE::Math::TVector<double>,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const&___ptr64>::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>(UWN_WorldUtils_Subsystem*___ptr64,void_(__cdecl_UWN_WorldUtils_Subsystem::*)(EWN_VolumeObserverMode,UE::Math::TVector<double>,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054a217;
    }
  }
  bVar2 = false;
LAB_15054a217:
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

