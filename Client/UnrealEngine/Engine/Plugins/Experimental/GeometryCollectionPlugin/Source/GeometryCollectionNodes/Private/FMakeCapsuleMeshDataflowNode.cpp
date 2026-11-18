// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8408a0

UScriptStruct * __cdecl FMakeCapsuleMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCapsuleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCapsuleMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e840a90

FName __thiscall FMakeCapsuleMeshDataflowNode::GetType(FMakeCapsuleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeCapsuleMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e840b90

bool __thiscall FMakeCapsuleMeshDataflowNode::IsA(FMakeCapsuleMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeCapsuleMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e840bf8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e840bf8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e840c16;
      }
    }
  }
  bVar5 = true;
LAB_14e840c16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e840cd0

FStructOnScope * __thiscall
FMakeCapsuleMeshDataflowNode::NewStructOnScope(FMakeCapsuleMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeCapsuleMeshDataflowNode,(UObject *)pUVar2,
                           L"MakeCapsuleMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e841080

void __thiscall
FMakeCapsuleMeshDataflowNode::SerializeInternal
          (FMakeCapsuleMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCapsuleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCapsuleMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8410fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e841150

FName __thiscall FMakeCapsuleMeshDataflowNode::GetDisplayName(FMakeCapsuleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeCapsuleMesh");
  return in_RDX;
}

// GetCategory @ 14e841180

FName __thiscall FMakeCapsuleMeshDataflowNode::GetCategory(FMakeCapsuleMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e8411b0

FString * __thiscall
FMakeCapsuleMeshDataflowNode::GetTags
          (FMakeCapsuleMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8411e0

UScriptStruct * __thiscall
FMakeCapsuleMeshDataflowNode::TypedScriptStruct(FMakeCapsuleMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCapsuleMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeCapsuleMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCapsuleMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8415a0

void __thiscall
FMakeCapsuleMeshDataflowNode::Evaluate
          (FMakeCapsuleMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  uint uVar1;
  FDynamicMesh3 *this_00;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  UObject *pUVar7;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  TObjectPtr<UDynamicMesh>_u_0 local_res18 [2];
  undefined1 local_f8 [160];
  double local_58;
  double local_50;
  int local_48;
  int local_44;
  int local_40;
  bool local_3c;
  
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar6 != &this->Mesh) {
    return;
  }
  pUVar7 = GetTransientPackageAsObject();
  this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar7);
  local_res18[0].DebugPtr = this_01.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  UDynamicMesh::Reset(this_01.DebugPtr);
  this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
  local_f8._112_4_ = 0;
  fVar3 = this->Radius;
  if (this->Radius <= __real_358637bd) {
    fVar3 = __real_358637bd;
  }
  fVar13 = this->SegmentLength;
  if (this->SegmentLength <= __real_358637bd) {
    fVar13 = __real_358637bd;
  }
  local_f8._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
  local_f8._8_8_ = (FScriptContainerElement *)0x0;
  local_58 = (double)fVar3;
  iVar8 = this->NumHemisphereArcSteps;
  if (this->NumHemisphereArcSteps < 5) {
    iVar8 = 5;
  }
  local_f8._16_8_ = 0;
  local_f8._24_8_ = (FScriptContainerElement *)0x0;
  local_f8._32_8_ = 0;
  iVar9 = this->NumCircleSteps;
  if (this->NumCircleSteps < 3) {
    iVar9 = 3;
  }
  local_f8._40_8_ = (FScriptContainerElement *)0x0;
  local_f8._48_8_ = 0;
  local_f8._56_8_ = (FScriptContainerElement *)0x0;
  local_40 = this->NumSegmentSteps;
  if (this->NumSegmentSteps < 0) {
    local_40 = 0;
  }
  local_50 = (double)fVar13;
  local_48 = 2;
  if (2 < iVar8) {
    local_48 = iVar8;
  }
  local_f8._64_8_ = 0;
  local_f8._72_8_ = (FScriptContainerElement *)0x0;
  local_44 = 3;
  if (3 < iVar9) {
    local_44 = iVar9;
  }
  local_f8._80_8_ = 0;
  local_f8._88_8_ = (FScriptContainerElement *)0x0;
  iVar8 = local_40 + local_48 * 2 + -2;
  local_f8._96_8_ = 0;
  iVar9 = iVar8 * local_44;
  local_f8._104_8_ = (FScriptContainerElement *)0x0;
  local_f8._112_8_ = 0;
  local_f8._120_8_ = (FScriptContainerElement *)0x0;
  local_f8._128_8_ = 0;
  local_f8._136_8_ = (FScriptContainerElement *)0x0;
  local_f8._144_8_ = 0;
  uVar1 = iVar9 + 2;
  local_f8[0x98] = false;
  local_3c = false;
  uVar12 = (local_44 + 1) * iVar8 + local_44 * 2;
  uVar11 = iVar9 * 2;
  iVar8 = local_f8._112_4_;
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,(ForAnyElementType *)(local_f8 + 8),(int *)(local_f8 + 0x10),
               (int *)(local_f8 + 0x14));
    iVar8 = local_f8._96_4_;
  }
  if ((int)uVar11 < 1) goto LAB_14e841b7e;
  if (iVar8 < (int)uVar11) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar11 - iVar8,(ForAnyElementType *)(local_f8 + 0x58),
                       (int *)(local_f8 + 0x60),(int *)(local_f8 + 100));
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((FScriptContainerElement *)(local_f8._88_8_ + (longlong)iVar5 * 0xc),uVar11 - iVar8);
LAB_14e84187c:
    iVar5 = local_f8._112_4_;
  }
  else {
    iVar5 = local_f8._112_4_;
    if ((int)uVar11 < iVar8) {
      uVar10 = iVar8 + iVar9 * -2;
      if ((int)(uVar10 | uVar11) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = local_f8._112_4_;
        iVar8 = local_f8._96_4_;
      }
      if (uVar10 != 0) {
        iVar5 = (iVar8 - uVar10) + iVar9 * -2;
        if (iVar5 != 0) {
          memmove((FScriptContainerElement *)(local_f8._88_8_ + (longlong)(int)uVar11 * 0xc),
                  (FScriptContainerElement *)(local_f8._88_8_ + (longlong)(int)uVar11 * 0xc) +
                  (longlong)(int)uVar10 * 0xc,(longlong)iVar5 * 0xc);
          iVar8 = local_f8._96_4_;
        }
        local_f8._96_4_ = iVar8 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)(local_f8 + 0x58),iVar8 - uVar10,
                   (int *)(local_f8 + 100));
        goto LAB_14e84187c;
      }
    }
  }
  if (iVar5 < (int)uVar11) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar11 - iVar5,(ForAnyElementType *)(local_f8 + 0x68),
                       (int *)(local_f8 + 0x70),(int *)(local_f8 + 0x74));
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((FScriptContainerElement *)(local_f8._104_8_ + (longlong)iVar8 * 0xc),uVar11 - iVar5)
    ;
  }
  else if ((int)uVar11 < iVar5) {
    uVar10 = iVar5 + iVar9 * -2;
    if ((int)(uVar10 | uVar11) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_f8._112_4_;
    }
    if (uVar10 != 0) {
      iVar8 = (iVar5 - uVar10) + iVar9 * -2;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_f8._104_8_ + (longlong)(int)uVar11 * 0xc),
                (FScriptContainerElement *)(local_f8._104_8_ + (longlong)(int)uVar11 * 0xc) +
                (longlong)(int)uVar10 * 0xc,(longlong)iVar8 * 0xc);
        iVar5 = local_f8._112_4_;
      }
      local_f8._112_4_ = iVar5 - uVar10;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(ForAnyElementType *)(local_f8 + 0x68),iVar5 - uVar10,
                 (int *)(local_f8 + 0x74));
    }
  }
  if ((int)local_f8._128_4_ < (int)uVar11) {
    iVar5 = uVar11 - local_f8._128_4_;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar5,(ForAnyElementType *)(local_f8 + 0x78),(int *)(local_f8 + 0x80),
                       (int *)(local_f8 + 0x84));
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((FScriptContainerElement *)(local_f8._120_8_ + (longlong)iVar8 * 0xc),iVar5);
  }
  else if ((int)uVar11 < (int)local_f8._128_4_) {
    uVar10 = local_f8._128_4_ + iVar9 * -2;
    if (((int)(uVar10 | uVar11) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != 0) {
      iVar8 = (local_f8._128_4_ - uVar10) + iVar9 * -2;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_f8._120_8_ + (longlong)(int)uVar11 * 0xc),
                (FScriptContainerElement *)(local_f8._120_8_ + (longlong)(int)uVar11 * 0xc) +
                (longlong)(int)uVar10 * 0xc,(longlong)iVar8 * 0xc);
      }
      iVar8 = local_f8._128_4_ - uVar10;
      local_f8._128_4_ = iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(ForAnyElementType *)(local_f8 + 0x78),iVar8,(int *)(local_f8 + 0x84));
    }
  }
  if ((int)local_f8._144_4_ < (int)uVar11) {
    iVar9 = uVar11 - local_f8._144_4_;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar9,(ForAnyElementType *)(local_f8 + 0x88),(int *)(local_f8 + 0x90),
                       (int *)(local_f8 + 0x94));
    memset((FScriptContainerElement *)(local_f8._136_8_ + (longlong)iVar8 * 4),0,
           (longlong)iVar9 << 2);
  }
  else if ((int)uVar11 < (int)local_f8._144_4_) {
    uVar10 = local_f8._144_4_ + iVar9 * -2;
    if (((int)(uVar10 | uVar11) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != 0) {
      iVar8 = (local_f8._144_4_ - uVar10) + iVar9 * -2;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_f8._136_8_ + (longlong)(int)uVar11 * 4),
                (FScriptContainerElement *)(local_f8._136_8_ + (longlong)(int)uVar11 * 4) +
                (longlong)(int)uVar10 * 4,(longlong)iVar8 << 2);
      }
      iVar8 = local_f8._144_4_ - uVar10;
      local_f8._144_4_ = iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)(local_f8 + 0x88),iVar8,(int *)(local_f8 + 0x94));
    }
  }
