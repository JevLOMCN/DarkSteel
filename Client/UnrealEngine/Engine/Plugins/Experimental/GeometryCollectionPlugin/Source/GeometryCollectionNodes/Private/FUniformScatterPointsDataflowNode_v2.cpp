// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e89e990

UScriptStruct * __cdecl FUniformScatterPointsDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e89eae0

FName __thiscall
FUniformScatterPointsDataflowNode_v2::GetType(FUniformScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUniformScatterPointsDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e89eb20

bool __thiscall
FUniformScatterPointsDataflowNode_v2::IsA(FUniformScatterPointsDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FUniformScatterPointsDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89eb88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89eb88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89eba6;
      }
    }
  }
  bVar5 = true;
LAB_14e89eba6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89ebe0

FStructOnScope * __thiscall
FUniformScatterPointsDataflowNode_v2::NewStructOnScope(FUniformScatterPointsDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2,
                           (UObject *)pUVar2,L"UniformScatterPointsDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89ec60

void __thiscall
FUniformScatterPointsDataflowNode_v2::SerializeInternal
          (FUniformScatterPointsDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89ecdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89ecf0

FName __thiscall
FUniformScatterPointsDataflowNode_v2::GetDisplayName(FUniformScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UniformScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e89ed90

FName __thiscall
FUniformScatterPointsDataflowNode_v2::GetCategory(FUniformScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e89edd0

FString * __thiscall
FUniformScatterPointsDataflowNode_v2::GetTags
          (FUniformScatterPointsDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89ee00

UScriptStruct * __thiscall
FUniformScatterPointsDataflowNode_v2::TypedScriptStruct(FUniformScatterPointsDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"UniformScatterPointsDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FUniformScatterPointsDataflowNode_v2.OuterSingleton;
}

// GetRenderParametersImpl @ 14e89ee40

/* WARNING: Removing unreachable block (ram,0x00014e89f067) */
/* WARNING: Removing unreachable block (ram,0x00014e89f075) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FUniformScatterPointsDataflowNode_v2::GetRenderParametersImpl
          (FUniformScatterPointsDataflowNode_v2 *this,
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

// Evaluate @ 14e89f2f0

void __thiscall
FUniformScatterPointsDataflowNode_v2::Evaluate
          (FUniformScatterPointsDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  TBox<double> *pTVar16;
  FDataflowInput *pFVar17;
  uint *puVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c8;
  FConnectionReference local_b8 [6];
  
  pTVar1 = &this->Points;
  puVar15 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar15 == pTVar1) {
    pTVar16 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    if (((pTVar16->Max).field0_0x0._s_0.Y - (pTVar16->Min).field0_0x0._s_0.Y) *
        ((pTVar16->Max).field0_0x0._s_0.X - (pTVar16->Min).field0_0x0._s_0.X) *
        ((pTVar16->Max).field0_0x0._s_0.Z - (pTVar16->Min).field0_0x0._s_0.Z) <= 0.0) {
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    else {
      local_b8[0].Reference = &this->RandomSeed;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      puVar18 = (uint *)FDataflowInput::GetValue<int>(pFVar17,param_1,local_b8[0].Reference);
      dVar2 = (pTVar16->Max).field0_0x0._s_0.X;
      dVar3 = (pTVar16->Max).field0_0x0._s_0.Y;
      dVar4 = (pTVar16->Max).field0_0x0._s_0.Z;
      uVar23 = *puVar18;
      local_b8[0].Reference = &this->MaxNumberOfPoints;
      dVar5 = (pTVar16->Min).field0_0x0._s_0.X;
      dVar6 = (pTVar16->Min).field0_0x0._s_0.Y;
      dVar7 = (pTVar16->Min).field0_0x0._s_0.Z;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      piVar19 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_b8[0].Reference);
      iVar12 = *piVar19;
      local_b8[0].Reference = &this->MinNumberOfPoints;
      local_b8[0].Index = -1;
      local_b8[0].ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,local_b8);
      piVar19 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_b8[0].Reference);
      fVar11 = __real_3f800000;
      iVar21 = (iVar12 - *piVar19) + 1;
      iVar12 = 0;
      if (0 < iVar21) {
        uVar23 = uVar23 * 0xbb38435 + 0x3619636b;
        iVar12 = (int)(((float)(uVar23 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar21);
      }
      uVar13 = iVar12 + *piVar19;
      uVar22 = (ulonglong)uVar13;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar13,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
        do {
          uVar13 = uVar23 * 0xbb38435 + 0x3619636b;
          uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
          uVar23 = uVar14 * 0xbb38435 + 0x3619636b;
          dVar8 = (pTVar16->Min).field0_0x0._s_0.X;
          dVar9 = (pTVar16->Min).field0_0x0._s_0.Y;
          dVar10 = (pTVar16->Min).field0_0x0._s_0.Z;
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            local_c8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
          }
          iVar12 = local_c8.ArrayNum + 1;
          lVar20 = (longlong)local_c8.ArrayNum;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18) =
               (double)((float)(uVar23 >> 9 | 0x3f800000) - fVar11) * (dVar2 - dVar5) + dVar8;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18 + 8) =
               (double)((float)(uVar14 >> 9 | 0x3f800000) - fVar11) * (dVar3 - dVar6) + dVar9;
          *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 0x18 + 0x10) =
               (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar11) * (dVar4 - dVar7) + dVar10;
          uVar22 = uVar22 - 1;
          local_c8.ArrayNum = iVar12;
        } while (uVar22 != 0);
      }
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c8,pTVar1);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FUniformScatterPointsDataflowNode_v2 @ 14e930b90

FUniformScatterPointsDataflowNode_v2 * __thiscall
FUniformScatterPointsDataflowNode_v2::FUniformScatterPointsDataflowNode_v2
          (FUniformScatterPointsDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FUniformScatterPointsDataflowNode_v2__6B_;
  local_68.Reference = &this->BoundingBox;
  this->MinNumberOfPoints = 0x14;
  this->MaxNumberOfPoints = 0x14;
  this->RandomSeed = 0;
  (((TBox<double> *)local_68.Reference)->Min).field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinNumberOfPoints;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxNumberOfPoints;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Points;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FUniformScatterPointsDataflowNode_v2 @ 14e930d30

FUniformScatterPointsDataflowNode_v2 * __thiscall
FUniformScatterPointsDataflowNode_v2::FUniformScatterPointsDataflowNode_v2
          (FUniformScatterPointsDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->MinNumberOfPoints = 0x14;
  this->_padding_ = (longlong)&___7FUniformScatterPointsDataflowNode_v2__6B_;
  this->MaxNumberOfPoints = 0x14;
  this->RandomSeed = 0;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  return this;
}

