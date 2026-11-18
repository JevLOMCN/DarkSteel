// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 23

// `dynamic_initializer_for_'ModuleRegistrantMeshConversionEngineTypes'' @ 1413b14b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMeshConversionEngineTypes__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MeshConversionEngineTypes";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MeshConversionEngineTypes",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMeshConversionEngineTypesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413b1500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413b1590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413b1620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413b16b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413b1740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413b17d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413b1860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413b18f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413b1980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413b1a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14ca326c0

void * __thiscall
FMeshConversionEngineTypesModule::_scalar_deleting_destructor_
          (FMeshConversionEngineTypesModule *this,uint param_1)

{
  *this = (FMeshConversionEngineTypesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l54::<lambda_3>_> @ 14ca32700

void __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l54::<lambda_3>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_3> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8 [4];
  float fStack_98;
  float local_94;
  FIndex3i_u_0 local_90;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  TVector4<float>_u_0 local_58 [3];
  
  fVar3 = __real_3f800000;
  uVar8 = 0;
  lVar9 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshVertexBuffer::VertexTangentZ
                (&((param_2.Adapter)->Mesh->StaticVertexBuffers).StaticMeshVertexBuffer,
                 (TVector4<float> *)&local_58[0]._s_0,*(uint *)(*plVar1 + lVar7 * 4));
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_a8[3] = (float)local_58[0]._0_4_;
        pfVar6 = local_a8 + 3;
        local_94 = (float)local_58[0]._8_4_;
        fStack_98 = (float)local_58[0]._4_4_;
      }
      else {
        fVar11 = (float)((double)(float)local_58[0]._0_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.X);
        fVar12 = (float)((double)(float)local_58[0]._4_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.Y);
        fVar13 = (float)((double)(float)local_58[0]._8_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.Z);
        fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar10 <= 0.0) {
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          local_a8[2] = 0.0;
        }
        else {
          fVar10 = fVar3 / fVar10;
          local_a8[1] = fVar12 * fVar10;
          local_a8[0] = fVar11 * fVar10;
          local_a8[2] = fVar13 * fVar10;
        }
        pfVar6 = local_a8;
      }
      local_80 = *(undefined8 *)pfVar6;
      local_78 = pfVar6[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_80);
      if ((uVar5 != uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = 0;
  if (0 < *(int *)this) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar9 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_90._s_0.C = *(int *)(lVar7 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar7 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_90._s_0.A = (int)local_70;
        local_90._s_0.B = (int)((ulonglong)local_70 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_90._s_0,true);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l54::<lambda_3>_> @ 14ca329e0

void __thiscall
`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l54::<lambda_3>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_3> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8 [4];
  float fStack_98;
  float local_94;
  FIndex3i_u_0 local_90;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  TVector4<float>_u_0 local_58 [3];
  
  fVar3 = __real_3f800000;
  uVar8 = 0;
  lVar9 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshVertexBuffer::VertexTangentZ
                (&((param_2.Adapter)->Mesh->VertexBuffers).StaticMeshVertexBuffer,
                 (TVector4<float> *)&local_58[0]._s_0,*(uint *)(*plVar1 + lVar7 * 4));
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_a8[3] = (float)local_58[0]._0_4_;
        pfVar6 = local_a8 + 3;
        local_94 = (float)local_58[0]._8_4_;
        fStack_98 = (float)local_58[0]._4_4_;
      }
      else {
        fVar11 = (float)((double)(float)local_58[0]._0_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.X);
        fVar12 = (float)((double)(float)local_58[0]._4_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.Y);
        fVar13 = (float)((double)(float)local_58[0]._8_4_ *
                        ((param_2.Adapter)->InvBuildScale).field0_0x0._s_0.Z);
        fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar10 <= 0.0) {
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          local_a8[2] = 0.0;
        }
        else {
          fVar10 = fVar3 / fVar10;
          local_a8[1] = fVar12 * fVar10;
          local_a8[0] = fVar11 * fVar10;
          local_a8[2] = fVar13 * fVar10;
        }
        pfVar6 = local_a8;
      }
      local_80 = *(undefined8 *)pfVar6;
      local_78 = pfVar6[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_80);
      if ((uVar5 != uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                             ,0x9c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = 0;
  if (0 < *(int *)this) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar9 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_90._s_0.C = *(int *)(lVar7 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar7 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_90._s_0.A = (int)local_70;
        local_90._s_0.B = (int)((ulonglong)local_70 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_90._s_0,true);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l60::<lambda_4>_> @ 14ca32cc0

void __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l60::<lambda_4>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_4> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8 [4];
  float fStack_98;
  float local_94;
  FIndex3i_u_0 local_90;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  TVector4<float>_u_0 local_58 [3];
  
  fVar3 = __real_3f800000;
  uVar8 = 0;
  lVar9 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshVertexBuffer::VertexTangentX
                (&((param_2.Adapter)->Mesh->StaticVertexBuffers).StaticMeshVertexBuffer,
                 (TVector4<float> *)&local_58[0]._s_0,*(uint *)(*plVar1 + lVar7 * 4));
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_a8[3] = (float)local_58[0]._0_4_;
        pfVar6 = local_a8 + 3;
        local_94 = (float)local_58[0]._8_4_;
        fStack_98 = (float)local_58[0]._4_4_;
      }
      else {
        fVar11 = (float)((double)(float)local_58[0]._0_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.X);
        fVar12 = (float)((double)(float)local_58[0]._4_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Y);
        fVar13 = (float)((double)(float)local_58[0]._8_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Z);
        fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar10 <= 0.0) {
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          local_a8[2] = 0.0;
        }
        else {
          fVar10 = fVar3 / fVar10;
          local_a8[1] = fVar12 * fVar10;
          local_a8[0] = fVar11 * fVar10;
          local_a8[2] = fVar13 * fVar10;
        }
        pfVar6 = local_a8;
      }
      local_80 = *(undefined8 *)pfVar6;
      local_78 = pfVar6[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_80);
      if ((uVar5 != uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = 0;
  if (0 < *(int *)this) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar9 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_90._s_0.C = *(int *)(lVar7 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar7 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_90._s_0.A = (int)local_70;
        local_90._s_0.B = (int)((ulonglong)local_70 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_90._s_0,true);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l60::<lambda_4>_> @ 14ca32fa0

void __thiscall
`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l60::<lambda_4>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_4> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8 [4];
  float fStack_98;
  float local_94;
  FIndex3i_u_0 local_90;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  TVector4<float>_u_0 local_58 [3];
  
  fVar3 = __real_3f800000;
  uVar8 = 0;
  lVar9 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshVertexBuffer::VertexTangentX
                (&((param_2.Adapter)->Mesh->VertexBuffers).StaticMeshVertexBuffer,
                 (TVector4<float> *)&local_58[0]._s_0,*(uint *)(*plVar1 + lVar7 * 4));
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_a8[3] = (float)local_58[0]._0_4_;
        pfVar6 = local_a8 + 3;
        local_94 = (float)local_58[0]._8_4_;
        fStack_98 = (float)local_58[0]._4_4_;
      }
      else {
        fVar11 = (float)((double)(float)local_58[0]._0_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.X);
        fVar12 = (float)((double)(float)local_58[0]._4_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Y);
        fVar13 = (float)((double)(float)local_58[0]._8_4_ *
                        ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Z);
        fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
        if (fVar10 <= 0.0) {
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          local_a8[2] = 0.0;
        }
        else {
          fVar10 = fVar3 / fVar10;
          local_a8[1] = fVar12 * fVar10;
          local_a8[0] = fVar11 * fVar10;
          local_a8[2] = fVar13 * fVar10;
        }
        pfVar6 = local_a8;
      }
      local_80 = *(undefined8 *)pfVar6;
      local_78 = pfVar6[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_80);
      if ((uVar5 != uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                             ,0x9c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = 0;
  if (0 < *(int *)this) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar9 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_90._s_0.C = *(int *)(lVar7 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar7 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_90._s_0.A = (int)local_70;
        local_90._s_0.B = (int)((ulonglong)local_70 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_90._s_0,true);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l63::<lambda_5>_> @ 14ca33280

void __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l63::<lambda_5>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_5> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  TVector<float> *pTVar6;
  float *pfVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_98 [4];
  float fStack_88;
  float local_84;
  FIndex3i_u_0 local_80;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  TVector<float> local_50 [4];
  
  fVar3 = __real_3f800000;
  uVar9 = 0;
  lVar10 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar10) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = FStaticMeshVertexBuffer::VertexTangentY
                         (&((param_2.Adapter)->Mesh->StaticVertexBuffers).StaticMeshVertexBuffer,
                          local_50,*(uint *)(*plVar1 + lVar8 * 4));
      fVar11 = (pTVar6->field0_0x0)._s_0.X;
      fVar13 = (pTVar6->field0_0x0)._s_0.Y;
      fVar14 = (pTVar6->field0_0x0)._s_0.Z;
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_98[3] = fVar11;
        pfVar7 = local_98 + 3;
        fStack_88 = fVar13;
        local_84 = fVar14;
      }
      else {
        fVar12 = (float)((double)fVar11 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.X);
        fVar13 = (float)((double)fVar13 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Y);
        fVar14 = (float)((double)fVar14 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Z);
        fVar11 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
        if (fVar11 <= 0.0) {
          local_98[0] = 0.0;
          local_98[1] = 0.0;
          local_98[2] = 0.0;
        }
        else {
          fVar11 = fVar3 / fVar11;
          local_98[1] = fVar13 * fVar11;
          local_98[0] = fVar12 * fVar11;
          local_98[2] = fVar14 * fVar11;
        }
        pfVar7 = local_98;
      }
      local_70 = *(undefined8 *)pfVar7;
      local_68 = pfVar7[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_70);
      if ((uVar5 != uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar10);
  }
  uVar9 = 0;
  if (0 < *(int *)this) {
    lVar10 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar10 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_80._s_0.C = *(int *)(lVar8 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_60 = *(undefined8 *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_80._s_0.A = (int)local_60;
        local_80._s_0.B = (int)((ulonglong)local_60 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_80._s_0,true);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l63::<lambda_5>_> @ 14ca33560

void __thiscall
`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l63::<lambda_5>_>
          (void *this,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          <lambda_5> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  TVector<float> *pTVar6;
  float *pfVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_98 [4];
  float fStack_88;
  float local_84;
  FIndex3i_u_0 local_80;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  TVector<float> local_50 [4];
  
  fVar3 = __real_3f800000;
  uVar9 = 0;
  lVar10 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar10) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = FStaticMeshVertexBuffer::VertexTangentY
                         (&((param_2.Adapter)->Mesh->VertexBuffers).StaticMeshVertexBuffer,local_50,
                          *(uint *)(*plVar1 + lVar8 * 4));
      fVar11 = (pTVar6->field0_0x0)._s_0.X;
      fVar13 = (pTVar6->field0_0x0)._s_0.Y;
      fVar14 = (pTVar6->field0_0x0)._s_0.Z;
      if ((param_2.Adapter)->bScaleNormals == false) {
        local_98[3] = fVar11;
        pfVar7 = local_98 + 3;
        fStack_88 = fVar13;
        local_84 = fVar14;
      }
      else {
        fVar12 = (float)((double)fVar11 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.X);
        fVar13 = (float)((double)fVar13 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Y);
        fVar14 = (float)((double)fVar14 * ((param_2.Adapter)->BuildScale).field0_0x0._s_0.Z);
        fVar11 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
        if (fVar11 <= 0.0) {
          local_98[0] = 0.0;
          local_98[1] = 0.0;
          local_98[2] = 0.0;
        }
        else {
          fVar11 = fVar3 / fVar11;
          local_98[1] = fVar13 * fVar11;
          local_98[0] = fVar12 * fVar11;
          local_98[2] = fVar14 * fVar11;
        }
        pfVar7 = local_98;
      }
      local_70 = *(undefined8 *)pfVar7;
      local_68 = pfVar7[2];
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)param_1,(float *)&local_70);
      if ((uVar5 != uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                             ,0x9c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar10);
  }
  uVar9 = 0;
  if (0 < *(int *)this) {
    lVar10 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar10 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_80._s_0.C = *(int *)(lVar8 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_60 = *(undefined8 *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_80._s_0.A = (int)local_60;
        local_80._s_0.B = (int)((ulonglong)local_60 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  ((TDynamicMeshOverlay<float,3> *)param_1,uVar5,(FIndex3i *)&local_80._s_0,true);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l74::<lambda_7>_> @ 14ca33840

void __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l74::<lambda_7>_>
          (void *this,TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1,
          <lambda_7> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  undefined4 local_res20 [2];
  FIndex3i_u_0 local_68;
  undefined8 local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar3 = __real_3b808081;
  uVar7 = 0;
  lVar8 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar8) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar7 < (int)plVar1[1]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res20[0] = *(undefined4 *)(*plVar1 + lVar6 * 4);
      (**(code **)param_2.GetVertexColorFromLODVertexIndex)
                (&local_res8,*(undefined8 *)&(param_2.GetVertexColorFromLODVertexIndex)->field_0x8,
                 local_res20);
      local_48 = (float)local_resa * fVar3;
      local_44 = (float)local_res9 * fVar3;
      local_40 = (float)local_res8 * fVar3;
      local_3c = (float)local_resb * fVar3;
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                        ((TDynamicMeshOverlay<float,4> *)param_1,&local_48);
      if ((uVar5 != uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  uVar7 = 0;
  if (0 < *(int *)this) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar7 < (int)plVar1[1]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar8 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_68._s_0.C = *(int *)(lVar6 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_58 = *(undefined8 *)(lVar6 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_68._s_0.A = (int)local_58;
        local_68._s_0.B = (int)((ulonglong)local_58 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                  ((TDynamicMeshOverlay<float,4> *)param_1,uVar5,(FIndex3i *)&local_68._s_0,true);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < *(int *)this);
  }
  return;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l74::<lambda_7>_> @ 14ca33aa0

void __thiscall
`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l74::<lambda_7>_>
          (void *this,TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1,
          <lambda_7> param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  undefined4 local_res20 [2];
  FIndex3i_u_0 local_68;
  undefined8 local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar3 = __real_3b808081;
  uVar7 = 0;
  lVar8 = (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
  if (0 < lVar8) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar5 = 0;
      if ((int)uVar7 < (int)plVar1[1]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res20[0] = *(undefined4 *)(*plVar1 + lVar6 * 4);
      (**(code **)param_2.GetVertexColorFromLODVertexIndex)
                (&local_res8,*(undefined8 *)&(param_2.GetVertexColorFromLODVertexIndex)->field_0x8,
                 local_res20);
      local_48 = (float)local_resa * fVar3;
      local_44 = (float)local_res9 * fVar3;
      local_40 = (float)local_res8 * fVar3;
      local_3c = (float)local_resb * fVar3;
      uVar5 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                        ((TDynamicMeshOverlay<float,4> *)param_1,&local_48);
      if ((uVar5 != uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElemID == DstVertID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                             ,0x9c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  uVar7 = 0;
  if (0 < *(int *)this) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      uVar5 = 0;
      if ((int)uVar7 < (int)plVar1[1]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(lVar8 + *plVar1);
      if (uVar5 != 0xffffffff) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x130) +
                 (ulonglong)(uVar5 >> 9) * 8);
        local_68._s_0.C = *(int *)(lVar6 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_58 = *(undefined8 *)(lVar6 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_68._s_0.A = (int)local_58;
        local_68._s_0.B = (int)((ulonglong)local_58 >> 0x20);
        UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                  ((TDynamicMeshOverlay<float,4> *)param_1,uVar5,(FIndex3i *)&local_68._s_0,true);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < *(int *)this);
  }
  return;
}

// AddUniqueImpl<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>_> @ 14ca33d00

int __thiscall
TArray<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>_>
          (TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
           *this,TUniqueMeshVertex<8> *param_1)

{
  TUniqueMeshVertex<8> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pTVar1 = (TUniqueMeshVertex<8> *)(this->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x430,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    uVar4 = *(undefined8 *)((param_1->UVsEIDs).Elements + 2);
    lVar7 = (longlong)iVar6;
    pFVar2 = (this->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30) = *(undefined8 *)(param_1->UVsEIDs).Elements;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 8) = uVar4;
    uVar4 = *(undefined8 *)((param_1->UVsEIDs).Elements + 6);
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = *(undefined8 *)((param_1->UVsEIDs).Elements + 4)
    ;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10 + 8) = uVar4;
    uVar4 = *(undefined8 *)((param_1->NormalEIDs).Elements + 2);
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = *(undefined8 *)(param_1->NormalEIDs).Elements;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20 + 8) = uVar4;
  }
  return iVar6;
}

// DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int> @ 14ca33de0

void __cdecl
DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>
          (FMeshInfo *param_1,int param_2)

{
  FDynamicMesh3 *pFVar1;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Mesh;
    do {
      pFVar1 = pTVar2->Ptr;
      if (pFVar1 != (FDynamicMesh3 *)0x0) {
        (**(code **)pFVar1->_padding_)(pFVar1,1);
      }
      pTVar2 = pTVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// IMPLEMENT_MODULE_MeshConversionEngineTypes @ 14ca3f090

void __cdecl IMPLEMENT_MODULE_MeshConversionEngineTypes(void)

{
  return;
}

