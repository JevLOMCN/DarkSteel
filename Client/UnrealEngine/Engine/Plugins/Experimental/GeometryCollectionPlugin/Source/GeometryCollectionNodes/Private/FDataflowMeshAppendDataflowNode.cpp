// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8756c0

UScriptStruct * __cdecl FDataflowMeshAppendDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMeshAppendDataflowNode,(UObject *)pUVar1
                         ,L"DataflowMeshAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton;
}

// GetType @ 14e875960

FName __thiscall FDataflowMeshAppendDataflowNode::GetType(FDataflowMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMeshAppendDataflowNode");
  return in_RDX;
}

// IsA @ 14e8759d0

bool __thiscall
FDataflowMeshAppendDataflowNode::IsA(FDataflowMeshAppendDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMeshAppendDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e875a38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e875a38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e875a56;
      }
    }
  }
  bVar5 = true;
LAB_14e875a56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e875aa0

FStructOnScope * __thiscall
FDataflowMeshAppendDataflowNode::NewStructOnScope(FDataflowMeshAppendDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMeshAppendDataflowNode,
                           (UObject *)pUVar2,L"DataflowMeshAppendDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e875b60

void __thiscall
FDataflowMeshAppendDataflowNode::SerializeInternal
          (FDataflowMeshAppendDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMeshAppendDataflowNode,(UObject *)pUVar1
                         ,L"DataflowMeshAppendDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e875bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e875bf0

FName __thiscall
FDataflowMeshAppendDataflowNode::GetDisplayName(FDataflowMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DataflowMeshAppend");
  return in_RDX;
}

// GetCategory @ 14e875c30

FName __thiscall FDataflowMeshAppendDataflowNode::GetCategory(FDataflowMeshAppendDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e875c60

FString * __thiscall
FDataflowMeshAppendDataflowNode::GetTags
          (FDataflowMeshAppendDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e875f90

UScriptStruct * __thiscall
FDataflowMeshAppendDataflowNode::TypedScriptStruct(FDataflowMeshAppendDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMeshAppendDataflowNode,(UObject *)pUVar1
                         ,L"DataflowMeshAppendDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMeshAppendDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e876040

/* WARNING: Removing unreachable block (ram,0x00014e876267) */
/* WARNING: Removing unreachable block (ram,0x00014e876275) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowMeshAppendDataflowNode::GetRenderParametersImpl
          (FDataflowMeshAppendDataflowNode *this,
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
  ::FName::FName(&local_res10,"Mesh");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"UDataflowMesh");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"SurfaceRender");
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

// Evaluate @ 14e87a940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDataflowMeshAppendDataflowNode::Evaluate
          (FDataflowMeshAppendDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDataflowMesh> *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UDataflowMesh> this_00;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 *puVar10;
  UObject *pUVar11;
  TObjectPtr<UDataflowMesh>_u_0 this_01;
  TObjectPtr<UDataflowMesh>_u_0 *pTVar12;
  FDataflowInput *this_02;
  TObjectPtr<UDataflowMesh_const_> *pTVar13;
  FDynamicMesh3 *pFVar14;
  FDynamicMesh3 *pFVar15;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar16;
  uint *puVar17;
  uint uVar18;
  FDynamicMeshAttributeSet *pFVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStackY_928 [32];
  FDynamicMeshEditor local_8f0;
  FContext *local_8e8;
  UDataflowMesh *local_8e0;
  TObjectPtr<UDataflowMesh>_u_0 local_8d8;
  FConnectionReference local_8d0;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_8b8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_888;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_858;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_828;
  FDynamicMesh3 local_7f8;
  undefined1 local_5c8 [240];
  int local_4d8;
  bool local_480;
  FMeshIndexMappings local_308;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_928;
  pTVar1 = &this->Mesh;
  local_8e8 = param_1;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDataflowMesh> *)puVar10 != pTVar1) {
    return;
  }
  pUVar11 = GetTransientPackageAsObject();
  this_01.DebugPtr = NewObject<UDataflowMesh>(pUVar11);
  local_8d8.DebugPtr = this_01.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (UDataflowMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  pTVar12 = &FDataflowNode::GetValue<TObjectPtr<UDataflowMesh>_>
                       ((FDataflowNode *)this,param_1,pTVar1)->field0_0x0;
  this_00.field0_0x0 = (TObjectPtr<UDataflowMesh>_u_0)pTVar12->DebugPtr;
  if (this_00.field0_0x0 == (UDataflowMesh *)0x0) goto LAB_14e87adeb;
  local_8d0.Reference = &this->AppendMesh;
  local_8d0.Index = -1;
  local_8d0.ContainerReference = (void *)0x0;
  this_02 = FDataflowNode::FindInput((FDataflowNode *)this,&local_8d0);
  pTVar13 = FDataflowInput::GetValue<TObjectPtr<UDataflowMesh_const_>_>
                      (this_02,param_1,local_8d0.Reference);
  local_8e0 = (pTVar13->field0_0x0).DebugPtr;
  if (local_8e0 == (UDataflowMesh *)0x0) goto LAB_14e87adeb;
  pFVar14 = UDataflowMesh::GetDynamicMesh((UDataflowMesh *)this_00.field0_0x0);
  if ((pFVar14 != (FDynamicMesh3 *)0x0) &&
     (pFVar15 = UDataflowMesh::GetDynamicMesh(local_8e0), pFVar15 != (FDynamicMesh3 *)0x0)) {
    iVar2 = (pFVar15->VertexRefCounts).UsedCount;
    if ((pFVar14->VertexRefCounts).UsedCount < 1) {
      pFVar14 = pFVar15;
      if (0 < iVar2) goto LAB_14e87adab;
    }
    else if (iVar2 < 1) {
LAB_14e87adab:
      UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3_const_&>(this_01.DebugPtr,pFVar14);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_7f8);
      local_8f0.Mesh = &local_7f8;
      UE::Geometry::FDynamicMesh3::EnableAttributes(&local_7f8);
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(local_7f8.AttributeSet.Ptr);
      UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_308);
      local_8b8._0_8_ = 0;
      local_8b8._40_8_ = 0;
      local_888._0_8_ = 0;
      local_888._40_8_ = 0;
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (&local_8f0,pFVar14,&local_308,&local_888,&local_8b8,false);
      UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_5c8);
      local_858._0_8_ = 0;
      local_858._40_8_ = 0;
      local_828._0_8_ = 0;
      local_828._40_8_ = 0;
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (&local_8f0,pFVar15,(FMeshIndexMappings *)local_5c8,&local_828,&local_858,false);
      pFVar4 = (pFVar14->AttributeSet).Ptr;
      if ((((pFVar4 != (FDynamicMeshAttributeSet *)0x0) &&
           ((pFVar4->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) &&
          (pFVar4 = (pFVar15->AttributeSet).Ptr, pFVar4 != (FDynamicMeshAttributeSet *)0x0)) &&
         ((pFVar4->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
        pTVar16 = UDataflowMesh::GetMaterials((UDataflowMesh *)this_00.field0_0x0);
        iVar2 = pTVar16->ArrayNum;
        uVar21 = (pFVar15->TriangleRefCounts).RefCounts.CurBlockUsed +
                 (pFVar15->TriangleRefCounts).RefCounts.CurBlock * 0x200;
        uVar23 = 0;
        param_1 = local_8e8;
        if ((uVar21 == 0) ||
           (pFVar5 = (pFVar15->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
           uVar23 = 0, (ushort)(**(short **)pFVar5 - 1U) < 0xfffe)) {
LAB_14e87abf5:
          uVar22 = (uint)uVar23;
        }
        else {
          uVar23 = 1;
          uVar22 = 1;
          if (1 < (int)uVar21) {
            do {
              lVar6 = (ulonglong)((uint)uVar23 & 0x1ff) * 2;
              if ((*(short *)(lVar6 + *(longlong *)(pFVar5 + (uVar23 >> 9) * 8)) != 0) &&
                 (*(short *)(lVar6 + *(longlong *)(pFVar5 + (uVar23 >> 9) * 8)) != -1)) break;
              uVar22 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar22;
            } while ((int)uVar22 < (int)uVar21);
            goto LAB_14e87abf5;
          }
        }
joined_r0x00014e87abf7:
        local_8e8 = param_1;
        if (uVar22 != uVar21) {
          do {
            pFVar4 = (pFVar15->AttributeSet).Ptr;
            uVar22 = (uint)uVar23;
            pFVar19 = (FDynamicMeshAttributeSet *)0x0;
            if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar19 = pFVar4;
            }
            iVar3 = *(int *)(*(longlong *)
                              (*(longlong *)&((pFVar19->MaterialIDAttrib).Ptr)->field_0x20 +
                              (uVar23 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
            if ((local_480 == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bWantForward",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                   ,0x9a,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_5c8._176_4_ != local_5c8._220_4_) {
              puVar10 = (undefined1 *)
                        ((longlong)&((FMeshIndexMappings *)local_5c8)->TriangleMap + 0x38);
              if ((undefined1 *)local_5c8._232_8_ != (undefined1 *)0x0) {
                puVar10 = (undefined1 *)local_5c8._232_8_;
              }
              uVar18 = *(uint *)(puVar10 + (local_4d8 - 1 & uVar23) * 4);
              while (uVar18 != 0xffffffff) {
                puVar20 = (uint *)((longlong)(int)uVar18 * 0x10 + local_5c8._168_8_);
                if (*puVar20 == uVar22) {
                  puVar17 = puVar20 + 1;
                  if (puVar20 == (uint *)0x0) {
                    puVar17 = (uint *)0x0;
                  }
                  if (puVar17 != (uint *)0x0) {
                    uVar18 = *puVar17;
                    goto LAB_14e87accf;
                  }
                  break;
                }
                uVar18 = puVar20[2];
              }
            }
            uVar18 = 0xffffffff;
LAB_14e87accf:
            uVar22 = uVar22 + 1;
            uVar23 = (ulonglong)uVar22;
            *(int *)(*(longlong *)
                      (*(longlong *)
                        &(((local_7f8.AttributeSet.Ptr)->MaterialIDAttrib).Ptr)->field_0x20 +
                      (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4) =
                 iVar3 + iVar2;
            this_01 = local_8d8;
            param_1 = local_8e8;
            if ((int)uVar21 <= (int)uVar22) goto joined_r0x00014e87abf7;
            while( true ) {
              lVar8 = (ulonglong)((uint)uVar23 & 0x1ff) * 2;
              lVar6 = *(longlong *)
                       ((pFVar15->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                       (uVar23 >> 9) * 8);
              if ((*(short *)(lVar8 + lVar6) != 0) && (*(short *)(lVar8 + lVar6) != -1)) break;
              uVar22 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar22;
              if ((int)uVar21 <= (int)uVar22) goto joined_r0x00014e87abf7;
            }
          } while( true );
        }
      }
      UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3>(this_01.DebugPtr,&local_7f8);
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_5c8);
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_308);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_7f8);
    }
  }
  pTVar16 = UDataflowMesh::GetMaterials((UDataflowMesh *)this_00.field0_0x0);
  UDataflowMesh::
  AddMaterials<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
            (this_01.DebugPtr,pTVar16);
  pTVar16 = UDataflowMesh::GetMaterials(local_8e0);
  UDataflowMesh::
  AddMaterials<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
            (this_01.DebugPtr,pTVar16);
LAB_14e87adeb:
  FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_>
            ((FDataflowNode *)this,param_1,(TObjectPtr<UDataflowMesh> *)&local_8d8.ObjectPtr,pTVar1)
  ;
  return;
}

// FDataflowMeshAppendDataflowNode @ 14e91b740

FDataflowMeshAppendDataflowNode * __thiscall
FDataflowMeshAppendDataflowNode::FDataflowMeshAppendDataflowNode
          (FDataflowMeshAppendDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TObjectPtr<UDataflowMesh> *pTVar1;
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
  this->_padding_ = (longlong)&___7FDataflowMeshAppendDataflowNode__6B_;
  pTVar1 = &this->Mesh;
  (pTVar1->field0_0x0).DebugPtr = (UDataflowMesh *)0x0;
  (this->AppendMesh).field0_0x0.DebugPtr = (UDataflowMesh *)0x0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
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
  if (local_58.Reference != (TObjectPtr<UDataflowMesh> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->AppendMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_38,&local_res8);
  return this;
}

