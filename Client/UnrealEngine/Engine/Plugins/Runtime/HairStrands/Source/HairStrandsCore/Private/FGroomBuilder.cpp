// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 12

// operator() @ 14dff3900

FHairDescriptionGroup * __thiscall
`FGroomBuilder::BuildHairDescriptionGroups'::__l2::<lambda_1>::operator()
          (void *this,FStrandID param_1,FHairDescriptionGroups *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  FName FVar7;
  FHairDescriptionGroup *pFVar8;
  FScriptContainerElement *pFVar9;
  FHairDescriptionGroup *pFVar10;
  undefined1 local_res8 [8];
  FStrandID local_res10 [2];
  undefined1 local_res20 [8];
  FName local_48;
  FStrandID local_40 [2];
  FStrandID local_38 [4];
  
  local_res10[0] = param_1;
  if ((*(TMeshAttributesRef<FStrandID,int_const_> **)this)->ArrayPtr ==
      (FMeshAttributeArraySetBase *)0x0) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      iVar5 = 0;
      if ((param_2->HairGroups).ArrayNum == 0) {
        piVar1 = &(param_2->HairGroups).ArrayMax;
        if (*piVar1 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x318,8,(ForAnyElementType *)param_2,piVar1);
        }
        (param_2->HairGroups).ArrayNum = iVar5 + 1;
        pFVar9 = (param_2->HairGroups).AllocatorInstance.Data + (longlong)iVar5 * 0x318;
        DefaultConstructItems<FHairDescriptionGroup,int>(pFVar9,1);
        *(undefined4 *)(pFVar9 + 4) = 0;
        FVar7 = ToGroupName(local_38,(uint)local_res10,
                            (TMeshAttributesRef<FStrandID,FName_const_> *)0x0);
        *(undefined8 *)(pFVar9 + 8) = *(undefined8 *)FVar7;
      }
      if (((param_2->HairGroups).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FHairDescriptionGroup *)(*pcVar3)();
        return pFVar8;
      }
      pFVar8 = (FHairDescriptionGroup *)(param_2->HairGroups).AllocatorInstance.Data;
    }
    else {
      uVar2 = (param_2->HairGroups).ArrayNum;
      ToGroupName((FStrandID *)&local_48,(uint)local_res10,
                  (TMeshAttributesRef<FStrandID,FName_const_> *)(ulonglong)uVar2);
      iVar5 = (param_2->HairGroups).ArrayNum;
      pFVar8 = (FHairDescriptionGroup *)(param_2->HairGroups).AllocatorInstance.Data;
      pFVar10 = pFVar8 + iVar5;
      while( true ) {
        if ((param_2->HairGroups).ArrayNum != iVar5) {
          `TCheckedPointerIterator<FHairDescriptionGroup,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar8 == pFVar10) break;
        if ((pFVar8->Info).GroupName == local_48) {
          return pFVar8;
        }
        pFVar8 = pFVar8 + 1;
      }
      iVar5 = (param_2->HairGroups).ArrayNum;
      piVar1 = &(param_2->HairGroups).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x318,8,(ForAnyElementType *)param_2,piVar1);
      }
      (param_2->HairGroups).ArrayNum = iVar5 + 1;
      pFVar8 = (FHairDescriptionGroup *)
               ((param_2->HairGroups).AllocatorInstance.Data + (longlong)iVar5 * 0x318);
      DefaultConstructItems<FHairDescriptionGroup,int>(pFVar8,1);
      (pFVar8->Info).GroupID = uVar2;
      (pFVar8->Info).GroupName = local_48;
    }
  }
  else {
    puVar6 = (uint *)TMeshAttributesRef<FStrandID,int_const_>::operator[]<FStrandID,0>
                               (*(TMeshAttributesRef<FStrandID,int_const_> **)this,param_1);
    iVar5 = (param_2->HairGroups).ArrayNum;
    pFVar8 = (FHairDescriptionGroup *)(param_2->HairGroups).AllocatorInstance.Data;
    uVar2 = *puVar6;
    pFVar10 = pFVar8 + iVar5;
    while( true ) {
      if ((param_2->HairGroups).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FHairDescriptionGroup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar10) break;
      if ((pFVar8->Info).GroupID == uVar2) {
        return pFVar8;
      }
      pFVar8 = pFVar8 + 1;
    }
    iVar5 = (param_2->HairGroups).ArrayNum;
    piVar1 = &(param_2->HairGroups).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x318,8,(ForAnyElementType *)param_2,piVar1);
    }
    (param_2->HairGroups).ArrayNum = iVar5 + 1;
    pFVar8 = (FHairDescriptionGroup *)
             ((param_2->HairGroups).AllocatorInstance.Data + (longlong)iVar5 * 0x318);
    DefaultConstructItems<FHairDescriptionGroup,int>(pFVar8,1);
    (pFVar8->Info).GroupID = uVar2;
    FVar7 = ToGroupName(local_40,(uint)local_res10,
                        (TMeshAttributesRef<FStrandID,FName_const_> *)(ulonglong)uVar2);
    (pFVar8->Info).GroupName = *(FName *)FVar7;
  }
  return pFVar8;
}

// BuildBulkData @ 14dff9090

void __cdecl
FGroomBuilder::BuildBulkData
          (FHairGroupInfo *param_1,FHairStrandsDatas *param_2,FHairStrandsBulkData *param_3,
          bool param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> local_70;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_60 [3];
  
  FHairStrandsBulkData::Reset(param_3);
  fVar5 = __real_3f800000;
  uVar2 = (uint)param_2->_padding_;
  uVar10 = param_1->GroupID;
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,&local_60[0].AllocatorInstance,&local_60[0].ArrayNum,&local_60[0].ArrayMax)
    ;
    fVar6 = __real_437f0000;
    uVar9 = 0;
    lVar8 = 0;
    do {
      uVar10 = uVar10 * 0xbb38435 + 0x3619636b;
      uVar4 = 0;
      if ((int)uVar9 < local_60[0].ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = uVar9 + 1;
      local_60[0].AllocatorInstance.Data[lVar8] =
           SUB41((int)(((float)(uVar10 >> 9 | 0x3f800000) - fVar5) * fVar6),0);
      lVar8 = lVar8 + 1;
    } while ((int)uVar9 < (int)uVar2);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  if (param_4) {
    GroomBuilder_Voxelization::ComputeHairCoverageScale(param_2,&local_70);
  }
  else {
    local_78 = 0x3f800000;
    lVar8 = 10;
    uStack_74 = 0x3f800000;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,10,&local_70.AllocatorInstance,0,&local_70.ArrayMax);
    do {
      if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar1 = local_70.ArrayNum + 1;
      *(ulonglong *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 8) =
           CONCAT44(uStack_74,local_78);
      lVar8 = lVar8 + -1;
      local_70.ArrayNum = iVar1;
    } while (lVar8 != 0);
  }
  HairStrandsBuilder::BuildBulkData(param_2,local_60,&local_70,param_3,param_4);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// BuildClusterBulkData @ 14dffbe90

void __cdecl
FGroomBuilder::BuildClusterBulkData
          (FHairStrandsDatas *param_1,float param_2,FHairGroupsLOD *param_3,
          FHairStrandsClusterBulkData *param_4)

{
  FHairStrandsClusterData local_58;
  
  local_58.ClusterInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ClusterInfos.ArrayNum = 0;
  local_58.ClusterInfos.ArrayMax = 0;
  local_58.CurveToClusterIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CurveToClusterIds.ArrayNum = 0;
  local_58.CurveToClusterIds.ArrayMax = 0;
  local_58.LODInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.LODInfos.ArrayNum = 0;
  local_58.LODInfos.ArrayMax = 0;
  local_58.PointLODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PointLODs.ArrayNum = 0;
  local_58.PointLODs.ArrayMax = 0;
  local_58.ClusterCount = 0;
  local_58.ClusterScale = 0.0;
  local_58.PointCount = 0;
  local_58.CurveCount = 0;
  GroomBuilder_Cluster::BuildClusterData(param_1,param_2,param_3,&local_58);
  GroomBuilder_Cluster::BuildClusterBulkData(&local_58,param_4);
  if (local_58.PointLODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PointLODs.AllocatorInstance.Data);
  }
  if (local_58.LODInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.LODInfos.AllocatorInstance.Data);
  }
  if (local_58.CurveToClusterIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CurveToClusterIds.AllocatorInstance.Data);
  }
  if (local_58.ClusterInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ClusterInfos.AllocatorInstance.Data);
  }
  return;
}

// BuildData @ 14dffe400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGroomBuilder::BuildData
          (FHairDescriptionGroup *param_1,FHairGroupsInterpolation *param_2,FHairGroupInfo *param_3,
          FHairStrandsDatas *param_4,FHairStrandsDatas *param_5,bool param_6,bool param_7,
          bool param_8)

