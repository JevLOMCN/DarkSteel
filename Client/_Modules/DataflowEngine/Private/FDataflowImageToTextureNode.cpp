// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticStruct @ 1462c2730

UScriptStruct * __cdecl FDataflowImageToTextureNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar1,
                         L"DataflowImageToTextureNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton;
}

// GetType @ 1462c2770

FName __thiscall FDataflowImageToTextureNode::GetType(FDataflowImageToTextureNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowImageToTextureNode");
  return in_RDX;
}

// IsA @ 1462c27a0

bool __thiscall FDataflowImageToTextureNode::IsA(FDataflowImageToTextureNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowImageToTextureNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c2808;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c2808:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c2826;
      }
    }
  }
  bVar5 = true;
LAB_1462c2826:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c2860

FStructOnScope * __thiscall
FDataflowImageToTextureNode::NewStructOnScope(FDataflowImageToTextureNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar2,
                           L"DataflowImageToTextureNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c28e0

void __thiscall
FDataflowImageToTextureNode::SerializeInternal(FDataflowImageToTextureNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar1,
                         L"DataflowImageToTextureNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c295d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c2970

FName __thiscall FDataflowImageToTextureNode::GetDisplayName(FDataflowImageToTextureNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ImageToTexture");
  return in_RDX;
}

// GetCategory @ 1462c29a0

FName __thiscall FDataflowImageToTextureNode::GetCategory(FDataflowImageToTextureNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Image");
  return in_RDX;
}

// GetTags @ 1462c29d0

FString * __thiscall
FDataflowImageToTextureNode::GetTags
          (FDataflowImageToTextureNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Image Texture");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c2a00

UScriptStruct * __thiscall
FDataflowImageToTextureNode::TypedScriptStruct(FDataflowImageToTextureNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar1,
                         L"DataflowImageToTextureNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton;
}

// Evaluate @ 1462c2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FDataflowImageToTextureNode::Evaluate
          (FDataflowImageToTextureNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FName FVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  FDataflowInput *this_00;
  FName *pFVar10;
  UClass *pUVar11;
  FName FVar12;
  UClass *pUVar13;
  UTexture2D *pUVar14;
  FImage *pFVar15;
  FDataflowOutput *this_01;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  undefined8 *local_150;
  FProperty *local_148;
  FName local_140;
  FString local_130;
  FConnectionReference local_120;
  FConnectionReference local_108;
  FImage local_f0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UTexture2D> *)puVar9 == &this->TransientTexture) {
    local_120.Reference = &this->TextureName;
    local_120.ContainerReference = (void *)0x0;
    local_120.Index = -1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
    pFVar10 = FDataflowInput::GetValue<FName>(this_00,param_1,local_120.Reference);
    FVar1 = *pFVar10;
    pUVar11 = (UClass *)GetTransientPackage();
    FVar12 = (FName)Z_Construct_UClass_UTexture2D_NoRegister();
    MakeUniqueObjectName((UObject *)&local_140,pUVar11,FVar12,FVar1.ComparisonIndex.Value.Value);
    if (local_140 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar11,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar13 = Z_Construct_UClass_UTexture2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = local_140.ComparisonIndex.Value;
    local_c8._20_4_ = local_140.Number;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar11;
    pUVar14 = (UTexture2D *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar20 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pFVar15 = &FDataflowNode::GetValue<FDataflowImage>((FDataflowNode *)this,param_1,&this->Image)->
               Image;
    FImage::FImage(&local_f0,pFVar15);
    iVar7 = FDataflowImage::GetWidth((FDataflowImage *)&local_f0);
    if ((iVar7 < 1) || (iVar7 = FDataflowImage::GetHeight((FDataflowImage *)&local_f0), iVar7 < 1))
    {
      ::FString::FString(&local_130,L"Input image is empty");
      UE::Dataflow::FContext::Warning
                (param_1,&local_130,(FDataflowNode *)0x0,(FDataflowOutput *)0x0);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar15 = FDataflowImage::GetImage((FDataflowImage *)&local_f0);
      DataflowTextureAssetNodes::Private::UpdateTexture2DFromImage(pUVar14,pFVar15);
    }
    local_108.Index = -1;
    local_108.ContainerReference = (void *)0x0;
    local_108.Reference = &this->TransientTexture;
    this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_108);
    if (this_01 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<UTexture2D>_&,TObjectPtr<UTexture2D>_>'::__l7::<lambda_1>
      ::operator()(local_158);
    }
    else if (this_01->_padding_ != 0) {
      FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar17 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_01,(FGuid *)&local_120);
      local_148 = (FProperty *)this_01->_padding_;
      uVar18 = CityHash64((char *)&this_01->_padding_,0x10);
      local_150 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x50);
      if (puVar19 == (undefined8 *)0x0) {
        puVar19 = (undefined8 *)0x0;
      }
      else {
        uVar2 = *(undefined8 *)FVar16.Value;
        uVar4 = *(undefined8 *)pFVar17;
        uVar5 = *(undefined8 *)&pFVar17->C;
        *puVar19 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar19[4] = local_148;
        puVar19[6] = uVar2;
        *(undefined4 *)(puVar19 + 1) = 3;
        *(undefined8 *)((longlong)puVar19 + 0xc) = uVar4;
        *(undefined8 *)((longlong)puVar19 + 0x14) = uVar5;
        *(uint *)(puVar19 + 5) = uVar8;
        puVar19[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar19 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar19 + 7));
        *puVar19 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar19[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>&___ptr64>::
                      _vftable__for__FGCObject__;
        puVar19[9] = pUVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
      }
      puVar6 = local_150;
      if (local_150 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_150;
        local_150 = puVar19;
        (*(code *)*puVar3)(puVar6,1);
        puVar19 = local_150;
      }
      local_150 = puVar19;
      if (local_150 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar18,local_148,pFVar17,uVar8,(FTimestamp *)FVar16.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar18 & 0xffffffff,&local_150);
      }
      if (local_150 != (undefined8 *)0x0) {
        (**(code **)*local_150)(local_150,1);
      }
    }
    if (local_f0.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.RawData.AllocatorInstance.Data);
    }
    return;
  }
  return;
}

// FDataflowImageToTextureNode @ 1462ce130

FDataflowImageToTextureNode * __thiscall
FDataflowImageToTextureNode::FDataflowImageToTextureNode
          (FDataflowImageToTextureNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName *pFVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowImageToTextureNode__6B_;
  pFVar1 = &this->TextureName;
  local_58.Reference = &this->Image;
  pFVar1->ComparisonIndex = 0;
  pFVar1->Number = 0;
  (((FDataflowImage *)local_58.Reference)->Image)._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  (this->TransientTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->TransientTexture;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

