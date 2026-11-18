// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FindOrCreateRayTracingState @ 145f8d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FLandscapeRayTracingState * __thiscall
FLandscapeRayTracingImpl::FindOrCreateRayTracingState
          (FLandscapeRayTracingImpl *this,FRHICommandListBase *param_1,
          FSceneViewStateInterface *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  FRHIResource *this_00;
  FRHIResource *pFVar3;
  code *pcVar4;
  void *pvVar5;
  FRHIBuffer *this_01;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FLandscapeRayTracingState *pFVar12;
  FDebugName *pFVar13;
  longlong lVar14;
  FShaderParametersMetadata *pFVar15;
  TRefCountPtr<FRHIUniformBuffer> TVar16;
  ulonglong uVar17;
  FLandscapeRayTracingState *pFVar18;
  uint uVar19;
  longlong lVar20;
  TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_> *this_02;
  FRayTracingGeometry *this_03;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [4];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  int local_1e0;
  FRayTracingGeometrySegment local_1d8;
  int local_1b0;
  TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_> *local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_188 [48];
  undefined1 local_158 [72];
  ForAnyElementType local_110;
  FRHIRayTracingGeometry *local_108;
  FName local_100;
  uint local_f8;
  FName local_f4;
  longlong local_e8;
  FDebugName local_e0 [2];
  FRHIBuffer *local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b4;
  ERayTracingGeometryInitializerType local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FResourceArrayUploadInterface *local_98;
  FScriptContainerElement *local_90;
  undefined8 uStack_88;
  FScriptContainerElement *local_80;
  FRHIRayTracingGeometry *local_78;
  FDebugName local_70;
  FName local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar8 = 0;
  local_1b0 = param_3;
  local_188._16_8_ = param_1;
  if (param_2 != (FSceneViewStateInterface *)0x0) {
    uVar8 = (**(code **)(param_2->_padding_ + 0x70))(param_2);
  }
  iVar9 = (this->PerViewRayTracingState).ArrayNum;
  pFVar18 = (FLandscapeRayTracingState *)(this->PerViewRayTracingState).AllocatorInstance.Data;
  pFVar12 = pFVar18 + iVar9;
  while( true ) {
    if ((this->PerViewRayTracingState).ArrayNum != iVar9) {
      local_1f8[0] = 0;
      `TCheckedPointerIterator<FLandscapeRayTracingState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1f8);
    }
    if (pFVar18 == pFVar12) break;
    if (pFVar18->ViewKey == uVar8) {
      return pFVar18;
    }
    pFVar18 = pFVar18 + 1;
  }
  iVar9 = (this->PerViewRayTracingState).ArrayNum;
  piVar1 = &(this->PerViewRayTracingState).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  (this->PerViewRayTracingState).ArrayNum = iVar9 + 1;
  pFVar12 = (FLandscapeRayTracingState *)
            ((this->PerViewRayTracingState).AllocatorInstance.Data + (longlong)iVar9 * 0x28);
  local_188._40_8_ = pFVar12;
  DefaultConstructItems<FLandscapeRayTracingState,int>(pFVar12,1);
  this_02 = &pFVar12->Sections;
  pFVar12->ViewKey = uVar8;
  iVar9 = (pFVar12->Sections).ArrayNum;
  piVar1 = &(pFVar12->Sections).ArrayNum;
  uVar8 = param_3 * param_4 * param_3 * param_4;
  local_1a8 = this_02;
  if (iVar9 < (int)uVar8) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x138,8,uVar8 - iVar9,&this_02->AllocatorInstance,piVar1,
                        &(pFVar12->Sections).ArrayMax);
    DefaultConstructItems<FLandscapeSectionRayTracingState,int>
              ((this_02->AllocatorInstance).Data + (longlong)iVar10 * 0x138,uVar8 - iVar9);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar9) {
      uVar19 = iVar9 - uVar8;
      if (((int)(uVar19 | uVar8) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
        return pFVar12;
      }
      if (uVar19 != 0) {
        TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_02,uVar8,uVar19);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x138,8,&this_02->AllocatorInstance,*piVar1,&(pFVar12->Sections).ArrayMax);
      }
    }
  }
  uVar17 = (ulonglong)(uint)param_4;
  local_1e8 = 0;
  if (0 < param_3) {
    local_1e0 = 0;
    do {
      local_1ec = 0;
      iVar9 = local_1e0;
      do {
        local_1f4 = 0;
        iVar10 = (int)uVar17;
        if (0 < iVar10) {
          local_1e4 = param_5 * param_5;
          local_1f0 = (iVar9 + local_1ec) * iVar10 * iVar10;
          local_1a0 = (longlong)local_1f0;
          lVar20 = local_1a0 * 0x138;
          local_188._32_8_ = (longlong)iVar10 * 0x138;
          do {
            iVar9 = 0;
            local_198 = lVar20;
            do {
              uVar8 = local_1e4;
              iVar10 = local_1f4;
              pvVar5 = ThreadLocalStoragePointer;
              uVar19 = 0;
              if (local_1f0 + iVar9 < this_02->ArrayNum) {
                uVar19 = (uint)~(local_1f0 + iVar9) >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                return pFVar12;
              }
              this_03 = (FRayTracingGeometry *)((this_02->AllocatorInstance).Data + lVar20);
              local_c8 = (FRHIBuffer *)0x0;
              local_c0 = 0;
              local_b8 = 0;
              local_b4 = 0x10000;
              local_b0 = Rendering;
              local_a8.Data = (FScriptContainerElement *)0x0;
              local_a0 = 0;
              local_98 = (FResourceArrayUploadInterface *)0x0;
              local_90 = (FScriptContainerElement *)0xffffffffffffffff;
              uStack_88._0_4_ = -1;
              uStack_88._4_4_ = -1;
              local_80 = (FScriptContainerElement *)0xffffffffffffffff;
              local_78 = (FRHIRayTracingGeometry *)0x0;
              FDebugName::FDebugName(&local_70);
              local_64.ComparisonIndex.Value = 0;
              local_64.Number = 0;
              if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) <
                   ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
                ::FName::FName(&::DebugName,"FLandscapeComponentSceneProxy");
                _Init_thread_footer(&::_TSS1);
              }
              iVar11 = DebugNumber;
              DebugNumber = DebugNumber + 1;
              pFVar13 = FDebugName::FDebugName(local_e0,::DebugName,iVar11);
              this_01 = local_c8;
              local_70.Name = pFVar13->Name;
              local_70.Number = pFVar13->Number;
              if (local_c8 != (FRHIBuffer *)0x0) {
                local_c8 = (FRHIBuffer *)0x0;
                FRHIResource::Release((FRHIResource *)this_01);
              }
              local_b4 = CONCAT22(local_b4._2_2_,0x101);
              local_c0 = local_c0 & 0xffffffff;
              local_1d8.VertexBuffer.Reference = (FRHIBuffer *)0x0;
              local_1d8.VertexBufferOffset = 0;
              local_1d8.FirstPrimitive = 0;
              local_1d8.NumPrimitives = 0;
              local_1d8.bForceOpaque = false;
              local_1d8.bAllowDuplicateAnyHitShaderInvocation = true;
              local_1d8.bEnabled = true;
              local_1d8.VertexBufferStride = 0xc;
              local_1d8.VertexBufferElementType = VET_Float3;
              local_1d8.MaxVertices = uVar8;
              if (((local_a8.Data <= &local_1d8) &&
                  (&local_1d8 <
                   (FRayTracingGeometrySegment *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x28)))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                return pFVar12;
              }
              iVar11 = (int)local_a0;
              if ((int)local_a0 == local_a0._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              FVar6.Data = local_a8.Data;
              lVar14 = (longlong)iVar11;
              local_a0 = CONCAT44(local_a0._4_4_,iVar11 + 1);
              *(undefined8 *)&local_a8.Data[lVar14 * 0x28].field_0x0 = 0;
              *(FRHIBuffer **)&local_a8.Data[lVar14 * 0x28].field_0x0 =
                   local_1d8.VertexBuffer.Reference;
              if (local_1d8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
                FRHIResource::AddRef((FRHIResource *)local_1d8.VertexBuffer.Reference);
              }
              *(EVertexElementType *)(FVar6.Data + lVar14 * 0x28 + 8) =
                   local_1d8.VertexBufferElementType;
              *(uint *)(FVar6.Data + lVar14 * 0x28 + 0xc) = local_1d8.VertexBufferOffset;
              *(uint *)(FVar6.Data + lVar14 * 0x28 + 0x10) = local_1d8.VertexBufferStride;
              *(uint *)(FVar6.Data + lVar14 * 0x28 + 0x14) = local_1d8.MaxVertices;
              *(uint *)(FVar6.Data + lVar14 * 0x28 + 0x18) = local_1d8.FirstPrimitive;
              *(uint *)(FVar6.Data + lVar14 * 0x28 + 0x1c) = local_1d8.NumPrimitives;
              FVar6.Data[lVar14 * 0x28 + 0x20] = (FScriptContainerElement)local_1d8.bForceOpaque;
              FVar6.Data[lVar14 * 0x28 + 0x21] =
                   (FScriptContainerElement)local_1d8.bAllowDuplicateAnyHitShaderInvocation;
              FVar6.Data[lVar14 * 0x28 + 0x22] = (FScriptContainerElement)local_1d8.bEnabled;
              local_158._0_8_ = local_c8;
              if (local_c8 != (FRHIBuffer *)0x0) {
                FRHIResource::AddRef((FRHIResource *)local_c8);
              }
              FVar6.Data = local_a8.Data;
              iVar11 = (int)local_a0;
              local_158._8_4_ = (uint)local_c0;
              local_158._12_4_ = local_c0._4_4_;
              local_158._16_4_ = local_b8;
              local_158[0x14] = (bool)(undefined1)local_b4;
              local_158[0x15] = (bool)local_b4._1_1_;
              local_158[0x16] = (bool)local_b4._2_1_;
              local_158[0x17] = (bool)local_b4._3_1_;
              local_158[0x18] = local_b0;
              local_158._32_8_ = (FScriptContainerElement *)0x0;
              local_158._40_4_ = (int)local_a0;
              if ((int)local_a0 == 0) {
                local_158._44_4_ = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,(int)local_a0,0,(ForAnyElementType *)(local_158 + 0x20),
                           (int)local_a0,(int *)(local_158 + 0x2c));
                ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                          ((void *)local_158._32_8_,(FRayTracingGeometrySegment *)FVar6.Data,iVar11)
                ;
              }
              local_158._48_8_ = local_98;
              local_108 = local_78;
              local_f8 = local_70.Number;
              local_158._56_8_ = local_90;
              local_158._64_4_ = (int)uStack_88;
              local_158._68_4_ = uStack_88._4_4_;
              local_f4 = local_64;
              local_110.Data = local_80;
              local_100 = local_70.Name;
              FRayTracingGeometry::SetInitializer
                        (this_03,(FRayTracingGeometryInitializer *)local_158);
              (**(code **)(this_03->_padding_ + 0x18))(this_03,local_188._16_8_);
              local_188._0_4_ = local_1ec;
              local_188._4_4_ = local_1e8;
              local_188._8_4_ = iVar9;
              local_188._12_4_ = iVar10;
              pFVar15 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata();
              if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsLayoutInitialized()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                     ,0x17c,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                return pFVar12;
              }
              TVar16 = RHICreateUniformBuffer
                                 (local_188 + 0x18,(FRHIUniformBufferLayout *)local_188,
                                  (EUniformBufferUsage)(pFVar15->Layout).Reference,2);
              this_00 = (FRHIResource *)(TVar16.Reference)->_padding_;
              if (this_00 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(this_00);
                pFVar15 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata();
                if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsLayoutInitialized()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                       ,0x17c,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                  return pFVar12;
                }
                if ((FName)(pFVar15->Layout).Reference != this_00[2].OwnerName) {
                  pFVar15 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata();
                  if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsLayoutInitialized()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                         ,0x177,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                    return pFVar12;
                  }
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                     ,0x96,
                                     L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                                    );
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    pFVar12 = (FLandscapeRayTracingState *)(*pcVar4)();
                    return pFVar12;
                  }
                }
              }
              if ((FRHIResource *)local_188._24_8_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)local_188._24_8_);
              }
              puVar2 = this_03[1].RawDataHeader.Reserved + 4;
              if (puVar2 != (uint *)&local_e8) {
                pFVar3 = *(FRHIResource **)puVar2;
                *(FRHIResource **)puVar2 = this_00;
                this_00 = pFVar3;
              }
              if (this_00 != (FRHIResource *)0x0) {
                FRHIResource::Release(this_00);
              }
              if (local_1d8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
                FRHIResource::Release((FRHIResource *)local_1d8.VertexBuffer.Reference);
              }
              DestructItems<FRayTracingGeometrySegment,int>
                        ((FRayTracingGeometrySegment *)local_a8.Data,(int)local_a0);
              if ((FRayTracingGeometrySegment *)local_a8.Data != (FRayTracingGeometrySegment *)0x0)
              {
                FMemory::Free(local_a8.Data);
              }
              if (local_c8 != (FRHIBuffer *)0x0) {
                FRHIResource::Release((FRHIResource *)local_c8);
              }
              uVar17 = (ulonglong)param_4;
              iVar9 = iVar9 + 1;
              lVar20 = lVar20 + 0x138;
              this_02 = local_1a8;
            } while (iVar9 < param_4);
            local_1f4 = local_1f4 + 1;
            local_1a0 = local_1a0 + uVar17;
            lVar20 = local_198 + local_188._32_8_;
            local_1f0 = local_1f0 + param_4;
            param_3 = local_1b0;
            iVar9 = local_1e0;
          } while (local_1f4 < param_4);
        }
        local_1ec = local_1ec + 1;
      } while (local_1ec < param_3);
      local_1e0 = iVar9 + param_3;
      local_1e8 = local_1e8 + 1;
    } while (local_1e8 < param_3);
  }
  return (FLandscapeRayTracingState *)local_188._40_8_;
}

