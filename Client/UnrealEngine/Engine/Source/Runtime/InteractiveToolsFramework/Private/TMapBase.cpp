// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// FindChecked @ 1496521f0

TFunction<bool___cdecl(FInputDeviceState_const_&)> * __thiscall
TMapBase<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>_>
::FindChecked(TMapBase<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TFunction<bool___cdecl(FInputDeviceState_const_&)> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)(piVar5 + 4);
          }
          break;
        }
        iVar3 = piVar5[0x10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1496dc330

TObjectPtr<UInteractiveGizmoBuilder> * __thiscall
TMapBase<FString,TObjectPtr<UInteractiveGizmoBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>_>
::FindChecked(TMapBase<FString,TObjectPtr<UInteractiveGizmoBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UInteractiveGizmoBuilder> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UInteractiveGizmoBuilder> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UInteractiveGizmoBuilder> *)(lVar8 + 0x10);
}

// FindChecked @ 1496dc3d0

TObjectPtr<UInteractiveToolBuilder> * __thiscall
TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
::FindChecked(TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UInteractiveToolBuilder> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UInteractiveToolBuilder> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UInteractiveToolBuilder> *)(lVar8 + 0x10);
}

// FindChecked @ 1496dc470

TObjectPtr<UInteractiveToolPropertySet> * __thiscall
TMapBase<FString,TObjectPtr<UInteractiveToolPropertySet>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>_>
::FindChecked(TMapBase<FString,TObjectPtr<UInteractiveToolPropertySet>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UInteractiveToolPropertySet> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UInteractiveToolPropertySet> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UInteractiveToolPropertySet> *)(lVar8 + 0x10);
}

