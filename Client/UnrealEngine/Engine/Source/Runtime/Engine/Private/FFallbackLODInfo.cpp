// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FFallbackLODInfo @ 1483e1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FFallbackLODInfo * __thiscall
Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo
          (FFallbackLODInfo *this,FStaticMeshSceneProxyDesc *param_1,
          FStaticMeshVertexBuffers *param_2,FStaticMeshSectionArray *param_3,
          FStaticMeshVertexFactories *param_4,int param_5,int param_6)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *pTVar1;
  ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo> FVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FStaticMeshComponentLODInfo *pFVar7;
  FFallbackLODInfo *pFVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  UMaterial *pUVar10;
  ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo> FVar11;
  FStaticMeshSectionArray *pFVar12;
  code **ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FColorVertexBuffer *pFVar17;
  int *piVar18;
  undefined1 auStackY_168 [32];
  undefined8 local_118;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *local_110;
  FLocalVertexFactory *local_108;
  int local_100;
  FColorVertexBuffer *local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  FStaticMeshSceneProxyDesc *local_e0;
  FString local_d8;
  FStaticMeshVertexBuffers *local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar15 = 0;
  (this->Sections).AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0;
  pTVar1 = &this->OverrideColorVFUniformBuffer;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 1;
  *pTVar1 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0;
  local_e0 = param_1;
  local_c8 = param_2;
  if ((param_5 < (param_1->LODData).ArrayNum) && (param_6 <= param_5)) {
    pFVar7 = TArrayView<FStaticMeshComponentLODInfo,int>::operator[](&param_1->LODData,param_5);
    pFVar17 = pFVar7->OverrideVertexColors;
    if (pFVar17 != (FColorVertexBuffer *)0x0) {
      iVar6 = *(int *)&param_3->field_0x28;
      uVar16 = uVar15;
      if (0 < iVar6) {
        do {
          uVar14 = (uint)uVar15;
          uVar5 = 0;
          if ((int)uVar14 < iVar6) {
            uVar5 = ~uVar14 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
            return pFVar8;
          }
          pFVar17 = pFVar7->OverrideVertexColors;
          pFVar12 = param_3;
          if (*(FStaticMeshSectionArray **)&param_3->field_0x20 != (FStaticMeshSectionArray *)0x0) {
            pFVar12 = *(FStaticMeshSectionArray **)&param_3->field_0x20;
          }
          if (pFVar17->NumVertices <= *(uint *)(&pFVar12->field_0x10 + uVar16)) goto LAB_1483e16e7;
          iVar6 = *(int *)&param_3->field_0x28;
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar16 = uVar16 + 0x1c;
        } while ((int)(uVar14 + 1) < iVar6);
      }
      this->OverrideColorVertexBuffer = pFVar17;
      if ((pFVar17->Stride != 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OverrideColorVertexBuffer->GetStride() == sizeof(FColor)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                             ,0x56c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
        return pFVar8;
      }
      bVar4 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
      if ((bVar4) || (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
        pFVar17 = this->OverrideColorVertexBuffer;
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)local_e0->_padding_,&local_d8,(UObject *)0x0);
        if (((local_c8->PositionVertexBuffer).NumVertices == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InVertexBuffers.PositionVertexBuffer.GetNumVertices() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                               ,0x576,L"LOD: %i of PathName: %s has an empty position stream."),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
          return pFVar8;
        }
        _Src.Data = local_d8.Data.AllocatorInstance.Data;
        local_100 = param_5;
        local_f0.Data = (FScriptContainerElement *)0x0;
        local_e8 = CONCAT44(local_e8._4_4_,local_d8.Data.ArrayNum);
        local_110 = pTVar1;
        local_108 = &param_4->VertexFactoryOverrideColorVertexBuffer;
        local_f8 = pFVar17;
        if (local_d8.Data.ArrayNum == 0) {
          local_e8 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_d8.Data.ArrayNum,0,&local_f0,local_d8.Data.ArrayNum,
                     (int *)((longlong)&local_e8 + 4));
          memcpy(local_f0.Data,_Src.Data,(longlong)local_d8.Data.ArrayNum * 2);
        }
        local_b8[0] = (code *)0x0;
        local_90 = FMemory::Malloc(0x38,8);
        *local_90 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo'::`26'::<lambda_1>,1,1>
                             ::_vftable_;
        local_90[1] = (code *)local_110;
        local_90[2] = (code *)local_108;
        *(int *)(local_90 + 3) = local_100;
        local_90[4] = (code *)local_f8;
        local_90[5] = (code *)0x0;
        local_90[5] = (code *)local_f0.Data;
        local_f0.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_90 + 6) = (undefined4)local_e8;
        *(undefined4 *)((longlong)local_90 + 0x34) = local_e8._4_4_;
        if (local_90 + 1 != (code **)0x0) {
          local_b8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo'::__l26::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
        }
        local_e8 = 0;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo_::__l26::TSTR_FLocalVertexFactoryCopyData1400>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_88._0_8_ = local_b8[0];
          local_60 = local_90;
          local_90 = (code **)0x0;
          local_88._16_8_ = local_a8[0];
          local_88._24_8_ = local_a8[1];
          local_88._32_8_ = local_a8[2];
          local_b8[0] = (code *)0x0;
          local_58 = 2;
          pFVar9 = (FRenderCommandTag *)
                   TRenderCommandTag<`Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo'::__l26::TSTR_FLocalVertexFactoryCopyData1400>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar9);
          uVar15 = (ulonglong)local_58;
          if ((2 < uVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
            return pFVar8;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              ppcVar13 = (code **)(local_88 + 0x10);
              if (local_60 != (code **)0x0) {
                ppcVar13 = local_60;
              }
              (**(code **)(*ppcVar13 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          ppcVar13 = local_b8 + 2;
          if (local_90 != (code **)0x0) {
            ppcVar13 = local_90;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
        if (local_f0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_1483e16e7:
  uVar15 = 0;
  piVar18 = &(this->Sections).ArrayMax;
  uVar5 = *(uint *)&param_3->field_0x28;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  (this->Sections).ArrayNum = 0;
  if (*piVar18 != uVar5) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>_>
              (8,8,uVar5,(ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo> *)this
               ,0,piVar18);
  }
  iVar6 = *(int *)&param_3->field_0x28;
  uVar16 = uVar15;
  if (0 < iVar6) {
    do {
      uVar14 = (uint)uVar15;
      uVar5 = 0;
      if ((int)uVar14 < iVar6) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
        return pFVar8;
      }
      local_118 = 0;
      pFVar12 = param_3;
      if (*(FStaticMeshSectionArray **)&param_3->field_0x20 != (FStaticMeshSectionArray *)0x0) {
        pFVar12 = *(FStaticMeshSectionArray **)&param_3->field_0x20;
      }
      pUVar10 = (UMaterial *)
                FStaticMeshSceneProxyDesc::GetMaterial
                          (local_e0,*(int *)(&pFVar12->field_0x0 + uVar16),false,true);
      if (pUVar10 == (UMaterial *)0x0) {
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      local_118 = (**(code **)(pUVar10->_padding_ + 0x310))();
      FVar2 = (this->Sections).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)this;
      if (FVar2 != (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0) {
        FVar11 = FVar2;
      }
      if ((ulonglong)FVar11 <= &local_118) {
        FVar11 = (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)this;
        if (FVar2 != (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0) {
          FVar11 = FVar2;
        }
        if ((&local_118 < (undefined8 *)((longlong)FVar11 + (longlong)*piVar18 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FFallbackLODInfo *)(*pcVar3)();
          return pFVar8;
        }
      }
      iVar6 = (this->Sections).ArrayNum;
      if (iVar6 == *piVar18) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>_>
                          (0x808,(ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>
                                  *)this,piVar18);
      }
      (this->Sections).ArrayNum = iVar6 + 1;
      FVar2 = (this->Sections).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)this;
      if (FVar2 != (ForElementType<Nanite::FSceneProxy::FFallbackLODInfo::FSectionInfo>)0x0) {
        FVar11 = FVar2;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      *(undefined8 *)((longlong)FVar11 + (longlong)iVar6 * 8) = local_118;
      iVar6 = *(int *)&param_3->field_0x28;
      uVar16 = uVar16 + 0x1c;
    } while ((int)(uVar14 + 1) < iVar6);
  }
  return this;
}

// operator() @ 1483ec880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FSceneProxy::FFallbackLODInfo::FFallbackLODInfo'::__l26::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar4;
  FRHIResource *local_res8;
  
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1e0) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalVF->GetTangentsSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                         ,0x57b,L"LOD: %i of PathName: %s has a null tangents srv."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1e8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalVF->GetTextureCoordinatesSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                         ,0x57c,L"LOD: %i of PathName: %s has a null texcoord srv."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar4 = CreateLocalVFUniformBuffer
                    ((FLocalVertexFactory *)&local_res8,(uint)*(undefined8 *)((longlong)this + 8),
                     (FColorVertexBuffer *)(ulonglong)*(uint *)((longlong)this + 0x10),
                     (int)*(undefined8 *)((longlong)this + 0x18),0);
  TVar1 = *(TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *)this;
  if (TVar1 != TVar4) {
    this_00 = *(FRHIResource **)TVar1;
    *(undefined8 *)TVar1 = *(undefined8 *)TVar4;
    *(undefined8 *)TVar4 = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

