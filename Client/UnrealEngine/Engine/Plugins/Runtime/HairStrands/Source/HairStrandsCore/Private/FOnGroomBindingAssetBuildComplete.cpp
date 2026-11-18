// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// ExecuteIfBound @ 14dfc0940

bool __thiscall
FOnGroomBindingAssetBuildComplete::ExecuteIfBound
          (FOnGroomBindingAssetBuildComplete *this,UGroomBindingAsset *param_1,
          EGroomBindingAssetBuildResult param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  UFunction *pUVar7;
  UGroomBindingAsset *local_48;
  EGroomBindingAssetBuildResult local_40;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_20);
  if ((*(longlong *)&this->field_0x10 == 0) ||
     (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x10;
    FVar1.Number = *(uint *)&this->field_0x14;
    pUVar7 = UObject::FindFunction(pUVar6,FVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if (pUVar7 != (UFunction *)0x0) {
      local_48 = param_1;
      local_40 = param_2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&local_38);
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x8);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object.IsValid() != false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(longlong *)&this->field_0x10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bc,L"ProcessDelegate() called with no function name set!"), bVar4))
      {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x10;
      FVar2.Number = *(uint *)&this->field_0x14;
      pUVar7 = UObject::FindFunctionChecked(pUVar6,FVar2);
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      (**(code **)(*(longlong *)pUVar6 + 0x260))(pUVar6,pUVar7,&local_48);
      return true;
    }
  }
  return false;
}