{
  EGroomGuideType EVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FHairStrandsDatas *pFVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_6f8 [32];
  undefined1 local_6c8 [360];
  undefined4 local_560;
  float local_558;
  TVector<float>_u_0 local_554 [2];
  undefined4 local_53c;
  undefined1 local_538 [400];
  undefined1 local_3a8 [400];
  undefined1 local_218 [400];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2528,"FGroomBuilder::BuildData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x9e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2528);
  }
  fVar4 = __real_3f800000;
  fVar8 = 0.0;
  fVar9 = __real_3f800000;
  fVar10 = __real_3f800000;
  if (param_7) {
    fVar9 = (param_2->DecimationSettings).CurveDecimation;
    fVar10 = (param_2->DecimationSettings).VertexDecimation;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = fVar8;
    }
    if (fVar10 <= 0.0) {
      fVar10 = fVar8;
    }
  }
  fVar11 = (param_2->InterpolationSettings).HairToGuideDensity;
  param_3->GroupIndex = (param_1->Info).GroupIndex;
  if (fVar4 <= fVar11) {
    fVar11 = fVar4;
  }
  param_3->GroupID = (param_1->Info).GroupID;
  param_3->GroupName = (param_1->Info).GroupName;
  if (fVar11 <= 0.0) {
    fVar11 = fVar8;
  }
  FHairStrandsDatas::Reset(param_4);
  if ((*(int *)&(param_1->Strands).field_0x80 != 0) && (*(int *)&(param_1->Strands).field_0x8 != 0))
  {
    pFVar6 = HairStrandsBuilder::BuildInternalData
                       ((FHairStrandsDatas *)local_3a8,(FHairStrandsCommonDatas *)&param_1->Strands)
    ;
    FHairStrandsDatas::operator=(param_4,pFVar6);
    FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_3a8 + 0x78));
    FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_3a8);
    if (param_6) {
      *(uint *)&param_4->_padding_ = (uint)param_4->_padding_ | 0x10;
    }
    if (fVar9 < fVar4) {
      *(uint *)&param_4->_padding_ = (uint)param_4->_padding_ | 0x40;
    }
    if (fVar10 < fVar4) {
      *(uint *)&param_4->_padding_ = (uint)param_4->_padding_ | 0x20;
    }
    if (((fVar9 < fVar4) || (fVar10 < fVar4)) || (param_6)) {
      FHairStrandsPoints::FHairStrandsPoints
                ((FHairStrandsPoints *)local_6c8,(FHairStrandsPoints *)param_4);
      FHairStrandsCurves::FHairStrandsCurves
                ((FHairStrandsCurves *)(local_6c8 + 0x78),(FHairStrandsCurves *)&param_4->_padding_)
      ;
      local_558 = param_4->HairDensity;
      local_560 = (undefined4)param_4->_padding_;
      local_554[0]._0_8_ = *(undefined8 *)&(param_4->BoundingBox).Min.field0_0x0;
      local_554._8_8_ = *(undefined8 *)((longlong)&(param_4->BoundingBox).Min.field0_0x0 + 8);
      local_53c._0_1_ = (param_4->BoundingBox).IsValid;
      local_53c._1_1_ = (param_4->BoundingBox).Pad[0];
      local_53c._2_1_ = (param_4->BoundingBox).Pad[1];
      local_53c._3_1_ = (param_4->BoundingBox).Pad[2];
      local_554[1]._4_8_ = *(undefined8 *)((longlong)&(param_4->BoundingBox).Max.field0_0x0 + 4);
      FHairStrandsDatas::Reset(param_4);
      FHairStrandsDecimation::Decimate
                ((FHairStrandsDatas *)local_6c8,fVar9,fVar10,param_6,param_4,param_8);
      FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_6c8 + 0x78));
      FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_6c8);
    }
    param_3->NumCurves = (int)param_4->_padding_;
    param_3->NumCurveVertices = (int)param_4->_padding_;
    fVar9 = GetHairStrandsMaxLength(param_4);
    param_3->MaxCurveLength = fVar9;
    if (((param_1->Info).NumCurves < param_3->NumCurves) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutGroupInfo.NumCurves <= InHairDescriptionGroup.Info.NumCurves",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                           ,0xa0e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((param_1->Info).NumCurveVertices < param_3->NumCurveVertices) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutGroupInfo.NumCurveVertices <= InHairDescriptionGroup.Info.NumCurveVertices"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                           ,0xa0f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FHairStrandsDatas::Reset(param_5);
  iVar2 = (param_1->Info).NumGuides;
  if ((iVar2 < 1) || ((param_2->InterpolationSettings).GuideType != Imported)) {
    EVar1 = (param_2->InterpolationSettings).GuideType;
    if (EVar1 == Rigged) {
      if (iVar2 < 1) {
        if (((int)param_4->_padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutRen.GetNumPoints() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                               ,0xa27,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FHairStrandsDecimation::Decimate
                  (param_4,(param_2->InterpolationSettings).RiggedGuideNumCurves,
                   (param_2->InterpolationSettings).RiggedGuideNumPoints,param_5,param_8);
      }
      else {
        HairStrandsBuilder::BuildInternalData
                  ((FHairStrandsDatas *)local_538,(FHairStrandsCommonDatas *)&param_1->Guides);
        FHairStrandsDecimation::Decimate
                  ((FHairStrandsDatas *)local_538,
                   (param_2->InterpolationSettings).RiggedGuideNumCurves,
                   (param_2->InterpolationSettings).RiggedGuideNumPoints,param_5,param_8);
        FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_538 + 0x78));
        FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_538);
      }
    }
    else if ((iVar2 < 1) || (EVar1 == Generated)) {
      if (((int)param_4->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutRen.GetNumPoints() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                             ,0xa2d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FHairStrandsDecimation::Decimate(param_4,fVar11,fVar4,false,param_5,param_8);
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xa32,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    pFVar6 = HairStrandsBuilder::BuildInternalData
                       ((FHairStrandsDatas *)local_218,(FHairStrandsCommonDatas *)&param_1->Guides);
    FHairStrandsDatas::operator=(param_5,pFVar6);
    FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_218 + 0x78));
    FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_218);
  }
  iVar2 = (int)param_5->_padding_;
  param_3->NumGuides = iVar2;
  param_3->NumGuideVertices = (int)param_5->_padding_;
  if ((iVar2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutGroupInfo.NumGuides > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xa3a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_3->NumGuideVertices < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutGroupInfo.NumGuideVertices > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xa3b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildData @ 14dffe930

void __cdecl
FGroomBuilder::BuildData
          (FHairDescriptionGroup *param_1,FHairGroupsInterpolation *param_2,
          FHairStrandsDatas *param_3,FHairStrandsDatas *param_4,bool param_5,bool param_6,
          bool param_7)

{
  FHairGroupInfo local_48;
  
  local_48.GroupIndex = 0;
  local_48.GroupID = 0;
  local_48.GroupName.ComparisonIndex.Value = 0;
  local_48.GroupName.Number = 0;
  local_48.NumCurves = 0;
  local_48.NumGuides = 0;
  local_48.NumCurveVertices = 0;
  local_48.NumGuideVertices = 0;
  local_48.MaxCurveLength = 0.0;
  local_48.Flags = 0;
  local_48.LODInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.LODInfos.ArrayNum = 0;
  local_48.LODInfos.ArrayMax = 0;
  BuildData(param_1,param_2,&local_48,param_3,param_4,param_5,param_6,param_7);
  if (local_48.LODInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.LODInfos.AllocatorInstance.Data);
  }
  return;
}

// BuildData @ 14dffe9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGroomBuilder::BuildData(FHairStrandsRawDatas *param_1,FHairStrandsDatas *param_2)

{
  FHairStrandsDatas *pFVar1;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [400];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar1 = HairStrandsBuilder::BuildInternalData
                     ((FHairStrandsDatas *)local_1a8,(FHairStrandsCommonDatas *)param_1);
  FHairStrandsDatas::operator=(param_2,pFVar1);
  FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_1a8 + 0x78));
  FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_1a8);
  return;
}

// BuildHairDescriptionGroups @ 14dffee80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGroomBuilder::BuildHairDescriptionGroups
          (FHairDescription *param_1,FHairDescriptionGroups *param_2,bool param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  TAttributesSet<FStrandID> *this;
  float fVar5;
  float fVar6;
  TMeshAttributeArraySet<float> *pTVar7;
  FMeshAttributeArraySetBase *pFVar8;
  code *pcVar9;
  bool bVar10;
  float fVar11;
  FStrandID FVar12;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  byte bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  FAttributesSetEntry *pFVar24;
  TMeshAttributeArrayBase<float> *pTVar25;
  float *pfVar26;
  FHairDescriptionGroup *pFVar27;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar28;
  TVector<float> *pTVar29;
  longlong lVar30;
  longlong lVar31;
  FMeshAttributeArraySetBase *pFVar32;
  FMeshAttributeArraySetBase *pFVar33;
  FHairDescriptionGroups *pFVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  undefined1 *puVar38;
  FScriptContainerElement *pFVar39;
  float *pfVar40;
  FScriptContainerElement *pFVar41;
  bool bVar42;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  FScriptContainerElement *pFVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  bool local_307;
  FStrandID local_304;
  int local_2fc;
  longlong local_2e8;
  TMeshAttributeArraySet<float> *local_2e0;
  TMeshAttributeArraySet<float> *local_2d8;
  TMeshAttributeArraySet<float> *local_2d0;
  undefined2 local_2c6;
  char local_2c4;
  undefined1 local_2c3;
  undefined1 local_2c2;
  undefined1 local_2c1;
  FStrandID local_2c0;
  undefined1 local_2bc [4];
  FMeshAttributeArraySetBase *local_2b8;
  FStrandID local_2a8;
  float local_2a4;
  float local_2a0;
  int local_29c;
  FMeshAttributeArraySetBase *local_298;
  FHairDescriptionGroups *local_290;
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_288;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_278;
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_268;
  float local_258;
  float fStack_254;
  float local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 local_244;
  int local_240;
  int iStack_23c;
  int local_238;
  float local_234;
  float fStack_230;
  float local_22c;
  int local_228;
  int iStack_224;
  int local_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  uint local_210 [2];
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_208;
  FMeshAttributeArraySetBase *local_200;
  TMeshAttributeArraySet<float> *local_1f8;
  int local_1f0 [2];
  FMeshAttributeArraySetBase *local_1e8;
  undefined4 local_1e0 [2];
  FMeshAttributeArraySetBase *local_1d8;
  TMeshAttributeArraySet<float> *local_1d0;
  FMeshAttributeArraySetBase *local_1c8;
  float local_1c0 [2];
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_1b8;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_1b0;
  FMeshAttributeArraySetBase *local_1a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_190;
  FMeshAttributeArraySetBase *local_180;
  FMeshAttributeArraySetBase *local_178;
  int *local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  FMeshAttributeArraySetBase **local_150;
  FMeshAttributeArraySetBase **local_148;
  FHairDescriptionGroups local_140;
  undefined4 *local_110;
  int *local_108;
  undefined8 local_100;
  FLinearColor local_f0;
  FLinearColor local_e0 [10];
  
  bVar44 = -1 < CpuChannel->Enabled;
  local_2c4 = param_3;
  local_290 = param_2;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1978,"FGroomBuilder::BuildHairDescriptionGroups",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x7ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1978);
  }
  local_29c = param_1->NumStrands;
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          *)&param_1->GroomAttributesSet,HairAttribute::Groom::MajorVersion);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          *)&param_1->GroomAttributesSet,HairAttribute::Groom::MinorVersion);
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&param_1->GroomAttributesSet,HairAttribute::Groom::Width);
  if ((((pFVar24 != (FAttributesSetEntry *)0x0) &&
       (pTVar7 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr, (int)pTVar7->_padding_ == 3))
      && (*(int *)((longlong)&pTVar7->_padding_ + 4) == 1)) &&
     (pTVar7 != (TMeshAttributeArraySet<float> *)0x0)) {
    pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(pTVar7,0);
    pfVar26 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,0);
    if (pfVar26 != local_1c0) {
      bVar17 = true;
      fVar45 = *pfVar26;
      goto LAB_14dffef9a;
    }
  }
  bVar17 = false;
  fVar45 = local_1c0[0];
