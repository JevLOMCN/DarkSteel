// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b3a20

UScriptStruct * __cdecl FVoronoiFractureDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode,(UObject *)pUVar1,
                         L"VoronoiFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton;
}

// GetType @ 14e8b3c20

FName __thiscall FVoronoiFractureDataflowNode::GetType(FVoronoiFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVoronoiFractureDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b3c50

bool __thiscall FVoronoiFractureDataflowNode::IsA(FVoronoiFractureDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVoronoiFractureDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b3cb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b3cb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b3cd6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b3cd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b3d10

FStructOnScope * __thiscall
FVoronoiFractureDataflowNode::NewStructOnScope(FVoronoiFractureDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode,(UObject *)pUVar2,
                           L"VoronoiFractureDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b3dd0

void __thiscall
FVoronoiFractureDataflowNode::SerializeInternal
          (FVoronoiFractureDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode,(UObject *)pUVar1,
                         L"VoronoiFractureDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b3e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b4130

FName __thiscall FVoronoiFractureDataflowNode::GetDisplayName(FVoronoiFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VoronoiFracture");
  return in_RDX;
}

// GetCategory @ 14e8b4160

FName __thiscall FVoronoiFractureDataflowNode::GetCategory(FVoronoiFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8b4190

FString * __thiscall
FVoronoiFractureDataflowNode::GetTags
          (FVoronoiFractureDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b41c0

UScriptStruct * __thiscall
FVoronoiFractureDataflowNode::TypedScriptStruct(FVoronoiFractureDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode,(UObject *)pUVar1,
                         L"VoronoiFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVoronoiFractureDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b4650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVoronoiFractureDataflowNode::Evaluate
          (FVoronoiFractureDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FScriptContainerElement *_Src;
  bool bVar10;
  undefined1 *puVar11;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar12;
  FManagedArrayCollection *pFVar13;
  float *pfVar14;
  int *piVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  undefined1 auStackY_258 [32];
  FConnectionReference local_1d8;
  int local_1c0;
  int local_1bc;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1b8;
  FDataflowSelection local_1a8;
  FManagedArrayCollection local_178;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar1 = &this->Collection;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == pFVar1) {
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_1d8.Index = -1;
    local_1d8.ContainerReference = (void *)0x0;
    local_1d8.Reference = &this->TransformSelection;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
    if ((pFVar12->Connection == (FDataflowOutput *)0x0) ||
       (bVar10 = FDataflowSelection::AnySelected(this_00), !bVar10)) {
      pFVar13 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,pFVar13,pFVar1);
    }
    else {
      pFVar13 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection(&local_178,pFVar13);
      local_1d8.Reference = &this->CollisionSampleSpacing;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      bVar10 = this->AddSamplesForCollision;
      fVar2 = *pfVar14;
      local_1d8.Reference = &this->PointSpacing;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar3 = *pfVar14;
      local_1d8.Reference = &this->OctaveNumber;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_1d8.Reference);
      local_1c0 = *piVar15;
      local_1d8.Reference = &this->Lacunarity;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar4 = *pfVar14;
      local_1d8.Reference = &this->Persistence;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar5 = *pfVar14;
      local_1d8.Reference = &this->Frequency;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar6 = *pfVar14;
      local_1d8.Reference = &this->Amplitude;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar7 = *pfVar14;
      local_1d8.Reference = &this->Grout;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar8 = *pfVar14;
      local_1d8.Reference = &this->ChanceToFracture;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      fVar9 = *pfVar14;
      local_1d8.Reference = &this->RandomSeed;
      local_1d8.Index = -1;
      local_1d8.ContainerReference = (void *)0x0;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
      pfVar14 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d8.Reference);
      local_1bc = (int)*pfVar14;
      pTVar16 = FDataflowNode::
                GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,&this->Points);
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = pTVar16->ArrayNum;
      lVar17 = (longlong)local_1b8.ArrayNum;
      _Src = (pTVar16->AllocatorInstance).Data;
      if (local_1b8.ArrayNum == 0) {
        local_1b8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_1b8.ArrayNum,0,&local_1b8.AllocatorInstance,local_1b8.ArrayNum,
                   &local_1b8.ArrayMax);
        memcpy(local_1b8.AllocatorInstance.Data,_Src,lVar17 * 0x18);
      }
      FDataflowSelection::FDataflowSelection(&local_1a8,this_00);
      FFractureEngineFracturing::VoronoiFracture
                (&local_178,(FDataflowTransformSelection *)&local_1a8,&local_1b8,
                 &UE::Math::TTransform<double>::Identity,local_1bc,fVar9,true,fVar8,fVar7,fVar6,
                 fVar5,fVar4,local_1c0,fVar3,bVar10,fVar2);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_178,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection(&local_178);
    }
  }
  return;
}

// FVoronoiFractureDataflowNode @ 14e931ea0

FVoronoiFractureDataflowNode * __thiscall
FVoronoiFractureDataflowNode::FVoronoiFractureDataflowNode
          (FVoronoiFractureDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  FName this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FVoronoiFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pFVar1 = (FName *)((longlong)local_res8 + 0x308);
  pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           ((longlong)local_res8 + 0x2f8);
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pfVar3 = (float *)((longlong)local_res8 + 0x33c);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pfVar4 = (float *)((longlong)local_res8 + 0x340);
  pfVar5 = (float *)((longlong)local_res8 + 0x330);
  *pFVar1 = FDataflowTransformSelection::TransformGroupName;
  pfVar6 = (float *)((longlong)local_res8 + 0x334);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  pfVar7 = (float *)((longlong)local_res8 + 0x344);
  *(undefined4 *)((longlong)local_res8 + 0x328) = 0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined4 *)((longlong)local_res8 + 0x32c) = 0x80;
  *pfVar3 = 0.0;
  *pfVar4 = 0.0;
  *(bool *)((longlong)local_res8 + 0x358) = false;
  *pfVar5 = -1.0;
  *pfVar6 = 1.0;
  *(bool *)((longlong)local_res8 + 0x338) = true;
  *pfVar7 = 0.1;
  *(float *)((longlong)local_res8 + 0x348) = 0.5;
  *(float *)((longlong)local_res8 + 0x34c) = 2.0;
  *(int *)((longlong)local_res8 + 0x350) = 4;
  *(float *)((longlong)local_res8 + 0x354) = 10.0;
  *(float *)((longlong)local_res8 + 0x35c) = 50.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar4;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x348);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x34c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x350);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x354);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x35c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FVoronoiFractureDataflowNode *)this_00;
}

// FVoronoiFractureDataflowNode @ 14e932200

FVoronoiFractureDataflowNode * __thiscall
FVoronoiFractureDataflowNode::FVoronoiFractureDataflowNode(FVoronoiFractureDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FVoronoiFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->RandomSeed = -1.0;
  this->ChanceToFracture = 1.0;
  this->GroupFracture = true;
  this->Grout = 0.0;
  this->Amplitude = 0.0;
  this->Frequency = 0.1;
  this->Persistence = 0.5;
  this->Lacunarity = 2.0;
  this->OctaveNumber = 4;
  this->PointSpacing = 10.0;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  return this;
}

