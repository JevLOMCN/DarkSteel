// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10d4d0

UScriptStruct * __cdecl FOptimusNodeGraphAction_ConnectAdderPin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_ConnectAdderPin");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin.OuterSingleton;
}

// Do @ 14e10d570

/* WARNING: Removing unreachable block (ram,0x00014e10d7f1) */

bool __thiscall
FOptimusNodeGraphAction_ConnectAdderPin::Do
          (FOptimusNodeGraphAction_ConnectAdderPin *this,IOptimusPathResolver *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  int iVar4;
  UOptimusNodePin *this_00;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UObjectBaseUtility *this_01;
  UClass *pUVar8;
  longlong *plVar9;
  UOptimusNodePin *pUVar10;
  FText *this_02;
  FString *pFVar11;
  FName *pFVar12;
  UOptimusNode *this_03;
  longlong *plVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined4 *puVar16;
  FName FVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined1 local_res8 [8];
  IOptimusPathResolver *local_res10;
  longlong *local_res18;
  UOptimusNodePin *local_res20;
  undefined8 *local_108;
  int local_100;
  FString local_f8;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  FName local_c8;
  undefined1 local_c0 [8];
  FText local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar16 = &local_58;
  local_res10 = param_1;
  this_01 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (this_01 == (UObjectBaseUtility *)0x0) {
LAB_14e10da7d:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409152>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x300,"AdderPinProvider");
    if (bVar5) {
      pcVar19 = (code *)swi(3);
      uVar6 = (*pcVar19)();
      return (bool)uVar6;
    }
    return false;
  }
  pUVar8 = Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
  plVar9 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar8);
  local_res18 = plVar9;
  if (plVar9 == (longlong *)0x0) goto LAB_14e10da7d;
  pUVar10 = (UOptimusNodePin *)
            (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->SourcePinPath);
  local_res20 = pUVar10;
  this_02 = UOptimusNodePin::GetDisplayName(pUVar10,&local_b8);
  pFVar11 = FText::ToString(this_02);
  iVar4 = (pFVar11->Data).ArrayNum;
  uVar14 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar14 = 0;
  }
  pFVar12 = ::FName::FName(&local_c8,uVar14,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                           FNAME_Add);
  FVar17 = *pFVar12;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  this_03 = UOptimusNodePin::GetOwningNode(pUVar10);
  if (this_03 != (UOptimusNode *)0x0) {
    pUVar8 = Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister();
    plVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_03,pUVar8);
    if (plVar13 != (longlong *)0x0) {
      pFVar12 = (FName *)(**(code **)(*plVar13 + 0x18))(plVar13,local_c0,pUVar10);
      FVar17 = *pFVar12;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_108,&this->Action,pUVar10,FVar17);
  if (local_100 != 0) {
    pTVar2 = &this->AddedPinPaths;
    piVar1 = &(this->AddedPinPaths).ArrayMax;
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    iVar4 = (this->AddedPinPaths).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar15,iVar4);
      (this->AddedPinPaths).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar15,iVar4);
      (this->AddedPinPaths).ArrayNum = 0;
    }
    iVar4 = local_100;
    puVar3 = local_108 + local_100;
    puVar18 = local_108;
    while( true ) {
      if (local_100 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pUVar10 = local_res20;
      plVar9 = local_res18;
      if (puVar18 == puVar3) break;
      UOptimusNodePin::GetPinPath((UOptimusNodePin *)*puVar18,&local_f8);
      pFVar15 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar15 + (longlong)*piVar1 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar19 = (code *)swi(3);
        uVar6 = (*pcVar19)();
        return (bool)uVar6;
      }
      iVar7 = (this->AddedPinPaths).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->AddedPinPaths).ArrayNum = iVar7 + 1;
      pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(FScriptContainerElement **)pFVar15 = local_f8.Data.AllocatorInstance.Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 8) = local_f8.Data.ArrayNum;
      *(int *)(pFVar15 + 0xc) = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      puVar18 = puVar18 + 1;
    }
    uVar14 = 0;
    if ((int)(local_100 - 1U) < local_100) {
      uVar14 = ~(local_100 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar19 = (code *)swi(3);
      uVar6 = (*pcVar19)();
      return (bool)uVar6;
    }
    this_00 = (UOptimusNodePin *)local_108[local_100 + -1];
    if (this_00->bIsGroupingPin == false) {
      if ((this->Action).bCanAutoLink != false) {
        if (pUVar10->Direction == Output) {
          pFVar11 = UOptimusNodePin::GetPinPath(pUVar10,&local_98);
          ::FString::operator=((FString *)&this->_padding_,pFVar11);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          pFVar11 = UOptimusNodePin::GetPinPath(this_00,&local_88);
          ::FString::operator=((FString *)&this->_padding_,pFVar11);
        }
        else {
          pFVar11 = UOptimusNodePin::GetPinPath(this_00,&local_78);
          ::FString::operator=((FString *)&this->_padding_,pFVar11);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          pFVar11 = UOptimusNodePin::GetPinPath(pUVar10,&local_68);
          ::FString::operator=((FString *)&this->_padding_,pFVar11);
          local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        bVar5 = FOptimusNodeGraphAction_AddRemoveLink::AddLink
                          ((FOptimusNodeGraphAction_AddRemoveLink *)this,local_res10);
        if (!bVar5) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5689001813563409201>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                             ,0x331,"AddLink(InRoot)");
          if (bVar5) {
            pcVar19 = (code *)swi(3);
            uVar6 = (*pcVar19)();
            return (bool)uVar6;
          }
          pcVar19 = *(code **)(*plVar9 + 0x20);
          local_d8 = local_108;
          if ((local_100 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar19 = (code *)swi(3);
            uVar6 = (*pcVar19)();
            return (bool)uVar6;
          }
          local_58 = (undefined4)local_d8;
          uStack_54 = local_d8._4_4_;
          goto LAB_14e10d8ff;
        }
      }
      bVar5 = true;
      goto LAB_14e10d90b;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409181>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x31d,"!AddedPin->IsGroupingPin()");
    if (bVar5) {
      pcVar19 = (code *)swi(3);
      uVar6 = (*pcVar19)();
      return (bool)uVar6;
    }
    pcVar19 = *(code **)(*plVar9 + 0x20);
    local_e8 = local_108;
    if ((local_100 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar19 = (code *)swi(3);
      uVar6 = (*pcVar19)();
      return (bool)uVar6;
    }
    iStack_e0 = local_100;
    puVar16 = &local_a8;
    local_a8 = (undefined4)local_e8;
    uStack_a4 = local_e8._4_4_;
    iStack_a0 = local_100;
    uStack_9c = uStack_dc;
LAB_14e10d8ff:
    (*pcVar19)(plVar9,puVar16);
  }
  bVar5 = false;
LAB_14e10d90b:
  if (local_108 != (undefined8 *)0x0) {
    FMemory::Free(local_108);
  }
  return bVar5;
}

