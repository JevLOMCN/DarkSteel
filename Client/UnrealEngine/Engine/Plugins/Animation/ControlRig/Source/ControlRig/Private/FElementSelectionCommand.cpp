// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// Apply @ 14a23ead0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::ControlRig::FElementSelectionCommand::Apply(FElementSelectionCommand *this,UObject *param_1)

{
  int iVar1;
  ForElementType<UE::ControlRig::FElementSelectionData> FVar2;
  UClass *pUVar3;
  URigHierarchyController *this_00;
  ForElementType<UE::ControlRig::FElementSelectionData> FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FRigHierarchyKey local_48;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       (this_00 = URigHierarchy::GetController((URigHierarchy *)param_1,true),
       this_00 != (URigHierarchyController *)0x0)) {
      FVar2 = (this->Changes).AllocatorInstance.SecondaryData;
      FVar4 = (ForElementType<UE::ControlRig::FElementSelectionData>)&this->Changes;
      iVar1 = (this->Changes).ArrayNum;
      if (FVar2 != (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
        FVar4 = FVar2;
      }
      lVar5 = (longlong)FVar4 + 0x28;
      while( true ) {
        if ((this->Changes).ArrayNum != iVar1) {
          `TCheckedPointerIterator<UE::ControlRig::FElementSelectionData_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((undefined8 *)(lVar5 + -0x28) ==
            (undefined8 *)((longlong)iVar1 * 0x2c + (longlong)FVar4)) break;
        local_48.Element.bIsSet = *(bool *)(lVar5 + -0x1c);
        if (local_48.Element.bIsSet != false) {
          local_48.Element.TypedValue._0_8_ = *(undefined8 *)(lVar5 + -0x28);
          local_48.Element.TypedValue.Name.Number = *(uint *)(lVar5 + -0x20);
        }
        local_48.Component.bIsSet = *(bool *)(lVar5 + -4);
        if (local_48.Component.bIsSet != false) {
          local_48.Component.TypedValue.ElementKey._0_8_ = *(undefined8 *)(lVar5 + -0x18);
          local_48.Component.TypedValue._8_8_ = *(undefined8 *)(lVar5 + -0x10);
          local_48.Component.TypedValue.Name.Number = *(uint *)(lVar5 + -8);
        }
        URigHierarchyController::SelectHierarchyKey(this_00,&local_48,*(bool *)lVar5,false,false);
        lVar5 = lVar5 + 0x2c;
      }
    }
  }
  return;
}

// Revert @ 14a28d190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::ControlRig::FElementSelectionCommand::Revert(FElementSelectionCommand *this,UObject *param_1)

{
  int iVar1;
  ForElementType<UE::ControlRig::FElementSelectionData> FVar2;
  UClass *pUVar3;
  URigHierarchyController *this_00;
  ForElementType<UE::ControlRig::FElementSelectionData> FVar4;
  char *pcVar5;
  undefined1 local_res10 [8];
  FRigHierarchyKey local_48;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       (this_00 = URigHierarchy::GetController((URigHierarchy *)param_1,true),
       this_00 != (URigHierarchyController *)0x0)) {
      FVar2 = (this->Changes).AllocatorInstance.SecondaryData;
      FVar4 = (ForElementType<UE::ControlRig::FElementSelectionData>)&this->Changes;
      iVar1 = (this->Changes).ArrayNum;
      if (FVar2 != (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
        FVar4 = FVar2;
      }
      pcVar5 = (char *)((longlong)FVar4 + 0x28);
      while( true ) {
        if ((this->Changes).ArrayNum != iVar1) {
          `TCheckedPointerIterator<UE::ControlRig::FElementSelectionData_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pcVar5 + -0x28 == (char *)((longlong)iVar1 * 0x2c + (longlong)FVar4)) break;
        local_48.Element.bIsSet = (bool)pcVar5[-0x1c];
        if (local_48.Element.bIsSet != false) {
          local_48.Element.TypedValue._0_8_ = *(undefined8 *)(pcVar5 + -0x28);
          local_48.Element.TypedValue.Name.Number = *(uint *)(pcVar5 + -0x20);
        }
        local_48.Component.bIsSet = (bool)pcVar5[-4];
        if (local_48.Component.bIsSet != false) {
          local_48.Component.TypedValue.ElementKey._0_8_ = *(undefined8 *)(pcVar5 + -0x18);
          local_48.Component.TypedValue._8_8_ = *(undefined8 *)(pcVar5 + -0x10);
          local_48.Component.TypedValue.Name.Number = *(uint *)(pcVar5 + -8);
        }
        URigHierarchyController::SelectHierarchyKey(this_00,&local_48,*pcVar5 == '\0',false,false);
        pcVar5 = pcVar5 + 0x2c;
      }
    }
  }
  return;
}

