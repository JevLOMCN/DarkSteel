// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// CreateInstanceQuery @ 14549bca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSceneInstanceCullingQuery * __thiscall
FSceneCullingRenderer::CreateInstanceQuery(FSceneCullingRenderer *this,FRDGBuilder *param_1)

{
  FSceneInstanceCullingQuery *pFVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSceneCullingRenderer_CullInstances");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId194,"FSceneCullingRenderer_CullInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
               ,0xc2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId194);
  }
  if (this->SceneCulling->bIsEnabled == false) {
    pFVar1 = (FSceneInstanceCullingQuery *)0x0;
  }
  else {
    pFVar1 = FRDGBuilder::AllocObject<FSceneInstanceCullingQuery,FSceneCullingRenderer_&>
                       (param_1,this);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar1;
}

// CullInstances @ 14549f290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSceneInstanceCullingQuery * __thiscall
FSceneCullingRenderer::CullInstances
          (FSceneCullingRenderer *this,FRDGBuilder *param_1,
          TArrayView<FConvexVolume_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSceneInstanceCullingQuery *pFVar4;
  ForElementType<UE::Math::TPlane<double>_> _Dst;
  ForElementType<UE::Math::TPlane<double>_> FVar5;
  int iVar6;
  ForElementType<UE::Math::TPlane<double>_> *_Src;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<UE::Math::TPlane<double>_> _Src_00;
  bool bVar10;
  undefined1 auStackY_2e8 [32];
  TVector<double>_u_0 local_288;
  ForElementType<UE::Math::TPlane<double>_> local_268;
  int local_198;
  int local_194 [3];
  ForElementType<UE::Math::TPlane<double>_> local_188;
  int local_78;
  int local_74 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSceneCullingRenderer_CullInstances");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"FSceneCullingRenderer_CullInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  if (this->SceneCulling->bIsEnabled == false) {
    pFVar4 = (FSceneInstanceCullingQuery *)0x0;
  }
  else {
    pFVar4 = FRDGBuilder::AllocObject<FSceneInstanceCullingQuery,FSceneCullingRenderer_&>
                       (param_1,this);
    iVar6 = param_2->ArrayNum;
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < iVar6) {
      do {
        local_268.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
        local_68 = 0;
        uStack_60 = 0;
        uVar8 = (uint)uVar9;
        local_198 = 0;
        local_288._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_288._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar3 = 0;
        if ((int)uVar8 < iVar6) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        local_194[0] = 6;
        local_188.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
        local_78 = 0;
        local_74[0] = 8;
        local_58 = 0;
        uStack_50 = 0;
        local_288._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FSceneInstanceCullingQuery *)(*pcVar1)();
          return pFVar4;
        }
        FVar5 = (ForElementType<UE::Math::TPlane<double>_>)
                ((longlong)(param_2->DataPtr->Planes).AllocatorInstance.InlineData + uVar7);
        if ((ForElementType<UE::Math::TPlane<double>_>)&local_268 != FVar5) {
          iVar6 = *(int *)((longlong)FVar5 + 0xd0);
          _Src_00 = FVar5;
          if (*(ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar5 + 0xc0) !=
              (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            _Src_00 = *(ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar5 + 0xc0);
          }
          local_198 = iVar6;
          if ((iVar6 == 0) && (local_194[0] == 0)) {
            local_194[0] = 6;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                      (0x20,0x10,iVar6,local_194[0],&local_268,iVar6,local_194);
            _Dst = (ForElementType<UE::Math::TPlane<double>_>)&local_268;
            if (local_268.SecondaryData != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
              _Dst = local_268.SecondaryData;
            }
            if (iVar6 != 0) {
              memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar6 << 5);
            }
          }
        }
        if (&local_188 != (ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar5 + 0xe0)) {
          iVar6 = *(int *)((longlong)FVar5 + 0x1f0);
          _Src = (ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar5 + 0xe0);
          if (*(ForElementType<UE::Math::TPlane<double>_> **)((longlong)FVar5 + 0x1e0) !=
              (ForElementType<UE::Math::TPlane<double>_> *)0x0) {
            _Src = *(ForElementType<UE::Math::TPlane<double>_> **)((longlong)FVar5 + 0x1e0);
          }
          local_78 = iVar6;
          if ((iVar6 == 0) && (local_74[0] == 0)) {
            local_74[0] = 8;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                      (0x20,0x10,iVar6,local_74[0],&local_188,iVar6,local_74);
            FVar5 = (ForElementType<UE::Math::TPlane<double>_>)&local_188;
            if (local_188.SecondaryData != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
              FVar5 = local_188.SecondaryData;
            }
            if (iVar6 != 0) {
              memcpy((void *)FVar5,_Src,(longlong)iVar6 << 5);
            }
          }
        }
        FSceneInstanceCullingQuery::Add(pFVar4,uVar8,1,(FCullingVolume *)&local_288._s_0);
        if (local_188.SecondaryData != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_188.SecondaryData);
        }
        if (local_268.SecondaryData != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_268.SecondaryData);
        }
        uVar7 = uVar7 + 0x200;
        iVar6 = param_2->ArrayNum;
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < iVar6);
    }
    FSceneInstanceCullingQuery::Dispatch(pFVar4,param_1,true);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar4;
}