LAB_14dffef9a:
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)param_1,HairAttribute::Vertex::Position);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
      *(uint *)&this_02->_padding_ != 1)) || (*(uint *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)param_1,HairAttribute::Vertex::Color);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)param_1,HairAttribute::Vertex::Roughness);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (local_2d0 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr,
      *(uint *)&local_2d0->_padding_ != 3)) || (*(uint *)((longlong)&local_2d0->_padding_ + 4) != 1)
     ) {
    local_2d0 = (TMeshAttributeArraySet<float> *)0x0;
  }
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)param_1,HairAttribute::Vertex::AO);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (local_2d8 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr,
      *(uint *)&local_2d8->_padding_ != 3)) || (*(uint *)((longlong)&local_2d8->_padding_ + 4) != 1)
     ) {
    local_2d8 = (TMeshAttributeArraySet<float> *)0x0;
  }
  pTVar7 = local_2d8;
  this = &param_1->StrandAttributesSet;
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this,HairAttribute::Strand::VertexCount);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) || (pFVar32 = (pFVar24->Ptr).Ptr, pFVar32->Type != 4)
      ) || (pFVar32->Extent != 1)) {
    pFVar32 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this,HairAttribute::Strand::ClumpID);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (local_1a8 = (pFVar24->Ptr).Ptr, local_1a8->Type != 4)) || (local_1a8->Extent != 1)) {
    local_1a8 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar33 = local_1a8;
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&param_1->StrandAttributesSet,HairAttribute::Strand::ClumpID);
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (local_1b0 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
      *(uint *)&local_1b0->_padding_ != 1)) || (*(uint *)((longlong)&local_1b0->_padding_ + 4) != 1)
     ) {
    local_1b0 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  if ((this_02 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
     (pFVar32 == (FMeshAttributeArraySetBase *)0x0)) {
    if (2 < (byte)LogGroomBuilder._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGroomBuilder);
    }
    bVar17 = false;
  }
  else {
    if ((pFVar33 != (FMeshAttributeArraySetBase *)0x0) ||
       (bVar42 = false, local_1b0 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0)) {
      bVar42 = true;
    }
    bVar13 = FHairDescription::HasAttribute(param_1,Color);
    if (((this_01 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasBaseColorAttribute == HairDescription.HasAttribute(EHairAttribute::Color)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x7ea,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    bVar13 = FHairDescription::HasAttribute(param_1,Roughness);
    if (((local_2d0 != (TMeshAttributeArraySet<float> *)0x0) != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasRoughnessAttribute == HairDescription.HasAttribute(EHairAttribute::Roughness)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x7eb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    bVar13 = FHairDescription::HasAttribute(param_1,AO);
    if (((local_2d8 != (TMeshAttributeArraySet<float> *)0x0) != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasAOAttribute == HairDescription.HasAttribute(EHairAttribute::AO)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x7ec,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    bVar13 = FHairDescription::HasAttribute(param_1,ClumpID);
    if ((bVar42 != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasClumpIDs == HairDescription.HasAttribute(EHairAttribute::ClumpID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x7ed,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)param_1,HairAttribute::Vertex::Width);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_2e0 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_2e0->_padding_ != 3)) ||
       (*(uint *)((longlong)&local_2e0->_padding_ + 4) != 1)) {
      local_2e0 = (TMeshAttributeArraySet<float> *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::Width);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1d0 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_1d0->_padding_ != 3)) ||
       (*(uint *)((longlong)&local_1d0->_padding_ + 4) != 1)) {
      local_1d0 = (TMeshAttributeArraySet<float> *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::RootUV);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1d8 = (pFVar24->Ptr).Ptr, local_1d8->Type != 2)) || (local_1d8->Extent != 1)) {
      local_1d8 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar33 = local_1d8;
    bVar13 = FHairDescription::HasAttribute(param_1,RootUV);
    if (((pFVar33 != (FMeshAttributeArraySetBase *)0x0) != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasUVData == HairDescription.HasAttribute(EHairAttribute::RootUV)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x7f4,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::Guide);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1c8 = (pFVar24->Ptr).Ptr, local_1c8->Type != 4)) || (local_1c8->Extent != 1)) {
      local_1c8 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar33 = local_1c8;
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::GroupID);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_180 = (pFVar24->Ptr).Ptr, local_180->Type != 4)) || (local_180->Extent != 1)) {
      local_180 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::ID);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_200 = (pFVar24->Ptr).Ptr, local_200->Type != 4)) || (local_200->Extent != 1)) {
      local_200 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::GroupName);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_178 = (pFVar24->Ptr).Ptr, local_178->Type != 6)) || (local_178->Extent != 1)) {
      local_178 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::ClosestGuides);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1e8 = (pFVar24->Ptr).Ptr, local_1e8->Type != 4)) || (local_1e8->Extent != 1)) {
      local_1e8 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::GuideWeights);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1f8 = (TMeshAttributeArraySet<float> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_1f8->_padding_ != 3)) ||
       (*(uint *)((longlong)&local_1f8->_padding_ + 4) != 1)) {
      local_1f8 = (TMeshAttributeArraySet<float> *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::ClosestGuides);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_208 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_208->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_208->_padding_ + 4) != 1)) {
      local_208 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)this,HairAttribute::Strand::GuideWeights);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_1b8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_1b8->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_1b8->_padding_ + 4) != 1)) {
      local_1b8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    if ((local_1e8 == (FMeshAttributeArraySetBase *)0x0) ||
       (local_1f8 == (TMeshAttributeArraySet<float> *)0x0)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((local_208 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
       (local_1b8 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((local_200 == (FMeshAttributeArraySetBase *)0x0) || ((!bVar13 && (!bVar10)))) {
      local_307 = false;
    }
    else {
      local_307 = true;
    }
    bVar13 = FHairDescription::HasAttribute(param_1,PrecomputedGuideWeights);
    if ((local_307 != bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("bCanUseClosestGuidesAndWeights == HairDescription.HasAttribute(EHairAttribute::PrecomputedGuideWeights)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x808,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    local_150 = &local_180;
    local_148 = &local_178;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 0;
    local_288.ArrayMax = 0;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    local_140.HairGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.HairGroups.ArrayNum = 0;
    local_140.HairGroups.ArrayMax = 0;
    local_304 = (FStrandID)0x0;
    if (0 < local_29c) {
      do {
        if (((int)pFVar32[2].Type < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        local_298 = pFVar32 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          local_298 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
        }
        uVar35 = (int)local_304 * local_298->NumElements;
        uVar18 = 0;
        if ((int)uVar35 < (int)local_298->Type) {
          uVar18 = ~uVar35 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        if (0 < *(int *)(local_298->_padding_ + (longlong)(int)uVar35 * 4)) {
          `FGroomBuilder::BuildHairDescriptionGroups'::__l2::<lambda_1>::operator()
                    (&local_150,local_304,&local_140);
        }
        local_304 = (FStrandID)((int)local_304 + 1);
      } while ((int)local_304 < local_29c);
    }
    uVar35 = 0;
    lVar31 = (longlong)local_140.HairGroups.ArrayNum;
    uVar18 = 0;
    if (0 < local_140.HairGroups.ArrayNum) {
      local_2e8 = 0;
      iVar19 = local_140.HairGroups.ArrayNum;
      uVar18 = uVar35;
      do {
        uVar37 = 0;
        if ((int)uVar35 < iVar19) {
          uVar37 = ~uVar35 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar19 = local_140.HairGroups.ArrayNum, bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        if ((int)uVar18 < *(int *)(local_140.HairGroups.AllocatorInstance.Data + local_2e8 + 4)) {
          uVar18 = *(uint *)(local_140.HairGroups.AllocatorInstance.Data + local_2e8 + 4);
        }
        local_2e8 = local_2e8 + 0x318;
        uVar35 = uVar35 + 1;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    iVar19 = uVar18 + 1;
    local_210[0] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&local_278,local_210,iVar19);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
              (&local_288,&local_1a0,iVar19);
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = 0;
    local_190.ArrayMax = 0;
    TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
              (&local_268,&local_190,iVar19);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    DestructItems<FHairDescriptionGroup,int>
              ((FHairDescriptionGroup *)local_140.HairGroups.AllocatorInstance.Data,
               local_140.HairGroups.ArrayNum);
    if ((FHairDescriptionGroup *)local_140.HairGroups.AllocatorInstance.Data !=
        (FHairDescriptionGroup *)0x0) {
      FMemory::Free(local_140.HairGroups.AllocatorInstance.Data);
    }
    fVar50 = __real_3dcccccd;
    fVar11 = __real_3f000000;
    fVar49 = __real_3f800000;
    fVar47 = __real_3c23d70a;
    local_2fc = 0;
    local_2c0 = (FStrandID)0x0;
    if (0 < local_29c) {
      local_298 = pFVar32 + 1;
      do {
        FVar12 = local_2c0;
        bVar13 = false;
        if (pFVar33 != (FMeshAttributeArraySetBase *)0x0) {
          if (((int)pFVar33[2].Type < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pFVar32 = pFVar33 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar33[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar32 = (FMeshAttributeArraySetBase *)pFVar33[2]._padding_;
          }
          uVar35 = (int)FVar12 * pFVar32->NumElements;
          uVar18 = 0;
          if ((int)uVar35 < (int)pFVar32->Type) {
            uVar18 = ~uVar35 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          bVar13 = *(int *)(pFVar32->_padding_ + (longlong)(int)uVar35 * 4) == 1;
        }
        pFVar32 = local_298;
        if (((int)local_298[1].Type < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pFVar8 = (FMeshAttributeArraySetBase *)pFVar32[1]._padding_;
        if (pFVar8 != (FMeshAttributeArraySetBase *)0x0) {
          pFVar32 = pFVar8;
        }
        uVar35 = (int)FVar12 * pFVar32->NumElements;
        uVar18 = 0;
        if ((int)uVar35 < (int)pFVar32->Type) {
          uVar18 = ~uVar35 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        uVar18 = *(uint *)(pFVar32->_padding_ + (longlong)(int)uVar35 * 4);
        pFVar27 = `FGroomBuilder::BuildHairDescriptionGroups'::__l2::<lambda_1>::operator()
                            (&local_150,FVar12,local_290);
        if (bVar13) {
          puVar38 = &(pFVar27->Guides).field_0x160;
          *(int *)puVar38 = *(int *)puVar38 + 1;
          puVar38 = &(pFVar27->Guides).field_0x70;
          *(uint *)puVar38 = *(int *)puVar38 + uVar18;
        }
        else {
          puVar38 = &(pFVar27->Strands).field_0x160;
          *(int *)puVar38 = *(int *)puVar38 + 1;
          puVar38 = &(pFVar27->Strands).field_0x70;
          *(uint *)puVar38 = *(int *)puVar38 + uVar18;
        }
        local_2d8 = (TMeshAttributeArraySet<float> *)&pFVar27->Guides;
        if (0 < (int)uVar18) {
          iVar19 = 0;
          do {
            pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                (this_02,0);
            pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (pTVar28,local_2fc + iVar19);
            local_100 = *(undefined8 *)&pTVar29->field0_0x0;
            fVar48 = (pTVar29->field0_0x0)._s_0.Z;
            iVar20 = _finite((double)(float)local_100);
            if (iVar20 == 0) {
LAB_14e00158f:
              local_2fc = local_2fc + uVar18;
              puVar1 = &(pFVar27->Info).Flags;
              *puVar1 = *puVar1 | 4;
              if (bVar13) {
                puVar38 = &(pFVar27->Guides).field_0x168;
                *(uint *)puVar38 = *(uint *)puVar38 | 4;
              }
              else {
                puVar38 = &(pFVar27->Strands).field_0x168;
                *(uint *)puVar38 = *(uint *)puVar38 | 4;
              }
              goto LAB_14e0015b7;
            }
            iVar20 = _finite((double)local_100._4_4_);
            if ((iVar20 == 0) || (iVar20 = _finite((double)fVar48), iVar20 == 0))
            goto LAB_14e00158f;
            iVar19 = iVar19 + 1;
          } while (iVar19 < (int)uVar18);
          bVar15 = false;
          if (bVar13) {
            uVar35 = (pFVar27->Info).NumGuides;
            if (uVar35 < 0x3fffff) {
              (pFVar27->Info).NumGuides = uVar35 + 1;
              goto LAB_14dfffac7;
            }
          }
          else {
            uVar35 = (pFVar27->Info).NumCurves;
            local_2d8 = (TMeshAttributeArraySet<float> *)&pFVar27->Strands;
            if (uVar35 < 0x3fffff) {
              (pFVar27->Info).NumCurves = uVar35 + 1;
LAB_14dfffac7:
              bVar15 = true;
            }
          }
          if (0xff < uVar18) {
            puVar1 = &(pFVar27->Info).Flags;
            *puVar1 = *puVar1 | 1;
            if (bVar13) {
              puVar38 = &(pFVar27->Guides).field_0x168;
              *(uint *)puVar38 = *(uint *)puVar38 | 1;
            }
            else {
              puVar38 = &(pFVar27->Strands).field_0x168;
              *(uint *)puVar38 = *(uint *)puVar38 | 1;
            }
          }
          if (bVar15) {
            if ((FHairStrandsRawDatas *)local_2d8 != (FHairStrandsRawDatas *)0x0) {
              bVar15 = GetHairStrandsUsesTriangleStrips();
              if ((((!bVar15) || (0xff < uVar18 + 1)) || (local_2c4 == '\0')) || (bVar13)) {
                bVar16 = 0;
              }
              else {
                bVar16 = 1;
              }
              local_2c6 = 0xff;
              if (uVar18 + bVar16 < 0xff) {
                local_2c6 = (short)(uVar18 + bVar16);
              }
              if (((*(undefined2 **)((longlong)local_2d8 + 0x78) <= &local_2c6) &&
                  (&local_2c6 <
                   *(undefined2 **)((longlong)local_2d8 + 0x78) +
                   *(int *)((longlong)local_2d8 + 0x84))) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar14 = (*pcVar9)();
                return (bool)uVar14;
              }
              iVar19 = *(int *)((longlong)local_2d8 + 0x80);
              if (iVar19 == *(int *)((longlong)local_2d8 + 0x84)) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,(ForAnyElementType *)((longlong)local_2d8 + 0x78),
                                    (int *)((longlong)local_2d8 + 0x84));
              }
              *(int *)((longlong)local_2d8 + 0x80) = iVar19 + 1;
              *(undefined2 *)(*(longlong *)((longlong)local_2d8 + 0x78) + (longlong)iVar19 * 2) =
                   local_2c6;
              if (bVar16 != 0) {
                if (bVar13) {
                  puVar38 = &(pFVar27->Guides).field_0x168;
                  *(uint *)puVar38 = *(uint *)puVar38 | 8;
                }
                else {
                  puVar38 = &(pFVar27->Strands).field_0x168;
                  *(uint *)puVar38 = *(uint *)puVar38 | 8;
                }
              }
              if (local_307 != false) {
                puVar38 = (undefined1 *)((longlong)local_2d8 + 0xb8);
                if (((*(FStrandID **)puVar38 <= &local_2c0) &&
                    (&local_2c0 < *(FStrandID **)puVar38 + *(int *)((longlong)local_2d8 + 0xc4))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                iVar19 = *(int *)((longlong)local_2d8 + 0xc0);
                if (iVar19 == *(int *)((longlong)local_2d8 + 0xc4)) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)puVar38,
                                      (int *)((longlong)local_2d8 + 0xc4));
                }
                pFVar32 = local_200;
                *(int *)((longlong)local_2d8 + 0xc0) = iVar19 + 1;
                *(FStrandID *)(*(longlong *)puVar38 + (longlong)iVar19 * 4) = local_2c0;
                pFVar33 = local_200 + 1;
                if (((int)local_200[2].Type < 1) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar33 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                }
                uVar37 = (int)FVar12 * pFVar33->NumElements;
                uVar35 = 0;
                if ((int)uVar37 < (int)pFVar33->Type) {
                  uVar35 = ~uVar37 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                local_1e0[0] = *(undefined4 *)(pFVar33->_padding_ + (longlong)(int)uVar37 * 4);
                local_1f0[0] = *(int *)((longlong)local_2d8 + 0x80) + -1;
                local_110 = local_1e0;
                local_108 = local_1f0;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)((longlong)local_2d8 + 0xd8),
                           (TPairInitializer<int_const_&,int_const_&> *)local_168,(bool *)&local_110
                          );
                pFVar32 = local_1e8;
                if (!bVar13) {
                  puVar38 = (undefined1 *)((longlong)local_2d8 + 0x128);
                  if (bVar10) {
                    pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                        (local_208,0);
                    pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar28,(int)FVar12);
                    local_238 = (int)(pTVar29->field0_0x0)._s_0.Z;
                    iStack_23c = (int)(pTVar29->field0_0x0)._s_0.Y;
                    local_240 = (int)(pTVar29->field0_0x0)._s_0.X;
                    if (((*(int **)puVar38 <= &local_240) &&
                        (&local_240 <
                         *(int **)puVar38 + (longlong)*(int *)((longlong)local_2d8 + 0x134) * 3)) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x130);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x134)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,(ForAnyElementType *)puVar38,
                                          (int *)((longlong)local_2d8 + 0x134));
                    }
                    *(int *)((longlong)local_2d8 + 0x130) = iVar19 + 1;
                    lVar31 = *(longlong *)puVar38;
                    puVar38 = (undefined1 *)((longlong)local_2d8 + 0x138);
                    *(ulonglong *)(lVar31 + (longlong)iVar19 * 0xc) = CONCAT44(iStack_23c,local_240)
                    ;
                    *(int *)(lVar31 + (longlong)iVar19 * 0xc + 8) = local_238;
                    pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                        (local_1b8,0);
                    pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar28,(int)FVar12);
                    if (((*(TVector<float> **)puVar38 <= pTVar29) &&
                        (pTVar29 < *(TVector<float> **)puVar38 +
                                   *(int *)((longlong)local_2d8 + 0x144))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x140);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x144)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,(ForAnyElementType *)puVar38,
                                          (int *)((longlong)local_2d8 + 0x144));
                    }
                    lVar30 = (longlong)iVar19;
                    *(int *)((longlong)local_2d8 + 0x140) = iVar19 + 1;
                    lVar31 = *(longlong *)puVar38;
                    *(undefined8 *)(lVar31 + lVar30 * 0xc) = *(undefined8 *)&pTVar29->field0_0x0;
                    fVar48 = (pTVar29->field0_0x0)._s_0.Z;
                  }
                  else {
                    pFVar33 = local_1e8 + 1;
                    if (((int)local_1e8[2].Type < 1) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                        (FMeshAttributeArraySetBase *)0x0) {
                      pFVar33 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                    }
                    uVar37 = (int)FVar12 * pFVar33->NumElements;
                    uVar35 = 0;
                    if ((int)uVar37 < (int)pFVar33->Type) {
                      uVar35 = ~uVar37 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    local_24c = *(undefined4 *)(pFVar33->_padding_ + (longlong)(int)uVar37 * 4);
                    uStack_248 = local_24c;
                    local_244 = local_24c;
                    if (((*(undefined4 **)puVar38 <= &local_24c) &&
                        (&local_24c <
                         *(undefined4 **)puVar38 +
                         (longlong)*(int *)((longlong)local_2d8 + 0x134) * 3)) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x130);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x134)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,(ForAnyElementType *)puVar38,
                                          (int *)((longlong)local_2d8 + 0x134));
                    }
                    *(int *)((longlong)local_2d8 + 0x130) = iVar19 + 1;
                    lVar31 = *(longlong *)puVar38;
                    puVar38 = (undefined1 *)((longlong)local_2d8 + 0x138);
                    *(ulonglong *)(lVar31 + (longlong)iVar19 * 0xc) = CONCAT44(uStack_248,local_24c)
                    ;
                    *(undefined4 *)(lVar31 + (longlong)iVar19 * 0xc + 8) = local_244;
                    pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_1f8,0);
                    pfVar26 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,(int)FVar12);
                    local_234 = *pfVar26;
                    fStack_230 = local_234;
                    local_22c = local_234;
                    if (((*(float **)puVar38 <= &local_234) &&
                        (&local_234 <
                         *(float **)puVar38 + (longlong)*(int *)((longlong)local_2d8 + 0x144) * 3))
                       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x140);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x144)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,(ForAnyElementType *)puVar38,
                                          (int *)((longlong)local_2d8 + 0x144));
                    }
                    lVar30 = (longlong)iVar19;
                    *(int *)((longlong)local_2d8 + 0x140) = iVar19 + 1;
                    lVar31 = *(longlong *)puVar38;
                    *(ulonglong *)(lVar31 + lVar30 * 0xc) = CONCAT44(fStack_230,local_234);
                    fVar48 = local_22c;
                  }
                  *(float *)(lVar31 + lVar30 * 0xc + 8) = fVar48;
                }
              }
              pFVar32 = local_1a8;
              this_00 = local_1b0;
              if (bVar42 != false) {
                if (local_1b0 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
                  pFVar33 = local_1a8 + 1;
                  if (((int)local_1a8[2].Type < 1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar33 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                  }
                  uVar37 = (int)FVar12 * pFVar33->NumElements;
                  uVar35 = 0;
                  if ((int)uVar37 < (int)pFVar33->Type) {
                    uVar35 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  puVar38 = (undefined1 *)((longlong)local_2d8 + 200);
                  local_21c = *(undefined4 *)(pFVar33->_padding_ + (longlong)(int)uVar37 * 4);
                  uStack_218 = local_21c;
                  local_214 = local_21c;
                  if (((*(undefined4 **)puVar38 <= &local_21c) &&
                      (&local_21c <
                       *(undefined4 **)puVar38 + (longlong)*(int *)((longlong)local_2d8 + 0xd4) * 3)
                      ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  iVar19 = *(int *)((longlong)local_2d8 + 0xd0);
                  if (iVar19 == *(int *)((longlong)local_2d8 + 0xd4)) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,(ForAnyElementType *)puVar38,
                                        (int *)((longlong)local_2d8 + 0xd4));
                  }
                  *(int *)((longlong)local_2d8 + 0xd0) = iVar19 + 1;
                  lVar31 = *(longlong *)puVar38;
                  *(ulonglong *)(lVar31 + (longlong)iVar19 * 0xc) = CONCAT44(uStack_218,local_21c);
                  *(undefined4 *)(lVar31 + (longlong)iVar19 * 0xc + 8) = local_214;
                }
                else {
                  pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (local_1b0,0);
                  pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar28,(int)FVar12);
                  iVar19 = (int)(pTVar29->field0_0x0)._s_0.Z;
                  pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_00,0);
                  pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar28,(int)FVar12);
                  iVar20 = (int)(pTVar29->field0_0x0)._s_0.Y;
                  pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_00,0);
                  pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar28,(int)FVar12);
                  puVar38 = (undefined1 *)((longlong)local_2d8 + 200);
                  local_228 = (int)(pTVar29->field0_0x0)._s_0.X;
                  iStack_224 = iVar20;
                  local_220 = iVar19;
                  if (((*(int **)puVar38 <= &local_228) &&
                      (&local_228 <
                       *(int **)puVar38 + (longlong)*(int *)((longlong)local_2d8 + 0xd4) * 3)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  iVar19 = *(int *)((longlong)local_2d8 + 0xd0);
                  if (iVar19 == *(int *)((longlong)local_2d8 + 0xd4)) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,(ForAnyElementType *)puVar38,
                                        (int *)((longlong)local_2d8 + 0xd4));
                  }
                  *(int *)((longlong)local_2d8 + 0xd0) = iVar19 + 1;
                  lVar31 = *(longlong *)puVar38;
                  *(ulonglong *)(lVar31 + (longlong)iVar19 * 0xc) = CONCAT44(iStack_224,local_228);
                  *(int *)(lVar31 + (longlong)iVar19 * 0xc + 8) = local_220;
                  SetHairAttributeFlags((uint *)((longlong)local_2d8 + 0x148),HasMultipleClumpIDs);
                }
              }
              pFVar32 = local_1d8;
              if (local_1d8 != (FMeshAttributeArraySetBase *)0x0) {
                pFVar33 = local_1d8 + 1;
                puVar38 = (undefined1 *)((longlong)local_2d8 + 0xa8);
                if (((int)local_1d8[2].Type < 1) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                local_2b8 = pFVar33;
                if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  local_2b8 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                }
                uVar37 = (int)FVar12 * local_2b8->NumElements;
                uVar35 = 0;
                if ((int)uVar37 < (int)local_2b8->Type) {
                  uVar35 = ~uVar37 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                local_2b8 = (FMeshAttributeArraySetBase *)
                            (local_2b8->_padding_ + (longlong)(int)uVar37 * 8);
                if (((*(undefined8 **)puVar38 <= local_2b8) &&
                    (local_2b8 < *(undefined8 **)puVar38 + *(int *)((longlong)local_2d8 + 0xb4))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                iVar19 = *(int *)((longlong)local_2d8 + 0xb0);
                if (iVar19 == *(int *)((longlong)local_2d8 + 0xb4)) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,(ForAnyElementType *)puVar38,
                                      (int *)((longlong)local_2d8 + 0xb4));
                }
                *(int *)((longlong)local_2d8 + 0xb0) = iVar19 + 1;
                *(undefined8 *)(*(longlong *)puVar38 + (longlong)iVar19 * 8) = local_2b8->_padding_;
                if (((int)pFVar32[2].Type < 1) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                local_2b8 = pFVar33;
                if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  local_2b8 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                }
                uVar37 = (int)FVar12 * local_2b8->NumElements;
                uVar35 = 0;
                if ((int)uVar37 < (int)local_2b8->Type) {
                  uVar35 = ~uVar37 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                if (*(float *)(local_2b8->_padding_ + (longlong)(int)uVar37 * 8) <= fVar49) {
                  if (((int)pFVar32[2].Type < 1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  if ((FMeshAttributeArraySetBase *)pFVar32[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar33 = (FMeshAttributeArraySetBase *)pFVar32[2]._padding_;
                  }
                  uVar37 = (int)FVar12 * pFVar33->NumElements;
                  uVar35 = 0;
                  if ((int)uVar37 < (int)pFVar33->Type) {
                    uVar35 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  if (*(float *)(pFVar33->_padding_ + 4 + (longlong)(int)uVar37 * 8) <= fVar49)
                  goto LAB_14e000783;
                }
                SetHairAttributeFlags((uint *)((longlong)local_2d8 + 0x148),HasRootUDIM);
              }
LAB_14e000783:
              fVar48 = fVar47;
              if (bVar17) {
                fVar48 = fVar45;
              }
              if (local_1d0 != (TMeshAttributeArraySet<float> *)0x0) {
                pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_1d0,0);
                pfVar26 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,(int)FVar12);
                fVar48 = *pfVar26;
              }
              if (!bVar13) {
                uVar35 = (pFVar27->Info).GroupID;
                uVar37 = 0;
                if ((int)uVar35 < local_268.ArrayNum) {
                  uVar37 = ~uVar35 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                pFVar39 = local_268.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10;
                local_2a8 = local_2c0;
                if (((*(FStrandID **)&pFVar39->field_0x0 <= &local_2a8) &&
                    (&local_2a8 < *(FStrandID **)&pFVar39->field_0x0 + *(int *)(pFVar39 + 0xc))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                iVar19 = *(int *)(pFVar39 + 8);
                if (iVar19 == *(int *)(pFVar39 + 0xc)) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar39,(int *)(pFVar39 + 0xc));
                }
                *(int *)(pFVar39 + 8) = iVar19 + 1;
                *(FStrandID *)
                 (*(FScriptContainerElement **)&pFVar39->field_0x0 + (longlong)iVar19 * 4) =
                     local_2a8;
              }
              uVar35 = 0;
              do {
                if (!bVar13) {
                  uVar37 = (pFVar27->Info).GroupID;
                  uVar21 = 0;
                  if ((int)uVar37 < local_288.ArrayNum) {
                    uVar21 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  pFVar39 = local_288.AllocatorInstance.Data + (longlong)(int)uVar37 * 0x10;
                  uVar37 = (pFVar27->Info).GroupID;
                  uVar21 = 0;
                  if ((int)uVar37 < local_278.ArrayNum) {
                    uVar21 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  local_2b8 = (FMeshAttributeArraySetBase *)
                              (local_278.AllocatorInstance.Data + (longlong)(int)uVar37 * 4);
                  if (((*(FMeshAttributeArraySetBase **)&pFVar39->field_0x0 <= local_2b8) &&
                      (local_2b8 <
                       (FMeshAttributeArraySetBase *)
                       ((longlong)&(*(FMeshAttributeArraySetBase **)&pFVar39->field_0x0)->_padding_
                       + (longlong)*(int *)(pFVar39 + 0xc) * 4))) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  iVar19 = *(int *)(pFVar39 + 8);
                  if (iVar19 == *(int *)(pFVar39 + 0xc)) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar39,(int *)(pFVar39 + 0xc));
                  }
                  *(int *)(pFVar39 + 8) = iVar19 + 1;
                  *(int *)(*(FScriptContainerElement **)&pFVar39->field_0x0 + (longlong)iVar19 * 4)
                       = (int)local_2b8->_padding_;
                }
                if (uVar35 < 0xff) {
                  pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_02,0);
                  pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar28,local_2fc);
                  if (((*(TVector<float> **)local_2d8 <= pTVar29) &&
                      (pTVar29 < *(TVector<float> **)local_2d8 + *(int *)((longlong)local_2d8 + 0xc)
                      )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  iVar19 = *(int *)&local_2d8->_padding_;
                  if (iVar19 == *(int *)((longlong)local_2d8 + 0xc)) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,(ForAnyElementType *)local_2d8,
                                        (int *)((longlong)local_2d8 + 0xc));
                  }
                  *(int *)&local_2d8->_padding_ = iVar19 + 1;
                  lVar31 = local_2d8->_padding_;
                  *(undefined8 *)(lVar31 + (longlong)iVar19 * 0xc) =
                       *(undefined8 *)&pTVar29->field0_0x0;
                  *(float *)(lVar31 + 8 + (longlong)iVar19 * 0xc) = (pTVar29->field0_0x0)._s_0.Z;
                  if (this_01 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
                    pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                        (this_01,0);
                    pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar28,local_2fc);
                    local_2b8 = (FMeshAttributeArraySetBase *)
                                FLinearColor::FLinearColor(&local_f0,pTVar29);
                    if (((*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x30) <= local_2b8)
                        && (local_2b8 <
                            (FMeshAttributeArraySetBase *)
                            (&(*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x30))->
                              _padding_ + (longlong)*(int *)((longlong)local_2d8 + 0x3c) * 2))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x38);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x3c)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x410,(ForAnyElementType *)((longlong)local_2d8 + 0x30),
                                          (int *)((longlong)local_2d8 + 0x3c));
                    }
                    *(int *)((longlong)local_2d8 + 0x38) = iVar19 + 1;
                    lVar31 = *(longlong *)&local_2b8->Type;
                    plVar4 = (longlong *)
                             (*(longlong *)((longlong)local_2d8 + 0x30) + (longlong)iVar19 * 0x10);
                    *plVar4 = local_2b8->_padding_;
                    plVar4[1] = lVar31;
                  }
                  if (local_2d0 != (TMeshAttributeArraySet<float> *)0x0) {
                    pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_2d0,0);
                    local_2b8 = (FMeshAttributeArraySetBase *)
                                TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,local_2fc);
                    if (((*(FMeshAttributeArraySetBase **)&local_2d8->DefaultValue <= local_2b8) &&
                        (local_2b8 <
                         (FMeshAttributeArraySetBase *)
                         ((longlong)
                          &(*(FMeshAttributeArraySetBase **)&local_2d8->DefaultValue)->_padding_ +
                         (longlong)*(int *)((longlong)local_2d8 + 0x4c) * 4))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x48);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x4c)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)&local_2d8->DefaultValue,
                                          (int *)((longlong)local_2d8 + 0x4c));
                    }
                    *(int *)((longlong)local_2d8 + 0x48) = iVar19 + 1;
                    *(int *)(*(longlong *)&local_2d8->DefaultValue + (longlong)iVar19 * 4) =
                         (int)local_2b8->_padding_;
                  }
                  if (pTVar7 != (TMeshAttributeArraySet<float> *)0x0) {
                    pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(pTVar7,0);
                    local_2b8 = (FMeshAttributeArraySetBase *)
                                TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,local_2fc);
                    if (((*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x50) <= local_2b8)
                        && (local_2b8 <
                            (FMeshAttributeArraySetBase *)
                            ((longlong)
                             &(*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x50))->
                              _padding_ + (longlong)*(int *)((longlong)local_2d8 + 0x5c) * 4))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)((longlong)local_2d8 + 0x58);
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x5c)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)((longlong)local_2d8 + 0x50),
                                          (int *)((longlong)local_2d8 + 0x5c));
                    }
                    *(int *)((longlong)local_2d8 + 0x58) = iVar19 + 1;
                    *(int *)(*(longlong *)((longlong)local_2d8 + 0x50) + (longlong)iVar19 * 4) =
                         (int)local_2b8->_padding_;
                  }
                  if (local_2e0 == (TMeshAttributeArraySet<float> *)0x0) {
                    fVar46 = 0.0;
                    if (fVar48 != 0.0) {
                      fVar46 = fVar48;
                    }
                  }
                  else {
                    pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_2e0,0);
                    pfVar26 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,local_2fc);
                    fVar46 = *pfVar26;
                  }
                  if ((bVar13) && (fVar46 == 0.0)) {
                    fVar46 = fVar47;
                  }
                  fVar46 = fVar46 * fVar11;
                  local_2a4 = fVar46;
                  if ((((float *)local_2d8->_padding_ <= &local_2a4) &&
                      (&local_2a4 <
                       (float *)local_2d8->_padding_ + *(int *)((longlong)local_2d8 + 0x1c))) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar14 = (*pcVar9)();
                    return (bool)uVar14;
                  }
                  iVar19 = *(int *)&local_2d8->ArrayForChannels;
                  local_170 = (int *)((longlong)local_2d8 + 0x1c);
                  if (iVar19 == *local_170) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)&local_2d8->_padding_,local_170);
                  }
                  *(int *)&local_2d8->ArrayForChannels = iVar19 + 1;
                  *(float *)(local_2d8->_padding_ + (longlong)iVar19 * 4) = local_2a4;
                  if ((bVar16 != 0) && (uVar35 == uVar18 - 1)) {
                    uVar37 = *(int *)&local_2d8->_padding_ - 1;
                    uVar21 = *(int *)&local_2d8->_padding_ - 2;
                    if (((int)uVar18 < 2) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("CurveNumVertices >= 2",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                            ,0x95f,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    if (((int)uVar37 < 1) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("P0Index > 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                            ,0x960,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    if (((int)uVar21 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("P1Index >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                            ,0x961,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    if (!bVar13) {
                      uVar23 = (pFVar27->Info).GroupID;
                      uVar22 = 0;
                      if ((int)uVar23 < local_288.ArrayNum) {
                        uVar22 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      pFVar39 = local_288.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
                      uVar23 = (pFVar27->Info).GroupID;
                      uVar22 = 0;
                      if ((int)uVar23 < local_278.ArrayNum) {
                        uVar22 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      local_2b8 = (FMeshAttributeArraySetBase *)
                                  (local_278.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
                      if (((*(FMeshAttributeArraySetBase **)&pFVar39->field_0x0 <= local_2b8) &&
                          (local_2b8 <
                           (FMeshAttributeArraySetBase *)
                           ((longlong)
                            &(*(FMeshAttributeArraySetBase **)&pFVar39->field_0x0)->_padding_ +
                           (longlong)*(int *)(pFVar39 + 0xc) * 4))) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      iVar19 = *(int *)(pFVar39 + 8);
                      if (iVar19 == *(int *)(pFVar39 + 0xc)) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)pFVar39,
                                            (int *)(pFVar39 + 0xc));
                      }
                      *(int *)(pFVar39 + 8) = iVar19 + 1;
                      *(int *)(*(FScriptContainerElement **)&pFVar39->field_0x0 +
                              (longlong)iVar19 * 4) = (int)local_2b8->_padding_;
                    }
                    uVar23 = 0;
                    if ((int)uVar37 < *(int *)&local_2d8->_padding_) {
                      uVar23 = ~uVar37 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    local_160 = *(int **)(local_2d8->_padding_ + (longlong)(int)uVar37 * 0xc);
                    fVar5 = *(float *)(local_2d8->_padding_ + 8 + (longlong)(int)uVar37 * 0xc);
                    uVar37 = 0;
                    if ((int)uVar21 < *(int *)&local_2d8->_padding_) {
                      uVar37 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    pFVar32 = *(FMeshAttributeArraySetBase **)
                               (local_2d8->_padding_ + (longlong)(int)uVar21 * 0xc);
                    fVar6 = *(float *)(local_2d8->_padding_ + 8 + (longlong)(int)uVar21 * 0xc);
                    pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                        (this_02,0);
                    pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar28,local_2fc);
                    local_250 = (fVar5 - fVar6) * fVar50 + (pTVar29->field0_0x0)._s_0.Z;
                    fStack_254 = (local_160._4_4_ - (float)((ulonglong)pFVar32 >> 0x20)) * fVar50 +
                                 (pTVar29->field0_0x0)._s_0.Y;
                    local_258 = ((float)local_160 - SUB84(pFVar32,0)) * fVar50 +
                                (pTVar29->field0_0x0)._s_0.X;
                    local_2b8 = pFVar32;
                    if (((*(float **)local_2d8 <= &local_258) &&
                        (&local_258 <
                         *(float **)local_2d8 + (longlong)*(int *)((longlong)local_2d8 + 0xc) * 3))
                       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)&local_2d8->_padding_;
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0xc)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,(ForAnyElementType *)local_2d8,
                                          (int *)((longlong)local_2d8 + 0xc));
                    }
                    *(int *)&local_2d8->_padding_ = iVar19 + 1;
                    lVar31 = local_2d8->_padding_;
                    *(ulonglong *)(lVar31 + (longlong)iVar19 * 0xc) = CONCAT44(fStack_254,local_258)
                    ;
                    *(float *)(lVar31 + 8 + (longlong)iVar19 * 0xc) = local_250;
                    if (this_01 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
                      pTVar28 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::
                                GetArrayForChannel(this_01,0);
                      pTVar29 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                          (pTVar28,local_2fc);
                      local_2b8 = (FMeshAttributeArraySetBase *)
                                  FLinearColor::FLinearColor(local_e0,pTVar29);
                      if (((*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x30) <=
                            local_2b8) &&
                          (local_2b8 <
                           (FMeshAttributeArraySetBase *)
                           (&(*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x30))->
                             _padding_ + (longlong)*(int *)((longlong)local_2d8 + 0x3c) * 2))) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      iVar19 = *(int *)((longlong)local_2d8 + 0x38);
                      if (iVar19 == *(int *)((longlong)local_2d8 + 0x3c)) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x410,(ForAnyElementType *)((longlong)local_2d8 + 0x30),
                                            (int *)((longlong)local_2d8 + 0x3c));
                      }
                      *(int *)((longlong)local_2d8 + 0x38) = iVar19 + 1;
                      lVar31 = *(longlong *)&local_2b8->Type;
                      plVar4 = (longlong *)
                               (*(longlong *)((longlong)local_2d8 + 0x30) + (longlong)iVar19 * 0x10)
                      ;
                      *plVar4 = local_2b8->_padding_;
                      plVar4[1] = lVar31;
                    }
                    if (local_2d0 != (TMeshAttributeArraySet<float> *)0x0) {
                      pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_2d0,0);
                      local_2b8 = (FMeshAttributeArraySetBase *)
                                  TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,local_2fc);
                      if (((*(FMeshAttributeArraySetBase **)&local_2d8->DefaultValue <= local_2b8)
                          && (local_2b8 <
                              (FMeshAttributeArraySetBase *)
                              ((longlong)
                               &(*(FMeshAttributeArraySetBase **)&local_2d8->DefaultValue)->
                                _padding_ + (longlong)*(int *)((longlong)local_2d8 + 0x4c) * 4))) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      iVar19 = *(int *)((longlong)local_2d8 + 0x48);
                      if (iVar19 == *(int *)((longlong)local_2d8 + 0x4c)) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)&local_2d8->DefaultValue,
                                            (int *)((longlong)local_2d8 + 0x4c));
                      }
                      *(int *)((longlong)local_2d8 + 0x48) = iVar19 + 1;
                      *(int *)(*(longlong *)&local_2d8->DefaultValue + (longlong)iVar19 * 4) =
                           (int)local_2b8->_padding_;
                    }
                    if (pTVar7 != (TMeshAttributeArraySet<float> *)0x0) {
                      pTVar25 = TMeshAttributeArraySet<float>::GetArrayForChannel(pTVar7,0);
                      local_2b8 = (FMeshAttributeArraySetBase *)
                                  TMeshAttributeArrayBase<float>::GetElementBase(pTVar25,local_2fc);
                      if (((*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x50) <=
                            local_2b8) &&
                          (local_2b8 <
                           (FMeshAttributeArraySetBase *)
                           ((longlong)
                            &(*(FMeshAttributeArraySetBase **)((longlong)local_2d8 + 0x50))->
                             _padding_ + (longlong)*(int *)((longlong)local_2d8 + 0x5c) * 4))) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar14 = (*pcVar9)();
                        return (bool)uVar14;
                      }
                      iVar19 = *(int *)((longlong)local_2d8 + 0x58);
                      if (iVar19 == *(int *)((longlong)local_2d8 + 0x5c)) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)((longlong)local_2d8 + 0x50),
                                            (int *)((longlong)local_2d8 + 0x5c));
                      }
                      *(int *)((longlong)local_2d8 + 0x58) = iVar19 + 1;
                      *(int *)(*(longlong *)((longlong)local_2d8 + 0x50) + (longlong)iVar19 * 4) =
                           (int)local_2b8->_padding_;
                    }
                    local_2a0 = fVar46;
                    if ((((float *)local_2d8->_padding_ <= &local_2a0) &&
                        (&local_2a0 <
                         (float *)local_2d8->_padding_ + *(int *)((longlong)local_2d8 + 0x1c))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    iVar19 = *(int *)&local_2d8->ArrayForChannels;
                    if (iVar19 == *(int *)((longlong)local_2d8 + 0x1c)) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)&local_2d8->_padding_,local_170
                                         );
                    }
                    *(int *)&local_2d8->ArrayForChannels = iVar19 + 1;
                    *(float *)(local_2d8->_padding_ + (longlong)iVar19 * 4) = local_2a0;
                  }
                  if (!bVar13) {
                    uVar37 = (pFVar27->Info).GroupID;
                    uVar21 = 0;
                    if ((int)uVar37 < local_278.ArrayNum) {
                      uVar21 = ~uVar37 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar14 = (*pcVar9)();
                      return (bool)uVar14;
                    }
                    *(int *)(local_278.AllocatorInstance.Data + (longlong)(int)uVar37 * 4) =
                         *(int *)(local_278.AllocatorInstance.Data + (longlong)(int)uVar37 * 4) + 1;
                  }
                }
                local_2fc = local_2fc + 1;
                uVar35 = uVar35 + 1;
                pFVar33 = local_1c8;
              } while ((int)uVar35 < (int)uVar18);
            }
          }
          else {
            puVar1 = &(pFVar27->Info).Flags;
            *puVar1 = *puVar1 | 2;
            if (bVar13) {
              puVar38 = &(pFVar27->Guides).field_0x168;
              *(uint *)puVar38 = *(uint *)puVar38 | 2;
              local_2fc = local_2fc + uVar18;
            }
            else {
              puVar38 = &(pFVar27->Strands).field_0x168;
              *(uint *)puVar38 = *(uint *)puVar38 | 2;
              local_2fc = local_2fc + uVar18;
            }
          }
        }
