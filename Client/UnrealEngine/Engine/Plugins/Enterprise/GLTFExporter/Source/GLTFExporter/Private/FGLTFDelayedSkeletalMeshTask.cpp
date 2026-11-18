// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// GetName @ 14e5f7ba0

FString * __thiscall
FGLTFDelayedSkeletalMeshTask::GetName
          (FGLTFDelayedSkeletalMeshTask *this,FString *__return_storage_ptr__)

{
  USkeletalMeshComponent *pUVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pUVar1 = this->SkeletalMeshComponent;
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    local_res8 = (FName)this->SkeletalMesh->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pFVar6 = &local_18;
    bVar4 = false;
    bVar3 = true;
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    lVar2 = pUVar1->_padding_;
    if ((lVar2 == 0) || (pUVar1 != *(USkeletalMeshComponent **)(lVar2 + 0x1b8))) {
      local_res8 = (FName)pUVar1->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar2 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_28);
    pFVar6 = &local_28;
    bVar4 = true;
    bVar3 = false;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Process @ 14e606b20

void __thiscall FGLTFDelayedSkeletalMeshTask::Process(FGLTFDelayedSkeletalMeshTask *this)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  FGLTFJsonMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  FGLTFConvertBuilder *pFVar7;
  bool bVar8;
  bool bVar9;
  FGLTFMeshData *pFVar10;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  FString *pFVar13;
  FName local_res8;
  USkeletalMesh *local_res10;
  FString local_48;
  FString local_38;
  
  pFVar10 = (FGLTFMeshData *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar2 = this->SkeletalMesh;
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)pUVar2,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)pUVar2,false,false);
  pUVar3 = this->SkeletalMeshComponent;
  if (pUVar3 == (USkeletalMeshComponent *)0x0) {
    local_res8 = (FName)this->SkeletalMesh->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    pFVar12 = &local_38;
    bVar9 = false;
    bVar8 = true;
  }
  else {
    lVar4 = pUVar3->_padding_;
    if ((lVar4 == 0) || (pUVar3 != *(USkeletalMeshComponent **)(lVar4 + 0x1b8))) {
      local_res8 = (FName)pUVar3->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar4 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_48);
    pFVar12 = &local_48;
    bVar9 = true;
    bVar8 = false;
  }
  pFVar5 = this->JsonMesh;
  pFVar13 = &pFVar5->Name;
  if (pFVar13 != pFVar12) {
    pFVar6 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar13->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Name).Data.ArrayNum = (pFVar12->Data).ArrayNum;
    (pFVar5->Name).Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (bVar8) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = this->Builder;
  if (*(char *)(pFVar7->_padding_ + 0x37) == '\x02') {
    pUVar2 = this->SkeletalMesh;
    iVar1 = this->LODIndex;
    pUVar3 = this->SkeletalMeshComponent;
    local_res10 = pUVar2;
    TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<USkeletalMesh_const_*_const_&>
              ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                *)&pFVar7->_padding_,(USkeletalMesh **)&local_res8,(bool *)&local_res10);
    pFVar10 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
              ::GetOrAdd((pFVar7->SkeletalMeshDataConverter).Ptr,pUVar2,pUVar3,iVar1);
  }
  pTVar11 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->SkeletalMesh->_padding_ + 0x3c0))();
  ProcessRenderData(this,pTVar11,pFVar10);
  return;
}

// ProcessRenderData @ 14e607b50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FGLTFDelayedSkeletalMeshTask::ProcessRenderData
          (FGLTFDelayedSkeletalMeshTask *this,
          TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *param_1,FGLTFMeshData *param_2)