// DebugRender @ 14549f790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneCullingRenderer::DebugRender
          (FSceneCullingRenderer *this,FRDGBuilder *param_1,TArrayView<FViewInfo,int> *param_2)

{
  int *piVar1;
  FSceneCulling *pFVar2;
  FGlobalShaderMap *this_00;
  code *pcVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  undefined8 uVar5;
  FRDGBufferSRV *pFVar6;
  double dVar7;
  TConsoleVariableData<int> *pTVar8;
  FSceneCullingRenderer *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FRDGBuffer *pFVar14;
  FRDGBufferUAV *pFVar15;
  undefined8 *puVar16;
  FInstanceHierarchyParameters *pFVar17;
  FRDGBufferSRV *pFVar18;
  FGlobalShaderType *pFVar19;
  FShaderType *pFVar20;
  FName this_01;
  FRDGEventName *pFVar21;
  FShaderParametersMetadata *pFVar22;
  uint uVar23;
  ForElementType<unsigned_int> FVar24;
  TIntPoint<int>_u_0_s_0 TVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  FViewInfo *this_02;
  uint uVar29;
  undefined1 auStackY_228 [32];
  uint *puVar30;
  ulong64 uVar31;
  undefined1 local_1d8 [4];
  uint local_1d4;
  uint local_1d0;
  undefined8 *local_1c8;
  FRDGBuilder *local_1c0;
  int local_1b8;
  FRDGBufferUAVDesc local_1b0;
  FSceneCullingRenderer *local_1a0;
  TVector<double>_u_0 local_198;
  FRDGBufferDesc local_180;
  FRDGBufferSRVDesc local_168;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  FViewInfo *local_130;
  TShaderRefBase<FSceneCullingDebugRender_CS,FShaderMapPointerTable> local_128;
  TIntVector3<int>_u_0 local_118;
  TIntVector3<int>_u_0 local_108;
  TVector<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  undefined1 local_b8 [8];
  FString local_b0;
  FRDGEventName local_a0;
  ForElementType<unsigned_int> local_88;
  uint local_70;
  int local_6c;
  ulonglong local_68;
  
  pTVar8 = CVarSceneCullingDebugRenderMode.Ref;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar29 = (this->SceneCulling->CellHeaders).ArrayNum;
  local_1d4 = 0;
  local_1d0 = uVar29;
  local_1c0 = param_1;
  local_1a0 = this;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1b8 = pTVar8->ShadowedValue[1];
  if ((local_1b8 != 0) && (0 < (int)uVar29)) {
    ShaderPrint::SetEnabled(true);
    ShaderPrint::RequestSpaceForLines(uVar29 * param_2->ArrayNum * 0xc);
    local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
    uVar26 = uVar29 + 0x1f >> 5;
    local_6c = 0x80;
    local_70 = uVar29;
    if (uVar29 + 0x1f >> 5 != 0) {
      if (4 < uVar26) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_88,0,uVar26,4);
        local_6c = uVar26 << 5;
      }
      FVar24 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_88.SecondaryData;
      }
      memset((void *)FVar24,0,(ulonglong)uVar26 << 2);
      uVar26 = local_70 & 0x8000001f;
      if ((int)uVar26 < 0) {
        uVar26 = (uVar26 - 1 | 0xffffffe0) + 1;
      }
      if (uVar26 != 0) {
        FVar24 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_88.SecondaryData;
        }
        puVar30 = (uint *)((longlong)FVar24 +
                          (longlong)((int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar30 = *puVar30 & 0xffffffffU >> (0x20U - (char)uVar26 & 0x1f);
      }
    }
    pFVar9 = local_1a0;
    uVar26 = 0;
    if (0 < (int)uVar29) {
      lVar27 = 0;
      uVar28 = 1;
      do {
        pFVar2 = pFVar9->SceneCulling;
        uVar12 = 0;
        if ((int)uVar26 < (pFVar2->CellHeaders).ArrayNum) {
          uVar12 = ~uVar26 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar13 = *(int *)((pFVar2->CellHeaders).AllocatorInstance.Data + lVar27 * 8);
        if ((((int)uVar26 < 0) || ((int)local_70 <= (int)uVar26)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar24 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_88.SecondaryData;
        }
        uVar12 = uVar26;
        if ((int)uVar26 < 0) {
          uVar12 = uVar26 + 0x1f;
        }
        uVar23 = *(uint *)((longlong)FVar24 + (longlong)((int)uVar12 >> 5) * 4);
        if (iVar13 == 0) {
          uVar23 = uVar23 & ~uVar28;
        }
        else {
          uVar23 = uVar23 | uVar28;
        }
        uVar26 = uVar26 + 1;
        uVar28 = uVar28 << 1 | (uint)((int)uVar28 < 0);
        lVar27 = lVar27 + 1;
        *(uint *)((longlong)FVar24 + (longlong)((int)uVar12 >> 5) * 4) = uVar23;
        param_1 = local_1c0;
      } while (lVar27 < (int)uVar29);
    }
    uVar29 = local_70 + 0x1f >> 5;
    puVar30 = (uint *)&local_88;
    if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      puVar30 = (uint *)local_88.SecondaryData;
    }
    bVar10 = uVar29 != 0;
    if (bVar10) {
      uVar31 = (ulonglong)uVar29 << 2;
    }
    else {
      uVar31 = 4;
      uVar29 = 1;
      puVar30 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<unsigned_int>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<unsigned_int_const_,int>,ERDGInitialDataFlags)'
                 ::__l2::DummyElement;
    }
    local_1c0 = (FRDGBuilder *)
                CreateStructuredBuffer
                          (param_1,L"SceneCulling.Debug.ValidCellsMaskRdg",4,uVar29,puVar30,uVar31,
                           !bVar10);
    dVar7 = __real_42a0000000000000;
    this_02 = param_2->DataPtr;
    local_130 = this_02 + param_2->ArrayNum;
    if (this_02 != local_130) {
      do {
        bVar10 = ShaderPrint::IsEnabled(&this_02->ShaderPrintData);
        if (bVar10) {
          uStack_13c = local_a0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
          local_148 = 4;
          uStack_144 = 1;
          uStack_140 = 0x10109;
          local_180.BytesPerElement = 4;
          local_180.NumElements = 1;
          local_180._12_4_ = local_a0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
          local_180.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
          local_138 = 0;
          local_180.Metadata = (FShaderParametersMetadata *)0x0;
          FRDGUserValidation::ValidateCreateBuffer
                    (&param_1->UserValidation,&local_180,L"SceneCulling.Debug.DrawCellInfoCounter",
                     None);
          if (local_180.BytesPerElement == 0) {
            local_180.BytesPerElement = 1;
          }
          if (local_180.NumElements == 0) {
            local_180.NumElements = 1;
          }
          pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
          pFVar14 = FRDGBuffer::FRDGBuffer
                              (pFVar14,L"SceneCulling.Debug.DrawCellInfoCounter",&local_180,None);
          piVar1 = &(param_1->Buffers).Array.ArrayMax;
          iVar13 = (param_1->Buffers).Array.ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                               (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
          }
          (param_1->Buffers).Array.ArrayNum = iVar13 + 1;
          (param_1->Buffers).Array.AllocatorInstance.Data[iVar13] = pFVar14;
          (pFVar14->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
          FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,pFVar14);
          FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar14);
          local_1b0._padding_._1_1_ = 0;
          local_1b0._padding_._2_1_ = 0;
          local_1b0._padding_._0_1_ = 0;
          if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
            local_1b0._padding_._0_1_ = 0x1c;
          }
          local_1b0.Buffer = pFVar14;
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_1b0);
          pFVar14 = local_1b0.Buffer;
          pFVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
          lVar27 = pFVar14->_padding_;
          piVar1 = &(param_1->Views).Array.ArrayMax;
          *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
          pFVar15->_padding_ = lVar27;
          pFVar15->_padding_ = 0;
          *(undefined1 *)&pFVar15->_padding_ = 2;
          *(undefined1 *)&pFVar15->_padding_ = 0;
          pFVar15->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
          (pFVar15->Desc)._padding_ =
               CONCAT53(local_1b0._padding_._3_5_,
                        CONCAT12(local_1b0._padding_._2_1_,
                                 CONCAT11(local_1b0._padding_._1_1_,(undefined1)local_1b0._padding_)
                                ));
          (pFVar15->Desc).Buffer = local_1b0.Buffer;
          iVar13 = (param_1->Views).Array.ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
          }
          (param_1->Views).Array.ArrayNum = iVar13 + 1;
          (param_1->Views).Array.AllocatorInstance.Data[iVar13] = (FRDGView *)pFVar15;
          *(int *)((longlong)&pFVar15->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar15);
          AddClearUAVPass(param_1,pFVar15,0,Compute);
          puVar16 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xc0,0x10);
          if (puVar16 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)0x0;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            *(undefined1 *)(puVar16 + 3) = 1;
            *puVar16 = &___7__TObject_VFParameters_FSceneCullingDebugRender_CS___FRDGAllocator__6B_;
            puVar16[2] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            puVar16[9] = 0;
            puVar16[10] = 0;
            puVar16[0xb] = 0;
            puVar16[0xc] = 0;
            puVar16[0xd] = 0;
            puVar16[0xe] = 0;
            puVar16[0xf] = 0;
            puVar16[0x15] = 0;
            puVar16[0x16] = 0;
          }
          local_1c8 = puVar16;
          if ((((undefined8 **)param_1->_padding_ <= &local_1c8) &&
              (&local_1c8 <
               (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = (int)param_1->_padding_;
          piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
          }
          *(int *)&param_1->_padding_ = iVar13 + 1;
          *(undefined8 **)(param_1->_padding_ + (longlong)iVar13 * 8) = local_1c8;
          ShaderPrint::SetParameters(param_1,(FShaderParameters *)(puVar16 + 2));
          pFVar17 = GetShaderParameters(local_1a0,param_1);
          local_168._padding_._0_4_ = 0xffffffff;
          uVar5 = *(undefined8 *)&pFVar17->LocalCellCoordMask;
          puVar16[6] = *(undefined8 *)pFVar17;
          puVar16[7] = uVar5;
          pFVar18 = pFVar17->InstanceHierarchyCellBlockData;
          puVar16[8] = *(undefined8 *)&pFVar17->bCullChunkViewDistance;
          puVar16[9] = pFVar18;
          pFVar18 = pFVar17->InstanceHierarchyItemChunks;
          puVar16[10] = pFVar17->InstanceHierarchyCellHeaders;
          puVar16[0xb] = pFVar18;
          pFVar18 = pFVar17->ExplicitChunkBounds;
          puVar16[0xc] = pFVar17->InstanceIds;
          puVar16[0xd] = pFVar18;
          pFVar18 = pFVar17->ExplicitChunkCellIds;
          pFVar6 = pFVar17->UsedChunkIdMask;
          *(uint *)(puVar16 + 0x14) = local_1d0;
          local_168._padding_._4_4_ = 0;
          local_168._padding_ = 0;
          local_168.Buffer = (FRDGBuffer *)local_1c0;
          puVar16[0xe] = pFVar18;
          puVar16[0xf] = pFVar6;
          uVar11 = 0;
          if ((((FRDGBufferDesc *)&local_1c0->_padding_)->Usage & DrawIndirect) != None) {
            uVar11 = 0x1c;
          }
          local_168._padding_._0_4_ =
               CONCAT31((int3)((uint)(undefined4)local_168._padding_ >> 8),uVar11);
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_168);
          pFVar14 = local_168.Buffer;
          pFVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          lVar27 = pFVar14->_padding_;
          *(byte *)&pFVar18->_padding_ = (byte)pFVar18->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&pFVar18->_padding_ + 4) = 0xffffffffffffffff;
          pFVar18->_padding_ = lVar27;
          pFVar18->_padding_ = 0;
          *(undefined1 *)&pFVar18->_padding_ = 3;
          pFVar18->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
          (pFVar18->Desc)._padding_ =
               CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
          (pFVar18->Desc)._padding_ =
               CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
          (pFVar18->Desc)._padding_ = local_168._padding_;
          (pFVar18->Desc).Buffer = local_168.Buffer;
          iVar13 = (param_1->Views).Array.ArrayNum;
          if (iVar13 == (param_1->Views).Array.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                                &(param_1->Views).Array.ArrayMax);
          }
          (param_1->Views).Array.ArrayNum = iVar13 + 1;
          (param_1->Views).Array.AllocatorInstance.Data[iVar13] = (FRDGView *)pFVar18;
          *(int *)((longlong)&pFVar18->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar18);
          *(int *)((longlong)puVar16 + 0x9c) = local_1b8;
          puVar16[0x16] = pFVar18;
          TVar25 = (((TIntPoint<int> *)&this_02->_padding_)->field0_0x0)._s_0;
          local_198._s_0.Z = 0.0;
          local_f8._s_0.Z = 0.0;
          local_198._s_0.X = 0.0;
          local_198._s_0.Y = 0.0;
          TVar4 = (TIntPoint<int>_u_0_s_0)((ulonglong)TVar25 >> 0x20);
          if (TVar25.X < TVar25.Y) {
            TVar4 = TVar25;
          }
          local_f8._s_0.X = 0.0;
          local_f8._s_0.Y = 0.0;
          if (TVar4.X < 0) {
            TVar25.Y = (*(int *)((longlong)&(this_02->ViewRect).field0_0x0 + 0xc) -
                       *(int *)((longlong)&(this_02->ViewRect).field0_0x0 + 4)) / 2;
            TVar25.X = (*(int *)((longlong)&(this_02->ViewRect).field0_0x0 + 8) -
                       *(int *)&(this_02->ViewRect).field0_0x0) / 2;
          }
          local_e0._s_0.X = (double)TVar25.X;
          local_e0._s_0.Y = (double)TVar25.Y;
          FSceneView::DeprojectFVector2D
                    ((FSceneView *)this_02,(TVector2<double> *)&local_e0._s_0,
                     (TVector<double> *)&local_198._s_0,(TVector<double> *)&local_f8._s_0);
          *(float *)(puVar16 + 0x10) = (float)local_198._s_0.X;
          *(float *)((longlong)puVar16 + 0x84) = (float)local_198._s_0.Y;
          *(float *)(puVar16 + 0x11) = (float)local_198._s_0.Z;
          *(float *)(puVar16 + 0x12) = (float)(local_f8._s_0.X * dVar7 + local_198._s_0.X);
          *(float *)((longlong)puVar16 + 0x94) = (float)(local_f8._s_0.Y * dVar7 + local_198._s_0.Y)
          ;
          *(float *)(puVar16 + 0x13) = (float)(local_f8._s_0.Z * dVar7 + local_198._s_0.Z);
          puVar16[0x15] = pFVar15;
          this_00 = this_02->ShaderMap;
          pFVar19 = FSceneCullingDebugRender_CS::GetStaticType();
          if (*(int *)&pFVar19->field_0x50 != 1) {
            local_1d8[0] = 0;
            `FGlobalShaderMap::GetShader<FSceneCullingDebugRender_CS>'::__l2::<lambda_1>::operator()
                      (local_1d8);
          }
          pFVar20 = (FShaderType *)FSceneCullingDebugRender_CS::GetStaticType();
          FGlobalShaderMap::GetShader(this_00,&local_c8,pFVar20,0);
          if (local_c8.ShaderContent == (FShader *)0x0) {
            this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b8);
            ::FName::ToString((FName *)this_01,&local_b0);
            FSceneCullingDebugRender_CS::GetStaticType();
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FSceneCullingDebugRender_CS::GetStaticType();
          local_128.ShaderContent = (FSceneCullingDebugRender_CS *)local_c8.ShaderContent;
          local_128.ShaderMap = local_c8.ShaderMap;
          FComputeShaderUtils::GetGroupCountWrapped
                    ((TIntVector3<int> *)&local_118._s_0,
                     (int)(((int)(local_1d0 + 0x3f) >> 0x1f & 0x3fU) + local_1d0 + 0x3f) >> 6);
          pFVar21 = FRDGEventName::FRDGEventName(&local_a0,1,L"SceneCullingDebugRender");
          pFVar22 = FSceneCullingDebugRender_CS::FParameters::FTypeInfo::GetStructMetadata();
          local_108._s_0.Z = local_118._s_0.Z;
          local_108._0_8_ = local_118._0_8_;
          FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>
                    (param_1,pFVar21,Compute,&local_128,pFVar22,(FParameters *)(puVar16 + 2),
                     (TIntVector3<int> *)&local_108._s_0);
          uVar29 = local_1d4;
          local_1d4 = local_1d4 & 0xfffffffd;
          if ((void *)CONCAT44(local_a0.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                               local_a0.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
              (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_a0.FormattedEventName.Data.AllocatorInstance.Data.
                                           _4_4_,local_a0.FormattedEventName.Data.AllocatorInstance.
                                                 Data._0_4_));
          }
          if (((uVar29 & 1) != 0) &&
             (local_1d4 = uVar29 & 0xfffffffc, (FShader *)local_128.ShaderContent != (FShader *)0x0)
             ) {
            FMemory::Free(local_128.ShaderContent);
          }
        }
        this_02 = this_02 + 1;
      } while (this_02 != local_130);
    }
    if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.SecondaryData);
    }
  }
  return;
}

// GetShaderParameters @ 1454a7e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInstanceHierarchyParameters * __thiscall
FSceneCullingRenderer::GetShaderParameters(FSceneCullingRenderer *this,FRDGBuilder *param_1)

{
  FSceneCulling *pFVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  FRDGBuffer *pFVar5;
  FInstanceHierarchyParameters *pFVar6;
  FRDGBufferSRV *pFVar7;
  longlong lVar8;
  FRDGBufferSRVDesc local_f8;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  FRDGBufferSRVDesc local_98;
  FRDGBufferSRVDesc local_78;
  FRDGBufferSRVDesc local_58;
  FRDGBufferSRVDesc local_38;
  
  pFVar1 = this->SceneCulling;
  if (pFVar1->bIsEnabled != false) {
    FSceneCulling::FinalizeUpdateAndClear
              (pFVar1,param_1,(FSceneUniformBuffer *)(*(longlong *)&this->field_0x8 + 0x20),true);
    FSceneCulling::ValidateAllInstanceAllocations(pFVar1);
  }
  if (this->CellHeadersRDG == (FRDGBuffer *)0x0) {
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->CellBlockDataBuffer,param_1);
    this->CellBlockDataRDG = pFVar5;
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->CellHeadersBuffer,param_1);
    this->CellHeadersRDG = pFVar5;
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->ItemChunksBuffer,param_1);
    this->ItemChunksRDG = pFVar5;
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->InstanceIdsBuffer,param_1);
    this->InstanceIdsRDG = pFVar5;
    pFVar5 = FRDGBuilder::RegisterExternalBuffer
                       (param_1,&this->SceneCulling->UsedChunkIdMaskBuffer,None);
    this->UsedChunkIdMaskRDG = pFVar5;
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->ExplicitChunkBoundsBuffer,param_1)
    ;
    this->ExplicitChunkBoundsRDG = pFVar5;
    pFVar5 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                       ((FPersistentBuffer *)&this->SceneCulling->ExplicitChunkCellIdsBuffer,param_1
                       );
    this->ExplicitChunkCellIdsRDG = pFVar5;
    pFVar1 = this->SceneCulling;
    (this->ShaderParameters).NumCellsPerBlockLog2 = 9;
    (this->ShaderParameters).CellBlockDimLog2 = 3;
    (this->ShaderParameters).LocalCellCoordMask = 7;
    (this->ShaderParameters).FirstLevel = (pFVar1->SpatialHash).FirstLevel;
    pTVar3 = CvarSceneCullingCullChunkViewDistance.Ref;
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInstanceHierarchyParameters *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->ShaderParameters).bCullChunkViewDistance = (uint)pTVar3->ShadowedValue[1];
    local_f8.Buffer = this->CellBlockDataRDG;
    local_f8._padding_._4_4_ = 0;
    local_f8._padding_._0_4_ = 0xffffffff;
    local_f8._padding_ = 0;
    local_f8._padding_._0_1_ = 0;
    if ((((local_f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_f8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_f8);
    (this->ShaderParameters).InstanceHierarchyCellBlockData = pFVar7;
    local_d8.Buffer = this->CellHeadersRDG;
    local_d8._padding_._0_1_ = 0;
    local_d8._padding_._4_4_ = 0;
    local_d8._padding_._0_4_ = 0xffffffff;
    local_d8._padding_ = 0;
    if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_d8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_d8);
    (this->ShaderParameters).InstanceHierarchyCellHeaders = pFVar7;
    local_b8.Buffer = this->InstanceIdsRDG;
    local_b8._padding_._0_1_ = 0;
    local_b8._padding_._4_4_ = 0;
    local_b8._padding_._0_4_ = 0xffffffff;
    local_b8._padding_ = 0;
    if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_b8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_b8);
    (this->ShaderParameters).InstanceIds = pFVar7;
    local_98.Buffer = this->UsedChunkIdMaskRDG;
    local_98._padding_._0_1_ = 0;
    local_98._padding_._4_4_ = 0;
    local_98._padding_._0_4_ = 0xffffffff;
    local_98._padding_ = 0;
    if ((((local_98.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_98._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_98);
    (this->ShaderParameters).UsedChunkIdMask = pFVar7;
    local_78.Buffer = this->ItemChunksRDG;
    local_78._padding_._0_1_ = 0;
    local_78._padding_._4_4_ = 0;
    local_78._padding_._0_4_ = 0xffffffff;
    local_78._padding_ = 0;
    if ((((local_78.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_78._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_78);
    (this->ShaderParameters).InstanceHierarchyItemChunks = pFVar7;
    local_58._padding_._0_1_ = 0;
    local_58.Buffer = this->ExplicitChunkBoundsRDG;
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_4_ = 0xffffffff;
    local_58._padding_ = 0;
    if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_58._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_58);
    (this->ShaderParameters).ExplicitChunkBounds = pFVar7;
    local_38.Buffer = this->ExplicitChunkCellIdsRDG;
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_38);
    pFVar1 = this->SceneCulling;
    (this->ShaderParameters).ExplicitChunkCellIds = pFVar7;
    lVar8 = 0x318;
    if ((pFVar1->CellChunkIdAllocator).bGrowOnly == false) {
      lVar8 = 0x314;
    }
    (this->ShaderParameters).NumAllocatedChunks =
         *(uint *)((longlong)(pFVar1->SpatialHash).RecCellSizes + lVar8 + -0x70);
  }
  return &this->ShaderParameters;
}