LAB_14e0015b7:
        local_2c0 = (FStrandID)((int)local_2c0 + 1);
      } while ((int)local_2c0 < local_29c);
    }
    iVar19 = (local_290->HairGroups).ArrayNum;
    pFVar39 = (local_290->HairGroups).AllocatorInstance.Data;
    pFVar43 = pFVar39 + (longlong)iVar19 * 0x318;
    pFVar34 = local_290;
    iVar20 = 0;
    while( true ) {
      if ((pFVar34->HairGroups).ArrayNum != iVar19) {
        local_2bc[0] = 0;
        `TCheckedPointerIterator<FHairDescriptionGroup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2bc);
        pFVar34 = local_290;
      }
      if (pFVar39 == pFVar43) break;
      *(int *)pFVar39 = iVar20;
      pFVar39 = pFVar39 + 0x318;
      iVar20 = iVar20 + 1;
    }
    pFVar43 = (pFVar34->HairGroups).AllocatorInstance.Data;
    iVar19 = (pFVar34->HairGroups).ArrayNum;
    pFVar39 = pFVar43 + 0x40;
    pFVar41 = pFVar43 + (longlong)iVar19 * 0x318;
    fVar45 = __real_ff7fffff;
    fVar47 = __real_ff7fffff;
    fVar49 = __real_ff7fffff;
    fVar50 = __real_7f7fffff;
    fVar48 = __real_7f7fffff;
    fVar46 = __real_7f7fffff;
    while( true ) {
      if ((pFVar34->HairGroups).ArrayNum != iVar19) {
        local_2c3 = 0;
        `TCheckedPointerIterator<FHairDescriptionGroup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2c3);
        pFVar34 = local_290;
      }
      if (pFVar43 == pFVar41) break;
      iVar20 = *(int *)pFVar39;
      pfVar40 = *(float **)(pFVar39 + -8);
      pfVar26 = pfVar40 + (longlong)iVar20 * 3;
      while( true ) {
        if (*(int *)pFVar39 != iVar20) {
          local_2c2 = 0;
          `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2c2);
        }
        if (pfVar40 == pfVar26) break;
        if (*pfVar40 <= fVar50) {
          fVar50 = *pfVar40;
        }
        if (pfVar40[1] <= fVar48) {
          fVar48 = pfVar40[1];
        }
        if (pfVar40[2] <= fVar46) {
          fVar46 = pfVar40[2];
        }
        if (fVar47 <= *pfVar40) {
          fVar47 = *pfVar40;
        }
        if (fVar45 <= pfVar40[1]) {
          fVar45 = pfVar40[1];
        }
        if (fVar49 <= pfVar40[2]) {
          fVar49 = pfVar40[2];
        }
        pfVar40 = pfVar40 + 3;
      }
      pFVar43 = pFVar43 + 0x318;
      pFVar39 = pFVar39 + 0x318;
      pFVar34 = local_290;
    }
    fVar45 = fVar45 - fVar48;
    fVar47 = fVar47 - fVar50;
    fVar49 = fVar49 - fVar46;
    (pFVar34->Bounds).Origin.field0_0x0._s_0.X = fVar50 + fVar47 * fVar11;
    (pFVar34->Bounds).Origin.field0_0x0._s_0.Y = fVar48 + fVar45 * fVar11;
    (pFVar34->Bounds).Origin.field0_0x0._s_0.Z = fVar46 + fVar49 * fVar11;
    (pFVar34->Bounds).BoxExtent.field0_0x0._s_0.X = fVar47 * fVar11;
    (pFVar34->Bounds).BoxExtent.field0_0x0._s_0.Y = fVar45 * fVar11;
    (pFVar34->Bounds).BoxExtent.field0_0x0._s_0.Z = fVar49 * fVar11;
    (pFVar34->Bounds).SphereRadius =
         SQRT((fVar45 * fVar45 + fVar47 * fVar47 + fVar49 * fVar49) * __real_3e800000);
    pFVar43 = (pFVar34->HairGroups).AllocatorInstance.Data;
    iVar19 = (pFVar34->HairGroups).ArrayNum;
    pFVar39 = pFVar43 + 0xa4;
    pFVar41 = pFVar43 + (longlong)iVar19 * 0x318;
    while( true ) {
      if ((pFVar34->HairGroups).ArrayNum != iVar19) {
        local_2c1 = 0;
        `TCheckedPointerIterator<FHairDescriptionGroup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2c1);
      }
      if (pFVar43 == pFVar41) break;
      if ((*(int *)(pFVar39 + 0x14) != *(int *)(pFVar39 + -0x94)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Group.Strands.GetNumCurves() == Group.Info.NumCurves",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0x9a5,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if ((*(int *)(pFVar39 + 0x184) != *(int *)(pFVar39 + -0x90)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Group.Guides.GetNumCurves() == Group.Info.NumGuides",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0x9a6,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      *(uint *)(pFVar39 + -0x8c) = *(uint *)(pFVar39 + -100);
      *(undefined4 *)(pFVar39 + -0x88) = *(undefined4 *)(pFVar39 + 0x10c);
      FHairStrandsPoints::SetNum
                ((FHairStrandsPoints *)(pFVar39 + -0x6c),*(uint *)(pFVar39 + -100),0,true);
      FHairStrandsCurves::SetNum
                ((FHairStrandsCurves *)(pFVar39 + 0xc),*(uint *)(pFVar39 + 0x14),0,true);
      FHairStrandsPoints::SetNum
                ((FHairStrandsPoints *)(pFVar39 + 0x104),*(uint *)(pFVar39 + 0x10c),0,false);
      FHairStrandsCurves::SetNum
                ((FHairStrandsCurves *)(pFVar39 + 0x17c),*(uint *)(pFVar39 + 0x184),0,false);
      uVar18 = *(uint *)(pFVar39 + -0xa0);
      uVar35 = 0;
      if ((int)uVar18 < local_288.ArrayNum) {
        uVar35 = ~uVar18 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar2 = pFVar39 + -0xc;
      pFVar36 = local_288.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
      if (pFVar2 != pFVar36) {
        iVar20 = *(int *)(pFVar36 + 8);
        pFVar36 = *(FScriptContainerElement **)&pFVar36->field_0x0;
        *(int *)(pFVar39 + -4) = iVar20;
        if ((iVar20 == 0) && (*(int *)pFVar39 == 0)) {
          *(undefined4 *)pFVar39 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar20,*(int *)pFVar39,(ForAnyElementType *)pFVar2,iVar20,(int *)pFVar39);
          if (iVar20 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,pFVar36,(longlong)iVar20 << 2);
          }
        }
      }
      uVar18 = *(uint *)(pFVar39 + -0xa0);
      uVar35 = 0;
      if ((int)uVar18 < local_268.ArrayNum) {
        uVar35 = ~uVar18 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar2 = pFVar39 + 0xe4;
      pFVar36 = local_268.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
      if (pFVar2 != pFVar36) {
        iVar20 = *(int *)(pFVar36 + 8);
        pFVar3 = pFVar39 + 0xf0;
        pFVar36 = *(FScriptContainerElement **)&pFVar36->field_0x0;
        *(int *)(pFVar39 + 0xec) = iVar20;
        if ((iVar20 == 0) && (*(int *)pFVar3 == 0)) {
          *(int *)pFVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar20,*(int *)pFVar3,(ForAnyElementType *)pFVar2,iVar20,(int *)pFVar3);
          if (iVar20 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,pFVar36,(longlong)iVar20 << 2);
          }
        }
      }
      pFVar43 = pFVar43 + 0x318;
      pFVar39 = pFVar39 + 0x318;
      pFVar34 = local_290;
    }
    bVar17 = true;
    DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_268.AllocatorInstance.Data,
               local_268.ArrayNum);
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_268.AllocatorInstance.Data !=
        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data,
               local_288.ArrayNum);
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data !=
        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar17;
}

