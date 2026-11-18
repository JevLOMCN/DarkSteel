// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 12

// StaticStruct @ 1443faf50

UScriptStruct * __cdecl FDataflowImageFromColorNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar1,
                         L"DataflowImageFromColorNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton;
}

// GetType @ 1443fafd0

FName __thiscall FDataflowImageFromColorNode::GetType(FDataflowImageFromColorNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowImageFromColorNode");
  return in_RDX;
}

// IsA @ 1443fb070

bool __thiscall FDataflowImageFromColorNode::IsA(FDataflowImageFromColorNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowImageFromColorNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fb0d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fb0d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fb0f6;
      }
    }
  }
  bVar5 = true;
LAB_1443fb0f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fb280

FStructOnScope * __thiscall
FDataflowImageFromColorNode::NewStructOnScope(FDataflowImageFromColorNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar2,
                           L"DataflowImageFromColorNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fb300

void __thiscall
FDataflowImageFromColorNode::SerializeInternal(FDataflowImageFromColorNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar1,
                         L"DataflowImageFromColorNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fb37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fb390

FName __thiscall FDataflowImageFromColorNode::GetDisplayName(FDataflowImageFromColorNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ImageFromColor");
  return in_RDX;
}

// GetCategory @ 1443fb3c0

FName __thiscall FDataflowImageFromColorNode::GetCategory(FDataflowImageFromColorNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Image");
  return in_RDX;
}

// GetTags @ 1443fb3f0

FString * __thiscall
FDataflowImageFromColorNode::GetTags
          (FDataflowImageFromColorNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fb420

UScriptStruct * __thiscall
FDataflowImageFromColorNode::TypedScriptStruct(FDataflowImageFromColorNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar1,
                         L"DataflowImageFromColorNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton;
}

// Evaluate @ 1443fb4c0

void __thiscall
FDataflowImageFromColorNode::Evaluate
          (FDataflowImageFromColorNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  FLinearColor *pFVar3;
  EDataflowImageResolution *pEVar4;
  FDataflowOutput *this_00;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_78;
  undefined8 local_68;
  FDataflowImage local_58;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowImage *)puVar1 == &this->Image) {
    local_68 = 0;
    local_78._s_0.B = -NAN;
    local_78._0_8_ = &this->FillColor;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_78._s_0);
    pFVar3 = FDataflowInput::GetValue<FLinearColor>(pFVar2,param_1,&this->FillColor);
    local_78._s_0.B = (float)0xffffffff;
    local_68 = 0;
    local_78._0_8_ = &this->Resolution;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_78._s_0);
    pEVar4 = FDataflowInput::GetValue<enum_EDataflowImageResolution>
                       (pFVar2,param_1,&this->Resolution);
    local_58.Image._padding_ = 0;
    local_58.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Image.RawData.ArrayNum = 0;
    local_58.Image._padding_._0_4_ = 0;
    local_58.Image._padding_._4_2_ = 0x201;
    local_58.Image.RawData.ArrayMax = 0;
    local_78._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
    local_78._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    FDataflowImage::CreateFromColor(&local_58,*pEVar4,*pEVar4,(FLinearColor *)&local_78._s_0);
    local_78._s_0.B = (float)0xffffffff;
    local_68 = 0;
    local_78._0_8_ = &this->Image;
    this_00 = FDataflowNode::FindOutput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_78._s_0);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowImage,FDataflowImage>'::__l7::<lambda_1>::operator()
                (local_res8);
    }
    else {
      FDataflowOutput::SetValue<FDataflowImage>(this_00,&local_58,param_1);
    }
    if (local_58.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Image.RawData.AllocatorInstance.Data);
    }
  }
  return;
}

// FDataflowImageFromColorNode @ 14442c7b0

FDataflowImageFromColorNode * __thiscall
FDataflowImageFromColorNode::FDataflowImageFromColorNode
          (FDataflowImageFromColorNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FLinearColor FVar2;
  FDataflowInput *pFVar3;
  FName local_res8;
  FConnectionReference local_28;
  
  local_28.Reference = *(void **)param_2;
  local_28.Index = param_2->C;
  local_28._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_28);
  local_28.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowImageFromColorNode__6B_;
  FVar2 = FLinearColor::Black;
  local_28.Reference = &this->FillColor;
  this->Resolution = Resolution16;
  (((FLinearColor *)local_28.Reference)->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.Index = -1;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Resolution;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.Index = -1;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Image;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_28,&local_res8);
  return this;
}

// FDataflowImageFromColorNode @ 14442c8d0

FDataflowImageFromColorNode * __thiscall
FDataflowImageFromColorNode::FDataflowImageFromColorNode(FDataflowImageFromColorNode *this)

{
  FLinearColor FVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowImageFromColorNode__6B_;
  FVar1 = FLinearColor::Black;
  this->Resolution = Resolution16;
  (this->FillColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  return this;
}

