// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// GetName @ 14e5f7c90

FString * __thiscall
FGLTFDelayedStaticAndSplineMeshTask::GetName
          (FGLTFDelayedStaticAndSplineMeshTask *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  longlong lVar3;
  USplineMeshComponent *pUVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar2 = this->StaticMeshComponent;
  if (pUVar2 == (UStaticMeshComponent *)0x0) {
    pUVar4 = this->SplineMeshComponent;
    if (pUVar4 == (USplineMeshComponent *)0x0) {
      local_res8 = (FName)this->StaticMesh->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      pFVar9 = &local_18;
      bVar7 = false;
      bVar6 = true;
      FVar10.Data = local_18.Data.AllocatorInstance.Data;
    }
    else {
      lVar3 = pUVar4->_padding_;
      if ((lVar3 == 0) || (pUVar4 != *(USplineMeshComponent **)(lVar3 + 0x1b8))) {
        local_res8 = (FName)pUVar4->_padding_;
      }
      else {
        local_res8 = *(FName *)(lVar3 + 0x18);
      }
      ::FName::ToString(&local_res8,&local_48);
      pFVar9 = &local_48;
      bVar7 = true;
      bVar6 = false;
      FVar10.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar8 = false;
    bVar5 = true;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    iVar1 = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    pFVar9 = &local_28;
    local_28.Data.ArrayMax = iVar1;
  }
  else {
    lVar3 = pUVar2->_padding_;
    if ((lVar3 == 0) || (pUVar2 != *(UStaticMeshComponent **)(lVar3 + 0x1b8))) {
      local_res8 = (FName)pUVar2->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar3 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_38);
    pFVar9 = &local_38;
    bVar8 = true;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar9->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar10.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  if (bVar5) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (bVar6) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (bVar7) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Process @ 14e606cb0

void __thiscall
FGLTFDelayedStaticAndSplineMeshTask::Process(FGLTFDelayedStaticAndSplineMeshTask *this)

{
  int iVar1;
  UStaticMesh *pUVar2;
  longlong lVar3;
  FGLTFJsonMesh *pFVar4;
  FScriptContainerElement *pFVar5;
  FGLTFConvertBuilder *pFVar6;
  UStaticMeshComponent *pUVar7;
  bool bVar8;
  bool bVar9;
  USplineMeshComponent *pUVar10;
  FGLTFMeshData *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FName local_res8;
  UStaticMesh *local_res10;
  FString local_48;
  FString local_38;
  
  pFVar11 = (FGLTFMeshData *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar2 = this->StaticMesh;
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)pUVar2,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)pUVar2,false,false);
  pUVar10 = (USplineMeshComponent *)this->StaticMeshComponent;
  if ((pUVar10 == (USplineMeshComponent *)0x0) &&
     (pUVar10 = this->SplineMeshComponent, pUVar10 == (USplineMeshComponent *)0x0)) {
    local_res8 = (FName)this->StaticMesh->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    pFVar12 = &local_38;
    bVar9 = false;
    bVar8 = true;
  }
  else {
    lVar3 = pUVar10->_padding_;
    if ((lVar3 == 0) || (pUVar10 != *(USplineMeshComponent **)(lVar3 + 0x1b8))) {
      local_res8 = (FName)pUVar10->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar3 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_48);
    pFVar12 = &local_48;
    bVar9 = true;
    bVar8 = false;
  }
  pFVar4 = this->JsonMesh;
  pFVar13 = &pFVar4->Name;
  if (pFVar13 != pFVar12) {
    pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar13->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Name).Data.ArrayNum = (pFVar12->Data).ArrayNum;
    (pFVar4->Name).Data.ArrayMax = (pFVar12->Data).ArrayMax;
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
  pFVar6 = this->Builder;
  pUVar2 = this->StaticMesh;
  if (*(char *)(pFVar6->_padding_ + 0x37) == '\x02') {
    iVar1 = this->LODIndex;
    pUVar7 = this->StaticMeshComponent;
    local_res10 = pUVar2;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)&pFVar6->_padding_,(UStaticMesh **)&local_res8,(bool *)&local_res10);
    pFVar11 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
              ::GetOrAdd((pFVar6->StaticMeshDataConverter).Ptr,pUVar2,pUVar7,iVar1);
  }
  ProcessRenderData(this,&pUVar2->StaticMaterials,pFVar11);
  return;
}

