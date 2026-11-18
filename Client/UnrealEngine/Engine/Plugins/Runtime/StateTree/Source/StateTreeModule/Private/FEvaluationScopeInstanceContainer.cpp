// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// FEvaluationScopeInstanceContainer @ 14d4e9cb0

FEvaluationScopeInstanceContainer * __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::FEvaluationScopeInstanceContainer
          (FEvaluationScopeInstanceContainer *this,TNotNull<void_*> param_1,
          FEvaluationScopeMemoryRequirement *param_2)

{
  int iVar1;
  
  this->Memory = param_1.Val;
  iVar1 = param_2->Alignment;
  (this->MemoryRequirement).Size = param_2->Size;
  (this->MemoryRequirement).Alignment = iVar1;
  iVar1 = param_2->NumberOfElements;
  (this->MemoryRequirement).NumberOfElements = iVar1;
  this->NumberOfElements = 0;
  this->bStructsHaveDestructor = false;
  *(undefined4 *)((longlong)param_1.Val + (longlong)iVar1 * 0x18) = 0x99aabbcc;
  return this;
}

// ~FEvaluationScopeInstanceContainer @ 14d4ec480

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::~FEvaluationScopeInstanceContainer
          (FEvaluationScopeInstanceContainer *this)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  int iVar8;
  longlong *plVar9;
  
  if (this->Memory != (void *)0x0) {
    if ((*(int *)((longlong)this->Memory +
                 (longlong)(this->MemoryRequirement).NumberOfElements * 0x18) != -0x66554434) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7814911394159001796>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                           ,0xc4,"TableEndTag == Private::DebugTableEndTag"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = 0;
    plVar9 = this->Memory;
    if (0 < this->NumberOfElements) {
      do {
        lVar2 = *plVar9;
        if (lVar2 != 0) {
          pUVar7 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) &&
              (*(int *)(((longlong)(*(int *)(lVar2 + 0x58) + (int)*(short *)(lVar2 + 0x5c)) - 1U &
                        (longlong)(int)~((int)*(short *)(lVar2 + 0x5c) - 1U)) + plVar9[1]) !=
               -0x112234)) &&
             (bVar5 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7814911394159001808>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                                 ,0xd0,"StructEndTag == Private::DebugStructEndTag"), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 3;
      } while (iVar8 < this->NumberOfElements);
    }
  }
  if (this->bStructsHaveDestructor != false) {
    uVar6 = this->NumberOfElements;
    pvVar3 = this->Memory;
    while (0 < (int)uVar6) {
      lVar2 = *(longlong *)((longlong)pvVar3 + (ulonglong)uVar6 * 0x18 + -0x18);
      if (lVar2 != 0) {
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        iVar8 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar7->_padding_)) {
          plVar9 = *(longlong **)
                    ((longlong)pvVar3 + (longlong)this->NumberOfElements * 0x18 + -0x18);
          (**(code **)(*plVar9 + 0x300))
                    (plVar9,*(undefined8 *)
                             ((longlong)pvVar3 + (longlong)this->NumberOfElements * 0x18 + -0x10),1)
          ;
        }
      }
      uVar6 = this->NumberOfElements - 1;
      this->NumberOfElements = uVar6;
    }
    if ((uVar6 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumberOfElements == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                           ,0x8f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NumberOfElements = 0;
  return;
}

// Add @ 14d4ee940

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::Add
          (FEvaluationScopeInstanceContainer *this,FStateTreeDataHandle param_1,
          FConstStructView *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong lVar6;
  FStateTreeInstanceObjectWrapper *pFVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  int iVar10;
  int iVar11;
  undefined2 in_register_00000016;
  undefined4 *puVar12;
  void *pvVar13;
  longlong local_38;
  
  puVar12 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  if ((this->MemoryRequirement).NumberOfElements <= this->NumberOfElements) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumberOfElements < MemoryRequirement.NumberOfElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pvVar2 = this->Memory;
  this_00 = param_2->ScriptStruct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar5
                         ,L"StateTreeInstanceObjectWrapper");
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    iVar11 = this->NumberOfElements;
  }
  else {
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)
                  ->_padding_;
    if (((int)this_00->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->
         _padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    iVar11 = this->NumberOfElements;
    lVar6 = (longlong)iVar11;
    if (bVar4) {
      *(undefined4 *)((longlong)pvVar2 + lVar6 * 0x18 + 0x10) = 0xffff0000;
      *(undefined4 *)((longlong)pvVar2 + lVar6 * 0x18 + 0x14) = 0;
      *(undefined8 *)((longlong)pvVar2 + lVar6 * 0x18) = 0;
      *(undefined8 *)((longlong)pvVar2 + lVar6 * 0x18 + 8) = 0;
      *(ushort *)((longlong)pvVar2 + lVar6 * 0x18 + 0x14) = FStateTreeStateHandle::Invalid.Index;
      pFVar7 = StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
                         (this_00,param_2->StructMemory);
      if ((pFVar7->InstanceObject).field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar5 = GetTransientPackage();
        pUVar9 = (pFVar7->InstanceObject).field0_0x0.DebugPtr;
        pUVar8 = Z_Construct_UClass_UObject_NoRegister();
        pUVar9 = DuplicateObject_Internal(pUVar8,pUVar9,(UObject *)pUVar5,(FName)0x0);
        if (pUVar9 == (UObject *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *(longlong *)&pUVar9->field_0x10;
          if (local_38 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Memory || (Memory && Struct)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                               ,0x24,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        plVar1 = (longlong *)((longlong)pvVar2 + (longlong)this->NumberOfElements * 0x18);
        *plVar1 = local_38;
        plVar1[1] = (longlong)pUVar9;
        iVar11 = this->NumberOfElements;
        *(undefined4 *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + 0x10) = *puVar12;
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + 0x14) =
             *(undefined2 *)(puVar12 + 1);
      }
      goto LAB_14d4eec27;
    }
  }
  if (iVar11 < 1) {
    pvVar13 = (void *)((longlong)this->Memory +
                      (longlong)(this->MemoryRequirement).NumberOfElements * 0x18);
  }
  else {
    lVar6 = *(longlong *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + -0x18);
    iVar10 = (int)*(short *)(lVar6 + 0x5c);
    pvVar13 = (void *)((longlong)(*(int *)(lVar6 + 0x58) + -1 + iVar10 & -iVar10) +
                      *(longlong *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + -0x10));
  }
  lVar6 = (longlong)*(short *)((longlong)&this_00->_padding_ + 4);
  pvVar13 = (void *)(lVar6 + 3 + (longlong)pvVar13 & -lVar6);
  (**(code **)(this_00->_padding_ + 0x2f8))(this_00,pvVar13,1);
  UScriptStruct::CopyScriptStruct(this_00,pvVar13,param_2->StructMemory,1);
  lVar6 = (longlong)this->NumberOfElements;
  *(undefined4 *)((longlong)pvVar2 + lVar6 * 0x18 + 0x10) = 0xffff0000;
  *(undefined4 *)((longlong)pvVar2 + lVar6 * 0x18 + 0x14) = 0;
  *(undefined8 *)((longlong)pvVar2 + lVar6 * 0x18) = 0;
  *(undefined8 *)((longlong)pvVar2 + lVar6 * 0x18 + 8) = 0;
  *(ushort *)((longlong)pvVar2 + lVar6 * 0x18 + 0x14) = FStateTreeStateHandle::Invalid.Index;
  if ((pvVar13 != (void *)0x0) && (this_00 == (UScriptStruct *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Memory || (Memory && Struct)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = this->NumberOfElements;
  *(UScriptStruct **)((longlong)pvVar2 + (longlong)iVar11 * 0x18) = this_00;
  *(void **)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + 8) = pvVar13;
  iVar11 = this->NumberOfElements;
  *(undefined4 *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + 0x10) = *puVar12;
  *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 0x18 + 0x14) = *(undefined2 *)(puVar12 + 1);
  lVar6 = *(longlong *)((longlong)this->Memory + (longlong)this->NumberOfElements * 0x18);
  iVar11 = (int)*(short *)(lVar6 + 0x5c);
  *(undefined4 *)
   (((longlong)(*(int *)(lVar6 + 0x58) + iVar11) - 1U & (longlong)-iVar11) +
   *(longlong *)((longlong)this->Memory + (longlong)this->NumberOfElements * 0x18 + 8)) = 0xffeeddcc
  ;
  if ((this_00->StructFlags & (STRUCT_NoDestructor|STRUCT_IsPlainOldData)) == STRUCT_NoFlags) {
    this->bStructsHaveDestructor = true;
  }
LAB_14d4eec27:
  this->NumberOfElements = this->NumberOfElements + 1;
  return;
}

// AddStructDebugTag @ 14d4ef5f0

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::AddStructDebugTag
          (FEvaluationScopeInstanceContainer *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)((longlong)this->Memory + (longlong)param_1 * 0x18);
  iVar2 = (int)*(short *)(lVar1 + 0x5c);
  *(undefined4 *)
   (((longlong)(*(int *)(lVar1 + 0x58) + iVar2) - 1U & (longlong)-iVar2) +
   *(longlong *)((longlong)this->Memory + (longlong)param_1 * 0x18 + 8)) = 0xffeeddcc;
  return;
}

// AddTableDebugTag @ 14d4ef800

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::AddTableDebugTag
          (FEvaluationScopeInstanceContainer *this)

{
  *(undefined4 *)
   ((longlong)this->Memory + (longlong)(this->MemoryRequirement).NumberOfElements * 0x18) =
       0x99aabbcc;
  return;
}

// Get @ 14d4fad10

FItem * __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::Get
          (FEvaluationScopeInstanceContainer *this,FStateTreeDataHandle *param_1)

{
  ushort *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < this->NumberOfElements) {
    puVar1 = (ushort *)((longlong)this->Memory + 0x12);
    uVar3 = uVar2;
    do {
      if (((*(EStateTreeDataSourceType *)(puVar1 + -1) == param_1->Source) &&
          (*puVar1 == param_1->Index)) && (puVar1[1] == (param_1->StateHandle).Index)) {
        return (FItem *)((longlong)this->Memory + (longlong)(int)uVar3 * 0x18);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while ((longlong)uVar2 < (longlong)this->NumberOfElements);
  }
  return (FItem *)0x0;
}

// Reset @ 14d506430

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::Reset
          (FEvaluationScopeInstanceContainer *this)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  int iVar8;
  longlong *plVar9;
  
  if (this->Memory != (void *)0x0) {
    if ((*(int *)((longlong)this->Memory +
                 (longlong)(this->MemoryRequirement).NumberOfElements * 0x18) != -0x66554434) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7814911394159001796>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                           ,0xc4,"TableEndTag == Private::DebugTableEndTag"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = 0;
    plVar9 = this->Memory;
    if (0 < this->NumberOfElements) {
      do {
        lVar2 = *plVar9;
        if (lVar2 != 0) {
          pUVar7 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) &&
              (*(int *)(((longlong)(*(int *)(lVar2 + 0x58) + (int)*(short *)(lVar2 + 0x5c)) - 1U &
                        (longlong)(int)~((int)*(short *)(lVar2 + 0x5c) - 1U)) + plVar9[1]) !=
               -0x112234)) &&
             (bVar5 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7814911394159001808>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                                 ,0xd0,"StructEndTag == Private::DebugStructEndTag"), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 3;
      } while (iVar8 < this->NumberOfElements);
    }
  }
  if (this->bStructsHaveDestructor != false) {
    uVar6 = this->NumberOfElements;
    pvVar3 = this->Memory;
    while (0 < (int)uVar6) {
      lVar2 = *(longlong *)((longlong)pvVar3 + (ulonglong)uVar6 * 0x18 + -0x18);
      if (lVar2 != 0) {
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        iVar8 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar7->_padding_)) {
          plVar9 = *(longlong **)
                    ((longlong)pvVar3 + (longlong)this->NumberOfElements * 0x18 + -0x18);
          (**(code **)(*plVar9 + 0x300))
                    (plVar9,*(undefined8 *)
                             ((longlong)pvVar3 + (longlong)this->NumberOfElements * 0x18 + -0x10),1)
          ;
        }
      }
      uVar6 = this->NumberOfElements - 1;
      this->NumberOfElements = uVar6;
    }
    if ((uVar6 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumberOfElements == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                           ,0x8f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NumberOfElements = 0;
  return;
}

// TestDebugTags @ 14d519ad0

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::TestDebugTags
          (FEvaluationScopeInstanceContainer *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  int iVar7;
  
  if (this->Memory != (void *)0x0) {
    if ((*(int *)((longlong)this->Memory +
                 (longlong)(this->MemoryRequirement).NumberOfElements * 0x18) != -0x66554434) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7814911394159001796>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                           ,0xc4,"TableEndTag == Private::DebugTableEndTag"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar6 = this->Memory;
    iVar7 = 0;
    if (0 < this->NumberOfElements) {
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          pUVar5 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) &&
              (*(int *)(((longlong)(*(int *)(lVar2 + 0x58) + (int)*(short *)(lVar2 + 0x5c)) - 1U &
                        (longlong)(int)~((int)*(short *)(lVar2 + 0x5c) - 1U)) + plVar6[1]) !=
               -0x112234)) &&
             (bVar4 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7814911394159001808>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeEvaluationScopeInstanceContainer.cpp"
                                 ,0xd0,"StructEndTag == Private::DebugStructEndTag"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = iVar7 + 1;
        plVar6 = plVar6 + 3;
      } while (iVar7 < this->NumberOfElements);
    }
  }
  return;
}