// Undo @ 14e10db10

bool __thiscall
FOptimusNodeGraphAction_ConnectAdderPin::Undo
          (FOptimusNodeGraphAction_ConnectAdderPin *this,IOptimusPathResolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UObjectBaseUtility *this_00;
  UClass *pUVar5;
  longlong *plVar6;
  char *pcVar7;
  atomic<unsigned_char> *paVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  this_00 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      if (((this->Action).bCanAutoLink == false) ||
         (bVar2 = FOptimusNodeGraphAction_AddRemoveLink::RemoveLink
                            ((FOptimusNodeGraphAction_AddRemoveLink *)this,param_1), bVar2)) {
        pFVar9 = (this->AddedPinPaths).AllocatorInstance.Data;
        iVar10 = (this->AddedPinPaths).ArrayNum;
        local_60.Data = (FScriptContainerElement *)0x0;
        pFVar11 = pFVar9 + (longlong)iVar10 * 0x10;
        local_58 = 0;
        while( true ) {
          if ((this->AddedPinPaths).ArrayNum != iVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar9 == pFVar11) break;
          local_68 = (**(code **)((longlong)*param_1 + 0x28))(param_1,pFVar9);
          if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
             && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar4 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          }
          pFVar9 = pFVar9 + 0x10;
          local_58 = CONCAT44(local_58._4_4_,iVar4 + 1);
          *(undefined8 *)(local_60.Data + (longlong)iVar4 * 8) = local_68;
        }
        iVar10 = (int)local_58;
        pcVar1 = *(code **)(*plVar6 + 0x20);
        local_48 = local_60.Data;
        if (((int)local_58 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iStack_40 = iVar10;
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        iStack_30 = iVar10;
        uStack_2c = uStack_3c;
        uVar3 = (*pcVar1)(plVar6,&local_38);
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        return (bool)uVar3;
      }
      pcVar7 = "RemoveLink(InRoot)";
      iVar10 = 0x347;
      paVar8 = &bGEnsureHasExecuted<5689001813563409223>;
      goto LAB_14e10dd2c;
    }
  }
  pcVar7 = "AdderPinProvider";
  iVar10 = 0x340;
  paVar8 = &bGEnsureHasExecuted<5689001813563409216>;