// ProcessRenderData @ 14e608980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FGLTFDelayedStaticAndSplineMeshTask::ProcessRenderData
          (FGLTFDelayedStaticAndSplineMeshTask *this,
          TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *param_1,FGLTFMeshData *param_2)

{
  FStaticMeshVertexBuffers *pFVar1;
  uchar uVar2;
  FGLTFConvertBuilder *pFVar3;
  UStaticMeshComponent *pUVar4;
  FColorVertexBuffer *pFVar5;
  TGLTFMeshSectionConverter<UStaticMesh> *pTVar6;
  FGLTFJsonMesh *pFVar7;
  USplineMeshComponent *pUVar8;
  UMaterialInterface *pUVar9;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  void *pvVar17;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
  *this_01;
  FGLTFJsonAccessor *pFVar25;
  FPositionVertexBuffer *this_02;
  FGLTFJsonAccessor *pFVar26;
  TTransform<double> *pTVar27;
  float *pfVar28;
  FGLTFJsonMaterial *pFVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  float *pfVar33;
  longlong *plVar34;
  FScriptContainerElement *pFVar35;
  FStaticMeshVertexBuffer *pFVar36;
  ForAnyElementType FVar37;
  longlong lVar38;
  uint uVar39;
  FGLTFMeshSection *pFVar40;
  FColorVertexBuffer *pFVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStackY_2c8 [32];
  uint local_288;
  ForAnyElementType local_280;
  undefined8 local_278;
  int local_270 [2];
  uint local_268;
  FScriptContainerElement *local_260;
  FColorVertexBuffer *local_258;
  FGLTFMeshSection *local_250;
  longlong local_248;
  longlong local_238;
  FMeshAttributesArray<int> local_230;
  void *local_220;
  ulonglong local_218;
  undefined1 local_210 [16];
  FMeshAttributesArray<int> local_200;
  FStaticMeshVertexBuffer *local_1f0;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *local_1e8;
  UStaticMesh *local_1e0;
  TGLTFMeshSectionConverter<UStaticMesh> *local_1d8;
  FGLTFMeshSection *local_1d0;
  undefined1 local_1c8 [32];
  UMaterialInterface *local_1a8;
  TRefCountPtr<FRHIShaderResourceView> local_1a0;
  FPositionVertexData *local_198;
  float local_190;
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  FName local_184;
  FString local_178;
  FString local_168;
  FName local_158;
  undefined8 *local_150;
  FGLTFMeshSection **local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FMeshAttributesArray<int> local_100;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_1e8 = param_1;
  local_1a0.Reference = (FRHIShaderResourceView *)param_2;
  local_1c8._16_8_ = UStaticMesh::GetLODForExport(this->StaticMesh,this->LODIndex);
  pFVar1 = &((FStaticMeshLODResources *)local_1c8._16_8_)->VertexBuffers;
  local_1c8._8_8_ =
       &(((FStaticMeshLODResources *)local_1c8._16_8_)->VertexBuffers).PositionVertexBuffer;
  pFVar41 = &(((FStaticMeshLODResources *)local_1c8._16_8_)->VertexBuffers).ColorVertexBuffer;
  local_1f0 = &pFVar1->StaticMeshVertexBuffer;
  if ((*(char *)(this->Builder->_padding_ + 0x9d) == '\0') ||
     (local_258 = pFVar41, bVar21 = ::`anonymous_namespace'::HasVertexColors(pFVar41), !bVar21)) {
    pFVar41 = (FColorVertexBuffer *)0x0;
    local_258 = (FColorVertexBuffer *)0x0;
  }
  else {
    pFVar3 = this->Builder;
    local_184 = (FName)this->StaticMesh->_padding_;
    ::FName::ToString(&local_184,&local_178);
    ::FString::PrintfImpl
              (&local_130,
               L"Vertex colors in mesh %s will act as a multiplier for base color in glTF, regardless of material, which may produce undesirable results"
              );
    FGLTFLogBuilder::LogSuggestion((FGLTFLogBuilder *)pFVar3,&local_130);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = this->StaticMeshComponent;
  if (pUVar4 != (UStaticMeshComponent *)0x0) {
    uVar30 = this->LODIndex;
    if ((-1 < (int)uVar30) && ((int)uVar30 < (pUVar4->LODData).ArrayNum)) {
      uVar31 = 0;
      if ((int)uVar30 < (pUVar4->LODData).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar41 = *(FColorVertexBuffer **)
                 ((pUVar4->LODData).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x50 + 0x40);
      if (pFVar41 != (FColorVertexBuffer *)0x0) {
        local_258 = pFVar41;
      }
      goto LAB_14e608b9d;
    }
  }
  pUVar8 = this->SplineMeshComponent;
  if (pUVar8 != (USplineMeshComponent *)0x0) {
    uVar30 = this->LODIndex;
    if ((-1 < (int)uVar30) && ((int)uVar30 < (int)pUVar8->_padding_)) {
      uVar31 = 0;
      if ((int)uVar30 < (int)pUVar8->_padding_) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar5 = *(FColorVertexBuffer **)(pUVar8->_padding_ + 0x40 + (longlong)(int)uVar30 * 0x50);
      local_258 = pFVar41;
      if (pFVar5 != (FColorVertexBuffer *)0x0) {
        local_258 = pFVar5;
      }
    }
  }
LAB_14e608b9d:
  local_158 = (FName)this->StaticMesh->_padding_;
  ::FName::ToString(&local_158,&local_168);
  FVar37.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar37.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::`anonymous_namespace'::ValidateVertexBuffer
            (this->Builder,&pFVar1->StaticMeshVertexBuffer,(wchar_t *)FVar37.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_288 = 0;
  if (0 < param_1->ArrayNum) {
    local_238 = 0;
    local_248 = 0;
    do {
      lVar38 = local_248;
      FGLTFMeshUtilities::GetSectionIndices
                ((FMeshAttributesArray<int> *)&local_220,(FStaticMeshLODResources *)local_1c8._16_8_
                 ,local_288);
      pvVar17 = local_220;
      pTVar6 = this->MeshSectionConverter;
      local_280.Data = (FScriptContainerElement *)0x0;
      iVar22 = (int)local_218;
      local_278 = CONCAT44(local_278._4_4_,iVar22);
      if (iVar22 == 0) {
        local_278 = local_218 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar22,0,&local_280,iVar22,(int *)((longlong)&local_278 + 4));
        memcpy(local_280.Data,pvVar17,(longlong)iVar22 << 2);
      }
      local_270[0] = this->LODIndex;
      local_1e0 = this->StaticMesh;
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,&local_1e0,local_270);
      local_200._0_8_ = local_280.Data;
      local_200._8_4_ = (undefined4)local_278;
      local_210._0_8_ = local_1e0;
      local_200._12_4_ = local_278._4_4_;
      local_210._8_4_ = local_270[0];
      uVar30 = ((uint)((ulonglong)local_1e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e0 >> 4)) *
               -0x7a143595;
      local_280.Data = (FScriptContainerElement *)0x0;
      local_278 = 0;
      uVar31 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
      uVar31 = uVar31 >> 0x10 ^ uVar31;
      uVar31 = uVar31 * 0x40 + local_270[0] + (uVar31 >> 2) + 0x9e3779b9 ^ uVar31;
      uVar30 = ::GetTypeHash(&local_200);
      uVar31 = uVar31 * 0x40 + (uVar31 >> 2) + uVar30 + 0x9e3779b9 ^ uVar31;
      iVar22 = TSet<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_>
                         ((TSet<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
                           *)&pTVar6->_padding_,uVar31,
                          (TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_> *)local_210);
      if (iVar22 == -1) {
LAB_14e608d93:
        local_1d8 = pTVar6;
        this_01 = UE::Core::Private::
                  DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_*>
                            ((TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
                              **)&local_1d8);
        FMeshAttributesArray<int>::FMeshAttributesArray<int>(&local_100,&local_200);
        local_1d0 = (FGLTFMeshSection *)
                    TGLTFConverter<FGLTFMeshSection_const*___ptr64,UStaticMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
                    ::_vcall__16__flat______
                              ((TGLTFConverter<FGLTFMeshSection_const*___ptr64,UStaticMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
                                *)this_01);
        local_150 = (undefined8 *)local_210;
        local_148 = &local_1d0;
        TSet<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_&&,FGLTFMeshSection_const_*_const_&>_>
                  ((TSet<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*,0>,FDefaultSetAllocator>
                    *)&pTVar6->_padding_,(uint)local_18c,
                   (TPairInitializer<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_&&,FGLTFMeshSection_const_*_const_&>
                    *)(ulonglong)uVar31,(bool *)&local_150);
        pFVar40 = local_1d0;
      }
      else {
        lVar23 = (longlong)iVar22 * 0x30 + pTVar6->_padding_;
        puVar24 = (undefined8 *)(lVar23 + 0x20);
        if (lVar23 == 0) {
          puVar24 = (undefined8 *)0x0;
        }
        if (puVar24 == (undefined8 *)0x0) goto LAB_14e608d93;
        pFVar40 = (FGLTFMeshSection *)*puVar24;
      }
      local_250 = pFVar40;
      if ((FScriptContainerElement *)local_200._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_200._0_8_);
      }
      if (local_280.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data);
      }
      pFVar7 = this->JsonMesh;
      pFVar26 = (FGLTFJsonAccessor *)0x0;
      uVar30 = 0;
      if ((int)local_288 < (pFVar7->Primitives).ArrayNum) {
        uVar30 = ~local_288 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar35 = (pFVar7->Primitives).AllocatorInstance.Data;
      local_260 = pFVar35;
      pFVar25 = FGLTFConvertBuilder::AddUniqueIndexAccessor(this->Builder,pFVar40);
      *(FGLTFJsonAccessor **)(pFVar35 + lVar38 + 0x60) = pFVar25;
      if ((pFVar25 != (FGLTFJsonAccessor *)0x0) && (pFVar25->Count != 0)) {
        if (this->SplineMeshComponent == (USplineMeshComponent *)0x0) {
          if ((FPositionVertexBuffer *)local_1c8._8_8_ != (FPositionVertexBuffer *)0x0) {
            pFVar26 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
                      ::GetOrAdd((this->Builder->PositionBufferConverter).Ptr,pFVar40,
                                 (FPositionVertexBuffer *)local_1c8._8_8_);
          }
          *(FGLTFJsonAccessor **)(pFVar35 + lVar38 + 0x10) = pFVar26;
        }
        else {
          this_02 = ::operator_new(0x50);
          if (this_02 != (FPositionVertexBuffer *)0x0) {
            pFVar26 = (FGLTFJsonAccessor *)FPositionVertexBuffer::FPositionVertexBuffer(this_02);
          }
          uVar19 = local_1c8._8_8_;
          FPositionVertexBuffer::Init
                    ((FPositionVertexBuffer *)pFVar26,*(uint *)(local_1c8._8_8_ + 0x44),true);
          local_268 = *(uint *)(uVar19 + 0x44);
          uVar30 = *(uint *)(uVar19 + 0x40);
          IGLTFBufferAdapter::GetPositions((FPositionVertexBuffer *)local_1c8);
          plVar34 = (longlong *)local_1c8._0_8_;
          puVar24 = (undefined8 *)(**(code **)(*(longlong *)local_1c8._0_8_ + 8))(local_1c8._0_8_);
          uVar31 = local_268;
          uVar39 = 0;
          uVar20 = (ulonglong)uVar30;
          if (local_268 != 0) {
            do {
              local_1c8._24_8_ = uVar20;
              pfVar33 = (float *)((ulonglong)(uVar39 * pFVar26->MinMaxLength) +
                                 *(longlong *)&pFVar26->ComponentType);
              *(undefined8 *)pfVar33 = *puVar24;
              pfVar33[2] = *(float *)(puVar24 + 1);
              pUVar8 = this->SplineMeshComponent;
              uVar2 = (pUVar8->ForwardAxis).Value;
              pfVar28 = pfVar33;
              if (uVar2 != '\0') {
                if (uVar2 == '\x01') {
                  pfVar28 = pfVar33 + 1;
                }
                else {
                  if ((uVar2 != '\x02') &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                          ,0x21e,L""), bVar21)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pfVar28 = pfVar33 + 2;
                }
              }
              pTVar27 = USplineMeshComponent::CalcSliceTransform(pUVar8,&local_e8,*pfVar28);
              fVar42 = (float)(pTVar27->Rotation).ZW.m128d_f64[0];
              fVar43 = (float)(pTVar27->Rotation).ZW.m128d_f64[1];
              fVar50 = (float)(pTVar27->Rotation).XY.m128d_f64[0];
              fVar51 = (float)(pTVar27->Rotation).XY.m128d_f64[1];
              dVar11 = (pTVar27->Translation).XY.m128d_f64[0];
              dVar12 = (pTVar27->Translation).XY.m128d_f64[1];
              dVar13 = (pTVar27->Scale3D).XY.m128d_f64[0];
              dVar14 = (pTVar27->Scale3D).XY.m128d_f64[1];
              dVar15 = (pTVar27->Translation).ZW.m128d_f64[0];
              dVar16 = (pTVar27->Scale3D).ZW.m128d_f64[0];
              uVar2 = (this->SplineMeshComponent->ForwardAxis).Value;
              pfVar28 = pfVar33;
              if (uVar2 != '\0') {
                if (uVar2 == '\x01') {
                  pfVar28 = pfVar33 + 1;
                }
                else {
                  if ((uVar2 != '\x02') &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                          ,0x21e,L""), bVar21)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pfVar28 = pfVar33 + 2;
                }
              }
              puVar24 = (undefined8 *)((longlong)puVar24 + local_1c8._24_8_);
              *pfVar28 = 0.0;
              uVar39 = uVar39 + 1;
              fVar47 = (float)*(undefined8 *)pfVar33 * (float)dVar13;
              fVar48 = (float)((ulonglong)*(undefined8 *)pfVar33 >> 0x20) * (float)dVar14;
              fVar49 = pfVar33[2] * (float)dVar16;
              fVar44 = fVar48 * fVar50 - fVar51 * fVar47;
              fVar45 = fVar49 * fVar51 - fVar42 * fVar48;
              fVar46 = fVar47 * fVar42 - fVar50 * fVar49;
              fVar45 = fVar45 + fVar45;
              fVar46 = fVar46 + fVar46;
              fVar44 = fVar44 + fVar44;
              local_190 = fVar43 * fVar44 + fVar49 + (fVar46 * fVar50 - fVar45 * fVar51) +
                          (float)dVar15;
              local_198 = (FPositionVertexData *)
                          CONCAT44(fVar43 * fVar46 + fVar48 + (fVar45 * fVar42 - fVar44 * fVar50) +
                                   (float)dVar12,
                                   fVar43 * fVar45 + fVar47 + (fVar44 * fVar51 - fVar46 * fVar42) +
                                   (float)dVar11);
              *(FPositionVertexData **)pfVar33 = local_198;
              pfVar33[2] = local_190;
              plVar34 = (longlong *)local_1c8._0_8_;
              lVar38 = local_248;
              uVar20 = local_1c8._24_8_;
            } while (uVar39 < uVar31);
          }
          pFVar40 = local_250;
          pFVar25 = (FGLTFJsonAccessor *)0x0;
          if (pFVar26 != (FGLTFJsonAccessor *)0x0) {
            pFVar25 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
                      ::GetOrAdd((this->Builder->PositionBufferConverter).Ptr,local_250,
                                 (FPositionVertexBuffer *)pFVar26);
          }
          *(FGLTFJsonAccessor **)(local_260 + lVar38 + 0x10) = pFVar25;
          pFVar35 = local_260;
          if (plVar34 != (longlong *)0x0) {
            (**(code **)*plVar34)(plVar34,1);
            pFVar35 = local_260;
          }
        }
        if (*(longlong *)(pFVar35 + lVar38 + 0x10) == 0) {
          pFVar3 = this->Builder;
          FGLTFMeshSection::ToString(pFVar40,&local_110);
          pTVar18 = local_1e8;
          uVar30 = 0;
          if ((int)local_288 < local_1e8->ArrayNum) {
            uVar30 = ~local_288 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          ::FName::ToString((FName *)((pTVar18->AllocatorInstance).Data +
                                     (longlong)(int)local_288 * 0x38 + 8),&local_120);
          ::FString::PrintfImpl
                    (&local_140,
                     L"Failed to export vertex positions related to material slot %d (%s) in static mesh %s"
                    );
          FGLTFLogBuilder::LogError((FGLTFLogBuilder *)pFVar3,&local_140);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          pFVar35 = local_260;
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
            pFVar35 = local_260;
          }
        }
        if (local_258 != (FColorVertexBuffer *)0x0) {
          pFVar26 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
                    ::GetOrAdd((this->Builder->ColorBufferConverter).Ptr,pFVar40,local_258);
          *(FGLTFJsonAccessor **)(pFVar35 + lVar38 + 0x18) = pFVar26;
        }
        pFVar36 = local_1f0;
        if (local_1f0 == (FStaticMeshVertexBuffer *)0x0) {
          pFVar26 = (FGLTFJsonAccessor *)0x0;
          *(undefined8 *)(pFVar35 + lVar38 + 0x20) = 0;
        }
        else {
          pFVar26 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
                    ::GetOrAdd((this->Builder->NormalBufferConverter).Ptr,pFVar40,local_1f0);
          *(FGLTFJsonAccessor **)(pFVar35 + lVar38 + 0x20) = pFVar26;
          pFVar26 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
                    ::GetOrAdd((this->Builder->TangentBufferConverter).Ptr,pFVar40,pFVar36);
        }
        lVar23 = local_248;
        *(FGLTFJsonAccessor **)(pFVar35 + lVar38 + 0x28) = pFVar26;
        uVar30 = pFVar36->NumTexCoords;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar30,(ForAnyElementType *)(pFVar35 + local_248 + 0x30),
                   (int *)(pFVar35 + lVar38 + 0x38),(int *)(pFVar35 + local_248 + 0x3c));
        pFVar40 = local_250;
        if (uVar30 != 0) {
          uVar31 = 0;
          do {
            pFVar26 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
                      ::GetOrAdd((this->Builder->UVBufferConverter).Ptr,pFVar40,pFVar36,uVar31);
            uVar39 = 0;
            if ((int)uVar31 < *(int *)(pFVar35 + lVar38 + 0x38)) {
              uVar39 = ~uVar31 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar32 = (longlong)(int)uVar31;
            uVar31 = uVar31 + 1;
            *(FGLTFJsonAccessor **)(*(longlong *)(pFVar35 + lVar23 + 0x30) + lVar32 * 8) = pFVar26;
            pFVar36 = local_1f0;
          } while (uVar31 < uVar30);
        }
        pFVar29 = (FGLTFJsonMaterial *)0x0;
        uVar30 = 0;
        if ((int)local_288 < *(int *)&(this->Materials).field_0x8) {
          uVar30 = ~local_288 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar3 = this->Builder;
        pUVar9 = *(UMaterialInterface **)(local_238 + *(longlong *)&this->Materials);
        if (pUVar9 != (UMaterialInterface *)0x0) {
          local_1a8 = pUVar9;
          TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
          ::Emplace<UMaterialInterface_const_*_const_&>
                    ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                      *)&pFVar3->_padding_,(UMaterialInterface **)local_188,
                     (bool *)(local_1c8 + 0x20));
          pvVar17 = local_220;
          this_00 = (pFVar3->MaterialConverter).Ptr;
          local_230._0_8_ = (FScriptContainerElement *)0x0;
          iVar22 = (int)local_218;
          local_230._8_4_ = iVar22;
          if (iVar22 == 0) {
            local_230._12_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar22,0,(ForAnyElementType *)&local_230,iVar22,
                       (int *)((longlong)&local_230 + 0xc));
            memcpy((void *)local_230._0_8_,pvVar17,(longlong)iVar22 << 2);
          }
          pFVar29 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                    ::GetOrAdd(this_00,pUVar9,(FGLTFMeshData *)local_1a0.Reference,&local_230);
        }
        *(FGLTFJsonMaterial **)(local_260 + local_248 + 0x68) = pFVar29;
        lVar38 = local_248;
      }
      if (local_220 != (void *)0x0) {
        FMemory::Free(local_220);
      }
      local_288 = local_288 + 1;
      local_238 = local_238 + 8;
      local_248 = lVar38 + 0x98;
    } while ((int)local_288 < local_1e8->ArrayNum);
  }
  return;
}

