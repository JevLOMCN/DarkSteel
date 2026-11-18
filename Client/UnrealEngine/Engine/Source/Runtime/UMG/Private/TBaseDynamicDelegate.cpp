// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// operator= @ 146a58eb0

TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void> * __thiscall
TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::operator=
          (TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void> *this,
          TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  *(undefined8 *)&this->field_0x8 = uVar1;
  *(undefined8 *)&this->field_0x10 = uVar2;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// operator() @ 1504f62f0

bool __thiscall
`TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
__Internal_BindDynamic<UListView>'::__l2::<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`public:_void___cdecl_TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor*___ptr64,EEndPlayReason::Type>::__Internal_BindDynamic<UListView>(UListView*___ptr64,void_(__cdecl_UListView::*)(AActor*___ptr64,EEndPlayReason::Type)___ptr64,FName)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f6357;
    }
  }
  bVar2 = false;
LAB_1504f6357:
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

