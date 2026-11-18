// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticStruct @ 14695e2c0

UScriptStruct * __cdecl FShapedTextOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShapedTextOptions.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FShapedTextOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShapedTextOptions,(UObject *)pUVar1,
                         L"ShapedTextOptions");
  }
  return Z_Registration_Info_UScriptStruct_FShapedTextOptions.OuterSingleton;
}

// SynchronizeShapedTextProperties<SMultiLineEditableText> @ 14697ff90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableText>
          (FShapedTextOptions *this,SMultiLineEditableText *param_1)

{
  TOptional<ETextShapingMethod> *pTVar1;
  TOptional<ETextShapingMethod> local_res8 [4];
  TOptional<ETextShapingMethod> local_res18 [8];
  
  if (this->bOverride_TextShapingMethod == 0) {
    local_res18[0].bIsSet = false;
    pTVar1 = local_res18;
  }
  else {
    local_res8[0].TypedValue = this->TextShapingMethod;
    pTVar1 = local_res8;
    local_res8[0].bIsSet = true;
  }
  SMultiLineEditableText::SetTextShapingMethod(param_1,pTVar1);
  if (this->bOverride_TextFlowDirection != '\0') {
    local_res8[0].TypedValue = this->TextFlowDirection;
    local_res8[0].bIsSet = true;
    SMultiLineEditableText::SetTextFlowDirection
              (param_1,(TOptional<ETextFlowDirection> *)local_res8);
    return;
  }
  local_res18[0].bIsSet = false;
  SMultiLineEditableText::SetTextFlowDirection(param_1,(TOptional<ETextFlowDirection> *)local_res18)
  ;
  return;
}

// SynchronizeShapedTextProperties<SMultiLineEditableTextBox> @ 146980020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableTextBox>
          (FShapedTextOptions *this,SMultiLineEditableTextBox *param_1)

{
  TOptional<ETextShapingMethod> *pTVar1;
  TOptional<ETextShapingMethod> local_res8 [4];
  TOptional<ETextShapingMethod> local_res18 [8];
  
  if (this->bOverride_TextShapingMethod == 0) {
    local_res18[0].bIsSet = false;
    pTVar1 = local_res18;
  }
  else {
    local_res8[0].TypedValue = this->TextShapingMethod;
    pTVar1 = local_res8;
    local_res8[0].bIsSet = true;
  }
  SMultiLineEditableTextBox::SetTextShapingMethod(param_1,pTVar1);
  if (this->bOverride_TextFlowDirection != '\0') {
    local_res8[0].TypedValue = this->TextFlowDirection;
    local_res8[0].bIsSet = true;
    SMultiLineEditableTextBox::SetTextFlowDirection
              (param_1,(TOptional<ETextFlowDirection> *)local_res8);
    return;
  }
  local_res18[0].bIsSet = false;
  SMultiLineEditableTextBox::SetTextFlowDirection
            (param_1,(TOptional<ETextFlowDirection> *)local_res18);
  return;
}

// SynchronizeShapedTextProperties<SRichTextBlock> @ 1469800b0

void __thiscall
FShapedTextOptions::SynchronizeShapedTextProperties<SRichTextBlock>
          (FShapedTextOptions *this,SRichTextBlock *param_1)

{
  TOptional<ETextShapingMethod> *pTVar1;
  TOptional<ETextShapingMethod> local_res8 [4];
  TOptional<ETextShapingMethod> local_res18 [8];
  
  if (this->bOverride_TextShapingMethod == 0) {
    local_res18[0].bIsSet = false;
    pTVar1 = local_res18;
  }
  else {
    local_res8[0].TypedValue = this->TextShapingMethod;
    pTVar1 = local_res8;
    local_res8[0].bIsSet = true;
  }
  SRichTextBlock::SetTextShapingMethod(param_1,pTVar1);
  if (this->bOverride_TextFlowDirection != '\0') {
    local_res8[0].TypedValue = this->TextFlowDirection;
    local_res8[0].bIsSet = true;
    SRichTextBlock::SetTextFlowDirection(param_1,(TOptional<ETextFlowDirection> *)local_res8);
    return;
  }
  local_res18[0].bIsSet = false;
  SRichTextBlock::SetTextFlowDirection(param_1,(TOptional<ETextFlowDirection> *)local_res18);
  return;
}

// SynchronizeShapedTextProperties<STextBlock> @ 146980140

void __thiscall
FShapedTextOptions::SynchronizeShapedTextProperties<STextBlock>
          (FShapedTextOptions *this,STextBlock *param_1)

{
  TOptional<ETextShapingMethod> *pTVar1;
  TOptional<ETextShapingMethod> local_res8 [4];
  TOptional<ETextShapingMethod> local_res18 [8];
  
  if (this->bOverride_TextShapingMethod == 0) {
    local_res18[0].bIsSet = false;
    pTVar1 = local_res18;
  }
  else {
    local_res8[0].TypedValue = this->TextShapingMethod;
    pTVar1 = local_res8;
    local_res8[0].bIsSet = true;
  }
  STextBlock::SetTextShapingMethod(param_1,pTVar1);
  if (this->bOverride_TextFlowDirection != '\0') {
    local_res8[0].TypedValue = this->TextFlowDirection;
    local_res8[0].bIsSet = true;
    STextBlock::SetTextFlowDirection(param_1,(TOptional<ETextFlowDirection> *)local_res8);
    return;
  }
  local_res18[0].bIsSet = false;
  STextBlock::SetTextFlowDirection(param_1,(TOptional<ETextFlowDirection> *)local_res18);
  return;
}

// FShapedTextOptions @ 1469882a0

FShapedTextOptions * __thiscall FShapedTextOptions::FShapedTextOptions(FShapedTextOptions *this)

{
  this->bOverride_TextShapingMethod = '\0';
  this->bOverride_TextFlowDirection = '\0';
  this->TextShapingMethod = Auto;
  this->TextFlowDirection = Auto;
  return this;
}