// FElementSelectionCommand @ 14a2d8bf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FElementSelectionCommand * __thiscall
UE::ControlRig::FElementSelectionCommand::FElementSelectionCommand
          (FElementSelectionCommand *this,FElementSelectionData *param_1)

{
  FRigHierarchyKey *pFVar1;
  ForElementType<UE::ControlRig::FElementSelectionData> FVar2;
  ForElementType<UE::ControlRig::FElementSelectionData> local_78;
  int local_40;
  int local_3c;
  FElementSelectionData local_38;
  
  local_38.Key.Element.bIsSet = (param_1->Key).Element.bIsSet;
  if (local_38.Key.Element.bIsSet != false) {
    local_38.Key.Element.TypedValue.Type = (param_1->Key).Element.TypedValue.Type;
    local_38.Key.Element.TypedValue._1_3_ =
         *(undefined3 *)&(param_1->Key).Element.TypedValue.field_0x1;
    local_38.Key.Element.TypedValue.Name.ComparisonIndex.Value =
         (param_1->Key).Element.TypedValue.Name.ComparisonIndex.Value;
    local_38.Key.Element.TypedValue.Name.Number = (param_1->Key).Element.TypedValue.Name.Number;
  }
  local_38.Key.Component.bIsSet = (param_1->Key).Component.bIsSet;
  if (local_38.Key.Component.bIsSet != false) {
    pFVar1 = &param_1->Key;
    local_38.Key.Component.TypedValue.ElementKey.Type =
         (pFVar1->Component).TypedValue.ElementKey.Type;
    local_38.Key.Component.TypedValue.ElementKey._1_3_ =
         *(undefined3 *)&(pFVar1->Component).TypedValue.ElementKey.field_0x1;
    local_38.Key.Component.TypedValue.ElementKey.Name.ComparisonIndex.Value =
         (pFVar1->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    local_38.Key.Component.TypedValue._8_8_ =
         *(undefined8 *)&(param_1->Key).Component.TypedValue.ElementKey.Name.Number;
    local_38.Key.Component.TypedValue.Name.Number = (param_1->Key).Component.TypedValue.Name.Number;
  }
  local_38.bSelect = param_1->bSelect;
  local_78.SecondaryData = (ForElementType<UE::ControlRig::FElementSelectionData>)0x0;
  local_40 = 1;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::ControlRig::FElementSelectionData>_>
            (0x2c,4,1,0,&local_78,1,&local_3c);
  FVar2 = (ForElementType<UE::ControlRig::FElementSelectionData>)&local_78;
  if (local_78.SecondaryData != (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
    FVar2 = local_78.SecondaryData;
  }
  ConstructItems<UE::ControlRig::FElementSelectionData,UE::ControlRig::FElementSelectionData,int>
            ((void *)FVar2,&local_38,1);
  this->_padding_ = (longlong)&___7FElementSelectionCommand_ControlRig_UE__6B_;
  (this->Changes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::ControlRig::FElementSelectionData>)0x0;
  if (local_78.SecondaryData == (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
    *(undefined8 *)(this->Changes).AllocatorInstance.InlineData = local_78.InlineData._0_8_;
    *(undefined8 *)((this->Changes).AllocatorInstance.InlineData + 8) = local_78.InlineData._8_8_;
    *(undefined8 *)((this->Changes).AllocatorInstance.InlineData + 0x10) =
         local_78.InlineData._16_8_;
    *(undefined8 *)((this->Changes).AllocatorInstance.InlineData + 0x18) =
         local_78.InlineData._24_8_;
    *(undefined8 *)((this->Changes).AllocatorInstance.InlineData + 0x20) =
         local_78.InlineData._32_8_;
    *(undefined4 *)((this->Changes).AllocatorInstance.InlineData + 0x28) =
         local_78.InlineData._40_4_;
  }
  FVar2 = (this->Changes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::ControlRig::FElementSelectionData>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Changes).AllocatorInstance.SecondaryData = local_78.SecondaryData;
  (this->Changes).ArrayNum = local_40;
  (this->Changes).ArrayMax = local_3c;
  this->_padding_ = (longlong)&___7FElementSelectionCommand_ControlRig_UE__6B_;
  return this;
}

