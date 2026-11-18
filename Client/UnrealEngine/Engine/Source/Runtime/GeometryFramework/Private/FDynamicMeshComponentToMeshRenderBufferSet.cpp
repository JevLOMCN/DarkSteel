// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 3

// <lambda_invoker_cdecl> @ 1496ea580

void __cdecl
`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l2::<lambda_3>::
<lambda_invoker_cdecl>
          (int param_1,int param_2,int param_3,TVector<float> *param_4,TVector<float> *param_5,
          TVector<float> *param_6)

{
  UE::Geometry::VectorUtil::MakePerpVectors<float>(param_4,param_5,param_6);
  return;
}

// Convert @ 1497064e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshComponentToMeshRenderBufferSet::Convert
          (FDynamicMeshComponentToMeshRenderBufferSet *this,UDynamicMeshComponent *param_1,
          FMeshRenderBufferSet *param_2,bool param_3)

{
  EDynamicMeshComponentTangentsMode EVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EDynamicMeshVertexColorTransformMode EVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FColor_u_0 *pFVar10;
  FDynamicMesh3 *pFVar11;
  FDynamicMesh3 *pFVar12;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar13;
  undefined ***pppuVar14;
  uint uVar15;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined1 auStackY_198 [32];
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_138;
  undefined1 local_130 [8];
  FDynamicMesh3 *local_128;
  FMeshRenderBufferSet *local_120;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTStack_118;
  IndexEnumerable local_110;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTStack_108;
  code *local_100;
  code **local_f8;
  FDynamicMeshTangents local_f0;
  code *local_c8 [2];
  undefined **local_b8;
  TMeshTangents<float> *local_b0;
  undefined ***local_a0;
  undefined1 local_98 [64];
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = param_2;
  if (param_3) {
    EVar5 = (**(code **)(param_1->_padding_ + 0xba8))(param_1);
    (this->MeshRenderBufferSetConverter).ColorSpaceTransformMode = EVar5;
    cVar6 = (**(code **)(param_1->_padding_ + 0xb88))(param_1);
    if (cVar6 == '\x03') {
      pFVar10 = (FColor_u_0 *)(**(code **)(param_1->_padding_ + 0xb98))(param_1,local_130);
      (this->MeshRenderBufferSetConverter).ConstantVertexColor.field0_0x0 = *pFVar10;
      (this->MeshRenderBufferSetConverter).bIgnoreVertexColors = true;
    }
    bVar7 = (bool)(**(code **)(param_1->_padding_ + 0xbc8))(param_1);
    (this->MeshRenderBufferSetConverter).bUsePerTriangleNormals = bVar7;
  }
  pFVar11 = (FDynamicMesh3 *)(**(code **)(param_1->_padding_ + 0xd40))(param_1);
  local_58 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
              )0x0;
  local_138 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_50 = 0;
  pTVar16 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  local_4c = 8;
  pFVar2 = (pFVar11->AttributeSet).Ptr;
  local_128 = pFVar11;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    if ((pFVar2->NormalLayers).Array.ArrayNum < 1) {
      local_138 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      local_138 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar2->NormalLayers).Array.AllocatorInstance.Data;
    }
    iVar8 = (**(code **)(pFVar2->_padding_ + 0xa8))(pFVar2);
    TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum((TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)local_98,iVar8,Default);
    if (0 < local_50) {
      lVar17 = 0;
      do {
        uVar15 = (uint)pTVar16;
        if (((int)uVar15 < (pFVar2->UVLayers).Array.ArrayNum) && (-1 < (int)uVar15)) {
          if (((int)uVar15 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar18 = *(undefined8 *)((pFVar2->UVLayers).Array.AllocatorInstance.Data + lVar17);
        }
        else {
          uVar18 = 0;
        }
        uVar9 = 0;
        if ((int)uVar15 < local_50) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar13 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                  )local_98;
        if (local_58 !=
            (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
             )0x0) {
          FVar13 = local_58;
        }
        pTVar16 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                  (ulonglong)(uVar15 + 1);
        *(undefined8 *)(lVar17 + (longlong)FVar13) = uVar18;
        lVar17 = lVar17 + 8;
        param_2 = local_120;
        pFVar11 = local_128;
      } while ((int)(uVar15 + 1) < local_50);
    }
    pTVar16 = (pFVar2->ColorLayer).Ptr;
  }
  EVar1 = param_1->TangentsType;
  if ((EVar1 == Default) || (EVar1 == ExternallyProvided)) {
    pFVar12 = (FDynamicMesh3 *)(**(code **)(param_1->_padding_ + 0xd40))(param_1);
    if ((((pFVar12 != (FDynamicMesh3 *)0x0) &&
         ((((pFVar2 = (pFVar12->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0 &&
            (iVar8 = (pFVar2->NormalLayers).Array.ArrayNum, 0 < iVar8)) &&
           (pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0))
          && ((1 < iVar8 && (*(longlong *)(pFVar3 + 8) != 0)))))) && (2 < iVar8)) &&
       (*(longlong *)(pFVar3 + 0x10) != 0)) {
      UE::Geometry::FDynamicMeshTangents::FDynamicMeshTangents(&local_f0,pFVar12);
      local_c8[0] = (code *)0x0;
      local_110.Vector = (FRefCountVector *)local_f0.Mesh;
      pTStack_108 = local_f0.Normals;
      local_120 = (FMeshRenderBufferSet *)local_f0.Tangents;
      pTStack_118 = local_f0.Bitangents;
      local_a0 = FMemory::Malloc(0x28,8);
      *local_a0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`8'::<lambda_1>,1,1>
                   ::_vftable_;
      local_a0[1] = (undefined **)local_110.Vector;
      local_a0[2] = (undefined **)pTStack_108;
      local_a0[3] = (undefined **)local_120;
      local_a0[4] = (undefined **)pTStack_118;
      if (local_a0 + 1 != (undefined ***)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                      ::Call;
      }
      goto LAB_1497067e6;
    }
