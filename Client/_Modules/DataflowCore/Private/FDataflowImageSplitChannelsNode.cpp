// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 14

// StaticStruct @ 1443fbc20

UScriptStruct * __cdecl FDataflowImageSplitChannelsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,(UObject *)pUVar1
                         ,L"DataflowImageSplitChannelsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton;
}

// GetType @ 1443fbcd0

FName __thiscall FDataflowImageSplitChannelsNode::GetType(FDataflowImageSplitChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowImageSplitChannelsNode");
  return in_RDX;
}

// IsA @ 1443fbd00

bool __thiscall
FDataflowImageSplitChannelsNode::IsA(FDataflowImageSplitChannelsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowImageSplitChannelsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fbd68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fbd68:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fbd86;
      }
    }
  }
  bVar5 = true;
LAB_1443fbd86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fbdc0

FStructOnScope * __thiscall
FDataflowImageSplitChannelsNode::NewStructOnScope(FDataflowImageSplitChannelsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,
                           (UObject *)pUVar2,L"DataflowImageSplitChannelsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fbee0

void __thiscall
FDataflowImageSplitChannelsNode::SerializeInternal
          (FDataflowImageSplitChannelsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,(UObject *)pUVar1
                         ,L"DataflowImageSplitChannelsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fbf5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fbf70

FName __thiscall
FDataflowImageSplitChannelsNode::GetDisplayName(FDataflowImageSplitChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ImageSplitChannels");
  return in_RDX;
}

// GetCategory @ 1443fbfa0

FName __thiscall FDataflowImageSplitChannelsNode::GetCategory(FDataflowImageSplitChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Image");
  return in_RDX;
}

// GetTags @ 1443fbfd0

FString * __thiscall
FDataflowImageSplitChannelsNode::GetTags
          (FDataflowImageSplitChannelsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fc000

UScriptStruct * __thiscall
FDataflowImageSplitChannelsNode::TypedScriptStruct(FDataflowImageSplitChannelsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,(UObject *)pUVar1
                         ,L"DataflowImageSplitChannelsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton;
}

// Evaluate @ 1443fc110

void __thiscall
FDataflowImageSplitChannelsNode::Evaluate
          (FDataflowImageSplitChannelsNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  EDataflowImageChannel EVar2;
  FDataflowImage *pFVar3;
  FDataflowImageSplitChannelsNode *local_res8;
  
  pFVar3 = &this->Red;
  local_res8 = this;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowImage *)puVar1 == pFVar3) {
    EVar2 = Red;
  }
  else {
    pFVar3 = &this->Green;
    puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowImage *)puVar1 == pFVar3) {
      EVar2 = Green;
    }
    else {
      pFVar3 = &this->Blue;
      puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((FDataflowImage *)puVar1 == pFVar3) {
        EVar2 = Blue;
      }
      else {
        pFVar3 = &this->Alpha;
        puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((FDataflowImage *)puVar1 != pFVar3) {
          return;
        }
        EVar2 = Alpha;
      }
    }
  }
  `FDataflowImageSplitChannelsNode::Evaluate'::__l2::<lambda_1>::operator()
            (&local_res8,param_1,EVar2,pFVar3);
  return;
}

// FDataflowImageSplitChannelsNode @ 14442c940

FDataflowImageSplitChannelsNode * __thiscall
FDataflowImageSplitChannelsNode::FDataflowImageSplitChannelsNode
          (FDataflowImageSplitChannelsNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName local_res8;
  FConnectionReference local_48;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowImageSplitChannelsNode__6B_;
  local_48.Reference = &this->Image;
  (this->Red).Image._padding_ = 0;
  (((FDataflowImage *)local_48.Reference)->Image)._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  *(undefined4 *)&(this->Red).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Red).Image._padding_ + 4) = 0x201;
  (this->Red).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Red).Image.RawData.ArrayNum = 0;
  (this->Red).Image.RawData.ArrayMax = 0;
  (this->Green).Image._padding_ = 0;
  *(undefined4 *)&(this->Green).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Green).Image._padding_ + 4) = 0x201;
  (this->Green).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Green).Image.RawData.ArrayNum = 0;
  (this->Green).Image.RawData.ArrayMax = 0;
  (this->Blue).Image._padding_ = 0;
  *(undefined4 *)&(this->Blue).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Blue).Image._padding_ + 4) = 0x201;
  (this->Blue).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blue).Image.RawData.ArrayNum = 0;
  (this->Blue).Image.RawData.ArrayMax = 0;
  (this->Alpha).Image._padding_ = 0;
  *(undefined4 *)&(this->Alpha).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Alpha).Image._padding_ + 4) = 0x201;
  (this->Alpha).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alpha).Image.RawData.ArrayNum = 0;
  (this->Alpha).Image.RawData.ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Red;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Green;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Blue;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Alpha;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  return this;
}

// FDataflowImageSplitChannelsNode @ 14442caf0

FDataflowImageSplitChannelsNode * __thiscall
FDataflowImageSplitChannelsNode::FDataflowImageSplitChannelsNode
          (FDataflowImageSplitChannelsNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowImageSplitChannelsNode__6B_;
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  (this->Red).Image._padding_ = 0;
  *(undefined4 *)&(this->Red).Image._padding_ = 0;
  (this->Red).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Red).Image.RawData.ArrayNum = 0;
  (this->Red).Image.RawData.ArrayMax = 0;
  (this->Green).Image._padding_ = 0;
  *(undefined4 *)&(this->Green).Image._padding_ = 0;
  (this->Green).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Green).Image.RawData.ArrayNum = 0;
  (this->Green).Image.RawData.ArrayMax = 0;
  (this->Blue).Image._padding_ = 0;
  *(undefined4 *)&(this->Blue).Image._padding_ = 0;
  (this->Blue).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blue).Image.RawData.ArrayNum = 0;
  (this->Blue).Image.RawData.ArrayMax = 0;
  (this->Alpha).Image._padding_ = 0;
  *(undefined4 *)&(this->Alpha).Image._padding_ = 0;
  (this->Alpha).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Alpha).Image.RawData.ArrayNum = 0;
  (this->Alpha).Image.RawData.ArrayMax = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Red).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Green).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Blue).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Alpha).Image._padding_ + 4) = 0x201;
  return this;
}

// ~FDataflowImageSplitChannelsNode @ 144433840

void __thiscall
FDataflowImageSplitChannelsNode::~FDataflowImageSplitChannelsNode
          (FDataflowImageSplitChannelsNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alpha).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Blue).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Green).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Red).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Image).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// operator() @ 1444347c0

void __thiscall
`FDataflowImageSplitChannelsNode::Evaluate'::__l2::<lambda_1>::operator()
          (void *this,FContext *param_1,EDataflowImageChannel param_2,FDataflowImage *param_3)

