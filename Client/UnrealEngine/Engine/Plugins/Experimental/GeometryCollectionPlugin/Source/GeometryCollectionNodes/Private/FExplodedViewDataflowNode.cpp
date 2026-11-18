// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c35d0

UScriptStruct * __cdecl FExplodedViewDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode,(UObject *)pUVar1,
                         L"ExplodedViewDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton;
}

// GetType @ 14e8c3700

FName __thiscall FExplodedViewDataflowNode::GetType(FExplodedViewDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FExplodedViewDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c37b0

bool __thiscall FExplodedViewDataflowNode::IsA(FExplodedViewDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FExplodedViewDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c3818;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c3818:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c3836;
      }
    }
  }
  bVar5 = true;
LAB_14e8c3836:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c3900

FStructOnScope * __thiscall
FExplodedViewDataflowNode::NewStructOnScope(FExplodedViewDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode,(UObject *)pUVar2,
                           L"ExplodedViewDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c39f0

void __thiscall
FExplodedViewDataflowNode::SerializeInternal(FExplodedViewDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode,(UObject *)pUVar1,
                         L"ExplodedViewDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c3a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c3ab0

FName __thiscall FExplodedViewDataflowNode::GetDisplayName(FExplodedViewDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ExplodedView");
  return in_RDX;
}

// GetCategory @ 14e8c3b20

FName __thiscall FExplodedViewDataflowNode::GetCategory(FExplodedViewDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c3b50

FString * __thiscall
FExplodedViewDataflowNode::GetTags(FExplodedViewDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c3b80

UScriptStruct * __thiscall
FExplodedViewDataflowNode::TypedScriptStruct(FExplodedViewDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode,(UObject *)pUVar1,
                         L"ExplodedViewDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExplodedViewDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c3d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FExplodedViewDataflowNode::Evaluate
          (FExplodedViewDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  FManagedArrayCollection *pFVar11;
  FDataflowInput *pFVar12;
  TVector<double> *pTVar13;
  FName *pFVar14;
  TManagedArray<UE::Math::TVector<float>_> *pTVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_198 [32];
  FConnectionReference local_168;
  FConnectionReference local_150;
  FConnectionReference local_138;
  FName local_120;
  FManagedArrayCollection local_118;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar1 = &this->Collection;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar10 == pFVar1) {
    pFVar11 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    FManagedArrayCollection::FManagedArrayCollection(&local_118,pFVar11);
    local_150.Reference = &this->Offset;
    local_150.Index = -1;
    local_150.ContainerReference = (void *)0x0;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
    pTVar13 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar12,param_1,local_150.Reference);
    FVar6 = FGeometryCollection::VerticesGroup;
    pvVar3 = (void *)(pTVar13->field0_0x0)._s_0.Z;
    dVar20 = SUB168(*(undefined1 (*) [16])&pTVar13->field0_0x0,0);
    dVar19 = SUB168(*(undefined1 (*) [16])&pTVar13->field0_0x0,8);
    local_168.ContainerReference = pvVar3;
    if (__real_3f1a36e2e0000000 <
        SQRT(dVar20 * dVar20 + dVar19 * dVar19 + (double)pvVar3 * (double)pvVar3)) {
      pFVar14 = ::FName::FName(&local_120,"Vertex");
      pTVar15 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                          (&local_118,*pFVar14,FVar6);
      uVar18 = 0;
      iVar8 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
      if (0 < iVar8) {
        lVar17 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar18 < *(int *)&pTVar15->field_0x18) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)&pTVar15->field_0x10;
          uVar18 = uVar18 + 1;
          *(float *)(lVar17 + lVar4) = (float)dVar20 + *(float *)(lVar17 + lVar4);
          *(float *)(lVar17 + 4 + lVar4) = (float)dVar19 + *(float *)(lVar17 + 4 + lVar4);
          *(float *)(lVar17 + 8 + lVar4) = (float)(double)pvVar3 + *(float *)(lVar17 + 8 + lVar4);
          lVar17 = lVar17 + 0xc;
          iVar8 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
        } while ((int)uVar18 < iVar8);
      }
    }
    local_138.Reference = &this->UniformScale;
    local_138.Index = -1;
    local_138.ContainerReference = (void *)0x0;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_138.Reference);
    local_168.Index = -1;
    local_168.ContainerReference = (void *)0x0;
    fVar2 = *pfVar16;
    local_168.Reference = &this->Scale;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
    pTVar13 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar12,param_1,local_168.Reference);
    FFractureEngineFracturing::GenerateExplodedViewAttribute(&local_118,pTVar13,fVar2,-1,-1);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_118,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_118);
  }
  return;
}

// FExplodedViewDataflowNode @ 14e91c7c0

FExplodedViewDataflowNode * __thiscall
FExplodedViewDataflowNode::FExplodedViewDataflowNode
          (FExplodedViewDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FExplodedViewDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  this->UniformScale = 1.0;
  (this->Offset).field0_0x0._s_0.X = 0.0;
  (this->Offset).field0_0x0._s_0.Y = 0.0;
  (this->Offset).field0_0x0._s_0.Z = 0.0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->UniformScale;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Scale;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Offset;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FExplodedViewDataflowNode @ 14e91c950

FExplodedViewDataflowNode * __thiscall
FExplodedViewDataflowNode::FExplodedViewDataflowNode(FExplodedViewDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FExplodedViewDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->UniformScale = 1.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->Offset).field0_0x0._s_0.X = 0.0;
  (this->Offset).field0_0x0._s_0.Y = 0.0;
  (this->Offset).field0_0x0._s_0.Z = 0.0;
  return this;
}

