// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e843e20

UScriptStruct * __cdecl FMakeCylinderMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCylinderMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCylinderMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e844d40

FName __thiscall FMakeCylinderMeshDataflowNode::GetType(FMakeCylinderMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeCylinderMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e844f50

bool __thiscall
FMakeCylinderMeshDataflowNode::IsA(FMakeCylinderMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeCylinderMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e844fb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e844fb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e844fd6;
      }
    }
  }
  bVar5 = true;
LAB_14e844fd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e845050

FStructOnScope * __thiscall
FMakeCylinderMeshDataflowNode::NewStructOnScope(FMakeCylinderMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeCylinderMeshDataflowNode,(UObject *)pUVar2
                           ,L"MakeCylinderMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e845350

void __thiscall
FMakeCylinderMeshDataflowNode::SerializeInternal
          (FMakeCylinderMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCylinderMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCylinderMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8453cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e845430

FName __thiscall FMakeCylinderMeshDataflowNode::GetDisplayName(FMakeCylinderMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeCylinderMesh");
  return in_RDX;
}

// GetCategory @ 14e845670

FName __thiscall FMakeCylinderMeshDataflowNode::GetCategory(FMakeCylinderMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e8456a0

FString * __thiscall
FMakeCylinderMeshDataflowNode::GetTags
          (FMakeCylinderMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e845730

UScriptStruct * __thiscall
FMakeCylinderMeshDataflowNode::TypedScriptStruct(FMakeCylinderMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCylinderMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCylinderMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCylinderMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e846730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMakeCylinderMeshDataflowNode::Evaluate
          (FMakeCylinderMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDynamicMesh3 *this_00;
  undefined1 *puVar1;
  UObject *pUVar2;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  undefined1 auStack_158 [32];
  TObjectPtr<UDynamicMesh>_u_0 local_138 [2];
  undefined1 local_128 [160];
  undefined2 local_88;
  int local_58;
  undefined2 local_54;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar1 == &this->Mesh) {
    pUVar2 = GetTransientPackageAsObject();
    this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar2);
    local_138[0].DebugPtr = this_01.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
    }
    UDynamicMesh::Reset(this_01.DebugPtr);
    this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
    local_48 = this->Radius1;
    if (this->Radius1 <= __real_358637bd) {
      local_48 = __real_358637bd;
    }
    local_128._8_8_ = (FScriptContainerElement *)0x0;
    local_40 = this->Height;
    if (this->Height <= __real_358637bd) {
      local_40 = __real_358637bd;
    }
    local_128._16_8_ = 0;
    local_128._24_8_ = (FScriptContainerElement *)0x0;
    local_128._32_8_ = 0;
    local_128._40_8_ = (FScriptContainerElement *)0x0;
    local_128._48_8_ = 0;
    local_128._56_8_ = (FScriptContainerElement *)0x0;
    local_128._64_8_ = 0;
    local_128._72_8_ = (FScriptContainerElement *)0x0;
    local_128._80_8_ = 0;
    local_128._88_8_ = (FScriptContainerElement *)0x0;
    local_128._96_8_ = 0;
    local_128._104_8_ = (FScriptContainerElement *)0x0;
    local_128._112_8_ = 0;
    local_128._120_8_ = (FScriptContainerElement *)0x0;
    local_128._128_8_ = 0;
    local_128._136_8_ = (FScriptContainerElement *)0x0;
    local_128._144_8_ = 0;
    local_128[0x98] = false;
    local_128._0_8_ = &___7FCylinderGenerator_Geometry_UE__6B_;
    local_44 = this->Radius2;
    if (this->Radius2 <= __real_358637bd) {
      local_44 = __real_358637bd;
    }
    local_3c = this->LengthSamples;
    local_58 = this->AngleSamples;
    local_88 = 0x100;
    local_54 = 0x101;
    local_50 = 2;
    UE::Geometry::FCylinderGenerator::Generate((FCylinderGenerator *)local_128);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_128);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_138[0].ObjectPtr,
               &this->Mesh);
    local_128._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_128._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._136_8_);
    }
    if ((FScriptContainerElement *)local_128._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._120_8_);
    }
    if ((FScriptContainerElement *)local_128._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._104_8_);
    }
    if ((FScriptContainerElement *)local_128._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._88_8_);
    }
    if ((FScriptContainerElement *)local_128._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._72_8_);
    }
    if ((FScriptContainerElement *)local_128._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._56_8_);
    }
    if ((FScriptContainerElement *)local_128._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._40_8_);
    }
    if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._24_8_);
    }
    if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
  }
  return;
}

// FMakeCylinderMeshDataflowNode @ 14e922420

FMakeCylinderMeshDataflowNode * __thiscall
FMakeCylinderMeshDataflowNode::FMakeCylinderMeshDataflowNode
          (FMakeCylinderMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->Radius1 = 1.0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeCylinderMeshDataflowNode__6B_;
  local_28.Reference = &this->Mesh;
  local_48.Reference = (void *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_28.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  this->Radius2 = 1.0;
  this->Height = 5.0;
  this->LengthSamples = 0;
  this->AngleSamples = 0xc;
  local_48.Index = -1;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