LAB_14e841b7e:
  if (0 < (int)uVar12) {
    if ((int)local_f8._32_4_ < (int)uVar12) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar12 - local_f8._32_4_,(ForAnyElementType *)(local_f8 + 0x18),
                 (int *)(local_f8 + 0x20),(int *)(local_f8 + 0x24));
    }
    else if ((int)uVar12 < (int)local_f8._32_4_) {
      uVar11 = local_f8._32_4_ - uVar12;
      if (((int)(uVar11 | uVar12) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar11 != 0) {
        iVar8 = (local_f8._32_4_ - uVar12) - uVar11;
        if (iVar8 != 0) {
          memmove((FScriptContainerElement *)(local_f8._24_8_ + (longlong)(int)uVar12 * 8),
                  (FScriptContainerElement *)(local_f8._24_8_ + (longlong)(int)uVar12 * 8) +
                  (longlong)(int)uVar11 * 8,(longlong)iVar8 << 3);
        }
        iVar8 = local_f8._32_4_ - uVar11;
        local_f8._32_4_ = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)(local_f8 + 0x18),iVar8,(int *)(local_f8 + 0x24));
      }
    }
    if ((int)local_f8._48_4_ < (int)uVar12) {
      iVar9 = uVar12 - local_f8._48_4_;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar9,(ForAnyElementType *)(local_f8 + 0x28),(int *)(local_f8 + 0x30),
                         (int *)(local_f8 + 0x34));
      memset((FScriptContainerElement *)(local_f8._40_8_ + (longlong)iVar8 * 4),0,
             (longlong)iVar9 << 2);
    }
    else if ((int)uVar12 < (int)local_f8._48_4_) {
      uVar11 = local_f8._48_4_ - uVar12;
      if (((int)(uVar11 | uVar12) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar11 != 0) {
        iVar8 = (local_f8._48_4_ - uVar12) - uVar11;
        if (iVar8 != 0) {
          memmove((FScriptContainerElement *)(local_f8._40_8_ + (longlong)(int)uVar12 * 4),
                  (FScriptContainerElement *)(local_f8._40_8_ + (longlong)(int)uVar12 * 4) +
                  (longlong)(int)uVar11 * 4,(longlong)iVar8 << 2);
        }
        iVar8 = local_f8._48_4_ - uVar11;
        local_f8._48_4_ = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)(local_f8 + 0x28),iVar8,(int *)(local_f8 + 0x34));
      }
    }
  }
  if (0 < (int)uVar1) {
    if ((int)local_f8._64_4_ < (int)uVar1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1 - local_f8._64_4_,(ForAnyElementType *)(local_f8 + 0x38),
                 (int *)(local_f8 + 0x40),(int *)(local_f8 + 0x44));
    }
    else if ((int)uVar1 < (int)local_f8._64_4_) {
      uVar12 = local_f8._64_4_ - uVar1;
      if (((int)(uVar12 | uVar1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar12 != 0) {
        iVar8 = (local_f8._64_4_ - uVar1) - uVar12;
        if (iVar8 != 0) {
          memmove((FScriptContainerElement *)(local_f8._56_8_ + (longlong)(int)uVar1 * 0xc),
                  (FScriptContainerElement *)(local_f8._56_8_ + (longlong)(int)uVar1 * 0xc) +
                  (longlong)(int)uVar12 * 0xc,(longlong)iVar8 * 0xc);
        }
        iVar8 = local_f8._64_4_ - uVar12;
        local_f8._64_4_ = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)(local_f8 + 0x38),iVar8,(int *)(local_f8 + 0x44));
      }
    }
    if ((int)local_f8._80_4_ < (int)uVar1) {
      iVar9 = uVar1 - local_f8._80_4_;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar9,(ForAnyElementType *)(local_f8 + 0x48),(int *)(local_f8 + 0x50),
                         (int *)(local_f8 + 0x54));
      memset((FScriptContainerElement *)(local_f8._72_8_ + (longlong)iVar8 * 4),0,
             (longlong)iVar9 << 2);
    }
    else if ((int)uVar1 < (int)local_f8._80_4_) {
      uVar12 = local_f8._80_4_ - uVar1;
      if (((int)(uVar12 | uVar1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar12 != 0) {
        iVar8 = (local_f8._80_4_ - uVar12) - uVar1;
        if (iVar8 != 0) {
          memmove((FScriptContainerElement *)(local_f8._72_8_ + (longlong)(int)uVar1 * 4),
                  (FScriptContainerElement *)(local_f8._72_8_ + (longlong)(int)uVar1 * 4) +
                  (longlong)(int)uVar12 * 4,(longlong)iVar8 << 2);
        }
        iVar8 = local_f8._80_4_ - uVar12;
        local_f8._80_4_ = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)(local_f8 + 0x48),iVar8,(int *)(local_f8 + 0x54));
      }
    }
  }
  UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_f8);
  UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_f8);
  UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_f8);
  UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_f8);
  UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_f8);
  FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
            ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res18[0].ObjectPtr,
             &this->Mesh);
  local_f8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_f8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._136_8_);
  }
  if ((FScriptContainerElement *)local_f8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._120_8_);
  }
  if ((FScriptContainerElement *)local_f8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._104_8_);
  }
  if ((FScriptContainerElement *)local_f8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._88_8_);
  }
  if ((FScriptContainerElement *)local_f8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._72_8_);
  }
  if ((FScriptContainerElement *)local_f8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._56_8_);
  }
  if ((FScriptContainerElement *)local_f8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._40_8_);
  }
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  if ((FScriptContainerElement *)local_f8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._8_8_);
  }
  return;
}

// FMakeCapsuleMeshDataflowNode @ 14e922360

FMakeCapsuleMeshDataflowNode * __thiscall
FMakeCapsuleMeshDataflowNode::FMakeCapsuleMeshDataflowNode
          (FMakeCapsuleMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->Radius = 1.0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeCapsuleMeshDataflowNode__6B_;
  local_28.Reference = &this->Mesh;
  local_48.Reference = (void *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_28.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  this->SegmentLength = 1.0;
  this->NumHemisphereArcSteps = 5;
  this->NumCircleSteps = 6;
  this->NumSegmentSteps = 0;
  local_48.Index = -1;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

