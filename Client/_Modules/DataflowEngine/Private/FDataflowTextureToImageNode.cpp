// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticStruct @ 1462c20c0

UScriptStruct * __cdecl FDataflowTextureToImageNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar1,
                         L"DataflowTextureToImageNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton;
}

// GetType @ 1462c2100

FName __thiscall FDataflowTextureToImageNode::GetType(FDataflowTextureToImageNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowTextureToImageNode");
  return in_RDX;
}

// IsA @ 1462c2130

bool __thiscall FDataflowTextureToImageNode::IsA(FDataflowTextureToImageNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowTextureToImageNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c2198;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c2198:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c21b6;
      }
    }
  }
  bVar5 = true;
LAB_1462c21b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c21f0

FStructOnScope * __thiscall
FDataflowTextureToImageNode::NewStructOnScope(FDataflowTextureToImageNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar2,
                           L"DataflowTextureToImageNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c2270

void __thiscall
FDataflowTextureToImageNode::SerializeInternal(FDataflowTextureToImageNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar1,
                         L"DataflowTextureToImageNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c22ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c2300

FName __thiscall FDataflowTextureToImageNode::GetDisplayName(FDataflowTextureToImageNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TextureToImage");
  return in_RDX;
}

// GetCategory @ 1462c2330

FName __thiscall FDataflowTextureToImageNode::GetCategory(FDataflowTextureToImageNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Image");
  return in_RDX;
}

// GetTags @ 1462c2360

FString * __thiscall
FDataflowTextureToImageNode::GetTags
          (FDataflowTextureToImageNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Texture Image");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c2390

UScriptStruct * __thiscall
FDataflowTextureToImageNode::TypedScriptStruct(FDataflowTextureToImageNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar1,
                         L"DataflowTextureToImageNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton;
}

// Evaluate @ 1462c23d0

/* WARNING: Removing unreachable block (ram,0x0001462c2659) */
/* WARNING: Removing unreachable block (ram,0x0001462c2645) */
/* WARNING: Removing unreachable block (ram,0x0001462c2652) */
/* WARNING: Removing unreachable block (ram,0x0001462c265d) */
/* WARNING: Removing unreachable block (ram,0x0001462c2662) */

void __thiscall
FDataflowTextureToImageNode::Evaluate
          (FDataflowTextureToImageNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowImage *pFVar1;
  int iVar2;
  TObjectPtr<UTexture2D> this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  FDataflowInput *this_01;
  TObjectPtr<UTexture2D>_u_0 *pTVar6;
  int *piVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  undefined8 *local_res8;
  FImage local_108;
  FDataflowImage local_e0;
  FDataflowImage local_b8;
  FDataflowImage local_90;
  FConnectionReference local_68;
  TArrayView<UE::Math::TVector4<float>,__int64> local_48;
  FString local_38;
  
  pFVar1 = &this->Image;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowImage *)puVar5 != pFVar1) {
    return;
  }
  local_68.Reference = &this->TextureAsset;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
  pTVar6 = &FDataflowInput::GetValue<TObjectPtr<UTexture2D>_>(this_01,param_1,local_68.Reference)->
            field0_0x0;
  this_00.field0_0x0 = (TObjectPtr<UTexture2D>_u_0)pTVar6->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1462c246c:
    if (this_00.field0_0x0 != (UTexture2D *)0x0) {
      local_108._padding_ = 0;
      local_108._padding_._0_4_ = 0;
      local_108._padding_._4_2_ = 0x201;
      local_108.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.RawData.ArrayNum = 0;
      local_108.RawData.ArrayMax = 0;
      UTexture2D::GetCPUCopy((UTexture2D *)this_00.field0_0x0);
      if (local_res8 == (undefined8 *)0x0) {
        ::FString::FString(&local_38,L"Unable to read image from texture");
        UE::Dataflow::FContext::Warning
                  (param_1,&local_38,(FDataflowNode *)0x0,(FDataflowOutput *)0x0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_b8.Image._padding_ = 0;
        local_b8.Image._padding_._0_4_ = 0;
        local_b8.Image._padding_._4_2_ = 0x201;
        local_b8.Image.RawData.ArrayMax = 0;
        local_b8.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Image.RawData.ArrayNum = 0;
        FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>
                  ((FDataflowNode *)this,param_1,&local_b8,pFVar1);
        FVar8.Data = local_108.RawData.AllocatorInstance.Data;
        if (local_b8.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Image.RawData.AllocatorInstance.Data);
          FVar8.Data = local_108.RawData.AllocatorInstance.Data;
        }
      }
      else {
        FImage::CopyTo((FImage *)(local_res8 + 2),&local_108,RGBA32F,Linear);
        if (local_res8 != (undefined8 *)0x0) {
          piVar7 = (int *)(local_res8 + 1);
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if (piVar7 == (int *)0x0) {
              local_res8 = (undefined8 *)0x0;
            }
            if (local_res8 != (undefined8 *)0x0) {
              (**(code **)*local_res8)(local_res8,1);
            }
          }
        }
        if ((local_108._padding_._4_1_ != '\x05') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Format == ERawImageFormat::RGBA32F",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                               ,0x29e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar8.Data = local_108.RawData.AllocatorInstance.Data;
        if ((local_108._padding_._4_1_ != '\x05') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Format == ERawImageFormat::RGBA32F",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                               ,0x29e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = (ulonglong)local_108.RawData.ArrayNum >> 4;
        local_e0.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Image.RawData.ArrayNum = 0;
        local_e0.Image._padding_ = 0;
        local_e0.Image._padding_._0_4_ = 0;
        local_e0.Image._padding_._4_2_ = 0x201;
        local_e0.Image.RawData.ArrayMax = 0;
        FDataflowImage::CreateRGBA32F(&local_e0,(int)local_108._padding_,local_108._padding_._4_4_);
        local_48.DataPtr = (TVector4<float> *)FVar8.Data;
        local_48.ArrayNum = uVar9;
        FDataflowImage::CopyRGBAPixels(&local_e0,&local_48);
        FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>
                  ((FDataflowNode *)this,param_1,&local_e0,pFVar1);
        FVar8.Data = local_108.RawData.AllocatorInstance.Data;
        if (local_e0.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Image.RawData.AllocatorInstance.Data);
          FVar8.Data = local_108.RawData.AllocatorInstance.Data;
        }
      }
      goto LAB_1462c26a0;
    }
  }
  else if (this_00.field0_0x0 != (UTexture2D *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
    goto LAB_1462c246c;
  }
  local_90.Image._padding_ = 0;
  local_90.Image._padding_._0_4_ = 0;
  local_90.Image._padding_._4_2_ = 0x201;
  local_90.Image.RawData.ArrayMax = 0;
  local_90.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Image.RawData.ArrayNum = 0;
  FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>
            ((FDataflowNode *)this,param_1,&local_90,pFVar1);
  FVar8.Data = local_90.Image.RawData.AllocatorInstance.Data;
LAB_1462c26a0:
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// FDataflowTextureToImageNode @ 1462ce890

FDataflowTextureToImageNode * __thiscall
FDataflowTextureToImageNode::FDataflowTextureToImageNode
          (FDataflowTextureToImageNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowTextureToImageNode__6B_;
  local_48.Reference = &this->TextureAsset;
  (this->Image).Image._padding_ = 0;
  (((TObjectPtr<UTexture2D> *)local_48.Reference)->field0_0x0).DebugPtr = (UTexture2D *)0x0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Image;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