LAB_1497067bd:
    local_b8 = &
               ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_b0 = (TMeshTangents<float> *)
               `FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l2::<lambda_3>::
               <lambda_invoker_cdecl>;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                  ::Call;
  }
  else {
    if ((EVar1 != AutoCalculated) ||
       (local_b0 = UDynamicMeshComponent::GetAutoCalculatedTangents(param_1),
       local_b0 == (TMeshTangents<float> *)0x0)) goto LAB_1497067bd;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`15'::<lambda_2>,1,0>
                ::_vftable_;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                  ::Call;
  }
  local_a0 = (undefined ***)0x0;
LAB_1497067e6:
  local_f8 = local_c8;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
              ::Call;
  local_110.Vector = &pFVar11->TriangleRefCounts;
  FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&this->MeshRenderBufferSetConverter,param_2,pFVar11,
             (pFVar11->TriangleRefCounts).UsedCount,&local_110,
             (TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)local_98,local_138,pTVar16,
             (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
              *)&local_100,false,false);
  if (local_c8[0] != (code *)0x0) {
    pppuVar14 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar14 = local_a0;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (local_58 !=
      (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
       )0x0) {
    FMemory::Free((void *)local_58);
  }
  return;
}

// MakeTangentsFunc @ 149714130

TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
* __thiscall
FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc
          (FDynamicMeshComponentToMeshRenderBufferSet *this,
          TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *__return_storage_ptr__,UDynamicMeshComponent *param_1,bool param_2)

{
  EDynamicMeshComponentTangentsMode EVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  TMeshTangents<float> *pTVar5;
  FDynamicMesh3 *pFVar6;
  undefined8 *puVar7;
  FDynamicMeshTangents local_28;
  
  EVar1 = param_1->TangentsType;
  if ((EVar1 == Default) || (EVar1 == ExternallyProvided)) {
    pFVar6 = (FDynamicMesh3 *)(**(code **)(param_1->_padding_ + 0xd40))();
    if (((pFVar6 != (FDynamicMesh3 *)0x0) &&
        ((((pFVar3 = (pFVar6->AttributeSet).Ptr, pFVar3 != (FDynamicMeshAttributeSet *)0x0 &&
           (iVar2 = (pFVar3->NormalLayers).Array.ArrayNum, 0 < iVar2)) &&
          (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 != 0))
         && ((1 < iVar2 && (*(longlong *)(pFVar4 + 8) != 0)))))) &&
       ((2 < iVar2 && (*(longlong *)(pFVar4 + 0x10) != 0)))) {
      UE::Geometry::FDynamicMeshTangents::FDynamicMeshTangents(&local_28,pFVar6);
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      puVar7 = FMemory::Malloc(0x28,8);
      *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar7;
      *puVar7 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`8'::<lambda_1>,1,1>
                 ::_vftable_;
      puVar7[1] = local_28.Mesh;
      puVar7[2] = local_28.Normals;
      puVar7[3] = local_28.Tangents;
      puVar7[4] = local_28.Bitangents;
      if (puVar7 + 1 == (undefined8 *)0x0) {
        return __return_storage_ptr__;
      }
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
           ::Call;
      return __return_storage_ptr__;
    }
  }
  else if (((EVar1 == AutoCalculated) && (!param_2)) &&
          (pTVar5 = UDynamicMeshComponent::GetAutoCalculatedTangents(param_1),
          pTVar5 != (TMeshTangents<float> *)0x0)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`15'::<lambda_2>,1,0>
          ::_vftable_;
    *(TMeshTangents<float> **)&__return_storage_ptr__->field_0x18 = pTVar5;
    if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
      return __return_storage_ptr__;
    }
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
         ::Call;
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l2::<lambda_3>::
       <lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
         ::Call;
  }
  return __return_storage_ptr__;
}

