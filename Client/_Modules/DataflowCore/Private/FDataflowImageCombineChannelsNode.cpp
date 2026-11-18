// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 14

// StaticStruct @ 1443fc6e0

UScriptStruct * __cdecl FDataflowImageCombineChannelsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                         (UObject *)pUVar1,L"DataflowImageCombineChannelsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton;
}

// GetType @ 1443fc7b0

FName __thiscall FDataflowImageCombineChannelsNode::GetType(FDataflowImageCombineChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowImageCombineChannelsNode");
  return in_RDX;
}

// IsA @ 1443fc820

bool __thiscall
FDataflowImageCombineChannelsNode::IsA(FDataflowImageCombineChannelsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowImageCombineChannelsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fc888;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fc888:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fc8a6;
      }
    }
  }
  bVar5 = true;
LAB_1443fc8a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fc8e0

FStructOnScope * __thiscall
FDataflowImageCombineChannelsNode::NewStructOnScope(FDataflowImageCombineChannelsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                           (UObject *)pUVar2,L"DataflowImageCombineChannelsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fc960

void __thiscall
FDataflowImageCombineChannelsNode::SerializeInternal
          (FDataflowImageCombineChannelsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                         (UObject *)pUVar1,L"DataflowImageCombineChannelsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fc9dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fc9f0

FName __thiscall
FDataflowImageCombineChannelsNode::GetDisplayName(FDataflowImageCombineChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ImageCombineChannels");
  return in_RDX;
}

// GetCategory @ 1443fca20

FName __thiscall
FDataflowImageCombineChannelsNode::GetCategory(FDataflowImageCombineChannelsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Image");
  return in_RDX;
}

// GetTags @ 1443fca50

FString * __thiscall
FDataflowImageCombineChannelsNode::GetTags
          (FDataflowImageCombineChannelsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fca80

UScriptStruct * __thiscall
FDataflowImageCombineChannelsNode::TypedScriptStruct(FDataflowImageCombineChannelsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                         (UObject *)pUVar1,L"DataflowImageCombineChannelsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton;
}

// Evaluate @ 1443fcb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowImageCombineChannelsNode::Evaluate
          (FDataflowImageCombineChannelsNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  EDataflowImageResolution EVar2;
  EDataflowImageResolution EVar3;
  EDataflowImageResolution EVar4;
  EDataflowImageResolution *pEVar5;
  code *pcVar6;
  int iVar7;
  EDataflowImageResolution EVar8;
  bool bVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  FDataflowOutput *this_00;
  int iVar12;
  EDataflowImageResolution EVar13;
  ForAnyElementType FVar14;
  EDataflowImageResolution EVar15;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  undefined1 local_130;
  undefined1 local_12f [7];
  FContext *local_128;
  FDataflowImage *local_120;
  FDataflowImage *local_118;
  FDataflowImage *local_110;
  FImage local_108;
  FDataflowImage *local_e0;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FConnectionReference local_78;
  FDataflowImage *local_60;
  FDataflowImage *pFStack_58;
  FDataflowImage *local_50;
  FDataflowImage *pFStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_128 = param_1;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowImage *)puVar10 != &this->Image) {
    return;
  }
  local_d8.ContainerReference = (void *)0x0;
  local_d8.Index = -1;
  local_d8.Reference = &this->Red;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
  local_120 = FDataflowInput::GetValue<FDataflowImage>(pFVar11,param_1,&this->Red);
  local_c0.Index = -1;
  local_c0.ContainerReference = (void *)0x0;
  local_c0.Reference = &this->Green;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
  local_118 = FDataflowInput::GetValue<FDataflowImage>(pFVar11,param_1,&this->Green);
  local_a8.Index = -1;
  local_a8.ContainerReference = (void *)0x0;
  local_a8.Reference = &this->Blue;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
  local_110 = FDataflowInput::GetValue<FDataflowImage>(pFVar11,param_1,&this->Blue);
  local_90.Index = -1;
  local_90.ContainerReference = (void *)0x0;
  local_90.Reference = &this->Alpha;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_90);
  local_e0 = FDataflowInput::GetValue<FDataflowImage>(pFVar11,param_1,&this->Alpha);
  local_60 = local_120;
  pFStack_58 = local_118;
  local_50 = local_110;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 4;
  pFStack_48 = local_e0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,0,&local_140,4,&local_134);
  *(FDataflowImage **)local_140.Data = local_60;
  *(FDataflowImage **)(local_140.Data + 8) = pFStack_58;
  *(FDataflowImage **)(local_140.Data + 0x10) = local_50;
  *(FDataflowImage **)(local_140.Data + 0x18) = pFStack_48;
  local_108._padding_ = 0;
  local_108._padding_._0_4_ = 0;
  local_108.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.RawData.ArrayNum = 0;
  local_108._padding_._4_2_ = 0x201;
  EVar2 = this->Resolution;
  local_108.RawData.ArrayMax = 0;
  EVar13 = EVar2;
  EVar15 = EVar2;
  if ((this->ResolutionOptions != UserDefined) && (local_138 != 0)) {
    if ((local_138 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)local_140.Data != 0) {
      if ((local_138 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EVar15 = **(EDataflowImageResolution **)local_140.Data;
      if ((local_138 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar7 = local_138;
      pFVar1 = local_140.Data + (longlong)local_138 * 8;
      EVar13 = *(EDataflowImageResolution *)(*(longlong *)local_140.Data + 4);
      FVar14.Data = local_140.Data;
      iVar12 = local_138;
      while( true ) {
        if (iVar12 != iVar7) {
          `TCheckedPointerIterator<FDataflowImage_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_130);
          iVar12 = local_138;
        }
        if (FVar14.Data == pFVar1) break;
        pEVar5 = *(EDataflowImageResolution **)FVar14.Data;
        EVar8 = EVar13;
        if (pEVar5 == (EDataflowImageResolution *)0x0) {
LAB_1443fce24:
          EVar13 = EVar8;
          FVar14.Data = FVar14.Data + 8;
        }
        else {
          EVar3 = *pEVar5;
          EVar4 = pEVar5[1];
          if (((int)EVar3 < 1) || ((int)EVar4 < 1)) goto LAB_1443fce24;
          if (this->ResolutionOptions != Highest) {
            if (this->ResolutionOptions == Lowest) {
              if ((int)EVar15 < (int)EVar3) {
                EVar3 = EVar15;
              }
              EVar15 = EVar3;
              EVar8 = EVar4;
              if ((int)EVar13 < (int)EVar4) {
                EVar8 = EVar13;
              }
            }
            goto LAB_1443fce24;
          }
          if ((int)EVar3 < (int)EVar15) {
            EVar3 = EVar15;
          }
          EVar15 = EVar3;
          if ((int)EVar4 < (int)EVar13) {
            EVar4 = EVar13;
          }
          EVar13 = EVar4;
          FVar14.Data = FVar14.Data + 8;
        }
      }
      param_1 = local_128;
      if ((0 < (int)EVar15) && (0 < (int)EVar13)) goto LAB_1443fce5e;
    }
    EVar13 = EVar2;
    EVar15 = EVar2;
  }
LAB_1443fce5e:
  FImage::Init(&local_108,EVar15,EVar13,RGBA32F,Linear);
  FDataflowImage::WriteChannel((FDataflowImage *)&local_108,Red,local_120);
  FDataflowImage::WriteChannel((FDataflowImage *)&local_108,Green,local_118);
  FDataflowImage::WriteChannel((FDataflowImage *)&local_108,Blue,local_110);
  FDataflowImage::WriteChannel((FDataflowImage *)&local_108,Alpha,local_e0);
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Image;
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_78);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowImage,FDataflowImage>'::__l7::<lambda_1>::operator()
              (local_12f);
  }
  else {
    FDataflowOutput::SetValue<FDataflowImage>(this_00,(FDataflowImage *)&local_108,param_1);
  }
  if (local_108.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RawData.AllocatorInstance.Data);
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  return;
}

// FDataflowImageCombineChannelsNode @ 14442c4c0

FDataflowImageCombineChannelsNode * __thiscall
FDataflowImageCombineChannelsNode::FDataflowImageCombineChannelsNode
          (FDataflowImageCombineChannelsNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName local_res8;
  FConnectionReference local_48;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->ResolutionOptions = Highest;
  this->Resolution = Resolution512;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowImageCombineChannelsNode__6B_;
  local_48.Reference = &this->Red;
  (this->Green).Image._padding_ = 0;
  (((FDataflowImage *)local_48.Reference)->Image)._padding_ = 0;
  *(undefined4 *)&(this->Red).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Red).Image._padding_ + 4) = 0x201;
  (this->Red).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Red).Image.RawData.ArrayNum = 0;
  (this->Red).Image.RawData.ArrayMax = 0;
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
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Green;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Blue;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Alpha;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Image;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  return this;
}

// FDataflowImageCombineChannelsNode @ 14442c690

FDataflowImageCombineChannelsNode * __thiscall
FDataflowImageCombineChannelsNode::FDataflowImageCombineChannelsNode
          (FDataflowImageCombineChannelsNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->ResolutionOptions = Highest;
  this->_padding_ = (longlong)&___7FDataflowImageCombineChannelsNode__6B_;
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
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  *(undefined2 *)((longlong)&(this->Red).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Green).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Blue).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Alpha).Image._padding_ + 4) = 0x201;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  this->Resolution = Resolution512;
  return this;
}

// ~FDataflowImageCombineChannelsNode @ 1444337c0

void __thiscall
FDataflowImageCombineChannelsNode::~FDataflowImageCombineChannelsNode
          (FDataflowImageCombineChannelsNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Image).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// GetUserDefinedResolution @ 14444ec50

void __thiscall
FDataflowImageCombineChannelsNode::GetUserDefinedResolution
          (FDataflowImageCombineChannelsNode *this,
          TArray<FDataflowImage_const_*,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  *param_2 = this->Resolution;
  *param_3 = this->Resolution;
  if ((this->ResolutionOptions != UserDefined) && (param_1->ArrayNum != 0)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(param_1->AllocatorInstance).Data != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = **(int **)(param_1->AllocatorInstance).Data;
      if ((param_1->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      iVar2 = param_1->ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      iVar11 = *(int *)(*(longlong *)pFVar9 + 4);
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FDataflowImage_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar1) break;
        piVar5 = *(int **)pFVar9;
        iVar7 = iVar11;
        if (piVar5 == (int *)0x0) {
LAB_14444edd4:
          iVar11 = iVar7;
          pFVar9 = pFVar9 + 8;
        }
        else {
          iVar3 = *piVar5;
          iVar4 = piVar5[1];
          if ((iVar3 < 1) || (iVar4 < 1)) goto LAB_14444edd4;
          if (this->ResolutionOptions != Highest) {
            if (this->ResolutionOptions == Lowest) {
              if (iVar10 < iVar3) {
                iVar3 = iVar10;
              }
              iVar10 = iVar3;
              iVar7 = iVar4;
              if (iVar11 < iVar4) {
                iVar7 = iVar11;
              }
            }
            goto LAB_14444edd4;
          }
          if (iVar3 < iVar10) {
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
          if (iVar4 < iVar11) {
            iVar4 = iVar11;
          }
          iVar11 = iVar4;
          pFVar9 = pFVar9 + 8;
        }
      }
      if ((0 < iVar10) && (0 < iVar11)) {
        *param_2 = iVar10;
        *param_3 = iVar11;
      }
    }
  }
  return;
}

