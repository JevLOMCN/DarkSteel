// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 5

// DeinitBoneWeightBuffer @ 14a847290

void __thiscall FWN_ISKM_MeshRenderData::DeinitBoneWeightBuffer(FWN_ISKM_MeshRenderData *this)

{
  int iVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODDatas).ArrayNum;
  puVar3 = (this->LODDatas).AllocatorInstance.InlineData[0].Pad + 0x28;
  while( true ) {
    if ((this->LODDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)(puVar3 + -0x28) ==
        (this->LODDatas).AllocatorInstance.InlineData + iVar1) break;
    puVar2 = *(undefined8 **)puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      puVar3[4] = '\0';
      puVar3[5] = '\0';
      puVar3[6] = '\0';
      puVar3[7] = '\0';
    }
    puVar3 = puVar3 + 0x178;
  }
  return;
}

// FillVertexFactory @ 14a848480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshRenderData::FillVertexFactory
          (FWN_ISKM_MeshRenderData *this,FRHICommandListBase *param_1,
          FSkeletalMeshRenderData *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FVertexBuffer *pFVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FRHICommandListBase *local_138;
  longlong local_130;
  FWN_DataType local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138 = param_1;
  if (((param_2->LODRenderData).Array.ArrayNum < (this->LODDatas).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODDatas.Num() <= InSKMRenderData->LODRenderData.Num()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                         ,0x24c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_130 = (longlong)(this->LODDatas).ArrayNum;
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < local_130) {
    do {
      iVar1 = (this->LODDatas).ArrayNum;
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_148 = (longlong)(int)uVar6;
        local_140 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (param_2->LODRenderData).Array.ArrayNum;
      pFVar9 = (FVertexBuffer *)((this->LODDatas).AllocatorInstance.InlineData + (int)uVar6);
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (local_148 = (longlong)(int)uVar6, local_140 = (longlong)iVar1,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      lVar2 = *(longlong *)((param_2->LODRenderData).Array.AllocatorInstance.Data + uVar8 * 8);
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_._0_4_ = 0;
      local_128._padding_._4_4_ = 4;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_._0_4_ = 0xffffffff;
      local_128._padding_ = 0;
      local_128._padding_ = 0;
      local_128._padding_._4_2_ = 0xff;
      local_128._padding_._6_1_ = 0;
      local_128.BoneIndices.VertexBuffer = (FVertexBuffer *)0x0;
      local_128.BoneIndices.StreamOffset = 0;
      local_128.BoneIndices.Offset = '\0';
      local_128.BoneIndices.Stride = '\0';
      local_128.BoneIndices.Type.Value = '\0';
      local_128.BoneIndices.VertexStreamUsage = Default;
      local_128.BoneWeights.VertexBuffer = (FVertexBuffer *)0x0;
      local_128.BoneWeights.StreamOffset = 0;
      local_128.BoneWeights.Offset = '\0';
      local_128.BoneWeights.Stride = '\0';
      local_128.BoneWeights.Type.Value = '\0';
      local_128.BoneWeights.VertexStreamUsage = Default;
      FPositionVertexBuffer::BindPositionVertexBuffer
                ((FPositionVertexBuffer *)(lVar2 + 0xe8),(FVertexFactory *)&pFVar9[1]._padding_,
                 (FStaticMeshDataType *)&local_128);
      FStaticMeshVertexBuffer::BindTangentVertexBuffer
                ((FStaticMeshVertexBuffer *)(lVar2 + 0x30),(FVertexFactory *)&pFVar9[1]._padding_,
                 (FStaticMeshDataType *)&local_128);
      FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
                ((FStaticMeshVertexBuffer *)(lVar2 + 0x30),(FVertexFactory *)&pFVar9[1]._padding_,
                 (FStaticMeshDataType *)&local_128,-1);
      FColorVertexBuffer::BindColorVertexBuffer
                ((FColorVertexBuffer *)(lVar2 + 0x138),(FVertexFactory *)&pFVar9[1]._padding_,
                 (FStaticMeshDataType *)&local_128);
      local_128.BoneIndices.StreamOffset = 0;
      local_128.BoneIndices.Offset = '\0';
      local_128.BoneIndices.Stride = '\b';
      local_128.BoneIndices.Type.Value = '\x06';
      local_128.BoneIndices.VertexStreamUsage = Default;
      local_128.BoneWeights.StreamOffset = 0;
      local_128.BoneWeights.Offset = '\x04';
      local_128.BoneWeights.Stride = '\b';
      local_128.BoneWeights.Type.Value = '\a';
      local_128.BoneWeights.VertexStreamUsage = Default;
      local_128.BoneIndices.VertexBuffer = pFVar9;
      local_128.BoneWeights.VertexBuffer = pFVar9;
      FWN_ISKM_VertexFactory::SetVertexElements
                ((FWN_ISKM_VertexFactory *)&pFVar9[1]._padding_,local_138,&local_128);
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < local_130);
  }
  return;
}

// InitBoneWeightBuffer @ 14a84eb90

void __thiscall
FWN_ISKM_MeshRenderData::InitBoneWeightBuffer(FWN_ISKM_MeshRenderData *this,USkeletalMesh *param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  Type TVar5;
  uint uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  FWN_ISKM_BoneWeightsBuffer *this_00;
  int iVar14;
  int iVar15;
  uint uVar16;
  FSkeletalMeshLODRenderData *this_01;
  uint local_res18;
  uint local_res20 [2];
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_98;
  longlong local_88;
  uint local_80;
  longlong local_78;
  longlong local_70;
  int local_68 [2];
  FSkeletalMeshLODRenderData *local_60;
  longlong local_58;
  longlong *local_50;
  
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
  iVar15 = (int)plVar9[1];
  local_58 = (longlong)iVar15;
  local_50 = plVar9;
  if ((iVar15 < 1) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5576848986125369869>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                         ,0x20d,"numLOD > 0"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res18 = 0;
  if (0 < iVar15) {
    local_70 = 0;
    do {
      lVar10 = local_70;
      bVar7 = local_98.ArrayMax != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98.ArrayMax << 0x20;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,2,0,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
      }
      bVar7 = local_a8.ArrayMax != 0;
      local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,2,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
      }
      uVar16 = 0;
      if ((int)local_res18 < (int)plVar9[1]) {
        uVar16 = ~local_res18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = *(FSkeletalMeshLODRenderData **)(*plVar9 + lVar10 * 8);
      local_60 = this_01;
      FSkinWeightVertexBuffer::GetSkinWeights(&this_01->SkinWeightVertexBuffer,&local_98);
      _Src.Data = local_98.AllocatorInstance.Data;
      iVar15 = local_98.ArrayNum;
      lVar12 = (longlong)local_98.ArrayNum;
      local_a8.ArrayNum = local_98.ArrayNum;
      if ((local_98.ArrayNum == 0) && (local_a8.ArrayMax == 0)) {
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,2,local_98.ArrayNum,local_a8.ArrayMax,&local_a8.AllocatorInstance,
                   local_98.ArrayNum,&local_a8.ArrayMax);
        if (iVar15 != 0) {
          memcpy(local_a8.AllocatorInstance.Data,_Src.Data,lVar12 * 0x30);
        }
      }
      local_80 = (this_01->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      uVar16 = 0;
      if (0 < (int)local_80) {
        local_88 = 0;
        local_78 = 0;
        do {
          lVar12 = local_78;
          lVar10 = local_88;
          FSkeletalMeshLODRenderData::GetSectionFromVertexIndex
                    (this_01,uVar16,(int *)local_res20,local_68);
          uVar6 = local_res20[0];
          uVar8 = 0;
          if ((int)local_res20[0] < (this_01->RenderSections).ArrayNum) {
            uVar8 = ~local_res20[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          iVar15 = 0;
          pFVar2 = (this_01->RenderSections).AllocatorInstance.Data;
          lVar13 = lVar12;
          if (0 < *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x118 + 0x4c)) {
            do {
              uVar8 = 0;
              if ((int)uVar16 < local_98.ArrayNum) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar1 = *(ushort *)(local_98.AllocatorInstance.Data + lVar12);
              if ((*(int *)(pFVar2 + (longlong)(int)uVar6 * 0x118 + 0x40) <= (int)(uint)uVar1) &&
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
              uVar1 = *(ushort *)
                       (*(longlong *)(pFVar2 + (longlong)(int)uVar6 * 0x118 + 0x38) +
                       (ulonglong)uVar1 * 2);
              lVar10 = (**(code **)(param_1->_padding_ + 800))();
              if ((*(int *)(lVar10 + 0x28) <= (int)(uint)uVar1) &&
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
              FVar3 = *(FName *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)uVar1 * 0xc);
              bVar7 = ::FName::IsWithinBounds(FVar3.ComparisonIndex.Value);
              if ((!bVar7) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("boneName.IsValid()",
                                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                                     ,0x223,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar10 = (**(code **)(param_1->_padding_ + 0x408))();
              iVar14 = -1;
              if ((((FVar3 == (FName)0x0) ||
                   (piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                      *)(lVar10 + 0xd8),FVar3), piVar11 == (int *)0x0)) ||
                  (iVar14 = *piVar11, iVar14 == -1)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("realBoneIndex != INDEX_NONE",
                                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                                     ,0x225,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar8 = 0;
              if ((int)uVar16 < local_a8.ArrayNum) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              iVar15 = iVar15 + 1;
              *(short *)(local_a8.AllocatorInstance.Data + lVar12) = (short)iVar14;
              lVar12 = lVar12 + 2;
              lVar13 = local_78;
              lVar10 = local_88;
              this_01 = local_60;
            } while (iVar15 < *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x118 + 0x4c));
          }
          local_88 = lVar10 + 1;
          local_78 = lVar13 + 0x30;
          uVar16 = uVar16 + 1;
          lVar10 = local_70;
        } while ((int)uVar16 < (int)local_80);
      }
      iVar15 = (this->LODDatas).ArrayNum;
      if (iVar15 == (this->LODDatas).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<0,TFixedAllocator<8>::ForElementType<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData>_>
                           (0x178,8,(ForElementType<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *
                                    )this,&(this->LODDatas).ArrayMax);
      }
      (this->LODDatas).ArrayNum = iVar15 + 1;
      TVar5 = GMaxRHIFeatureLevel;
      this_00 = (FWN_ISKM_BoneWeightsBuffer *)
                ((this->LODDatas).AllocatorInstance.InlineData + iVar15);
      FVertexBuffer::FVertexBuffer((FVertexBuffer *)this_00);
      this_00->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
      this_00->_padding_ = (longlong)&___7FWN_ISKM_BoneWeightsBuffer__6B_;
      FVertexFactory::FVertexFactory((FVertexFactory *)(this_00 + 1),TVar5);
      this_00[1]._padding_ = (longlong)&___7FWN_ISKM_VertexFactory__6B_;
      this_00[7]._padding_ = 0;
      FWN_ISKM_BoneWeightsBuffer::InitBuffer(this_00,&local_a8);
      local_res18 = local_res18 + 1;
      local_70 = lVar10 + 1;
      plVar9 = local_50;
    } while (local_70 < local_58);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// InitResources @ 14a84fbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshRenderData::InitResources(FWN_ISKM_MeshRenderData *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x23a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &(this->LODDatas).ArrayNum;
  iVar2 = *piVar1;
  pTVar4 = &this->LODDatas;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this == (FWN_ISKM_MeshRenderData *)((pTVar4->AllocatorInstance).InlineData + iVar2)) break;
    (**(code **)(*(longlong *)
                  (((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                   ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->
                   Pad)->AllocatorInstance).InlineData[0].Pad + 0x18))(this,param_1);
    (**(code **)(*(longlong *)
                  ((((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                    ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->
                    Pad)->AllocatorInstance).InlineData[0].Pad + 0x30) + 0x18))
              ((((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->Pad)
               ->AllocatorInstance).InlineData[0].Pad + 0x30,param_1);
    this = (FWN_ISKM_MeshRenderData *)((longlong)this + 0x178);
  }
  return;
}

// ReleaseResources @ 14a852920

void __thiscall FWN_ISKM_MeshRenderData::ReleaseResources(FWN_ISKM_MeshRenderData *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x243,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &(this->LODDatas).ArrayNum;
  iVar2 = *piVar1;
  pTVar4 = &this->LODDatas;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this == (FWN_ISKM_MeshRenderData *)((pTVar4->AllocatorInstance).InlineData + iVar2)) break;
    (**(code **)(*(longlong *)
                  ((((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                    ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->
                    Pad)->AllocatorInstance).InlineData[0].Pad + 0x30) + 0x20))
              ((((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->Pad)
               ->AllocatorInstance).InlineData[0].Pad + 0x30);
    (**(code **)(*(longlong *)
                  (((TArray<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,TFixedAllocator<8>_> *)
                   ((TTypeCompatibleBytes<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *)this)->
                   Pad)->AllocatorInstance).InlineData[0].Pad + 0x20))(this);
    this = (FWN_ISKM_MeshRenderData *)((longlong)this + 0x178);
  }
  return;
}

