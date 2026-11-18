// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 12

// StaticStruct @ 1462c19d0

UScriptStruct * __cdecl FDataflowTextureTerminalNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar1,
                         L"DataflowTextureTerminalNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton;
}

// GetType @ 1462c1a10

FName __thiscall FDataflowTextureTerminalNode::GetType(FDataflowTextureTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowTextureTerminalNode");
  return in_RDX;
}

// IsA @ 1462c1a40

bool __thiscall FDataflowTextureTerminalNode::IsA(FDataflowTextureTerminalNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_20);
  ::FName::FName(&local_res20,"FDataflowTextureTerminalNode");
  pFVar4 = ::FName::ToString(&local_res20,&local_30);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
      goto LAB_1462c1ab1;
    }
  }
  else {
    bVar6 = iVar1 + iVar2 == 1;
LAB_1462c1ab1:
    if (!bVar6) {
      local_res18 = local_res10;
      pFVar3 = ::FName::ToString(&local_res18,&local_40);
      ::FName::FName(&local_58,"FDataflowTerminalNode");
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar6 = iVar2 == 0;
          goto LAB_1462c1b25;
        }
LAB_1462c1b44:
        bVar6 = true;
      }
      else {
        bVar6 = iVar1 + iVar2 == 1;
LAB_1462c1b25:
        if (bVar6) goto LAB_1462c1b44;
        bVar6 = FDataflowNode::IsA((FDataflowNode *)this,local_res18);
        if (bVar6) goto LAB_1462c1b44;
        bVar6 = false;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if (!bVar6) goto LAB_1462c1b6a;
    }
  }
  bVar5 = true;
LAB_1462c1b6a:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c1ba0

FStructOnScope * __thiscall
FDataflowTextureTerminalNode::NewStructOnScope(FDataflowTextureTerminalNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar2,
                           L"DataflowTextureTerminalNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c1c20

void __thiscall
FDataflowTextureTerminalNode::SerializeInternal
          (FDataflowTextureTerminalNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar1,
                         L"DataflowTextureTerminalNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c1c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c1cb0

FName __thiscall FDataflowTextureTerminalNode::GetDisplayName(FDataflowTextureTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TextureTerminal");
  return in_RDX;
}

// GetCategory @ 1462c1ce0

FName __thiscall FDataflowTextureTerminalNode::GetCategory(FDataflowTextureTerminalNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Terminal");
  return in_RDX;
}

// GetTags @ 1462c1d10

FString * __thiscall
FDataflowTextureTerminalNode::GetTags
          (FDataflowTextureTerminalNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c1d40

UScriptStruct * __thiscall
FDataflowTextureTerminalNode::TypedScriptStruct(FDataflowTextureTerminalNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar1,
                         L"DataflowTextureTerminalNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton;
}

// Evaluate @ 1462c1d80

void __thiscall
FDataflowTextureTerminalNode::Evaluate(FDataflowTextureTerminalNode *this,FContext *param_1)

{
  FDataflowImage *pFVar1;
  FProperty *pFVar2;
  void *pvVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  FDataflowOutput *this_00;
  FTimestamp FVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  undefined1 local_res8 [8];
  FConnectionReference local_78;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  local_60.Index = -1;
  pFVar1 = &this->Image;
  local_60.ContainerReference = (void *)0x0;
  local_60.Reference = pFVar1;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
  pvVar3 = local_60.Reference;
  if (pFVar5->Connection != (FDataflowOutput *)0x0) {
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    local_78.Reference = pFVar1;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_60,&local_78);
    return;
  }
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowImage_const_&,FDataflowImage>'::__l7::<lambda_1>::operator()
              (local_res8);
  }
  else if (this_00->_padding_ != 0) {
    FVar6 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar7 = FDataflowConnection::GetOwningNodeGuid
                       ((FDataflowConnection *)this_00,(FGuid *)&local_78);
    pFVar2 = (FProperty *)this_00->_padding_;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowImage_const_&>
              (param_1,(uint)uVar8,pFVar2,pvVar3,pFVar7,uVar4,(FTimestamp *)FVar6.Value);
  }
  return;
}

// SetAssetValue @ 1462c1ee0

void __thiscall
FDataflowTextureTerminalNode::SetAssetValue
          (FDataflowTextureTerminalNode *this,TObjectPtr<UObject> param_1,FContext *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FDataflowInput *this_00;
  TObjectPtr<UTexture2D> *pTVar3;
  FDataflowImage *this_01;
  FImage *pFVar4;
  UTexture2D *pUVar5;
  FConnectionReference local_28;
  
  pUVar5 = *(UTexture2D **)param_1.field0_0x0;
  if (pUVar5 != (UTexture2D *)0x0) {
    pUVar2 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1462c1f22;
  }
  pUVar5 = (UTexture2D *)0x0;
LAB_1462c1f22:
  if (pUVar5 == (UTexture2D *)0x0) {
    local_28.Reference = &this->TextureAsset;
    local_28.Index = -1;
    local_28.ContainerReference = pUVar5;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pTVar3 = FDataflowInput::GetValue<TObjectPtr<UTexture2D>_>(this_00,param_2,local_28.Reference);
    pUVar5 = (pTVar3->field0_0x0).DebugPtr;
    if (pUVar5 == (UTexture2D *)0x0) {
      return;
    }
  }
  this_01 = FDataflowNode::GetValue<FDataflowImage>((FDataflowNode *)this,param_2,&this->Image);
  iVar1 = FDataflowImage::GetWidth(this_01);
  if ((0 < iVar1) && (iVar1 = FDataflowImage::GetHeight(this_01), 0 < iVar1)) {
    pFVar4 = FDataflowImage::GetImage(this_01);
    DataflowTextureAssetNodes::Private::UpdateTexture2DFromImage(pUVar5,pFVar4);
  }
  return;
}

// FDataflowTextureTerminalNode @ 1462ce780

FDataflowTextureTerminalNode * __thiscall
FDataflowTextureTerminalNode::FDataflowTextureTerminalNode
          (FDataflowTextureTerminalNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowImage *pFVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pFVar1 = &this->Image;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowTextureTerminalNode__6B_;
  (pFVar1->Image)._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  (this->TextureAsset).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->TextureAsset;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  local_38.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FDataflowImage *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

