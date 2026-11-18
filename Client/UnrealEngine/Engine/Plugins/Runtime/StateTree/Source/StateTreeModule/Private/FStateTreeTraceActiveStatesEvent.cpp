// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// FStateTreeTraceActiveStatesEvent @ 14d4b1dd0

FStateTreeTraceActiveStatesEvent * __thiscall
FStateTreeTraceActiveStatesEvent::FStateTreeTraceActiveStatesEvent
          (FStateTreeTraceActiveStatesEvent *this,FStateTreeTraceActiveStatesEvent *param_1)

{
  FStateTreeTraceActiveStates *pFVar1;
  int *piVar2;
  int iVar3;
  FAssetActiveStates *pFVar4;
  longlong lVar5;
  
  lVar5 = param_1->_padding_;
  pFVar1 = &this->ActiveStates;
  piVar2 = &(this->ActiveStates).PerAssetStates.ArrayMax;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  (pFVar1->PerAssetStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ActiveStates).PerAssetStates.ArrayNum;
  pFVar4 = (FAssetActiveStates *)(param_1->ActiveStates).PerAssetStates.AllocatorInstance.Data;
  (this->ActiveStates).PerAssetStates.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    ConstructItems<FStateTreeTraceActiveStates::FAssetActiveStates,FStateTreeTraceActiveStates::FAssetActiveStates,int>
              ((pFVar1->PerAssetStates).AllocatorInstance.Data,pFVar4,iVar3);
  }
  return this;
}

// FStateTreeTraceActiveStatesEvent @ 14d4b1e60

FStateTreeTraceActiveStatesEvent * __thiscall
FStateTreeTraceActiveStatesEvent::FStateTreeTraceActiveStatesEvent
          (FStateTreeTraceActiveStatesEvent *this,double param_1)

{
  this->_padding_ = (longlong)param_1;
  (this->ActiveStates).PerAssetStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStates).PerAssetStates.ArrayNum = 0;
  (this->ActiveStates).PerAssetStates.ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// GetTypeString @ 14d4c02e0

FString * __thiscall
FStateTreeTraceActiveStatesEvent::GetTypeString
          (FStateTreeTraceActiveStatesEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"New active states");
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0810

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceActiveStatesEvent::GetValueString
          (FStateTreeTraceActiveStatesEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  FWeakObjectPtr FVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UStateTree *pUVar6;
  FString *pFVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  FWeakObjectPtr FVar10;
  ulonglong uVar11;
  FCompactStateTreeState *pFVar12;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar13;
  uint local_res20 [2];
  undefined1 local_88 [4];
  uint local_84;
  FWeakObjectPtr *local_80;
  FWeakObjectPtr *local_78;
  FString local_70;
  TStringBuilderBase<wchar_t> local_60;
  
  bVar9 = false;
  local_res20[0] = 0;
  this_00 = (FWeakObjectPtr *)(this->ActiveStates).PerAssetStates.AllocatorInstance.Data;
  local_84 = (this->ActiveStates).PerAssetStates.ArrayNum;
  uVar11 = (ulonglong)(int)local_84;
  local_60.Base = (wchar_t *)0x0;
  local_60.CurPos = (wchar_t *)0x0;
  local_60.End = (wchar_t *)0x0;
  local_60.bIsDynamic = false;
  local_60.bIsExternal = false;
  pFVar13 = this_00 + 2;
  pFVar8 = this_00 + uVar11 * 3;
  local_78 = pFVar8;
  while( true ) {
    local_80 = this_00;
    if ((this->ActiveStates).PerAssetStates.ArrayNum != (int)uVar11) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<FStateTreeTraceActiveStates::FAssetActiveStates_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (this_00 == pFVar8) break;
    pUVar6 = (UStateTree *)FWeakObjectPtr::Get(this_00);
    if (pUVar6 != (UStateTree *)0x0) {
      FVar10 = pFVar13[-1];
      iVar3 = pFVar13->ObjectIndex;
      FVar1 = (FWeakObjectPtr)((longlong)FVar10 + (longlong)iVar3 * 2);
      while( true ) {
        if (pFVar13->ObjectIndex != iVar3) {
          local_88[0] = 0;
          `TCheckedPointerIterator<FStateTreeStateHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        pFVar8 = local_78;
        this_00 = local_80;
        if (FVar10 == FVar1) break;
        uVar2 = *(ushort *)FVar10;
        if ((int)(uint)uVar2 < (pUVar6->States).ArrayNum) {
          if (((pUVar6->States).ArrayNum <= (int)(uint)uVar2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar4)();
            return pFVar7;
          }
          pFVar12 = (FCompactStateTreeState *)
                    ((pUVar6->States).AllocatorInstance.Data + (ulonglong)uVar2 * 0x78);
          if (pFVar12 != (FCompactStateTreeState *)0x0) {
            bVar9 = true;
            UE::StateTreeTrace::GetStateName(&local_70,pUVar6,pFVar12);
          }
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_60,L"%s%s");
        if ((bVar9) &&
           (bVar9 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        FVar10 = (FWeakObjectPtr)((longlong)FVar10 + 2);
      }
    }
    this_00 = this_00 + 3;
    uVar11 = (ulonglong)local_84;
    pFVar13 = pFVar13 + 3;
  }
  if (local_60.End < local_60.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_60,1);
  }
  *local_60.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_60.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_60);
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d19a0

FString * __thiscall
FStateTreeTraceActiveStatesEvent::ToFullString
          (FStateTreeTraceActiveStatesEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  FString local_28;
  FString local_18;
  
  if ((this->ActiveStates).PerAssetStates.ArrayNum < 1) {
    ::FString::FString(__return_storage_ptr__,L"No active states");
  }
  else {
    GetValueString(this,&local_18,param_1);
    ::FString::FString(&local_28,L"New active states");
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

