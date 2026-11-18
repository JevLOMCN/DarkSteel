// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14750ddb0

UScriptStruct * __cdecl FAnimSubsystem_Tag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_Tag,(UObject *)pUVar1,
                         L"AnimSubsystem_Tag");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.OuterSingleton;
}

// OnPostLoadDefaults @ 14750ddf0

void __thiscall
FAnimSubsystem_Tag::OnPostLoadDefaults
          (FAnimSubsystem_Tag *this,FAnimSubsystemPostLoadDefaultsContext *param_1)

{
  IAnimClassInterface *pIVar1;
  
  pIVar1 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->DefaultAnimInstance->field_0x10);
  this->AnimClass = pIVar1;
  return;
}

// FindNodeByTag_Internal @ 147554710

FAnimNode_Base * __thiscall
FAnimSubsystem_Tag::FindNodeByTag_Internal
          (FAnimSubsystem_Tag *this,FName param_1,UAnimInstance *param_2,UScriptStruct *param_3)

{
  int iVar1;
  FProperty *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FAnimNode_Base *pFVar5;
  uint *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *(longlong *)&param_2->field_0x10;
  pUVar4 = IAnimClassInterface::GetActualAnimClass(this->AnimClass);
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_147554799;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2441717744186425319>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_Tag.cpp"
                     ,0x19,
                     "InInstance->GetClass()->IsChildOf(IAnimClassInterface::GetActualAnimClass(AnimClass))"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAnimNode_Base *)(*pcVar2)();
    return pFVar5;
  }
LAB_147554799:
  puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->NodeIndices,param_1);
  if (puVar6 != (uint *)0x0) {
    lVar7 = (**(code **)((longlong)*this->AnimClass + 0x20))();
    uVar10 = ~*puVar6 + *(int *)(lVar7 + 8);
    if ((((int)uVar10 < 0) || (*(int *)(lVar7 + 8) <= (int)uVar10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimNodeProperties.IsValidIndex(ReverseIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_Tag.cpp"
                           ,0x21,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    plVar8 = (longlong *)(**(code **)((longlong)*this->AnimClass + 0x20))();
    uVar9 = 0;
    if ((int)uVar10 < (int)plVar8[1]) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    this_00 = *(FProperty **)(*plVar8 + (longlong)(int)uVar10 * 8);
    if (param_3 != (UScriptStruct *)0x0) {
      lVar7 = this_00[1]._padding_;
      iVar1 = (int)param_3->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
          &param_3->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)param_2,0);
        return pFVar5;
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// FindNodeIndexByTag @ 1475548b0

int __thiscall FAnimSubsystem_Tag::FindNodeIndexByTag(FAnimSubsystem_Tag *this,FName param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->NodeIndices,param_1);
  if (piVar1 != (int *)0x0) {
    lVar2 = (**(code **)((longlong)*this->AnimClass + 0x20))();
    return (*(int *)(lVar2 + 8) - *piVar1) + -1;
  }
  return -1;
}

