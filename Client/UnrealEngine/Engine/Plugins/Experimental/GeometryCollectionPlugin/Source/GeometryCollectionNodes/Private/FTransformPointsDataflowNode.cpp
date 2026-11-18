// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8adca0

UScriptStruct * __cdecl FTransformPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformPointsDataflowNode,(UObject *)pUVar1,
                         L"TransformPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e8add50

FName __thiscall FTransformPointsDataflowNode::GetType(FTransformPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FTransformPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8adec0

bool __thiscall FTransformPointsDataflowNode::IsA(FTransformPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FTransformPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8adf28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8adf28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8adf46;
      }
    }
  }
  bVar5 = true;
LAB_14e8adf46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8adf80

FStructOnScope * __thiscall
FTransformPointsDataflowNode::NewStructOnScope(FTransformPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTransformPointsDataflowNode,(UObject *)pUVar2,
                           L"TransformPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ae0c0

void __thiscall
FTransformPointsDataflowNode::SerializeInternal
          (FTransformPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformPointsDataflowNode,(UObject *)pUVar1,
                         L"TransformPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ae13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ae180

FName __thiscall FTransformPointsDataflowNode::GetDisplayName(FTransformPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransformPoints");
  return in_RDX;
}

// GetCategory @ 14e8ae270

FName __thiscall FTransformPointsDataflowNode::GetCategory(FTransformPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e8ae2e0

FString * __thiscall
FTransformPointsDataflowNode::GetTags
          (FTransformPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ae310

UScriptStruct * __thiscall
FTransformPointsDataflowNode::TypedScriptStruct(FTransformPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformPointsDataflowNode,(UObject *)pUVar1,
                         L"TransformPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformPointsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8ae350

/* WARNING: Removing unreachable block (ram,0x00014e8ae577) */
/* WARNING: Removing unreachable block (ram,0x00014e8ae585) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FTransformPointsDataflowNode::GetRenderParametersImpl
          (FTransformPointsDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"Points");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"TArray<FVector>");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"PointsRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_88.Data;
  lVar10 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  local_58 = FVar1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar10 << 3);
  }
  local_40 = *pFVar5;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e8ae730

void __thiscall
FTransformPointsDataflowNode::Evaluate
          (FTransformPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 *puVar11;
  FDataflowInput *this_00;
  TTransform<double> *pTVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  FConnectionReference local_a8 [5];
  
  pTVar1 = &this->Points;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar11 == pTVar1) {
    local_a8[0].Reference = &this->Transform;
    local_a8[0].Index = -1;
    local_a8[0].ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,local_a8);
    pTVar12 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                        (this_00,param_1,local_a8[0].Reference);
    pTVar13 = FDataflowNode::
              GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,pTVar1);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = pTVar13->ArrayNum;
    lVar17 = (longlong)local_b8.ArrayNum;
    pFVar4 = (pTVar13->AllocatorInstance).Data;
    if (local_b8.ArrayNum == 0) {
      local_b8.ArrayMax = 0;
      iVar15 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_b8.ArrayNum,0,&local_b8.AllocatorInstance,local_b8.ArrayNum,
                 &local_b8.ArrayMax);
      memcpy(local_b8.AllocatorInstance.Data,pFVar4,lVar17 * 0x18);
      iVar15 = local_b8.ArrayNum;
    }
    pFVar4 = local_b8.AllocatorInstance.Data + (longlong)iVar15 * 0x18;
    FVar14.Data = local_b8.AllocatorInstance.Data;
    iVar16 = iVar15;
    while( true ) {
      if (iVar16 != iVar15) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar14.Data == pFVar4) break;
      auVar3 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
      dVar8 = *(double *)(FVar14.Data + 0x10) * (pTVar12->Scale3D).ZW.m128d_f64[0];
      dVar9 = (pTVar12->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar22 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
      dVar10 = (pTVar12->Rotation).ZW.m128d_f64[1];
      dVar6 = (pTVar12->Scale3D).XY.m128d_f64[0] * *(double *)FVar14.Data;
      dVar7 = (pTVar12->Scale3D).XY.m128d_f64[1] * *(double *)(FVar14.Data + 8);
      uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar18 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
      auVar20 = blendpd(auVar18,auVar3,2);
      auVar27._8_4_ = SUB84(dVar7,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = uVar26;
      dVar2 = auVar3._0_8_;
      auVar28._0_8_ = auVar27._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar6;
      auVar28._8_8_ = dVar8 * auVar18._8_8_ - dVar2 * dVar7;
      auVar23._8_4_ = SUB84(dVar7,0);
      auVar23._0_8_ = dVar6;
      auVar23._12_4_ = uVar26;
      auVar18._8_4_ = SUB84(dVar9,0);
      auVar18._0_8_ = dVar8;
      auVar18._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar18 = blendpd(auVar23,auVar18,2);
      auVar19._0_8_ = auVar18._0_8_ * dVar2 - auVar20._0_8_ * dVar8;
      auVar19._8_8_ = auVar18._8_8_ * auVar3._8_8_ - auVar20._8_8_ * dVar9;
      auVar18 = blendpd(auVar28,auVar19,2);
      dVar9 = auVar28._8_8_ + auVar28._8_8_;
      dVar5 = auVar19._0_8_ + auVar19._0_8_;
      uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar29._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar29._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar9;
      auVar24._12_4_ = uVar26;
      auVar21._8_4_ = SUB84(dVar5,0);
      auVar21._0_8_ = dVar9;
      auVar21._12_4_ = uVar26;
      auVar18 = blendpd(auVar21,auVar29,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar9;
      auVar25._8_8_ = auVar29._0_8_ * auVar22._8_8_ - dVar2 * dVar5;
      auVar20._8_4_ = SUB84(auVar25._8_8_,0);
      auVar20._0_8_ = auVar25._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar23 = blendpd(auVar22,auVar3,2);
      auVar22._0_8_ = auVar18._0_8_ * dVar2 - auVar23._0_8_ * auVar29._0_8_;
      auVar22._8_8_ = auVar18._8_8_ * auVar3._8_8_ - auVar23._8_8_ * auVar29._8_8_;
      auVar18 = blendpd(auVar25,auVar22,2);
      dVar5 = dVar5 * dVar10 + dVar7 + auVar22._0_8_ + (pTVar12->Translation).XY.m128d_f64[1];
      dVar2 = (pTVar12->Translation).ZW.m128d_f64[0];
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar9 * dVar10 + dVar6 + auVar20._8_8_ + (pTVar12->Translation).XY.m128d_f64[0]
      ;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])FVar14.Data = auVar3;
      *(double *)(FVar14.Data + 0x10) = auVar29._0_8_ * dVar10 + dVar8 + auVar18._0_8_ + dVar2;
      FVar14.Data = FVar14.Data + 0x18;
      iVar16 = local_b8.ArrayNum;
    }
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_b8,pTVar1);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// FTransformPointsDataflowNode @ 14e92f7d0

FTransformPointsDataflowNode * __thiscall
FTransformPointsDataflowNode::FTransformPointsDataflowNode
          (FTransformPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->Points;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FTransformPointsDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58.ContainerReference = (void *)0x0;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Transform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FTransformPointsDataflowNode @ 14e92f910

FTransformPointsDataflowNode * __thiscall
FTransformPointsDataflowNode::FTransformPointsDataflowNode(FTransformPointsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FTransformPointsDataflowNode__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

