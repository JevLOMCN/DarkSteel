// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e860c80

UScriptStruct * __cdecl FRandomizeFloatArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"RandomizeFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e860d60

FName __thiscall FRandomizeFloatArrayDataflowNode::GetType(FRandomizeFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRandomizeFloatArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e860e80

bool __thiscall
FRandomizeFloatArrayDataflowNode::IsA(FRandomizeFloatArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRandomizeFloatArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e860ee8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e860ee8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e860f06;
      }
    }
  }
  bVar5 = true;
LAB_14e860f06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e861000

FStructOnScope * __thiscall
FRandomizeFloatArrayDataflowNode::NewStructOnScope(FRandomizeFloatArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeFloatArrayDataflowNode,
                           (UObject *)pUVar2,L"RandomizeFloatArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e861100

void __thiscall
FRandomizeFloatArrayDataflowNode::SerializeInternal
          (FRandomizeFloatArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"RandomizeFloatArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86117d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e861220

FName __thiscall
FRandomizeFloatArrayDataflowNode::GetDisplayName(FRandomizeFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RandomizeFloatArray");
  return in_RDX;
}

// GetCategory @ 14e861280

FName __thiscall
FRandomizeFloatArrayDataflowNode::GetCategory(FRandomizeFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e861340

FString * __thiscall
FRandomizeFloatArrayDataflowNode::GetTags
          (FRandomizeFloatArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8613a0

UScriptStruct * __thiscall
FRandomizeFloatArrayDataflowNode::TypedScriptStruct(FRandomizeFloatArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"RandomizeFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomizeFloatArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e861570

void __thiscall
FRandomizeFloatArrayDataflowNode::Evaluate
          (FRandomizeFloatArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *_Src;
  float fVar5;
  undefined1 *puVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  FDataflowInput *pFVar8;
  float *pfVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  TArray<float,TSizedDefaultAllocator<32>_> local_98;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  FConnectionReference local_78 [4];
  
  pTVar2 = &this->FloatArray;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar6 == pTVar2) {
    pTVar7 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,pTVar2);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = pTVar7->ArrayNum;
    lVar12 = (longlong)(int)local_80;
    _Src = (pTVar7->AllocatorInstance).Data;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_80,0,&local_88,local_80,&local_7c);
      memcpy(local_88.Data,_Src,lVar12 << 2);
    }
    local_78[0].Reference = &this->RandomRangeMin;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar9 = FDataflowInput::GetValue<float>(pFVar8,param_1,local_78[0].Reference);
    fVar3 = *pfVar9;
    local_78[0].Reference = &this->RandomRangeMax;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    pfVar9 = FDataflowInput::GetValue<float>(pFVar8,param_1,local_78[0].Reference);
    fVar4 = *pfVar9;
    local_78[0].Reference = &this->RandomSeed;
    local_78[0].Index = -1;
    local_78[0].ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,local_78);
    puVar10 = (uint *)FDataflowInput::GetValue<int>(pFVar8,param_1,local_78[0].Reference);
    uVar13 = (ulonglong)local_80;
    uVar11 = *puVar10;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    if (0 < (int)local_80) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_80,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
      fVar5 = __real_3f800000;
      do {
        uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
        if (local_98.ArrayNum == local_98.ArrayMax) {
          local_98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        iVar1 = local_98.ArrayNum + 1;
        *(float *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4) =
             ((float)(uVar11 >> 9 | 0x3f800000) - fVar5) * (fVar4 - fVar3) + fVar3;
        uVar13 = uVar13 - 1;
        local_98.ArrayNum = iVar1;
      } while (uVar13 != 0);
    }
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_98,pTVar2);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return;
}

// FRandomizeFloatArrayDataflowNode @ 14e92a1c0

FRandomizeFloatArrayDataflowNode * __thiscall
FRandomizeFloatArrayDataflowNode::FRandomizeFloatArrayDataflowNode
          (FRandomizeFloatArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  pTVar1 = &this->FloatArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FRandomizeFloatArrayDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  this->RandomRangeMin = 0.0;
  this->RandomRangeMax = 1.0;
  this->RandomSeed = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomRangeMin;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomRangeMax;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar1;
  local_48.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

