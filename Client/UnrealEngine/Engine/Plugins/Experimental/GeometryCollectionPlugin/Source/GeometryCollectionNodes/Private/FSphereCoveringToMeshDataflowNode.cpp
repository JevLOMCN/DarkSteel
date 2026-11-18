// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8d8360

UScriptStruct * __cdecl FSphereCoveringToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode,
                         (UObject *)pUVar1,L"SphereCoveringToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8d90e0

FName __thiscall FSphereCoveringToMeshDataflowNode::GetType(FSphereCoveringToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSphereCoveringToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d91d0

bool __thiscall
FSphereCoveringToMeshDataflowNode::IsA(FSphereCoveringToMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSphereCoveringToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d9238;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d9238:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d9256;
      }
    }
  }
  bVar5 = true;
LAB_14e8d9256:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d9310

FStructOnScope * __thiscall
FSphereCoveringToMeshDataflowNode::NewStructOnScope(FSphereCoveringToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode,
                           (UObject *)pUVar2,L"SphereCoveringToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d9490

void __thiscall
FSphereCoveringToMeshDataflowNode::SerializeInternal
          (FSphereCoveringToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode,
                         (UObject *)pUVar1,L"SphereCoveringToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d950d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d9550

FName __thiscall
FSphereCoveringToMeshDataflowNode::GetDisplayName(FSphereCoveringToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Sphere Covering to Mesh");
  return in_RDX;
}

// GetCategory @ 14e8d95b0

FName __thiscall
FSphereCoveringToMeshDataflowNode::GetCategory(FSphereCoveringToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Mesh");
  return in_RDX;
}

// GetTags @ 14e8d9680

FString * __thiscall
FSphereCoveringToMeshDataflowNode::GetTags
          (FSphereCoveringToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d9af0

UScriptStruct * __thiscall
FSphereCoveringToMeshDataflowNode::TypedScriptStruct(FSphereCoveringToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode,
                         (UObject *)pUVar1,L"SphereCoveringToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSphereCoveringToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d9bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSphereCoveringToMeshDataflowNode::Evaluate
          (FSphereCoveringToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  UObject *pUVar8;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  FDataflowInput *this_01;
  FDataflowSphereCovering *pFVar9;
  FMeshShapeGenerator *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStackY_988 [32];
  undefined1 local_958;
  undefined1 local_957 [7];
  TObjectPtr<UDynamicMesh>_u_0 local_950;
  FDataflowSphereCovering local_948;
  FDynamicMeshEditor local_928;
  FContext *local_920;
  FConnectionReference local_918;
  code *local_8f8 [5];
  undefined8 *local_8d0;
  undefined1 local_8c8 [256];
  float local_7c8;
  ESphereProjectionMethod local_7c4;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_7b8;
  FDynamicMesh3 local_788;
  FDynamicMesh3 local_558;
  FMeshIndexMappings local_328;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_988;
  local_920 = param_1;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar7 == &this->Mesh) {
    pUVar8 = GetTransientPackageAsObject();
    this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar8);
    local_950.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    UDynamicMesh::Reset(this_00.DebugPtr);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_788);
    local_928.Mesh = &local_788;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_328);
    local_918.Reference = &this->SphereCovering;
    local_918.Index = -1;
    uVar14 = 0;
    local_918.ContainerReference = (void *)0x0;
    this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_918);
    pFVar9 = FDataflowInput::GetValue<FDataflowSphereCovering>(this_01,param_1,local_918.Reference);
    FDataflowSphereCovering::FDataflowSphereCovering(&local_948,pFVar9);
    uVar16 = uVar14;
    uVar17 = uVar14;
    if (0 < local_948.Spheres.Position.ArrayNum) {
      do {
        UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator
                  ((FGridBoxMeshGenerator *)local_8c8);
        local_8c8._240_4_ = this->VerticesAlongEachSide;
        local_8c8._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
        uVar15 = (uint)uVar16;
        local_7c8 = 1.0;
        if ((int)local_8c8._240_4_ < 2) {
          local_8c8._240_4_ = 2;
        }
        local_7c4 = CubeMapping;
        uVar6 = 0;
        if ((int)uVar15 < local_948.Spheres.Radius.ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        local_8c8._244_4_ = local_8c8._240_4_;
        local_8c8._248_4_ = local_8c8._240_4_;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_7c8 = (float)*(double *)(local_948.Spheres.Radius.AllocatorInstance.Data + uVar17);
        uVar6 = 0;
        if ((int)uVar15 < local_948.Spheres.Position.ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar3 = *(undefined8 *)(local_948.Spheres.Position.AllocatorInstance.Data + uVar14);
        uVar4 = *(undefined8 *)(local_948.Spheres.Position.AllocatorInstance.Data + uVar14 + 8);
        uVar1 = *(undefined8 *)(local_948.Spheres.Position.AllocatorInstance.Data + uVar14 + 0x10);
        pFVar10 = UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_8c8);
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_558,pFVar10);
        local_7b8._0_8_ = 0;
        local_7b8._40_8_ = 0;
        local_8f8[0] = (code *)0x0;
        local_8d0 = (undefined8 *)0x0;
        local_8d0 = FMemory::Malloc(0x20,8);
        local_8d0[1] = uVar3;
        local_8d0[2] = uVar4;
        local_8d0[3] = uVar1;
        *local_8d0 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FSphereCoveringToMeshDataflowNode::Evaluate'::`7'::<lambda_1>,0,1>
                      ::_vftable_;
        if (local_8d0 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_8f8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FSphereCoveringToMeshDataflowNode::Evaluate'::__l7::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                         ::Call;
        }
        UE::Geometry::FDynamicMeshEditor::AppendMesh
                  (&local_928,&local_558,&local_328,
                   (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                    *)local_8f8,&local_7b8,false);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.VertexMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.TriangleMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.TriangleMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.GroupMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.GroupMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.ColorMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_328.ColorMap.ReverseMap);
        iVar11 = local_328.UVMaps.ArrayNum;
        pTVar13 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)(local_328.UVMaps.AllocatorInstance.Data + (longlong)iVar11 * 0xa8);
        FVar12.Data = local_328.UVMaps.AllocatorInstance.Data;
        while( true ) {
          if (local_328.UVMaps.ArrayNum != iVar11) {
            local_958 = 0;
            `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_958);
          }
          if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              FVar12.Data == pTVar13) break;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)FVar12.Data);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)((longlong)FVar12.Data + 0x50));
          FVar12.Data = (FScriptContainerElement *)
                        &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)((longlong)FVar12.Data + 0xa0))->Elements).field_0x8;
        }
        iVar11 = local_328.NormalMaps.ArrayNum;
        pTVar13 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)(local_328.NormalMaps.AllocatorInstance.Data + (longlong)iVar11 * 0xa8);
        FVar12.Data = local_328.NormalMaps.AllocatorInstance.Data;
        while( true ) {
          if (local_328.NormalMaps.ArrayNum != iVar11) {
            local_957[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_957);
          }
          if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              FVar12.Data == pTVar13) break;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)FVar12.Data);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)((longlong)FVar12.Data + 0x50));
          FVar12.Data = (FScriptContainerElement *)
                        &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)((longlong)FVar12.Data + 0xa0))->Elements).field_0x8;
        }
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_558);
        local_8c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
        if ((void *)local_8c8._136_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._136_8_);
        }
        if ((void *)local_8c8._120_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._120_8_);
        }
        if ((void *)local_8c8._104_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._104_8_);
        }
        if ((void *)local_8c8._88_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._88_8_);
        }
        if ((void *)local_8c8._72_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._72_8_);
        }
        if ((void *)local_8c8._56_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._56_8_);
        }
        if ((void *)local_8c8._40_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._40_8_);
        }
        if ((void *)local_8c8._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._24_8_);
        }
        if ((void *)local_8c8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_8c8._8_8_);
        }
        uVar14 = uVar14 + 0x18;
        this_00 = local_950;
        param_1 = local_920;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 8;
      } while ((int)(uVar15 + 1) < local_948.Spheres.Position.ArrayNum);
    }
    UDynamicMesh::SetMesh(this_00.DebugPtr,&local_788);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_950.ObjectPtr,
               &this->Mesh);
    if (local_948.Spheres.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Spheres.Radius.AllocatorInstance.Data);
    }
    if (local_948.Spheres.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Spheres.Position.AllocatorInstance.Data);
    }
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_328);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_788);
  }
  return;
}

// FSphereCoveringToMeshDataflowNode @ 14e92cd60

FSphereCoveringToMeshDataflowNode * __thiscall
FSphereCoveringToMeshDataflowNode::FSphereCoveringToMeshDataflowNode
          (FSphereCoveringToMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->VerticesAlongEachSide = 8;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSphereCoveringToMeshDataflowNode__6B_;
  local_48.Reference = &this->SphereCovering;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (((FDataflowSphereCovering *)local_48.Reference)->Spheres).Position.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