// BuildInterplationBulkData @ 14e0024d0

void __cdecl
FGroomBuilder::BuildInterplationBulkData
          (FHairStrandsDatas *param_1,FHairStrandsInterpolationDatas *param_2,
          FHairStrandsInterpolationBulkData *param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_98;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  uint auStack_78 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> aTStack_70 [3];
  
  FHairStrandsInterpolationBulkData::Reset(param_3);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1745,"HairInterpolationBuilder::BuildInterplationBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x6d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1745);
  }
  uVar2 = (param_2->PointSimIndices).ArrayNum;
  if ((uVar2 != 0) && (uVar17 = (param_2->CurveSimIndices).ArrayNum, uVar17 != 0)) {
    (param_3->Header).Flags = 1;
    (param_3->Header).PointCount = uVar2;
    (param_3->Header).CurveCount = uVar17;
    (param_3->Header).Strides.CurveInterpolationStride = 0;
    (param_3->Header).Strides.PointInterpolationStride = 0;
    uVar18 = 2 - (param_2->bUseUniqueGuide != false);
    if (param_2->bUseUniqueGuide != false) {
      (param_3->Header).Flags = 3;
    }
    aTStack_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Header).Strides.CurveInterpolationStride = uVar18 * 8;
    (param_3->Header).Strides.PointInterpolationStride = uVar18 * 2;
    aTStack_70[0].ArrayNum = 0;
    aTStack_70[0].ArrayMax = 0;
    uStack_88 = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (aTStack_70,&uStack_88,(uVar18 * uVar17 & 0x1fffffff) << 1);
    FVar7.Data = aTStack_70[0].AllocatorInstance.Data;
    fVar6 = __real_437f0000;
    uVar16 = 0;
    if (uVar17 != 0) {
      do {
        lVar11 = (longlong)(int)uVar16;
        uVar14 = 0;
        uVar12 = ~uVar16 >> 0x1f;
        iStack_80 = uVar16 * uVar18;
        uStack_84 = uVar12;
        do {
          uVar13 = (ulonglong)(uVar14 + iStack_80);
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimIndices).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar15 = (longlong)(int)uVar14;
          *(uint *)(FVar7.Data + uVar13 * 8) =
               *(uint *)(FVar7.Data + uVar13 * 8) ^
               (*(uint *)(FVar7.Data + uVar13 * 8) ^
               *(uint *)((param_2->CurveSimIndices).AllocatorInstance.Data +
                        (lVar15 + lVar11 * 2) * 4)) & 0xffffff;
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimWeights).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_2->CurveSimWeights).AllocatorInstance.Data;
          if ((1 < uVar14) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                 ,0x4b9,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = uStack_84;
          fVar20 = *(float *)(pFVar3 + lVar15 * 4 + lVar11 * 8) * fVar6;
          if (fVar6 <= fVar20) {
            fVar20 = fVar6;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          FVar7.Data[uVar13 * 8 + 3] = SUB81((longlong)fVar20,0);
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimRootPointIndex).ArrayNum) {
            uVar9 = uStack_84;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 1;
          *(undefined4 *)(FVar7.Data + uVar13 * 8 + 4) =
               *(undefined4 *)
                ((param_2->CurveSimRootPointIndex).AllocatorInstance.Data +
                (lVar15 + lVar11 * 2) * 4);
        } while (uVar14 < uVar18);
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
    TStack_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_98.ArrayNum = 0;
    TStack_98.ArrayMax = 0;
    auStack_78[0] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (&TStack_98,auStack_78,
               uVar2 * (param_3->Header).Strides.PointInterpolationStride + 3 >> 2);
    FVar7.Data = TStack_98.AllocatorInstance.Data;
    uVar17 = 0;
    if (uVar2 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar17 < (param_2->PointSimIndices).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_2->PointSimIndices).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)uVar17 < (param_2->PointSimLerps).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->PointSimLerps).AllocatorInstance.Data;
        uVar16 = 0;
        do {
          lVar11 = (longlong)(int)uVar16;
          uVar13 = (ulonglong)(uVar17 * uVar18 + uVar16);
          FVar7.Data[uVar13 * 2] = pFVar3[lVar11 * 4 + (longlong)(int)uVar17 * 8];
          if ((1 < uVar16) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                 ,0x4b9,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          fVar20 = *(float *)(pFVar4 + lVar11 * 4 + (longlong)(int)uVar17 * 8) * fVar6;
          if (fVar6 <= fVar20) {
            fVar20 = fVar6;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          FVar7.Data[uVar13 * 2 + 1] = SUB41((int)fVar20,0);
        } while (uVar16 < uVar18);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2);
    }
    uVar2 = (param_3->Header).PointCount;
    iVar1 = TStack_98.ArrayNum * 4;
    if ((uVar2 * (param_3->Header).Strides.PointInterpolationStride & 3) != 0) {
      if (param_2->bUseUniqueGuide == false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                           ,0x735,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        (param_3->Header).PointCount = uVar2 + 1 & 0xfffffffe;
      }
    }
    if (((param_3->Header).PointCount * (param_3->Header).Strides.PointInterpolationStride != iVar1)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("PointSizeFromHeader == PointTotalSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0x739,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar1 = aTStack_70[0].ArrayNum;
    FBulkData::Lock((FBulkData *)&(param_3->Data).CurveInterpolation.Data,2);
    pvVar10 = FBulkData::Realloc((FBulkData *)&(param_3->Data).CurveInterpolation.Data,
                                 (ulonglong)(uint)(iVar1 * 4),1);
    memcpy(pvVar10,aTStack_70[0].AllocatorInstance.Data,(ulonglong)(uint)(iVar1 * 4));
    FBulkData::Unlock((FBulkData *)&(param_3->Data).CurveInterpolation.Data);
    iVar1 = TStack_98.ArrayNum;
    FBulkData::Lock((FBulkData *)&(param_3->Data).PointInterpolation.Data,2);
    pvVar10 = FBulkData::Realloc((FBulkData *)&(param_3->Data).PointInterpolation.Data,
                                 (ulonglong)(uint)(iVar1 * 4),1);
    memcpy(pvVar10,TStack_98.AllocatorInstance.Data,(ulonglong)(uint)(iVar1 * 4));
    FBulkData::Unlock((FBulkData *)&(param_3->Data).PointInterpolation.Data);
    if (TStack_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_98.AllocatorInstance.Data);
    }
    if (aTStack_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(aTStack_70[0].AllocatorInstance.Data);
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildInterplationData @ 14e002b20

void __cdecl
FGroomBuilder::BuildInterplationData
          (FHairGroupInfo *param_1,FHairStrandsDatas *param_2,FHairStrandsDatas *param_3,
          FHairInterpolationSettings *param_4,FHairStrandsInterpolationDatas *param_5)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_50 [2];
  
  if ((param_5->PointSimIndices).ArrayNum == 0) {
    if (((param_4->GuideType == Imported) && (0 < (int)param_2->_padding_)) &&
       (0 < (int)param_2->_padding_)) {
      HairInterpolationBuilder::FillInterpolationData(param_2,param_3,param_5);
      return;
    }
    uVar9 = param_1->GroupID;
    uVar7 = 0;
    uVar1 = (uint)param_2->_padding_;
    local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50[0].ArrayNum = 0;
    local_50[0].ArrayMax = 0;
    if ((int)uVar1 < 1) {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,&local_50[0].AllocatorInstance,&local_50[0].ArrayNum,
                 &local_50[0].ArrayMax);
      fVar3 = __real_3f800000;
      uVar8 = uVar7;
      do {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < local_50[0].ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar5 = uVar9 * 0xbb38435 + 0x3619636b;
        uVar9 = uVar5 * 0xbb38435 + 0x3619636b;
        fVar10 = (float)(uVar5 >> 9 | 0x3f800000) - fVar3;
        *(int *)(local_50[0].AllocatorInstance.Data + uVar8) = (int)(fVar10 + fVar10);
        fVar10 = (float)(uVar9 >> 9 | 0x3f800000) - fVar3;
        *(int *)(local_50[0].AllocatorInstance.Data + uVar8 + 4) = (int)(fVar10 + fVar10);
        uVar8 = uVar8 + 0xc;
      } while ((int)(uVar6 + 1) < (int)uVar1);
    }
    HairInterpolationBuilder::BuildInterpolationData(param_5,param_3,param_2,param_4,local_50);
    if (local_50[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].AllocatorInstance.Data);
    }
  }
  return;
}