{
  FStaticMeshVertexBuffers *pFVar1;
  FScriptContainerElement *pFVar2;
  FGLTFConvertBuilder *pFVar3;
  USkeletalMeshComponent *pUVar4;
  FColorVertexBuffer *pFVar5;
  FSkinWeightVertexBuffer *pFVar6;
  longlong *plVar7;
  TGLTFMeshSectionConverter<USkeletalMesh> *pTVar8;
  FGLTFJsonMesh *pFVar9;
  FScriptContainerElement *pFVar10;
  UMaterialInterface *pUVar11;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  code *pcVar12;
  <lambda_1> <Var13;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  void *pvVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  FSkeletalMeshLODRenderData *pFVar22;
  FColorVertexBuffer *pFVar23;
  TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
  *this_01;
  FGLTFJsonAccessor *pFVar24;
  FGLTFJsonMaterial *pFVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  FSkinWeightVertexBuffer *pFVar30;
  TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *this_02;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *pTVar31;
  FStaticMeshVertexBuffer *pFVar32;
  ForAnyElementType FVar33;
  TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
  *pTVar34;
  longlong lVar35;
  undefined8 *puVar36;
  FGLTFMeshSection *this_03;
  TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *this_04;
  FScriptContainerElement *pFVar37;
  undefined1 local_res8 [8];
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *local_res10;
  FGLTFMeshData *local_res18;
  FGLTFJsonAccessor *local_res20;
  uint local_248;
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  int local_208 [2];
  undefined8 *local_200;
  USkeletalMesh *local_1f8;
  FSkinWeightVertexBuffer *local_1f0;
  longlong local_1e8;
  uint local_1e0 [2];
  uint local_1d8 [2];
  FColorVertexBuffer *local_1d0;
  FStaticMeshVertexBuffer *local_1c8;
  FMeshAttributesArray<int> local_1c0;
  undefined1 local_1b0 [16];
  FMeshAttributesArray<int> local_1a0;
  TGLTFMeshSectionConverter<USkeletalMesh> *local_190;
  FGLTFMeshSection *local_188;
  FSkeletalMeshLODRenderData *local_180;
  void *local_178;
  ulonglong local_170;
  FPositionVertexBuffer *local_168;
  FScriptContainerElement *local_160;
  UMaterialInterface *local_158;
  longlong local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  FName local_138;
  FString local_130;
  FString local_120;
  FName local_110;
  uint *local_108;
  FMorphTargetDelta *local_100;
  uint *local_f8;
  TVector<float> *local_f0;
  undefined8 *local_e8;
  FGLTFMeshSection **local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FMorphTargetDeltaIterator local_98;
  FMeshAttributesArray<int> local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar22 = FGLTFMeshUtilities::GetRenderData(this->SkeletalMesh,this->LODIndex);
  local_168 = &(pFVar22->StaticVertexBuffers).PositionVertexBuffer;
  pFVar30 = (pFVar22->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
  pFVar1 = &pFVar22->StaticVertexBuffers;
  pFVar23 = &(pFVar22->StaticVertexBuffers).ColorVertexBuffer;
  if (pFVar30 == (FSkinWeightVertexBuffer *)0x0) {
    pFVar30 = &pFVar22->SkinWeightVertexBuffer;
  }
  local_1f0 = pFVar30;
  local_1c8 = &pFVar1->StaticMeshVertexBuffer;
  local_180 = pFVar22;
  if ((*(char *)(this->Builder->_padding_ + 0x9d) == '\0') ||
     (local_1d0 = pFVar23, bVar17 = ::`anonymous_namespace'::HasVertexColors(pFVar23), !bVar17)) {
    pFVar23 = (FColorVertexBuffer *)0x0;
    local_1d0 = (FColorVertexBuffer *)0x0;
  }
  else {
    pFVar3 = this->Builder;
    local_138 = (FName)this->SkeletalMesh->_padding_;
    ::FName::ToString(&local_138,&local_130);
    ::FString::PrintfImpl
              (&local_c8,
               L"Vertex colors in mesh %s will act as a multiplier for base color in glTF, regardless of material, which may produce undesirable results"
              );
    FGLTFLogBuilder::LogSuggestion((FGLTFLogBuilder *)pFVar3,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = this->SkeletalMeshComponent;
  if (pUVar4 != (USkeletalMeshComponent *)0x0) {
    uVar26 = this->LODIndex;
    if ((-1 < (int)uVar26) && ((int)uVar26 < (int)pUVar4->_padding_)) {
      uVar27 = 0;
      if ((int)uVar26 < (int)pUVar4->_padding_) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = *(FColorVertexBuffer **)(pUVar4->_padding_ + 0x10 + (longlong)(int)uVar26 * 0x28);
      local_1d0 = pFVar23;
      if (pFVar5 != (FColorVertexBuffer *)0x0) {
        local_1d0 = pFVar5;
      }
      pFVar6 = *(FSkinWeightVertexBuffer **)
                (pUVar4->_padding_ + (longlong)(int)uVar26 * 0x28 + 0x18);
      local_1f0 = pFVar30;
      if (pFVar6 != (FSkinWeightVertexBuffer *)0x0) {
        local_1f0 = pFVar6;
      }
    }
  }
  local_110 = (FName)this->SkeletalMesh->_padding_;
  ::FName::ToString(&local_110,&local_120);
  FVar33.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar33.Data = local_120.Data.AllocatorInstance.Data;
  }
  ::`anonymous_namespace'::ValidateVertexBuffer
            (this->Builder,&pFVar1->StaticMeshVertexBuffer,(wchar_t *)FVar33.Data);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  iVar20 = local_res10->ArrayNum;
  local_210 = 0;
  if (*(char *)(this->Builder->_padding_ + 0xa1) != '\0') {
    local_1f8 = (USkeletalMesh *)(**(code **)(this->SkeletalMesh->_padding_ + 0x450))();
    <Var13 = local_res10._0_1_;
    iVar19 = (int)local_1f8->_padding_;
    uVar29 = (ulonglong)iVar19;
    puVar36 = (undefined8 *)local_1f8->_padding_;
    local_res20 = (FGLTFJsonAccessor *)CONCAT44(local_res20._4_4_,iVar19);
    local_200 = puVar36 + uVar29;
    while( true ) {
      puVar15 = local_200;
      if ((int)local_1f8->_padding_ != (int)uVar29) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      pFVar22 = local_180;
      if (puVar36 == puVar15) break;
      plVar7 = (longlong *)*puVar36;
      iVar19 = (int)local_230;
      if ((int)local_230 == local_230._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_238,(int *)((longlong)&local_230 + 4));
      }
      local_230 = CONCAT44(local_230._4_4_,iVar19 + 1);
      this_02 = (TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                 *)(local_238.Data + (longlong)iVar19 * 0x58);
      DefaultConstructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
                (this_02,1);
      iVar19 = (int)local_210;
      if ((int)local_210 == local_210._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_218,(int *)((longlong)&local_210 + 4));
      }
      local_210 = CONCAT44(local_210._4_4_,iVar19 + 1);
      this_04 = (TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                 *)(local_218.Data + (longlong)iVar19 * 0x58);
      DefaultConstructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
                (this_04,1);
      (**(code **)(*plVar7 + 0x2c0))(plVar7,&local_98,this->LODIndex);
      if (local_98.Token != 0xffffffffffffffff) {
        local_108 = local_1e0;
        local_100 = &local_98.CurrentDelta;
        local_f8 = local_1d8;
        local_f0 = &local_98.CurrentDelta.TangentZDelta;
        do {
          local_1e0[0] = local_98.CurrentDelta.SourceIdx;
          TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<float>_const_&>_>
                    (this_02,(TPairInitializer<unsigned_int_const_&,UE::Math::TVector<float>_const_&>
                              *)local_148,(bool *)&local_108);
          local_1d8[0] = local_98.CurrentDelta.SourceIdx;
          TSet<TTuple<unsigned_int,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<float>_const_&>_>
                    (this_04,(TPairInitializer<unsigned_int_const_&,UE::Math::TVector<float>_const_&>
                              *)(local_148 + 4),(bool *)&local_f8);
          FMorphTargetDeltaIterator::Advance(&local_98);
        } while (local_98.Token != 0xffffffffffffffff);
      }
      if ((*(int *)&(this_02->Elements).field_0x8 == *(int *)&(this_02->Elements).field_0x34) ||
         (bVar17 = Algo::
                   AllOf<TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>,__FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas::GenerateIsValid_::__l2::<lambda_1>_>
                             ((TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
                               *)this_02,<Var13), bVar17)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      *(undefined1 *)&this_02[1].Elements = uVar18;
      if ((*(int *)&(this_04->Elements).field_0x8 == *(int *)&(this_04->Elements).field_0x34) ||
         (bVar17 = Algo::
                   AllOf<TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>,__FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas::GenerateIsValid_::__l2::<lambda_1>_>
                             ((TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
                               *)this_04,<Var13), bVar17)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      uVar29 = (ulonglong)local_res20 & 0xffffffff;
      puVar36 = puVar36 + 1;
      *(undefined1 *)&this_04[1].Elements = uVar18;
    }
  }
  local_248 = 0;
  if (0 < iVar20) {
    local_150 = (longlong)iVar20;
    local_1e8 = 0;
    local_200 = (undefined8 *)0x0;
    do {
      FGLTFMeshUtilities::GetSectionIndices
                ((FMeshAttributesArray<int> *)&local_178,pFVar22,local_248);
      pvVar16 = local_178;
      pTVar8 = this->MeshSectionConverter;
      local_228.Data = (FScriptContainerElement *)0x0;
      iVar20 = (int)local_170;
      local_220 = CONCAT44(local_220._4_4_,iVar20);
      if (iVar20 == 0) {
        local_220 = local_170 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar20,0,&local_228,iVar20,(int *)((longlong)&local_220 + 4));
        memcpy(local_228.Data,pvVar16,(longlong)iVar20 << 2);
      }
      local_208[0] = this->LODIndex;
      local_1f8 = this->SkeletalMesh;
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,&local_1f8,local_208,&local_228);
      local_1a0._0_8_ = local_228.Data;
      local_1a0._8_4_ = (undefined4)local_220;
      local_1b0._0_8_ = local_1f8;
      local_1a0._12_4_ = local_220._4_4_;
      local_1b0._8_4_ = local_208[0];
      uVar26 = ((uint)((ulonglong)local_1f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1f8 >> 4)) *
               -0x7a143595;
      local_228.Data = (FScriptContainerElement *)0x0;
      local_220 = 0;
      uVar27 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
      uVar27 = uVar27 >> 0x10 ^ uVar27;
      uVar27 = uVar27 * 0x40 + local_208[0] + (uVar27 >> 2) + 0x9e3779b9 ^ uVar27;
      uVar26 = ::GetTypeHash(&local_1a0);
      uVar27 = uVar27 * 0x40 + (uVar27 >> 2) + uVar26 + 0x9e3779b9 ^ uVar27;
      iVar20 = TSet<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_>
                         ((TSet<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
                           *)&pTVar8->_padding_,uVar27,
                          (TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_> *)local_1b0)
      ;
      if (iVar20 == -1) {
LAB_14e608101:
        local_190 = pTVar8;
        this_01 = UE::Core::Private::
                  DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_*>
                            ((TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
                              **)&local_190);
        FMeshAttributesArray<int>::FMeshAttributesArray<int>(&local_58,&local_1a0);
        local_188 = (FGLTFMeshSection *)
                    TGLTFConverter<FGLTFMeshSection_const*___ptr64,USkeletalMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
                    ::_vcall__16__flat______
                              ((TGLTFConverter<FGLTFMeshSection_const*___ptr64,USkeletalMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
                                *)this_01);
        local_e8 = (undefined8 *)local_1b0;
        local_e0 = &local_188;
        TSet<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_&&,FGLTFMeshSection_const_*_const_&>_>
                  ((TSet<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
                    *)&pTVar8->_padding_,(uint)local_140,
                   (TPairInitializer<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_&&,FGLTFMeshSection_const_*_const_&>
                    *)(ulonglong)uVar27,(bool *)&local_e8);
        this_03 = local_188;
      }
      else {
        lVar35 = (longlong)iVar20 * 0x30 + pTVar8->_padding_;
        puVar36 = (undefined8 *)(lVar35 + 0x20);
        if (lVar35 == 0) {
          puVar36 = (undefined8 *)0x0;
        }
        if (puVar36 == (undefined8 *)0x0) goto LAB_14e608101;
        this_03 = (FGLTFMeshSection *)*puVar36;
      }
      if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a0._0_8_);
      }
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data);
      }
      pFVar9 = this->JsonMesh;
      uVar29 = 0;
      uVar26 = 0;
      if ((int)local_248 < (pFVar9->Primitives).ArrayNum) {
        uVar26 = ~local_248 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar36 = local_200;
      pFVar10 = (pFVar9->Primitives).AllocatorInstance.Data;
      pFVar24 = FGLTFConvertBuilder::AddUniqueIndexAccessor(this->Builder,this_03);
      *(FGLTFJsonAccessor **)((longlong)puVar36 + (longlong)(pFVar10 + 0x60)) = pFVar24;
      if (local_168 == (FPositionVertexBuffer *)0x0) {
        *(undefined8 *)((longlong)puVar36 + (longlong)(pFVar10 + 0x10)) = 0;
LAB_14e608233:
        pFVar3 = this->Builder;
        FGLTFMeshSection::ToString(this_03,&local_a8);
        pTVar14 = local_res10;
        uVar26 = 0;
        if ((int)local_248 < local_res10->ArrayNum) {
          uVar26 = ~local_248 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        ::FName::ToString((FName *)((pTVar14->AllocatorInstance).Data +
                                   (longlong)(int)local_248 * 0x30 + 8),&local_b8);
        ::FString::PrintfImpl
                  (&local_d8,
                   L"Failed to export vertex positions related to material slot %d (%s) in skeletal mesh %s"
                  );
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)pFVar3,&local_d8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
                  ::GetOrAdd((this->Builder->PositionBufferConverter).Ptr,this_03,local_168);
        *(FGLTFJsonAccessor **)((longlong)puVar36 + (longlong)(pFVar10 + 0x10)) = pFVar24;
        if (pFVar24 == (FGLTFJsonAccessor *)0x0) goto LAB_14e608233;
      }
      pFVar32 = local_1c8;
      local_res20 = (FGLTFJsonAccessor *)
                    CONCAT71(local_res20._1_7_,local_1c8->bUseHighPrecisionTangentBasis);
      if (0 < (int)local_230) {
        pFVar37 = (FScriptContainerElement *)((longlong)puVar36 + (longlong)(pFVar10 + 0x88));
        if (*(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x94)) < (int)local_230) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_230,(ForAnyElementType *)pFVar37,
                     *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x90)),
                     (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x94)));
        }
        if ((int)local_230 != 0) {
          do {
            uVar27 = (uint)uVar29;
            uVar26 = 0;
            if ((int)uVar27 < (int)local_230) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar34 = (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
                       *)(local_238.Data + (longlong)(int)uVar27 * 0x58);
            uVar26 = 0;
            if ((int)uVar27 < (int)local_210) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar31 = (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
                       *)(local_218.Data + (longlong)(int)uVar27 * 0x58);
            if ((*(char *)(pTVar34 + 1) != '\0') || (*(char *)(pTVar31 + 1) != '\0')) {
              iVar20 = *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x90));
              if (iVar20 == *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x94))) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,(ForAnyElementType *)pFVar37,
                                    (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x94)));
              }
              *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x90)) = iVar20 + 1;
              pFVar2 = *(FScriptContainerElement **)&pFVar37->field_0x0 + (longlong)iVar20 * 0x18;
              DefaultConstructItems<FGLTFJsonTarget,int>(pFVar2,1);
              if (*(char *)(pTVar34 + 1) != '\0') {
                pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
                          ::GetOrAdd((this->Builder->PositionDeltaBufferConverter).Ptr,this_03,
                                     pTVar34);
                *(FGLTFJsonAccessor **)(pFVar2 + 8) = pFVar24;
              }
              if (*(char *)(pTVar31 + 1) != '\0') {
                pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
                          ::GetOrAdd((this->Builder->NormalDeltaBufferConverter).Ptr,this_03,pTVar31
                                     ,local_res20._0_1_);
                *(FGLTFJsonAccessor **)(pFVar2 + 0x10) = pFVar24;
              }
            }
            uVar29 = uVar29 + 1;
            pFVar32 = local_1c8;
          } while (uVar29 < (ulonglong)(longlong)(int)local_230);
        }
      }
      if (local_1d0 != (FColorVertexBuffer *)0x0) {
        pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
                  ::GetOrAdd((this->Builder->ColorBufferConverter).Ptr,this_03,local_1d0);
        *(FGLTFJsonAccessor **)((longlong)puVar36 + (longlong)(pFVar10 + 0x18)) = pFVar24;
      }
      pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
                ::GetOrAdd((this->Builder->NormalBufferConverter).Ptr,this_03,pFVar32);
      *(FGLTFJsonAccessor **)((longlong)puVar36 + (longlong)(pFVar10 + 0x20)) = pFVar24;
      pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
                ::GetOrAdd((this->Builder->TangentBufferConverter).Ptr,this_03,pFVar32);
      *(FGLTFJsonAccessor **)((longlong)puVar36 + (longlong)(pFVar10 + 0x28)) = pFVar24;
      uVar26 = pFVar32->NumTexCoords;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar26,(ForAnyElementType *)((longlong)puVar36 + (longlong)(pFVar10 + 0x30)),
                 (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x38)),
                 (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x3c)));
      if (uVar26 != 0) {
        uVar27 = 0;
        do {
          pFVar24 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
                    ::GetOrAdd((this->Builder->UVBufferConverter).Ptr,this_03,pFVar32,uVar27);
          uVar21 = 0;
          if ((int)uVar27 < *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x38))) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar35 = (longlong)(int)uVar27;
          uVar27 = uVar27 + 1;
          *(FGLTFJsonAccessor **)
           (*(FScriptContainerElement **)
             &((FScriptContainerElement *)((longlong)puVar36 + (longlong)(pFVar10 + 0x30)))->
              field_0x0 + lVar35 * 8) = pFVar24;
          pFVar32 = local_1c8;
        } while (uVar27 < uVar26);
      }
      pFVar30 = local_1f0;
      if (*(char *)(this->Builder->_padding_ + 0x9e) != '\0') {
        pFVar37 = (FScriptContainerElement *)((longlong)puVar36 + (longlong)(pFVar10 + 0x48));
        uVar26 = (local_1f0->DataVertexBuffer).MaxBoneInfluences + 3;
        uVar27 = uVar26 >> 2;
        local_160 = pFVar37;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar27,(ForAnyElementType *)((longlong)puVar36 + (longlong)(pFVar10 + 0x40)),
                   (int *)pFVar37,(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x4c)));
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar27,(ForAnyElementType *)((longlong)puVar36 + (longlong)(pFVar10 + 0x50)),
                   (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x58)),
                   (int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x5c)));
        if (uVar26 >> 2 != 0) {
          uVar21 = 0;
          uVar26 = uVar21;
          do {
            local_res20 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
                          ::GetOrAdd((this->Builder->BoneIndexBufferConverter).Ptr,this_03,pFVar30,
                                     uVar26);
            uVar28 = 0;
            if ((int)uVar21 < *(int *)pFVar37) {
              uVar28 = ~uVar21 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar35 = (longlong)(int)uVar21;
            *(FGLTFJsonAccessor **)
             (*(longlong *)((longlong)puVar36 + (longlong)(pFVar10 + 0x40)) + lVar35 * 8) =
                 local_res20;
            local_res20 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
                          ::GetOrAdd((this->Builder->BoneWeightBufferConverter).Ptr,this_03,
                                     local_1f0,uVar26);
            uVar28 = 0;
            if ((int)uVar21 < *(int *)((longlong)puVar36 + (longlong)(pFVar10 + 0x58))) {
              uVar28 = ~uVar21 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar21 = uVar21 + 1;
            uVar26 = uVar26 + 4;
            *(FGLTFJsonAccessor **)
             (*(longlong *)((longlong)puVar36 + (longlong)(pFVar10 + 0x50)) + lVar35 * 8) =
                 local_res20;
            pFVar30 = local_1f0;
            pFVar37 = local_160;
          } while (uVar21 < uVar27);
        }
      }
      pFVar25 = (FGLTFJsonMaterial *)0x0;
      uVar26 = 0;
      if ((int)local_248 < *(int *)&(this->Materials).field_0x8) {
        uVar26 = ~local_248 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar3 = this->Builder;
      pUVar11 = *(UMaterialInterface **)(*(longlong *)&this->Materials + local_1e8 * 8);
      if (pUVar11 != (UMaterialInterface *)0x0) {
        local_158 = pUVar11;
        TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UMaterialInterface_const_*_const_&>
                  ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                    *)&pFVar3->_padding_,(UMaterialInterface **)local_13c,(bool *)&local_158);
        pvVar16 = local_178;
        this_00 = (pFVar3->MaterialConverter).Ptr;
        local_1c0._0_8_ = (FScriptContainerElement *)0x0;
        iVar20 = (int)local_170;
        local_1c0._8_4_ = iVar20;
        if (iVar20 == 0) {
          local_1c0._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar20,0,(ForAnyElementType *)&local_1c0,iVar20,
                     (int *)((longlong)&local_1c0 + 0xc));
          memcpy((void *)local_1c0._0_8_,pvVar16,(longlong)iVar20 << 2);
        }
        pFVar25 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                  ::GetOrAdd(this_00,pUVar11,local_res18,&local_1c0);
      }
      lVar35 = local_1e8;
      *(FGLTFJsonMaterial **)((longlong)puVar36 + (longlong)(pFVar10 + 0x68)) = pFVar25;
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      local_200 = local_200 + 0x13;
      local_1e8 = lVar35 + 1;
      local_248 = local_248 + 1;
      pFVar22 = local_180;
    } while (local_1e8 < local_150);
  }
  DestructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
            ((FTargetDeltas *)local_218.Data,(int)local_210);
  if ((FTargetDeltas *)local_218.Data != (FTargetDeltas *)0x0) {
    FMemory::Free(local_218.Data);
  }
  DestructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
            ((FTargetDeltas *)local_238.Data,(int)local_230);
  if ((FTargetDeltas *)local_238.Data != (FTargetDeltas *)0x0) {
    FMemory::Free(local_238.Data);
  }
  return;
}

