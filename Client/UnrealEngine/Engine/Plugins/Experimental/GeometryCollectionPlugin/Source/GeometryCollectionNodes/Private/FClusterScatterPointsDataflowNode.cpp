// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8a1850

UScriptStruct * __cdecl FClusterScatterPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"ClusterScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e8a18a0

FName __thiscall FClusterScatterPointsDataflowNode::GetType(FClusterScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterScatterPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a18d0

bool __thiscall
FClusterScatterPointsDataflowNode::IsA(FClusterScatterPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterScatterPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a1938;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a1938:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a1956;
      }
    }
  }
  bVar5 = true;
LAB_14e8a1956:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a1990

FStructOnScope * __thiscall
FClusterScatterPointsDataflowNode::NewStructOnScope(FClusterScatterPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterScatterPointsDataflowNode,
                           (UObject *)pUVar2,L"ClusterScatterPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a1a10

void __thiscall
FClusterScatterPointsDataflowNode::SerializeInternal
          (FClusterScatterPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"ClusterScatterPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a1a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a1aa0

FName __thiscall
FClusterScatterPointsDataflowNode::GetDisplayName(FClusterScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ClusterScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e8a1ad0

FName __thiscall
FClusterScatterPointsDataflowNode::GetCategory(FClusterScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e8a1bc0

FString * __thiscall
FClusterScatterPointsDataflowNode::GetTags
          (FClusterScatterPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a1e60

UScriptStruct * __thiscall
FClusterScatterPointsDataflowNode::TypedScriptStruct(FClusterScatterPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterScatterPointsDataflowNode,
                         (UObject *)pUVar1,L"ClusterScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterScatterPointsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8a1ea0

/* WARNING: Removing unreachable block (ram,0x00014e8a20c7) */
/* WARNING: Removing unreachable block (ram,0x00014e8a20d5) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FClusterScatterPointsDataflowNode::GetRenderParametersImpl
          (FClusterScatterPointsDataflowNode *this,
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

// Evaluate @ 14e8a2320

void __thiscall
FClusterScatterPointsDataflowNode::Evaluate
          (FClusterScatterPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  TBox<double> *pTVar15;
  FDataflowInput *pFVar16;
  uint *puVar17;
  int *piVar18;
  longlong lVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  FRandomStream local_208;
  ForAnyElementType local_200;
  int local_1f8;
  int iStack_1f4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1f0;
  TVector<double>_u_0 local_1e0;
  double local_1c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1c0;
  FConnectionReference local_1b0;
  FConnectionReference local_198;
  FConnectionReference local_180;
  FConnectionReference local_168;
  FConnectionReference local_150;
  FConnectionReference local_138;
  FConnectionReference local_120;
  FConnectionReference local_108;
  double local_f0;
  
  puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar14 == &this->Points) {
    pTVar15 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    uVar25 = 0;
    uVar26 = 0;
    if (((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) *
        ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) *
        ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) <= 0.0) {
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_1c0.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1c0,&this->Points);
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
    }
    else {
      local_1b0.Reference = &this->RandomSeed;
      local_1b0.Index = -1;
      local_1b0.ContainerReference = (void *)0x0;
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b0);
      puVar17 = (uint *)FDataflowInput::GetValue<int>(pFVar16,param_1,local_1b0.Reference);
      local_198.Index = -1;
      local_198.ContainerReference = (void *)0x0;
      uVar11 = *puVar17;
      local_198.Reference = &this->NumberClustersMin;
      local_208.InitialSeed = uVar11;
      local_208.Seed = uVar11;
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
      piVar18 = FDataflowInput::GetValue<int>(pFVar16,param_1,local_198.Reference);
      local_180.Index = -1;
      local_180.ContainerReference = (void *)0x0;
      iVar22 = *piVar18;
      if (*piVar18 < 1) {
        iVar22 = 1;
      }
      local_180.Reference = &this->NumberClustersMax;
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_180);
      piVar18 = FDataflowInput::GetValue<int>(pFVar16,param_1,local_180.Reference);
      fVar9 = __real_3f800000;
      iVar21 = *piVar18;
      if (*piVar18 < iVar22) {
        iVar21 = iVar22;
      }
      iVar21 = (iVar21 - iVar22) + 1;
      uVar23 = uVar26;
      if (0 < iVar21) {
        local_208.Seed = uVar11 * 0xbb38435 + 0x3619636b;
        uVar23 = (int)(((float)(local_208.Seed >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar21
                      );
      }
      dVar2 = (pTVar15->Max).field0_0x0._s_0.X;
      uVar23 = uVar23 + iVar22;
      dVar30 = (pTVar15->Max).field0_0x0._s_0.Y;
      dVar28 = (pTVar15->Max).field0_0x0._s_0.Z;
      local_200.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      iStack_1f4 = 0;
      dVar3 = (pTVar15->Min).field0_0x0._s_0.X;
      dVar32 = (pTVar15->Min).field0_0x0._s_0.Y;
      dVar4 = (pTVar15->Min).field0_0x0._s_0.Z;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if (0 < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar23,&local_200,0,&iStack_1f4);
        uVar24 = (ulonglong)uVar23;
        do {
          uVar11 = local_208.Seed * 0xbb38435 + 0x3619636b;
          uVar12 = uVar11 * 0xbb38435 + 0x3619636b;
          local_208.Seed = uVar12 * 0xbb38435 + 0x3619636b;
          uVar13 = local_208.Seed >> 9;
          dVar31 = (pTVar15->Min).field0_0x0._s_0.X;
          dVar5 = (pTVar15->Min).field0_0x0._s_0.Y;
          dVar6 = (pTVar15->Min).field0_0x0._s_0.Z;
          if (local_1f8 == iStack_1f4) {
            local_1f8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_200,&iStack_1f4);
          }
          iVar22 = local_1f8 + 1;
          lVar19 = (longlong)local_1f8;
          *(double *)(local_200.Data + lVar19 * 0x18) =
               (double)((float)(uVar13 | 0x3f800000) - fVar9) * (dVar2 - dVar3) + dVar31;
          *(double *)(local_200.Data + lVar19 * 0x18 + 8) =
               (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar9) * (dVar30 - dVar32) + dVar5;
          *(double *)(local_200.Data + lVar19 * 0x18 + 0x10) =
               (double)((float)(uVar11 >> 9 | 0x3f800000) - fVar9) * (dVar28 - dVar4) + dVar6;
          uVar24 = uVar24 - 1;
          local_1f8 = iVar22;
        } while (uVar24 != 0);
      }
      local_168.Reference = &this->PointsPerClusterMin;
      local_168.Index = -1;
      local_168.ContainerReference = (void *)0x0;
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
      puVar17 = (uint *)FDataflowInput::GetValue<int>(pFVar16,param_1,local_168.Reference);
      local_150.Index = -1;
      local_150.ContainerReference = (void *)0x0;
      local_150.Reference = &this->PointsPerClusterMax;
      uVar11 = *puVar17;
      if ((int)*puVar17 < 0) {
        uVar11 = uVar26;
      }
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
      puVar17 = (uint *)FDataflowInput::GetValue<int>(pFVar16,param_1,local_150.Reference);
      local_138.Index = -1;
      local_138.ContainerReference = (void *)0x0;
      local_138.Reference = &this->ClusterRadiusOffset;
      uVar12 = *puVar17;
      if ((int)*puVar17 < (int)uVar11) {
        uVar12 = uVar11;
      }
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
      pfVar20 = FDataflowInput::GetValue<float>(pFVar16,param_1,local_138.Reference);
      local_120.Index = -1;
      local_120.ContainerReference = (void *)0x0;
      fVar1 = *pfVar20;
      local_120.Reference = &this->ClusterRadiusFractionMin;
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
      pfVar20 = FDataflowInput::GetValue<float>(pFVar16,param_1,local_120.Reference);
      local_108.Index = -1;
      local_108.ContainerReference = (void *)0x0;
      local_108.Reference = &this->ClusterRadiusFractionMax;
      dVar2 = (double)*pfVar20;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      pFVar16 = FDataflowNode::FindInput((FDataflowNode *)this,&local_108);
      pfVar20 = FDataflowInput::GetValue<float>(pFVar16,param_1,local_108.Reference);
      dVar30 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) *
               __real_3fe0000000000000;
      local_1c8 = (double)*pfVar20;
      if ((double)*pfVar20 <= dVar2) {
        local_1c8 = dVar2;
      }
      dVar28 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) *
               __real_3fe0000000000000;
      uVar13 = SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar30 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar27 = SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = (uint)((ulonglong)dVar28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar33,uVar13) <= (double)CONCAT44(uVar29,uVar27)) {
        uVar13 = uVar27;
        uVar33 = uVar29;
      }
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      dVar30 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
      uVar27 = SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = (uint)((ulonglong)dVar30 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar33,uVar13) <= (double)CONCAT44(uVar29,uVar27)) {
        uVar13 = uVar27;
        uVar33 = uVar29;
      }
      uVar23 = -(((int)ROUND(__real_bfe0000000000000 - (double)(int)(uVar12 + uVar11)) >> 1) *
                uVar23);
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if (0 < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar23,&local_1f0.AllocatorInstance,0,&local_1f0.ArrayMax);
      }
      dVar28 = __real_3e45798ee0000000;
      dVar30 = __real_3ff0000000000000;
      if (0 < local_1f8) {
        iVar21 = (uVar12 - uVar11) + 1;
        uVar24 = uVar25;
        iVar22 = local_1f8;
        do {
          uVar23 = uVar26;
          if (0 < iVar21) {
            local_208.Seed = local_208.Seed * 0xbb38435 + 0x3619636b;
            uVar23 = (int)(((float)(local_208.Seed >> 9 | 0x3f800000) - fVar9) * (float)iVar21);
          }
          uVar12 = (uint)uVar24;
          if (0 < (int)(uVar23 + uVar11)) {
            uVar24 = (ulonglong)(uVar23 + uVar11);
            dVar3 = local_1c8 - dVar2;
            do {
              FRandomStream::GetUnitVector(&local_208,(TVector<double> *)&local_1e0._s_0);
              dVar32 = local_1e0._s_0.Y * local_1e0._s_0.Y + local_1e0._s_0.X * local_1e0._s_0.X +
                       local_1e0._s_0.Z * local_1e0._s_0.Z;
              if (dVar28 < dVar32) {
                local_f0 = dVar30 / SQRT(dVar32);
                local_1e0._s_0.X = local_1e0._s_0.X * local_f0;
                local_1e0._s_0.Y = local_1e0._s_0.Y * local_f0;
                local_1e0._s_0.Z = local_1e0._s_0.Z * local_f0;
              }
              local_208.Seed = local_208.Seed * 0xbb38435 + 0x3619636b;
              uVar23 = uVar26;
              if ((int)uVar12 < iVar22) {
                uVar23 = ~uVar12 >> 0x1f;
              }
              dVar31 = ((double)((float)(local_208.Seed >> 9 | 0x3f800000) - fVar9) * dVar3 + dVar2)
                       * (double)CONCAT44(uVar33,uVar13) + (double)fVar1;
              dVar4 = local_1e0._s_0.X * dVar31;
              dVar32 = local_1e0._s_0.Y * dVar31;
              dVar31 = local_1e0._s_0.Z * dVar31;
              local_1e0._s_0.X = dVar4;
              local_1e0._s_0.Y = dVar32;
              local_1e0._s_0.Z = dVar31;
              if ((uVar23 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              dVar5 = *(double *)(local_200.Data + uVar25);
              dVar6 = *(double *)(local_200.Data + uVar25 + 8);
              dVar7 = *(double *)(local_200.Data + uVar25 + 0x10);
              if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
                local_1f0.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
              }
              lVar19 = (longlong)local_1f0.ArrayNum;
              local_1f0.ArrayNum = local_1f0.ArrayNum + 1;
              *(double *)(local_1f0.AllocatorInstance.Data + lVar19 * 0x18) = dVar4 + dVar5;
              *(double *)(local_1f0.AllocatorInstance.Data + lVar19 * 0x18 + 8) = dVar32 + dVar6;
              *(double *)(local_1f0.AllocatorInstance.Data + lVar19 * 0x18 + 0x10) = dVar31 + dVar7;
              uVar24 = uVar24 - 1;
              iVar22 = local_1f8;
            } while (uVar24 != 0);
          }
          uVar24 = (ulonglong)(uVar12 + 1);
          uVar25 = uVar25 + 0x18;
        } while ((int)(uVar12 + 1) < iVar22);
      }
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1f0,&this->Points);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      if (local_200.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data);
      }
    }
  }
  return;
}

// FClusterScatterPointsDataflowNode @ 14e914970

FClusterScatterPointsDataflowNode * __thiscall
FClusterScatterPointsDataflowNode::FClusterScatterPointsDataflowNode
          (FClusterScatterPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  FName this_00;
  FDataflowInput *pFVar10;
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
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  *(undefined ***)local_res8 = &___7FClusterScatterPointsDataflowNode__6B_;
  piVar3 = (int *)((longlong)local_res8 + 0x248);
  *(int *)((longlong)local_res8 + 0x264) = 0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x268);
  *piVar3 = 8;
  piVar4 = (int *)((longlong)local_res8 + 0x24c);
  *piVar4 = 8;
  piVar5 = (int *)((longlong)local_res8 + 0x250);
  *piVar5 = 2;
  piVar6 = (int *)((longlong)local_res8 + 0x254);
  *piVar6 = 0x1e;
  pfVar7 = (float *)((longlong)local_res8 + 600);
  *pfVar7 = 0.1;
  pfVar8 = (float *)((longlong)local_res8 + 0x25c);
  *pfVar8 = 0.2;
  pfVar9 = (float *)((longlong)local_res8 + 0x260);
  *pfVar9 = 0.0;
  (((TBox<double> *)local_78.Reference)->Min).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x278) = 0;
  (((TVector<double> *)((longlong)local_res8 + 0x280))->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x288) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x290) = 0;
  *(uchar *)((longlong)local_res8 + 0x298) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x299);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x29d))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x29d))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x29f) = '\0';
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2a0))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar3;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)local_res8,&local_78,local_res18);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.ContainerReference = (void *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.Reference = piVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar9;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x264);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x2a0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FClusterScatterPointsDataflowNode *)this_00;
}

// FClusterScatterPointsDataflowNode @ 14e914c30

FClusterScatterPointsDataflowNode * __thiscall
FClusterScatterPointsDataflowNode::FClusterScatterPointsDataflowNode
          (FClusterScatterPointsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->NumberClustersMin = 8;
  this->_padding_ = (longlong)&___7FClusterScatterPointsDataflowNode__6B_;
  this->RandomSeed = 0;
  this->NumberClustersMax = 8;
  this->PointsPerClusterMin = 2;
  this->PointsPerClusterMax = 0x1e;
  this->ClusterRadiusFractionMin = 0.1;
  this->ClusterRadiusFractionMax = 0.2;
  this->ClusterRadiusOffset = 0.0;
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