// BuildRenderCurveResourceBulkData @ 14e0030d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGroomBuilder::BuildRenderCurveResourceBulkData
          (FHairStrandsDatas *param_1,FRenderCurveResourceData *param_2)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FAllocation local_40;
  undefined5 local_38;
  undefined4 uStack_33;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  uchar local_28 [8];
  uchar local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_20 = (uchar  [4])FIoChunkId::InvalidChunkId.Id._8_4_;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_2e = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_28 = (uchar  [8])FIoChunkId::InvalidChunkId.Id._0_8_;
  local_1c = 0;
  local_40.RawData = (void *)0x0;
  (param_2->Header).Id.A = 0;
  (param_2->Header).Id.B = 0;
  (param_2->Header).Id.C = 0;
  (param_2->Header).Id.D = 0;
  uStack_33 = 0xffffffff;
  (param_2->Header).ClusterCount = 0;
  (param_2->Header).MaxClusterStrideInBytes = 0;
  uStack_2f = 0xff;
  FBulkData::operator=((FBulkData *)&param_2->Data,(FBulkData *)&local_40);
  FBulkData::~FBulkData((FBulkData *)&local_40);
  bVar1 = IsRenderCurveEnabled();
  if (bVar1) {
    HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData(param_1,param_2);
  }
  return;
}