LAB_14e10dd2c:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                     ,iVar10,pcVar7);
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// FOptimusNodeGraphAction_ConnectAdderPin @ 14e154520

FOptimusNodeGraphAction_ConnectAdderPin * __thiscall
FOptimusNodeGraphAction_ConnectAdderPin::FOptimusNodeGraphAction_ConnectAdderPin
          (FOptimusNodeGraphAction_ConnectAdderPin *this,IOptimusNodeAdderPinProvider *param_1,
          FAdderPinAction *param_2,UOptimusNodePin *param_3)

{
  FString *pFVar1;
  int iVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UOptimusNode *this_00;
  UClass *pUVar7;
  FString *pFVar8;
  FOptimusNodeGraphAction_ConnectAdderPin *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  pFVar10 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_ConnectAdderPin__6B_;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->Action).DisplayName = param_2->DisplayName;
  (this->Action).NewPinDirection = param_2->NewPinDirection;
  (this->Action).Key = param_2->Key;
  (this->Action).ToolTip.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_2->ToolTip).TextData.Reference;
  (this->Action).ToolTip.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pFVar1 = &this->SourcePinPath;
  (this->Action).ToolTip.Flags = (param_2->ToolTip).Flags;
  pwVar11 = L"Add Pin & Link";
  (this->Action).bCanAutoLink = param_2->bCanAutoLink;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePinPath).Data.ArrayNum = 0;
  (this->SourcePinPath).Data.ArrayMax = 0;
  (this->AddedPinPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedPinPaths).ArrayNum = 0;
  (this->AddedPinPaths).ArrayMax = 0;
  if (param_2->bCanAutoLink == false) {
    pwVar11 = L"Add Pin From Pin";
  }
  FOptimusAction::SetTitlef<>((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)pwVar11);
  if (param_1 != (IOptimusNodeAdderPinProvider *)0x0) {
    this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusNode *)0x0) {
      pUVar7 = UOptimusNode::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        pFVar8 = UOptimusNode::GetNodePath(this_00,&local_48);
        if (pFVar10 != pFVar8) {
          pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pFVar10->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->NodePath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
          (this->NodePath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        goto LAB_14e1546ab;
      }
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5689001813563409139>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                     ,0x2f3,"Node");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FOptimusNodeGraphAction_ConnectAdderPin *)(*pcVar5)();
    return pFVar9;
  }
LAB_14e1546ab:
  pFVar10 = UOptimusNodePin::GetPinPath(param_3,&local_38);
  if (pFVar1 != pFVar10) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SourcePinPath).Data.ArrayNum = (pFVar10->Data).ArrayNum;
    (this->SourcePinPath).Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// FOptimusNodeGraphAction_ConnectAdderPin @ 14e154720

FOptimusNodeGraphAction_ConnectAdderPin * __thiscall
FOptimusNodeGraphAction_ConnectAdderPin::FOptimusNodeGraphAction_ConnectAdderPin
          (FOptimusNodeGraphAction_ConnectAdderPin *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_ConnectAdderPin__6B_;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->Action).DisplayName.ComparisonIndex = 0;
  (this->Action).DisplayName.Number = 0;
  (this->Action).Key.ComparisonIndex = 0;
  (this->Action).Key.Number = 0;
  FText::FText(&(this->Action).ToolTip);
  (this->Action).bCanAutoLink = false;
  (this->SourcePinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePinPath).Data.ArrayNum = 0;
  (this->SourcePinPath).Data.ArrayMax = 0;
  (this->AddedPinPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedPinPaths).ArrayNum = 0;
  (this->AddedPinPaths).ArrayMax = 0;
  return this;
}

// ~FOptimusNodeGraphAction_ConnectAdderPin @ 14e161790

void __thiscall
FOptimusNodeGraphAction_ConnectAdderPin::~FOptimusNodeGraphAction_ConnectAdderPin
          (FOptimusNodeGraphAction_ConnectAdderPin *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AddedPinPaths).AllocatorInstance.Data,(this->AddedPinPaths).ArrayNum)
  ;
  pFVar1 = (this->AddedPinPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcePinPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Action).ToolTip.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