{
  FDataflowNode *pFVar1;
  FDataflowInput *this_00;
  FDataflowImage *this_01;
  FDataflowOutput *this_02;
  undefined1 local_res8 [8];
  FConnectionReference local_58;
  FDataflowImage local_40;
  
  local_40.Image._padding_._4_2_ = 0x201;
  local_40.Image._padding_ = 0;
  local_40.Image._padding_._0_4_ = 0;
  local_40.Image.RawData.ArrayMax = 0;
  local_58.Index = -1;
  pFVar1 = *(FDataflowNode **)this + 1;
  local_58.ContainerReference = (void *)0x0;
  local_40.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Image.RawData.ArrayNum = 0;
  local_58.Reference = pFVar1;
  this_00 = FDataflowNode::FindInput(*(FDataflowNode **)this,&local_58);
  this_01 = FDataflowInput::GetValue<FDataflowImage>(this_00,param_1,(FDataflowImage *)pFVar1);
  FDataflowImage::ReadChannel(this_01,param_2,&local_40);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_02 = FDataflowNode::FindOutput(*(FDataflowNode **)this,&local_58);
  if (this_02 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowImage,FDataflowImage>'::__l7::<lambda_1>::operator()
              (local_res8);
  }
  else {
    FDataflowOutput::SetValue<FDataflowImage>(this_02,&local_40,param_1);
  }
  if (local_40.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Image.RawData.AllocatorInstance.Data);
  }
  return;
}

