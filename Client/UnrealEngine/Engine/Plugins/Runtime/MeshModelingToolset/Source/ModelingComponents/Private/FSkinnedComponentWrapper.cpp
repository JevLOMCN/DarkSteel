// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FSkinnedComponentWrapper @ 14ca667c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedComponentWrapper * __thiscall
UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper
          (FSkinnedComponentWrapper *this,USkinnedMeshComponent *param_1,int param_2,bool param_3,
          bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FSkeletalMeshRenderData *pFVar3;
  FScriptContainerElement *pFVar4;
  FSkinWeightInfo *pFVar5;
  code *pcVar6;
  USkinnedMeshComponent *this_00;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  USkinnedAsset *pUVar12;
  FSkeletalMeshLODInfo *pFVar13;
  FSkinnedComponentWrapper *pFVar14;
  longlong lVar15;
  FSkinWeightVertexBuffer *this_01;
  ulong64 uVar16;
  uint uVar17;
  longlong lVar18;
  FSkinnedComponentWrapper *pFVar19;
  int iVar20;
  ulong64 uVar21;
  ushort *puVar22;
  ushort *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_148 [32];
  undefined1 local_f8;
  undefined1 local_f7 [3];
  uint local_f4;
  int local_f0 [2];
  FSkinnedComponentWrapper *local_e8;
  longlong local_e0;
  uint local_d8;
  undefined8 local_d0;
  uint local_c8;
  USkinnedMeshComponent *local_c0;
  int local_b8 [2];
  longlong local_b0;
  ushort *local_a8;
  FString local_a0;
  FString local_90;
  FSkinWeightInfo local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar16 = 0;
  (this->SkinnedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedVertices).ArrayNum = 0;
  (this->SkinnedVertices).ArrayMax = 0;
  this->Component = param_1;
  this->LOD = param_2;
  this->bUseDisabledSections = param_3;
  this->bHasTangents = param_4;
  local_e8 = this;
  local_c0 = param_1;
  pUVar12 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  this->Asset = pUVar12;
  this->SkeletalMeshRenderData = param_1->MeshObject->SkeletalMeshRenderData;
  (this->VertIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertIDs).ArrayNum = 0;
  (this->VertIDs).ArrayMax = 0;
  (this->TriIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriIDs).ArrayNum = 0;
  (this->TriIDs).ArrayMax = 0;
  (this->TriIDtoSectionID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriIDtoSectionID).ArrayNum = 0;
  (this->TriIDtoSectionID).ArrayMax = 0;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  (this->SkinWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeights).ArrayNum = 0;
  (this->SkinWeights).ArrayMax = 0;
  iVar9 = USkinnedMeshComponent::ComputeMinLOD(param_1);
  iVar10 = USkinnedMeshComponent::GetNumLODs(param_1);
  iVar20 = iVar10 + -1;
  if (param_2 < iVar10 + -1) {
    iVar20 = param_2;
  }
  if (iVar9 < iVar20) {
    iVar9 = iVar20;
  }
  this->LOD = iVar9;
  if ((iVar9 != param_2) && (2 < (byte)LogGeometry._0_1_)) {
    Logging::Private::BasicLog<3>
              (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  pFVar13 = (FSkeletalMeshLODInfo *)
            (**(code **)(*(longlong *)this->Asset + 0x330))(this->Asset,this->LOD);
  uVar25 = this->LOD;
  pFVar3 = this->SkeletalMeshRenderData;
  this->SrcLODInfo = pFVar13;
  uVar26 = 0;
  if ((int)uVar25 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar26 = ~uVar25 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
    return pFVar14;
  }
  lVar18 = *(longlong *)
            ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
  local_e0 = lVar18;
  if ((*(longlong *)(lVar18 + 0x28) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexBuffer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
    return pFVar14;
  }
  this->IndexBuffer = *(FRawStaticIndexBuffer16or32Interface **)(lVar18 + 0x28);
  USkinnedMeshComponent::GetCPUSkinnedVertices(this->Component,&this->SkinnedVertices,this->LOD);
  lVar15 = (longlong)*(int *)(lVar18 + 0x18);
  local_c8 = 0;
  local_d0 = (ushort *)((ulonglong)local_d0._4_4_ << 0x20);
  local_b0 = lVar15;
  if (0 < *(int *)(lVar18 + 0x18)) {
    uVar25 = 0;
    uVar26 = 0;
    uVar21 = uVar16;
    do {
      uVar17 = (uint)uVar16;
      uVar11 = 0;
      if ((int)uVar17 < *(int *)(lVar18 + 0x18)) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
        return pFVar14;
      }
      lVar18 = *(longlong *)(lVar18 + 0x10);
      if ((this->bUseDisabledSections != false) ||
         (bVar7 = USkinnedMeshComponent::IsMaterialSectionShown
                            (param_1,(uint)*(ushort *)(lVar18 + uVar21),this->LOD), bVar7)) {
        uVar25 = uVar25 + *(int *)(lVar18 + 8 + uVar21);
        uVar26 = uVar26 + *(int *)(lVar18 + 0x48 + uVar21);
      }
      uVar16 = (ulong64)(uVar17 + 1);
      uVar21 = uVar21 + 0x118;
      lVar15 = lVar15 + -1;
      lVar18 = local_e0;
    } while (lVar15 != 0);
    uVar16 = (ulong64)uVar26;
    local_d0 = (ushort *)CONCAT44(local_d0._4_4_,uVar26);
    local_c8 = uVar25;
  }
  bVar7 = false;
  iVar20 = (int)uVar16;
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar16);
  }
  if ((this->VertIDs).ArrayMax < iVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar20,&(this->VertIDs).AllocatorInstance,(this->VertIDs).ArrayNum,
               &(this->VertIDs).ArrayMax);
  }
  pFVar14 = local_e8;
  local_d8 = *(uint *)(lVar18 + 0x18);
  uVar24 = (ulonglong)(int)local_d8;
  puVar22 = *(ushort **)(lVar18 + 0x10);
  pTVar1 = &local_e8->VertIDs;
  puVar23 = puVar22 + uVar24 * 0x8c;
  pFVar19 = local_e8;
  local_a8 = puVar23;
  while( true ) {
    if (*(int *)(local_e0 + 0x18) != (int)uVar24) {
      local_f8 = 0;
      `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    this_00 = local_c0;
    if (puVar22 == puVar23) break;
    if ((pFVar19->bUseDisabledSections != false) ||
       (bVar8 = USkinnedMeshComponent::IsMaterialSectionShown(local_c0,(uint)*puVar22,pFVar19->LOD),
       bVar8)) {
      pFVar19 = local_e8;
      local_f0[0] = *(int *)(puVar22 + 8);
      iVar20 = *(int *)(puVar22 + 0x24) + local_f0[0];
      if (local_f0[0] < iVar20) {
        do {
          if (local_f0[0] < (pFVar19->SkinnedVertices).ArrayNum) {
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_f0) &&
                ((FScriptContainerElement *)local_f0 <
                 pFVar4 + (longlong)(pFVar14->VertIDs).ArrayMax * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
              return pFVar14;
            }
            iVar9 = (pFVar14->VertIDs).ArrayNum;
            if (iVar9 == (pFVar14->VertIDs).ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar1->AllocatorInstance,&(pFVar14->VertIDs).ArrayMax);
            }
            (pFVar14->VertIDs).ArrayNum = iVar9 + 1;
            *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_f0[0];
          }
          else {
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8494797445736169371>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                               ,0x65,"VtxIndex < SkinnedVertices.Num()");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
              return pFVar14;
            }
            bVar7 = true;
          }
          local_f0[0] = local_f0[0] + 1;
        } while (local_f0[0] < iVar20);
        uVar24 = (ulonglong)local_d8;
        pFVar19 = local_e8;
        puVar23 = local_a8;
      }
    }
    puVar22 = puVar22 + 0x8c;
  }
  lVar18 = local_e0;
  if (bVar7) {
    if (3 < (byte)LogGeometry._0_1_) {
      pUVar12 = USkinnedMeshComponent::GetSkinnedAsset(local_c0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar12,&local_90,(UObject *)0x0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_a0,(UObject *)0x0);
      Logging::Private::BasicLog<4>
                (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                  ::__l47::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      pFVar19 = local_e8;
      lVar18 = local_e0;
      if ((3 < (byte)LogGeometry._0_1_) &&
         (Logging::Private::BasicLog<4>
                    (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                      ::__l65::LOG_Static,(FLogCategoryBase *)&LogGeometry), lVar18 = local_e0,
         3 < (byte)LogGeometry._0_1_)) {
        Logging::Private::BasicLog<4>
                  (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                    ::__l83::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
    }
    if (3 < (byte)LogGeometry._0_1_) {
      (**(code **)(pFVar19->IndexBuffer->_padding_ + 0x50))();
      (**(code **)(pFVar19->IndexBuffer->_padding_ + 0x50))();
      Logging::Private::BasicLog<4>
                (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                  ::__l101::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    pFVar14 = local_e8;
    uVar25 = 0;
    if (0 < *(int *)(lVar18 + 0x18)) {
      lVar15 = 0;
      do {
        uVar26 = 0;
        if ((int)uVar25 < *(int *)(lVar18 + 0x18)) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
          return pFVar14;
        }
        if (3 < (byte)LogGeometry._0_1_) {
          if (pFVar14->bUseDisabledSections == false) {
            USkinnedMeshComponent::IsMaterialSectionShown
                      (this_00,(uint)*(ushort *)(*(longlong *)(lVar18 + 0x10) + lVar15),pFVar14->LOD
                      );
          }
          Logging::Private::BasicLog<4>
                    (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                      ::__l121::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          if ((3 < (byte)LogGeometry._0_1_) &&
             (Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)
                         &`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                          ::L::LOG_Static,(FLogCategoryBase *)&LogGeometry),
             3 < (byte)LogGeometry._0_1_)) {
            Logging::Private::BasicLog<4>
                      (&`public:___cdecl_UE::Conversion::FSkinnedComponentWrapper::FSkinnedComponentWrapper(USkinnedMeshComponent&___ptr64,int,bool,bool)___ptr64'
                        ::__l157::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          }
        }
        uVar25 = uVar25 + 1;
        lVar15 = lVar15 + 0x118;
      } while ((int)uVar25 < *(int *)(lVar18 + 0x18));
    }
  }
  pFVar14 = local_e8;
  this_01 = USkinnedMeshComponent::GetSkinWeightBuffer(local_e8->Component,local_e8->LOD);
  if (((this_01 != (FSkinWeightVertexBuffer *)0x0) &&
      ((int)(this_01->DataVertexBuffer)._padding_ != -1)) &&
     ((this_01->DataVertexBuffer).NumVertices != 0)) {
    if ((pFVar14->SkinWeights).ArrayMax < (int)local_d0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,2,(int)local_d0,&(pFVar14->SkinWeights).AllocatorInstance,
                 (pFVar14->SkinWeights).ArrayNum,&(pFVar14->SkinWeights).ArrayMax);
    }
    local_d8 = *(uint *)(lVar18 + 0x18);
    uVar24 = (ulonglong)(int)local_d8;
    pTVar2 = &pFVar14->SkinWeights;
    puVar22 = *(ushort **)(lVar18 + 0x10);
    puVar23 = puVar22 + uVar24 * 0x8c;
    pFVar19 = pFVar14;
    local_d0 = puVar23;
    while( true ) {
      if (*(int *)(lVar18 + 0x18) != (int)uVar24) {
        local_f7[0] = 0;
        `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_f7);
      }
      if (puVar22 == puVar23) break;
      if ((pFVar19->bUseDisabledSections != false) ||
         (bVar7 = USkinnedMeshComponent::IsMaterialSectionShown
                            (local_c0,(uint)*puVar22,pFVar19->LOD), bVar7)) {
        uVar25 = *(uint *)(puVar22 + 8);
        iVar20 = *(int *)(puVar22 + 0x24) + uVar25;
        lVar18 = local_e0;
        puVar23 = local_d0;
        for (; local_e0 = lVar18, local_d0 = puVar23, (int)uVar25 < iVar20; uVar25 = uVar25 + 1) {
          FSkinWeightVertexBuffer::GetVertexSkinWeights(this_01,&local_80,uVar25);
          lVar18 = 0;
          do {
            if ((int)(uint)local_80.InfluenceBones[lVar18] < *(int *)(puVar22 + 0x20)) {
              local_80.InfluenceBones[lVar18] =
                   *(ushort *)
                    (*(longlong *)(puVar22 + 0x1c) + (ulonglong)local_80.InfluenceBones[lVar18] * 2)
              ;
            }
            else {
              bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_8494797445736169320>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                                 ,0x98,"SectionBoneIdx < Section.BoneMap.Num()");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
                return pFVar14;
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < 0xc);
          pFVar5 = (FSkinWeightInfo *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= &local_80) && (&local_80 < pFVar5 + (pFVar14->SkinWeights).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
            return pFVar14;
          }
          iVar9 = (pFVar14->SkinWeights).ArrayNum;
          if (iVar9 == (pFVar14->SkinWeights).ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x230,&pTVar2->AllocatorInstance,&(pFVar14->SkinWeights).ArrayMax);
          }
          (pFVar14->SkinWeights).ArrayNum = iVar9 + 1;
          lVar18 = (longlong)iVar9;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30) = local_80.InfluenceBones._0_8_;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30 + 8) = local_80.InfluenceBones._8_8_;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30 + 0x10) = local_80.InfluenceBones._16_8_;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30 + 0x10 + 8) = local_80.InfluenceWeights._0_8_;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30 + 0x20) = local_80.InfluenceWeights._8_8_;
          *(undefined8 *)(pFVar4 + lVar18 * 0x30 + 0x20 + 8) = local_80.InfluenceWeights._16_8_;
          pFVar19 = local_e8;
          lVar18 = local_e0;
          puVar23 = local_d0;
        }
      }
      uVar24 = (ulonglong)local_d8;
      puVar22 = puVar22 + 0x8c;
    }
  }
  uVar25 = local_c8;
  pFVar14 = local_e8;
  if ((int)local_c8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)local_c8);
  }
  if ((local_e8->TriIDs).ArrayMax < (int)local_c8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_c8,&(local_e8->TriIDs).AllocatorInstance,(local_e8->TriIDs).ArrayNum,
               &(local_e8->TriIDs).ArrayMax);
  }
  local_b8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&pFVar14->TriIDtoSectionID,local_b8,uVar25);
  uVar25 = 0;
  if (0 < local_b0) {
    lVar18 = 0;
    do {
      lVar15 = local_e0;
      uVar26 = 0;
      if ((int)uVar25 < *(int *)(local_e0 + 0x18)) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
        return pFVar14;
      }
      lVar15 = *(longlong *)(lVar15 + 0x10);
      if ((pFVar14->bUseDisabledSections != false) ||
         (bVar7 = USkinnedMeshComponent::IsMaterialSectionShown
                            (local_c0,(uint)*(ushort *)(lVar15 + lVar18),pFVar14->LOD), bVar7)) {
        iVar20 = *(int *)(lVar15 + 4 + lVar18);
        local_f4 = iVar20 / 3 + (iVar20 >> 0x1f) +
                   (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        iVar20 = *(int *)(lVar15 + 8 + lVar18) + local_f4;
        for (; (int)local_f4 < iVar20; local_f4 = local_f4 + 1) {
          pFVar4 = (pFVar14->TriIDs).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_f4) &&
              ((FScriptContainerElement *)&local_f4 <
               pFVar4 + (longlong)(pFVar14->TriIDs).ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
            return pFVar14;
          }
          iVar9 = (pFVar14->TriIDs).ArrayNum;
          if (iVar9 == (pFVar14->TriIDs).ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(pFVar14->TriIDs).AllocatorInstance,
                               &(pFVar14->TriIDs).ArrayMax);
          }
          (pFVar14->TriIDs).ArrayNum = iVar9 + 1;
          *(uint *)((pFVar14->TriIDs).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_f4;
          lVar15 = (longlong)(int)local_f4;
          uVar26 = 0;
          if ((int)local_f4 < (pFVar14->TriIDtoSectionID).ArrayNum) {
            uVar26 = ~local_f4 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FSkinnedComponentWrapper *)(*pcVar6)();
            return pFVar14;
          }
          *(uint *)((pFVar14->TriIDtoSectionID).AllocatorInstance.Data + lVar15 * 4) = uVar25;
        }
      }
      uVar25 = uVar25 + 1;
      lVar18 = lVar18 + 0x118;
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  return pFVar14;
}

