// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// RegisterModifier @ 14965ef50

void __thiscall
FInputBehaviorModifierStates::RegisterModifier
          (FInputBehaviorModifierStates *this,int param_1,
          TFunction<bool___cdecl(FInputDeviceState_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&>
  local_res8;
  TFunction<bool___cdecl(FInputDeviceState_const_&)> **local_18;
  TFunction<bool___cdecl(FInputDeviceState_const_&)> *local_10;
  
  pFVar6 = (this->ModifierIDs).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)(this->ModifierIDs).ArrayNum * 4;
  do {
    local_res8.Value._0_4_ = param_1;
    if (pFVar6 == pFVar2) {
LAB_14965efad:
      pFVar2 = (this->ModifierIDs).AllocatorInstance.Data;
      if (((pFVar2 <= &local_res8.Value) &&
          (&local_res8.Value < pFVar2 + (longlong)(this->ModifierIDs).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->ModifierIDs).ArrayNum;
      piVar1 = &(this->ModifierIDs).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      (this->ModifierIDs).ArrayNum = iVar5 + 1;
      *(int *)((this->ModifierIDs).AllocatorInstance.Data + (longlong)iVar5 * 4) =
           (int)local_res8.Value;
      local_18 = &local_res8.Value;
      local_10 = param_2;
      TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&>_>
                ((TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
                  *)&this->ModifierTests,&local_res8,(bool *)&local_18);
      return;
    }
    if (*(int *)pFVar6 == param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModifierIDs.Contains(ModifierID) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseBehaviors\\InputBehaviorModifierStates.h"
                         ,0x26,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14965efad;
    }
    pFVar6 = pFVar6 + 4;
  } while( true );
}

// UpdateModifiers @ 149666e50

void __thiscall
FInputBehaviorModifierStates::UpdateModifiers
          (FInputBehaviorModifierStates *this,FInputDeviceState *param_1,
          IModifierToggleBehaviorTarget *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  TFunction<bool___cdecl(FInputDeviceState_const_&)> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FInputDeviceState *local_res10;
  
  pFVar9 = (this->ModifierIDs).AllocatorInstance.Data;
  iVar2 = (this->ModifierIDs).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 4;
  local_res10 = param_1;
  while( true ) {
    if ((this->ModifierIDs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    iVar3 = *(int *)pFVar9;
    pTVar6 = TMapBase<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>_>
             ::FindChecked((TMapBase<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>_>
                            *)&this->ModifierTests,iVar3);
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
    pcVar4 = *(code **)pTVar6;
    plVar8 = *(longlong **)&pTVar6->field_0x28;
    if (*(longlong **)&pTVar6->field_0x28 == (longlong *)0x0) {
      plVar8 = (longlong *)&pTVar6->field_0x10;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    uVar5 = (*pcVar4)(uVar7,local_res10);
    (**(code **)((longlong)*param_2 + 8))(param_2,iVar3,uVar5);
    pFVar9 = pFVar9 + 4;
  }
  return;
}

