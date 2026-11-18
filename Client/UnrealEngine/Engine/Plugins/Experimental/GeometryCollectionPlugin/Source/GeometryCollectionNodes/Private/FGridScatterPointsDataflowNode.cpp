// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8aa820

UScriptStruct * __cdecl FGridScatterPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode,(UObject *)pUVar1,
                         L"GridScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e8aaf20

FName __thiscall FGridScatterPointsDataflowNode::GetType(FGridScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGridScatterPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8aaf50

bool __thiscall
FGridScatterPointsDataflowNode::IsA(FGridScatterPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGridScatterPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8aafb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8aafb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8aafd6;
      }
    }
  }
  bVar5 = true;
LAB_14e8aafd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ab050

FStructOnScope * __thiscall
FGridScatterPointsDataflowNode::NewStructOnScope(FGridScatterPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode,
                           (UObject *)pUVar2,L"GridScatterPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ab0d0

void __thiscall
FGridScatterPointsDataflowNode::SerializeInternal
          (FGridScatterPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode,(UObject *)pUVar1,
                         L"GridScatterPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ab14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ab160

FName __thiscall
FGridScatterPointsDataflowNode::GetDisplayName(FGridScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GridScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e8ab190

FName __thiscall FGridScatterPointsDataflowNode::GetCategory(FGridScatterPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e8ab1c0

FString * __thiscall
FGridScatterPointsDataflowNode::GetTags
          (FGridScatterPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ab1f0

UScriptStruct * __thiscall
FGridScatterPointsDataflowNode::TypedScriptStruct(FGridScatterPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode,(UObject *)pUVar1,
                         L"GridScatterPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGridScatterPointsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8ab230

/* WARNING: Removing unreachable block (ram,0x00014e8ab457) */
/* WARNING: Removing unreachable block (ram,0x00014e8ab465) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGridScatterPointsDataflowNode::GetRenderParametersImpl
          (FGridScatterPointsDataflowNode *this,
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

// Evaluate @ 14e8abab0

void __thiscall
FGridScatterPointsDataflowNode::Evaluate
          (FGridScatterPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  int *piVar12;
  uint *puVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  int local_res8;
  int local_res20;
  FConnectionReference local_148;
  int local_130;
  FConnectionReference local_128;
  int local_110;
  float local_10c;
  float local_108;
  double local_100;
  double local_f8;
  TBox<double> *local_f0;
  
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar10 == &this->Points) {
    local_f0 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                         ((FDataflowNode *)this,param_1,&this->BoundingBox);
    dVar5 = (local_f0->Max).field0_0x0._s_0.Y - (local_f0->Min).field0_0x0._s_0.Y;
    dVar3 = (local_f0->Max).field0_0x0._s_0.X - (local_f0->Min).field0_0x0._s_0.X;
    dVar7 = (local_f0->Max).field0_0x0._s_0.Z - (local_f0->Min).field0_0x0._s_0.Z;
    if (dVar5 * dVar3 * dVar7 <= 0.0) {
      local_148.Reference = (void *)0x0;
      local_148.Index = 0;
      local_148._12_4_ = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_148,
                 &this->Points);
      if (local_148.Reference != (void *)0x0) {
        FMemory::Free(local_148.Reference);
      }
    }
    else {
      local_148.Reference = &this->NumberOfPointsInX;
      local_148.Index = -1;
      local_148.ContainerReference = (void *)0x0;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
      piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_148.Reference);
      local_148.Index = -1;
      iVar16 = 200;
      if (*piVar12 < 200) {
        iVar16 = *piVar12;
      }
      local_148.ContainerReference = (void *)0x0;
      iVar17 = 0;
      if (0 < iVar16) {
        iVar17 = iVar16;
      }
      local_148.Reference = &this->NumberOfPointsInY;
      local_130 = iVar17;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
      piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_148.Reference);
      local_148.Index = -1;
      iVar16 = 200;
      if (*piVar12 < 200) {
        iVar16 = *piVar12;
      }
      local_148.ContainerReference = (void *)0x0;
      iVar21 = 0;
      if (0 < iVar16) {
        iVar21 = iVar16;
      }
      local_148.Reference = &this->NumberOfPointsInZ;
      local_110 = iVar21;
      pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
      piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_148.Reference);
      iVar16 = 200;
      if (*piVar12 < 200) {
        iVar16 = *piVar12;
      }
      iVar20 = 0;
      if (0 < iVar16) {
        iVar20 = iVar16;
      }
      if (((iVar17 < 1) || (iVar21 < 1)) || (iVar20 < 1)) {
        local_148.Reference = (void *)0x0;
        local_148.Index = 0;
        local_148._12_4_ = 0;
        FDataflowNode::
        SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_148,
                   &this->Points);
        if (local_148.Reference != (void *)0x0) {
          FMemory::Free(local_148.Reference);
        }
      }
      else {
        uVar18 = iVar20 * iVar21 * local_130;
        fVar30 = (float)(dVar3 / (double)local_130);
        fVar31 = (float)(dVar5 / (double)iVar21);
        fVar26 = (float)(dVar7 / (double)iVar20);
        local_10c = fVar30;
        local_108 = fVar31;
        puVar13 = (uint *)FDataflowNode::GetValue<int>
                                    ((FDataflowNode *)this,param_1,&this->RandomSeed);
        uVar19 = *puVar13;
        local_148.Reference = (void *)0x0;
        local_148.Index = 0;
        local_148._12_4_ = 0;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if (0 < (int)uVar18) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar18,(ForAnyElementType *)&local_148,0,(int *)&local_148.field_0xc);
        }
        uVar28 = SUB84(__real_3ff0000000000000,0);
        uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_res8 = 0;
        fVar27 = __real_3f800000;
        do {
          local_res20 = 0;
          do {
            fVar22 = fVar26 * __real_3f000000;
            fVar25 = fVar31 * __real_3f000000;
            fVar23 = fVar30 * __real_3f000000;
            iVar16 = 0;
            local_100 = (double)((float)local_res8 * fVar30);
            local_f8 = (double)fVar23;
            do {
              local_128.Index = -1;
              local_128.ContainerReference = (void *)0x0;
              uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
              local_128.Reference = &this->MaxRandomDisplacementZ;
              pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
              pfVar14 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_128.Reference);
              dVar4 = (double)((float)(uVar19 >> 9 | 0x3f800000) - fVar27);
              uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
              fVar1 = *pfVar14;
              local_128.Reference = &this->MaxRandomDisplacementY;
              local_128.Index = -1;
              local_128.ContainerReference = (void *)0x0;
              pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
              pfVar14 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_128.Reference);
              dVar6 = (double)((float)(uVar19 >> 9 | 0x3f800000) - fVar27);
              fVar2 = *pfVar14;
              local_128.Reference = &this->MaxRandomDisplacementX;
              local_128.Index = -1;
              local_128.ContainerReference = (void *)0x0;
              dVar9 = (double)CONCAT44(uVar29,uVar28);
              pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
              pfVar14 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_128.Reference);
              uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
              dVar3 = (local_f0->Min).field0_0x0._s_0.Z;
              dVar5 = (double)((float)(uVar19 >> 9 | 0x3f800000) - fVar27);
              fVar24 = (float)iVar16;
              dVar8 = (dVar5 + dVar5) - __real_3ff0000000000000;
              dVar5 = (local_f0->Min).field0_0x0._s_0.Y;
              fVar27 = *pfVar14;
              dVar7 = (local_f0->Min).field0_0x0._s_0.X;
              if (local_148.Index == local_148._12_4_) {
                local_148.Index =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)&local_148,(int *)&local_148.field_0xc);
              }
              iVar17 = local_148.Index + 1;
              iVar16 = iVar16 + 1;
              lVar15 = (longlong)local_148.Index;
              *(double *)((longlong)local_148.Reference + lVar15 * 0x18) =
                   dVar8 * (double)fVar27 + dVar7 +
                   (double)fVar23 + (double)((float)local_res8 * fVar30);
              fVar27 = __real_3f800000;
              *(double *)((longlong)local_148.Reference + lVar15 * 0x18 + 0x10) =
                   (double)(fVar24 * fVar26) +
                   ((dVar4 + dVar4) - (double)CONCAT44(uVar29,uVar28)) * (double)fVar1 +
                   (double)fVar22 + dVar3;
              uVar28 = SUB84(__real_3ff0000000000000,0);
              uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              *(double *)((longlong)local_148.Reference + lVar15 * 0x18 + 8) =
                   ((dVar6 + dVar6) - dVar9) * (double)fVar2 + (double)((float)local_res20 * fVar31)
                   + (double)fVar25 + dVar5;
              local_148.Index = iVar17;
            } while (iVar16 < iVar20);
            local_res20 = local_res20 + 1;
            fVar30 = local_10c;
            fVar31 = local_108;
          } while (local_res20 < local_110);
          local_res8 = local_res8 + 1;
        } while (local_res8 < local_130);
        FDataflowNode::
        SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_148,
                   &this->Points);
        if (local_148.Reference != (void *)0x0) {
          FMemory::Free(local_148.Reference);
        }
      }
    }
  }
  return;
}

// FGridScatterPointsDataflowNode @ 14e9217a0

FGridScatterPointsDataflowNode * __thiscall
FGridScatterPointsDataflowNode::FGridScatterPointsDataflowNode
          (FGridScatterPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  *(undefined ***)local_res8 = &___7FGridScatterPointsDataflowNode__6B_;
  piVar3 = (int *)((longlong)local_res8 + 0x248);
  *piVar3 = 5;
  local_78.Reference = (void *)((longlong)local_res8 + 0x268);
  piVar4 = (int *)((longlong)local_res8 + 0x24c);
  *piVar4 = 5;
  piVar5 = (int *)((longlong)local_res8 + 0x250);
  *piVar5 = 5;
  piVar6 = (int *)((longlong)local_res8 + 0x254);
  *piVar6 = 0;
  pfVar7 = (float *)((longlong)local_res8 + 600);
  *pfVar7 = 0.0;
  pfVar8 = (float *)((longlong)local_res8 + 0x25c);
  *pfVar8 = 0.0;
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
  return (FGridScatterPointsDataflowNode *)this_00;
}

// FGridScatterPointsDataflowNode @ 14e921a20

FGridScatterPointsDataflowNode * __thiscall
FGridScatterPointsDataflowNode::FGridScatterPointsDataflowNode(FGridScatterPointsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->NumberOfPointsInX = 5;
  this->MaxRandomDisplacementX = 0.0;
  this->MaxRandomDisplacementY = 0.0;
  this->_padding_ = (longlong)&___7FGridScatterPointsDataflowNode__6B_;
  this->MaxRandomDisplacementZ = 0.0;
  this->NumberOfPointsInY = 5;
  this->NumberOfPointsInZ = 5;
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