// GetMaterialIndex @ 14ca90530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UE::Conversion::FSkinnedComponentWrapper::GetMaterialIndex
          (FSkinnedComponentWrapper *this,int param_1)

{
  ushort uVar1;
  FSkeletalMeshRenderData *pFVar2;
  FSkeletalMeshLODInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  if (param_1 < (this->TriIDtoSectionID).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar12 = *(uint *)((this->TriIDtoSectionID).AllocatorInstance.Data + (longlong)param_1 * 4);
  lVar11 = (longlong)(int)uVar12;
  if ((0x7fffffff < uVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SectionID > -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                         ,0x129,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar8 = this->LOD;
  pFVar2 = this->SkeletalMeshRenderData;
  uVar13 = 0;
  if ((int)uVar8 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar13 = ~uVar12 >> 0x1f;
  lVar9 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  uVar8 = 0;
  if ((int)uVar12 < *(int *)(lVar9 + 0x18)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar1 = *(ushort *)(lVar11 * 0x118 + *(longlong *)(lVar9 + 0x10));
  if ((int)uVar12 < 0) {
    uVar8 = (uint)uVar1;
  }
  else {
    pFVar3 = this->SrcLODInfo;
    uVar8 = (uint)uVar1;
    if ((int)uVar12 < (pFVar3->LODMaterialMap).ArrayNum) {
      uVar10 = 0;
      if ((int)uVar12 < (pFVar3->LODMaterialMap).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if (*(int *)((pFVar3->LODMaterialMap).AllocatorInstance.Data + lVar11 * 4) != -1) {
        lVar9 = (**(code **)(*(longlong *)this->Asset + 0x3c8))();
        pFVar3 = this->SrcLODInfo;
        uVar10 = *(int *)(lVar9 + 8) - 1;
        uVar8 = 0;
        if ((int)uVar12 < (pFVar3->LODMaterialMap).ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        pFVar4 = (pFVar3->LODMaterialMap).AllocatorInstance.Data;
        if (*(int *)(pFVar4 + lVar11 * 4) < (int)uVar10) {
          uVar10 = *(uint *)(pFVar4 + lVar11 * 4);
        }
        uVar8 = 0;
        if (0 < (int)uVar10) {
          uVar8 = uVar10;
        }
      }
    }
  }
  return uVar8;
}

// GetWedgeVertexInstance @ 14ca949c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFinalSkinVertex * __thiscall
UE::Conversion::FSkinnedComponentWrapper::GetWedgeVertexInstance
          (FSkinnedComponentWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFinalSkinVertex *pFVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  
  uVar3 = (**(code **)(this->IndexBuffer->_padding_ + 0x60))
                    (this->IndexBuffer,CONCAT44(in_register_00000014,param_1));
  uVar5 = 0;
  if ((int)uVar3 < (this->SkinnedVertices).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFinalSkinVertex *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FFinalSkinVertex *)
         ((this->SkinnedVertices).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x60);
}

// HasColors @ 14ca94b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UE::Conversion::FSkinnedComponentWrapper::HasColors(FSkinnedComponentWrapper *this)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar1 = this->LOD;
  pFVar2 = this->SkeletalMeshRenderData;
  uVar7 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  if ((*(int *)(lVar3 + 0x150) != -1) && (*(int *)(lVar3 + 0x17c) != 0)) {
    return true;
  }
  return false;
}