// GetVersion @ 14e019d60

FString * __cdecl FGroomBuilder::GetVersion(FString *__return_storage_ptr__)

{
  bool bVar1;
  
  ::FString::FString(__return_storage_ptr__,L"v21");
  bVar1 = IsRenderCurveEnabled();
  if (bVar1) {
    ::FString::AppendChars(__return_storage_ptr__,L"_Curve4a",8);
  }
  return __return_storage_ptr__;
}

// VoxelizeGroupIndex @ 14e02f420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGroomBuilder::VoxelizeGroupIndex(FHairDescriptionGroups *param_1,FHairStrandsVoxelData *param_2)

{
  float fVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement FVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  ushort uVar22;
  FScriptContainerElement *pFVar23;
  TArray<FHairStrandsVoxelData::FData,TSizedDefaultAllocator<32>_> *pTVar24;
  float *pfVar25;
  float fVar26;
  undefined1 auStackY_2c8 [32];
  undefined2 local_278;
  undefined1 local_276;
  undefined1 local_275 [5];
  ForAnyElementType local_270;
  undefined8 local_268;
  uint local_260;
  uint local_25c;
  TArray<FHairStrandsVoxelData::FData,TSizedDefaultAllocator<32>_> *local_258;
  int *local_250;
  uint local_248;
  FHairGrid local_240;
  TVector<float>_u_0 local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  undefined1 local_1f0;
  undefined1 local_1e8 [400];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_1fc = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  local_1f8 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_1f4 = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  local_208._s_0.X = local_1fc - (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_1fc = local_1fc + (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_1f0 = 1;
  local_208._s_0.Y = local_1f8 - (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_1f8 = local_1f8 + (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_208._s_0.Z = local_1f4 - (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_1f4 = local_1f4 + (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  uVar20 = 0;
  local_240.Voxels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.Voxels.ArrayNum = 0;
  local_240.Voxels.ArrayMax = 0;
  GroomBuilder_Voxelization::AllocateVoxels((TBox<float> *)&local_208._s_0,&local_240);
  iVar13 = (param_1->HairGroups).ArrayNum;
  pFVar15 = (param_1->HairGroups).AllocatorInstance.Data;
  pFVar23 = pFVar15 + (longlong)iVar13 * 0x318;
  while( true ) {
    if ((param_1->HairGroups).ArrayNum != iVar13) {
      local_276 = 0;
      `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_276);
    }
    if (pFVar15 == pFVar23) break;
    HairStrandsBuilder::BuildInternalData
              ((FHairStrandsDatas *)local_1e8,(FHairStrandsCommonDatas *)(pFVar15 + 0x38));
    GroomBuilder_Voxelization::VoxelizeCurves((FHairStrandsDatas *)local_1e8,uVar20,&local_240);
    uVar20 = uVar20 + 1;
    FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_1e8 + 0x78));
    FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_1e8);
    pFVar15 = pFVar15 + 0x318;
  }
  pTVar24 = &param_2->Datas;
  piVar21 = &(param_2->Datas).ArrayNum;
  iVar11 = local_240.Voxels.ArrayNum;
  lVar16 = (longlong)local_240.Voxels.ArrayNum;
  *(undefined8 *)&(param_2->MinBound).field0_0x0 = local_240.MinBound.field0_0x0._0_8_;
  *(undefined8 *)&(param_2->MaxBound).field0_0x0 = local_240.MaxBound.field0_0x0._0_8_;
  (param_2->MinBound).field0_0x0._s_0.Z = local_240.MinBound.field0_0x0._s_0.Z;
  (param_2->MaxBound).field0_0x0._s_0.Z = local_240.MaxBound.field0_0x0._s_0.Z;
  *(undefined8 *)&(param_2->Resolution).field0_0x0 = local_240.Resolution.field0_0x0._0_8_;
  (param_2->Resolution).field0_0x0._s_0.Z = local_240.Resolution.field0_0x0._s_0.Z;
  iVar13 = *piVar21;
  local_258 = pTVar24;
  local_250 = piVar21;
  if (iVar13 < local_240.Voxels.ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,local_240.Voxels.ArrayNum - iVar13,&pTVar24->AllocatorInstance,piVar21,
               &(param_2->Datas).ArrayMax);
  }
  else {
    if (local_240.Voxels.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_240.Voxels._8_8_ & 0xffffffff);
    }
    if (local_240.Voxels.ArrayNum < iVar13) {
      uVar20 = iVar13 - local_240.Voxels.ArrayNum;
      if (((int)(local_240.Voxels.ArrayNum | uVar20) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar20 != 0) {
        pFVar15 = (pTVar24->AllocatorInstance).Data + lVar16 * 0x14;
        iVar13 = (*piVar21 - iVar11) - uVar20;
        if (iVar13 != 0) {
          memmove(pFVar15,pFVar15 + (longlong)(int)uVar20 * 0x14,(longlong)iVar13 * 0x14);
        }
        *piVar21 = *piVar21 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,&pTVar24->AllocatorInstance,*piVar21,&(param_2->Datas).ArrayMax);
      }
    }
  }
  fVar5 = __real_3f800000;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  local_248 = local_240.Voxels.ArrayNum;
  local_25c = 0;
  if (local_240.Voxels.ArrayNum != 0) {
    do {
      uVar20 = local_25c;
      uVar19 = ~local_25c >> 0x1f;
      uVar10 = 0;
      if ((int)local_25c < *piVar21) {
        uVar10 = uVar19;
      }
      local_260 = uVar19;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar16 = (longlong)(int)uVar20;
      (pTVar24->AllocatorInstance).Data[lVar16 * 0x14 + 0x10] = (FScriptContainerElement)0xff;
      uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar10 = 0;
      if ((int)uVar20 < *piVar21) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (pTVar24->AllocatorInstance).Data;
      *(undefined8 *)(pFVar15 + lVar16 * 0x14) = uVar6;
      *(undefined4 *)(pFVar15 + lVar16 * 0x14 + 8) = uVar7;
      uVar10 = 0;
      if ((int)uVar20 < *piVar21) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_278 = 0;
      *(undefined4 *)((pTVar24->AllocatorInstance).Data + lVar16 * 0x14 + 0xc) = 0;
      bVar9 = local_268._4_4_ != 0x40;
      local_268 = (ulonglong)local_268._4_4_ << 0x20;
      iVar13 = 0;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0x40,&local_270,0,(int *)((longlong)&local_268 + 4));
        iVar13 = (int)local_268;
      }
      lVar17 = 0x40;
      do {
        iVar11 = iVar13;
        if ((local_270.Data <= (FScriptContainerElement *)&local_278) &&
           ((FScriptContainerElement *)&local_278 <
            local_270.Data + (longlong)(int)local_268._4_4_ * 2)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (int)local_268;
        }
        if (iVar11 == local_268._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_270,(int *)((longlong)&local_268 + 4));
        }
        iVar13 = iVar11 + 1;
        local_268 = CONCAT44(local_268._4_4_,iVar13);
        *(undefined2 *)(local_270.Data + (longlong)iVar11 * 2) = local_278;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      uVar10 = 0;
      if ((int)uVar20 < local_240.Voxels.ArrayNum) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8.Data = local_240.Voxels.AllocatorInstance.Data;
      iVar13 = *(int *)(local_240.Voxels.AllocatorInstance.Data + lVar16 * 0x10 + 8);
      pfVar18 = *(float **)(local_240.Voxels.AllocatorInstance.Data + lVar16 * 0x10);
      pfVar25 = pfVar18 + (longlong)iVar13 * 7;
      while( true ) {
        if (*(int *)(FVar8.Data + lVar16 * 0x10 + 8) != iVar13) {
          local_275[0] = 0;
          `TCheckedPointerIterator<GroomBuilder_Voxelization::FHairGrid::FCurve,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_275);
        }
        uVar10 = local_260;
        if (pfVar18 == pfVar25) break;
        if ((*(char *)(pfVar18 + 6) == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Curve.GroupIndex != FHairStrandsVoxelData::InvalidGroupIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                               ,0xd39,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_268 <= (int)(uint)*(byte *)(pfVar18 + 6)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Curve.GroupIndex < GroupBins.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                             ,0xd3a,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        bVar2 = *(byte *)(pfVar18 + 6);
        if (((int)local_268 <= (int)(uint)bVar2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = local_25c;
        *(short *)(local_270.Data + (ulonglong)bVar2 * 2) =
             *(short *)(local_270.Data + (ulonglong)bVar2 * 2) + 1;
        uVar10 = 0;
        if ((int)local_25c < *local_250) {
          uVar10 = local_260;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (local_258->AllocatorInstance).Data;
        *(float *)(pFVar15 + lVar16 * 0x14) = *(float *)(pFVar15 + lVar16 * 0x14) + *pfVar18;
        *(float *)(pFVar15 + lVar16 * 0x14 + 4) =
             pfVar18[1] + *(float *)(pFVar15 + lVar16 * 0x14 + 4);
        *(float *)(pFVar15 + lVar16 * 0x14 + 8) =
             pfVar18[2] + *(float *)(pFVar15 + lVar16 * 0x14 + 8);
        fVar1 = pfVar18[3];
        uVar10 = 0;
        if ((int)uVar20 < *local_250) {
          uVar10 = local_260;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar18 = pfVar18 + 7;
        pFVar15 = (local_258->AllocatorInstance).Data;
        *(float *)(pFVar15 + lVar16 * 0x14 + 0xc) =
             fVar1 + *(float *)(pFVar15 + lVar16 * 0x14 + 0xc);
      }
      uVar19 = 0;
      if ((int)uVar20 < local_240.Voxels.ArrayNum) {
        uVar19 = local_260;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = *(uint *)(local_240.Voxels.AllocatorInstance.Data + lVar16 * 0x10 + 8);
      if (uVar19 != 0) {
        uVar12 = 0;
        if ((int)uVar20 < *local_250) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar24 = local_258;
        pFVar15 = (local_258->AllocatorInstance).Data;
        fVar26 = fVar5 / (float)uVar19;
        fVar1 = *(float *)(pFVar15 + lVar16 * 0x14 + 4);
        *(float *)(pFVar15 + lVar16 * 0x14) = fVar26 * *(float *)(pFVar15 + lVar16 * 0x14);
        *(float *)(pFVar15 + lVar16 * 0x14 + 4) = fVar26 * fVar1;
        *(float *)(pFVar15 + lVar16 * 0x14 + 8) = fVar26 * *(float *)(pFVar15 + lVar16 * 0x14 + 8);
        uVar12 = 0;
        if ((int)uVar20 < local_258->ArrayNum) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (pTVar24->AllocatorInstance).Data;
        *(float *)(pFVar15 + lVar16 * 0x14 + 0xc) =
             fVar26 * *(float *)(pFVar15 + lVar16 * 0x14 + 0xc);
      }
      uVar12 = local_25c;
      uVar22 = 0;
      piVar21 = local_250;
      if (uVar19 < 2) {
        if (uVar19 == 1) {
          uVar19 = 0;
          if ((int)uVar20 < local_240.Voxels.ArrayNum) {
            uVar19 = uVar10;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8.Data = local_240.Voxels.AllocatorInstance.Data;
          if ((*(int *)(local_240.Voxels.AllocatorInstance.Data + lVar16 * 0x10 + 8) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          piVar21 = local_250;
          FVar3 = *(FScriptContainerElement *)(*(longlong *)(FVar8.Data + lVar16 * 0x10) + 0x18);
          uVar19 = 0;
          if ((int)uVar20 < *local_250) {
            uVar19 = uVar10;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (local_258->AllocatorInstance).Data[lVar16 * 0x14 + 0x10] = FVar3;
        }
      }
      else {
        FVar3 = local_268._0_1_;
        FVar14 = (FScriptContainerElement)0x0;
        if (local_268._0_1_ != (FScriptContainerElement)0x0) {
          do {
            if (((int)local_268 <= (int)(uint)(byte)FVar14) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar22 < *(ushort *)(local_270.Data + (ulonglong)(byte)FVar14 * 2)) {
              uVar20 = 0;
              if ((int)uVar12 < *local_250) {
                uVar20 = local_260;
              }
              if ((uVar20 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (local_258->AllocatorInstance).Data[lVar16 * 0x14 + 0x10] = FVar14;
              if (((int)local_268 <= (int)(uint)(byte)FVar14) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar22 = *(ushort *)(local_270.Data + (ulonglong)(byte)FVar14 * 2);
            }
            FVar14 = (FScriptContainerElement)((char)FVar14 + '\x01');
            piVar21 = local_250;
            uVar20 = local_25c;
          } while ((byte)FVar14 < (byte)FVar3);
        }
      }
      local_25c = uVar20 + 1;
      pTVar24 = local_258;
    } while (local_25c < local_248);
  }
  if (local_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data);
  }
  DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>
            ((FVoxel *)local_240.Voxels.AllocatorInstance.Data,local_240.Voxels.ArrayNum);
  if (local_240.Voxels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Voxels.AllocatorInstance.Data);
  }
  return;
}

