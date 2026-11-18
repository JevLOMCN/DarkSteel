// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FRuntimeVirtualTextureSceneProxy @ 1458cc120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRuntimeVirtualTextureSceneProxy * __thiscall
FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy
          (FRuntimeVirtualTextureSceneProxy *this,URuntimeVirtualTextureComponent *param_1)

{
  TTransform<double> *pTVar1;
  TBox<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ERuntimeVirtualTextureMaterialType EVar7;
  URuntimeVirtualTexture *pUVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  TIntPoint<int>_u_0 TVar17;
  ForAnyElementType _Src;
  bool bVar18;
  bool bVar19;
  int iVar20;
  EShadingPath EVar21;
  uint uVar22;
  FSceneInterface *pFVar23;
  FRendererOnScreenNotification *lpCriticalSection;
  IVirtualTexture *pIVar24;
  UVirtualTexture2D *pUVar25;
  IVirtualTexture *pIVar26;
  undefined8 *puVar27;
  ulong64 uVar28;
  TVector4<double> *pTVar29;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar30;
  FRuntimeVirtualTextureSceneProxy *pFVar31;
  undefined ***pppuVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  double dVar36;
  undefined1 auStackY_398 [32];
  FInitSettings local_344;
  ForAnyElementType local_340;
  int local_334;
  int local_330;
  int iStack_32c;
  undefined1 local_328 [8];
  FDelegateAllocation local_320;
  int local_310;
  int local_30c;
  undefined1 local_308 [8];
  FString local_300;
  TVector4<float> local_2e8;
  FDestructionSentinel local_2d8;
  FDelegateAllocation *local_2c0;
  TVector4<double> local_2b8;
  FVTProducerDescription local_298;
  code *local_1c8 [2];
  undefined **local_1b8;
  FRuntimeVirtualTextureSceneProxy *pFStack_1b0;
  URuntimeVirtualTexture *local_1a8;
  undefined ***local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  undefined1 local_188 [16];
  undefined **local_178;
  FRuntimeVirtualTextureSceneProxy *pFStack_170;
  URuntimeVirtualTexture *local_168;
  undefined ***local_160;
  byte local_158;
  FVTProducerDescription local_148;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_398;
  this->SceneIndex = -1;
  this->RuntimeVirtualTextureId = -1;
  pTVar2 = &this->Bounds;
  this->bAdaptive = false;
  this->MaterialType = Count;
  pTVar1 = &this->Transform;
  this->bHidePrimitivesInEditor = false;
  this->bHidePrimitivesInGame = false;
  this->VirtualTexture = (URuntimeVirtualTexture *)0x0;
  *&(pTVar1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (pTVar2->Min).field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  (this->VirtualTextureSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->ShaderUniforms[0].field0_0x0._s_0.W = 1.0;
  this->ShaderUniforms[0].field0_0x0._s_0.X = 0.0;
  this->ShaderUniforms[0].field0_0x0._s_0.Y = 0.0;
  this->ShaderUniforms[0].field0_0x0._s_0.Z = 0.0;
  this->ShaderUniforms[1].field0_0x0._s_0.X = 0.0;
  this->ShaderUniforms[1].field0_0x0._s_0.Y = 0.0;
  this->ShaderUniforms[1].field0_0x0._s_0.Z = 0.0;
  this->ShaderUniforms[1].field0_0x0._s_0.W = 1.0;
  this->ShaderUniforms[2].field0_0x0._s_0.X = 0.0;
  this->ShaderUniforms[2].field0_0x0._s_0.Y = 0.0;
  this->ShaderUniforms[2].field0_0x0._s_0.Z = 0.0;
  this->ShaderUniforms[2].field0_0x0._s_0.W = 1.0;
  this->ShaderUniforms[3].field0_0x0._s_0.X = 0.0;
  this->ShaderUniforms[3].field0_0x0._s_0.Y = 0.0;
  this->ShaderUniforms[3].field0_0x0._s_0.Z = 0.0;
  this->ShaderUniforms[3].field0_0x0._s_0.W = 1.0;
  iVar20 = 0;
  (this->ProducerHandle).PackedValue = 0;
  this->MaxDirtyLevel = 0;
  (this->DirtyRects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyRects).ArrayNum = 0;
  (this->DirtyRects).ArrayMax = 0;
  (this->CombinedDirtyRect).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CombinedDirtyRect).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CombinedDirtyRect).InvalidatePriority = Normal;
  (this->OnScreenWarningDelegateHandle).ID = 0;
  this->AllocatedVirtualTexture = (IAllocatedVirtualTexture *)0x0;
  this->SpaceID = -1;
  URuntimeVirtualTextureComponent::GetHidePrimitiveSettings
            (param_1,&this->bHidePrimitivesInEditor,&this->bHidePrimitivesInGame);
  if ((param_1->VirtualTexture).field0_0x0.DebugPtr == (URuntimeVirtualTexture *)0x0) {
    return this;
  }
  bVar18 = URuntimeVirtualTextureComponent::IsEnabledInScene(param_1);
  if (!bVar18) {
    URuntimeVirtualTexture::Release((param_1->VirtualTexture).field0_0x0.DebugPtr);
    return this;
  }
  if (param_1->bEnableScalability != false) {
    iVar20 = VirtualTextureScalability::GetRuntimeVirtualTextureSizeBias(param_1->ScalabilityGroup);
  }
  pUVar8 = (param_1->VirtualTexture).field0_0x0.DebugPtr;
  this->VirtualTexture = pUVar8;
  local_198 = 1;
  this->RuntimeVirtualTextureId = *(int *)&pUVar8->field_0xc;
  dVar3 = (double)param_1->_padding_;
  (pTVar1->Rotation).XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  dVar5 = (double)param_1->_padding_;
  dVar36 = dVar4 - dVar3;
  dVar6 = (double)param_1->_padding_;
  dVar13 = (double)param_1->_padding_ + (double)param_1->_padding_;
  dVar14 = dVar6 + dVar5;
  auVar12._8_4_ = SUB84(dVar36,0);
  auVar12._0_8_ = (double)param_1->_padding_ - (double)param_1->_padding_;
  auVar12._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  *(undefined1 (*) [16])&(pTVar2->Min).field0_0x0 = auVar12;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar5 - dVar6;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Min.field0_0x0 + 0x10) = auVar11;
  auVar15._8_4_ = SUB84(dVar14,0);
  auVar15._0_8_ = dVar3 + dVar4;
  auVar15._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8) = auVar15;
  (this->Bounds).IsValid = 1;
  (this->Bounds).Pad[0] = (char)uStack_197;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_197 >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_197 >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_197 >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_197 >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_197 >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_197 >> 0x30);
  local_344.TileCountBias = iVar20;
  URuntimeVirtualTextureComponent::GetCustomMaterialData(param_1,&local_2e8);
  FVTProducerDescription::FVTProducerDescription(&local_298);
  URuntimeVirtualTexture::GetProducerDescription(this->VirtualTexture,&local_298,&local_344,pTVar1);
  this->MaterialType = this->VirtualTexture->MaterialType;
  bVar18 = this->VirtualTexture->bClearTextures;
  pFVar23 = UActorComponent::GetScene((UActorComponent *)param_1);
  if (pFVar23 == (FSceneInterface *)0x0) {
    EVar21 = Deferred;
  }
  else {
    EVar21 = FSceneInterface::GetShadingPath(pFVar23->FeatureLevel);
  }
  bVar19 = URuntimeVirtualTextureComponent::IsStreamingLowMips(param_1,EVar21);
  if (bVar19) {
    bVar19 = URuntimeVirtualTextureComponent::IsStreamingTextureInvalid(param_1,EVar21);
    if (bVar19) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_300,(UObject *)0x0);
      lpCriticalSection = FRendererOnScreenNotification::Get();
      _Src.Data = local_300.Data.AllocatorInstance.Data;
      local_340.Data = (FScriptContainerElement *)0x0;
      if (local_300.Data.ArrayNum == 0) {
        local_334 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_300.Data.ArrayNum,0,&local_340,local_300.Data.ArrayNum,&local_334);
        memcpy(local_340.Data,_Src.Data,(longlong)local_300.Data.ArrayNum * 2);
      }
      if (lpCriticalSection == (FRendererOnScreenNotification *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
      ::
      AddLambda<_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy_::__l14::<lambda_1>_>
                (&lpCriticalSection->ProxyDelegate,(<lambda_1> *)local_308);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (this->OnScreenWarningDelegateHandle).ID = (ulong64)local_308;
      if (local_340.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data);
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar25 = UVirtualTextureBuilder::GetVirtualTexture
                          ((param_1->StreamingTexture).field0_0x0.DebugPtr,EVar21);
      if (pUVar25 != (UVirtualTexture2D *)0x0) {
        FVTProducerDescription::FVTProducerDescription(&local_148);
        pIVar24 = RuntimeVirtualTexture::CreateStreamingTextureProducer
                            (pUVar25,&local_298,&local_148);
        uVar33 = 0;
        if (local_298.NumTextureLayers != 0) {
          do {
            uVar34 = (int)uVar33 + 1;
            uVar16 = *(undefined8 *)((longlong)&local_148.LayerFallbackColor[uVar33].field0_0x0 + 8)
            ;
            *(undefined8 *)&local_298.LayerFallbackColor[uVar33].field0_0x0 =
                 *(undefined8 *)&local_148.LayerFallbackColor[uVar33].field0_0x0;
            *(undefined8 *)((longlong)&local_298.LayerFallbackColor[uVar33].field0_0x0 + 8) = uVar16
            ;
            uVar33 = (ulonglong)uVar34;
          } while (uVar34 < local_298.NumTextureLayers);
        }
        bVar19 = URuntimeVirtualTextureComponent::IsStreamingLowMipsOnly(param_1);
        if (bVar19) {
          local_298.BlockWidthInTiles = local_148.BlockWidthInTiles;
          local_298.BlockHeightInTiles = local_148.BlockHeightInTiles;
          local_298.MaxLevel = local_148.MaxLevel;
        }
        pIVar26 = ::operator_new(0x1c0);
        if (pIVar26 == (IVirtualTexture *)0x0) {
          pIVar26 = (IVirtualTexture *)0x0;
        }
        else {
          EVar7 = this->MaterialType;
          iVar20 = this->RuntimeVirtualTextureId;
          *pIVar26 = (IVirtualTexture)&___7FRuntimeVirtualTextureProducer__6B_;
          FRuntimeVirtualTextureFinalizer::FRuntimeVirtualTextureFinalizer
                    ((FRuntimeVirtualTextureFinalizer *)(pIVar26 + 2),&local_298,iVar20,EVar7,bVar18
                     ,pFVar23,pTVar1,pTVar2,&local_2e8);
        }
        uVar34 = local_298.BlockHeightInTiles;
        if (local_298.BlockHeightInTiles < local_298.BlockWidthInTiles) {
          uVar34 = local_298.BlockWidthInTiles;
        }
        uVar22 = 1;
        if (uVar34 != 0) {
          uVar22 = uVar34;
        }
        uVar33 = (ulonglong)(uVar22 - 1) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar20 = (int)lVar9;
        if (local_148.BlockHeightInTiles < local_148.BlockWidthInTiles) {
          local_148.BlockHeightInTiles = local_148.BlockWidthInTiles;
        }
        uVar34 = 1;
        if (local_148.BlockHeightInTiles != 0) {
          uVar34 = local_148.BlockHeightInTiles;
        }
        uVar33 = (ulonglong)(uVar34 - 1) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar35 = (int)lVar9;
        local_310 = iVar20;
        local_30c = iVar35;
        if ((iVar20 < iVar35) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2172026199230906257>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\RuntimeVirtualTextureSceneProxy.cpp"
                                ,0x6f,"NumLevels >= NumStreamingLevels"), bVar18)) {
          pcVar10 = (code *)swi(3);
          pFVar31 = (FRuntimeVirtualTextureSceneProxy *)(*pcVar10)();
          return pFVar31;
        }
        pIVar24 = RuntimeVirtualTexture::BindStreamingTextureProducer
                            (pIVar26,pIVar24,iVar20 - iVar35);
        uVar34 = (iVar20 - iVar35) - 1;
        goto LAB_1458cc74f;
      }
    }
  }
  pIVar24 = ::operator_new(0x1c0);
  if (pIVar24 == (IVirtualTexture *)0x0) {
    pIVar24 = (IVirtualTexture *)0x0;
  }
  else {
    EVar7 = this->MaterialType;
    iVar20 = this->RuntimeVirtualTextureId;
    *pIVar24 = (IVirtualTexture)&___7FRuntimeVirtualTextureProducer__6B_;
    FRuntimeVirtualTextureFinalizer::FRuntimeVirtualTextureFinalizer
              ((FRuntimeVirtualTextureFinalizer *)(pIVar24 + 2),&local_298,iVar20,EVar7,bVar18,
               pFVar23,pTVar1,pTVar2,&local_2e8);
  }
  uVar34 = (uint)local_298.MaxLevel;
LAB_1458cc74f:
  this->MaxDirtyLevel = uVar34;
  pUVar8 = this->VirtualTexture;
  local_330 = local_298.TileSize * local_298.BlockWidthInTiles;
  iStack_32c = local_298.TileSize * local_298.BlockHeightInTiles;
  local_328 = (undefined1  [8])0x0;
  local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_320.DelegateSize = 0;
  TVar17._s_0.Y = iStack_32c;
  TVar17._s_0.X = local_330;
  (this->VirtualTextureSize).field0_0x0 = TVar17;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
             (FWriteAccessScope *)&local_2d8);
  local_2c0 = &local_320;
  puVar27 = UE::Core::Private::DelegateAllocate(0x28,&local_320);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFRuntimeVirtualTextureSceneProxy____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[4] = MarkUnused;
    puVar27[3] = this;
  }
  if (local_2d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
  }
  URuntimeVirtualTexture::Initialize
            (pUVar8,pIVar24,&local_298,pTVar1,pTVar2,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_328);
  this->bAdaptive = this->VirtualTexture->bAdaptive;
  pTVar29 = URuntimeVirtualTexture::GetUniformParameter(this->VirtualTexture,&local_2b8,0);
  dVar3 = (pTVar29->field0_0x0)._s_0.Y;
  this->ShaderUniforms[0].field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  this->ShaderUniforms[0].field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar29->field0_0x0)._s_0.W;
  this->ShaderUniforms[0].field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  this->ShaderUniforms[0].field0_0x0._s_0.W = dVar3;
  pTVar29 = URuntimeVirtualTexture::GetUniformParameter(this->VirtualTexture,&local_2b8,1);
  dVar3 = (pTVar29->field0_0x0)._s_0.Y;
  this->ShaderUniforms[1].field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  this->ShaderUniforms[1].field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar29->field0_0x0)._s_0.W;
  this->ShaderUniforms[1].field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  this->ShaderUniforms[1].field0_0x0._s_0.W = dVar3;
  pTVar29 = URuntimeVirtualTexture::GetUniformParameter(this->VirtualTexture,&local_2b8,2);
  dVar3 = (pTVar29->field0_0x0)._s_0.Y;
  this->ShaderUniforms[2].field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  this->ShaderUniforms[2].field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar29->field0_0x0)._s_0.W;
  this->ShaderUniforms[2].field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  this->ShaderUniforms[2].field0_0x0._s_0.W = dVar3;
  pTVar29 = URuntimeVirtualTexture::GetUniformParameter(this->VirtualTexture,&local_2b8,3);
  local_1a0 = (undefined ***)0x0;
  dVar3 = (pTVar29->field0_0x0)._s_0.Y;
  this->ShaderUniforms[3].field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  this->ShaderUniforms[3].field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar29->field0_0x0)._s_0.W;
  local_1b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::`8'::<lambda_2>,1,0>
               ::_vftable_;
  this->ShaderUniforms[3].field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  this->ShaderUniforms[3].field0_0x0._s_0.W = dVar3;
  local_1a8 = this->VirtualTexture;
  local_1c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_1b0 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy_::__l8::TSTR_GetProducerHandle135>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1c8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_188._0_8_ = local_1c8[0];
    local_160 = local_1a0;
    local_178 = local_1b8;
    pFStack_170 = pFStack_1b0;
    local_168 = local_1a8;
    local_1c8[0] = (code *)0x0;
    local_158 = 2;
    pFVar30 = (FRenderCommandTag *)
              TRenderCommandTag<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::TSTR_GetProducerHandle135>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_188,pFVar30);
    uVar33 = (ulonglong)local_158;
    if ((2 < uVar33) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      pFVar31 = (FRuntimeVirtualTextureSceneProxy *)(*pcVar10)();
      return pFVar31;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar33] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_188._0_8_ != (code *)0x0) {
        pppuVar32 = (undefined ***)(local_188 + 0x10);
        if (local_160 != (undefined ***)0x0) {
          pppuVar32 = local_160;
        }
        (*(code *)(*pppuVar32)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar33])(local_188);
    }
  }
  if (local_1c8[0] != (code *)0x0) {
    pppuVar32 = &local_1b8;
    if (local_1a0 != (undefined ***)0x0) {
      pppuVar32 = local_1a0;
    }
    (*(code *)(*pppuVar32)[2])();
  }
  return this;
}

// ~FRuntimeVirtualTextureSceneProxy @ 1458cf670

void __thiscall
FRuntimeVirtualTextureSceneProxy::~FRuntimeVirtualTextureSceneProxy
          (FRuntimeVirtualTextureSceneProxy *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  FRendererOnScreenNotification *lpCriticalSection;
  
  lpCriticalSection = FRendererOnScreenNotification::Get();
  FVar1.ID = (this->OnScreenWarningDelegateHandle).ID;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::Remove(&lpCriticalSection->ProxyDelegate,FVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->DirtyRects).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1458d3d30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l14::<lambda_1>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  EOnScreenMessageSeverity local_res8 [8];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = FText::FromString(&local_28,this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"VirtualTexture",L"SVTInvalid",
                      L"Runtime Virtual Texture \'{0}\' streaming mips needs to be rebuilt.");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_48,pFVar3,pFVar1);
  local_res8[0] = Warning;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// Dirty @ 1458e9f10

void __thiscall
FRuntimeVirtualTextureSceneProxy::Dirty
          (FRuntimeVirtualTextureSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          EVTInvalidatePriority param_2)

{
  int *piVar1;
  TArray<FRuntimeVirtualTextureSceneProxy::FDirtyRect,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  undefined8 local_48;
  undefined8 local_40;
  FScriptContainerElement local_38;
  TVector2<double>_u_0 local_30;
  double local_20;
  double local_18;
  
  if ((this->ProducerHandle).PackedValue != 0) {
    GetUVRectFromWorldBounds((TBox2<double> *)&local_30._s_0,&this->Transform,param_1);
    iVar8 = (this->VirtualTextureSize).field0_0x0._s_0.X;
    iVar14 = (this->VirtualTextureSize).field0_0x0._s_0.Y;
    local_20 = (double)iVar8 * local_20;
    dVar15 = (double)iVar8 * local_30._s_0.X;
    local_18 = (double)iVar14 * local_18;
    dVar16 = (double)iVar14 * local_30._s_0.Y;
    iVar11 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (local_20 + local_20)) >> 1);
    iVar7 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (local_18 + local_18)) >> 1);
    iVar13 = (int)((longlong)ROUND((dVar15 + dVar15) - __real_3fe0000000000000) >> 1);
    iVar9 = 0;
    if (0 < iVar13) {
      iVar9 = iVar13;
    }
    iVar12 = (int)((longlong)ROUND((dVar16 + dVar16) - __real_3fe0000000000000) >> 1);
    iVar13 = 0;
    if (0 < iVar12) {
      iVar13 = iVar12;
    }
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
    if (iVar7 < iVar14) {
      iVar14 = iVar7;
    }
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    if (iVar14 < iVar13) {
      iVar14 = iVar13;
    }
    if ((iVar9 != iVar8) || (iVar13 != iVar14)) {
      local_48 = CONCAT44(iVar13,iVar9);
      local_40 = CONCAT44(iVar14,iVar8);
      pTVar2 = &this->DirtyRects;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_38 = (FScriptContainerElement)param_2;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         (((FScriptContainerElement *)&local_48 <
           pFVar4 + (longlong)(this->DirtyRects).ArrayMax * 0x14 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->DirtyRects).ArrayNum;
      piVar1 = &(this->DirtyRects).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      (this->DirtyRects).ArrayNum = iVar8 + 1;
      lVar10 = (longlong)iVar8;
      *(undefined8 *)(pFVar4 + lVar10 * 0x14) = local_48;
      *(undefined8 *)(pFVar4 + lVar10 * 0x14 + 8) = local_40;
      pFVar4[lVar10 * 0x14 + 0x10] = local_38;
      if (iVar8 == 0) {
        *(undefined8 *)&(this->CombinedDirtyRect).Rect.field0_0x0 = local_48;
        *(undefined8 *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 8) = local_40;
        (this->CombinedDirtyRect).InvalidatePriority = (EVTInvalidatePriority)local_38;
      }
      else {
        iVar8 = *(int *)&(this->CombinedDirtyRect).Rect.field0_0x0;
        FVar3 = (FScriptContainerElement)(this->CombinedDirtyRect).InvalidatePriority;
        iVar14 = (int)local_48;
        if (iVar8 < (int)local_48) {
          iVar14 = iVar8;
        }
        iVar8 = *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 4);
        *(int *)&(this->CombinedDirtyRect).Rect.field0_0x0 = iVar14;
        if (iVar8 < local_48._4_4_) {
          local_48._4_4_ = iVar8;
        }
        iVar8 = *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 8);
        *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 4) = local_48._4_4_;
        iVar14 = (int)local_40;
        if ((int)local_40 < iVar8) {
          iVar14 = iVar8;
        }
        iVar8 = *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 0xc);
        *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 8) = iVar14;
        if (local_40._4_4_ < iVar8) {
          local_40._4_4_ = iVar8;
        }
        *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 0xc) = local_40._4_4_;
        if ((byte)local_38 < (byte)FVar3) {
          local_38 = FVar3;
        }
        (this->CombinedDirtyRect).InvalidatePriority = (EVTInvalidatePriority)local_38;
      }
    }
  }
  return;
}

// FlushDirtyPages @ 1458f7a10

void __thiscall
FRuntimeVirtualTextureSceneProxy::FlushDirtyPages(FRuntimeVirtualTextureSceneProxy *this)

{
  FDirtyRect *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FVirtualTextureSystem *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (((this->MaxDirtyLevel < 0) ||
      (pFVar1 = &this->CombinedDirtyRect,
      *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 8) ==
      *(int *)&(pFVar1->Rect).field0_0x0)) ||
     (*(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 0xc) ==
      *(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 4))) goto LAB_1458f7b8d;
  uVar7 = VirtualTextureScalability::GetKeepDirtyPageMappedFrameThreshold();
  iVar3 = (this->DirtyRects).ArrayNum;
  if (iVar3 < 3) {
    if (((*(int *)&(pFVar1->Rect).field0_0x0 == 0) &&
        (*(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 4) == 0)) &&
       ((*(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 8) ==
         (this->VirtualTextureSize).field0_0x0._s_0.X &&
        (*(int *)((longlong)&(this->CombinedDirtyRect).Rect.field0_0x0 + 0xc) ==
         (this->VirtualTextureSize).field0_0x0._s_0.Y)))) goto LAB_1458f7a8b;
  }
  else {
LAB_1458f7a8b:
    if ((this->CombinedDirtyRect).InvalidatePriority == Normal) {
      this_00 = FVirtualTextureSystem::Get();
      FVirtualTextureSystem::FlushCache
                (this_00,&this->ProducerHandle,this->SpaceID,&pFVar1->Rect,this->MaxDirtyLevel,uVar7
                 ,Normal);
      goto LAB_1458f7b8d;
    }
  }
  pFVar8 = (this->DirtyRects).AllocatorInstance.Data;
  iVar4 = (this->DirtyRects).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 0x14;
  while( true ) {
    if ((this->DirtyRects).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRuntimeVirtualTextureSceneProxy::FDirtyRect,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    if ((GVirtualTextureSystem == (FVirtualTextureSystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GVirtualTextureSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                           ,0x16d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVirtualTextureSystem::FlushCache
              (GVirtualTextureSystem,&this->ProducerHandle,this->SpaceID,(TIntRect<int> *)pFVar8,
               this->MaxDirtyLevel,uVar7,pFVar8[0x10].field_0x0);
    pFVar8 = pFVar8 + 0x14;
  }
LAB_1458f7b8d:
  (this->DirtyRects).ArrayNum = 0;
  if ((this->DirtyRects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->DirtyRects).AllocatorInstance,0,&(this->DirtyRects).ArrayMax);
  }
  (this->CombinedDirtyRect).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CombinedDirtyRect).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CombinedDirtyRect).InvalidatePriority = Normal;
  return;
}

// GetUniformParameter @ 145908de0

TVector4<double> * __thiscall
FRuntimeVirtualTextureSceneProxy::GetUniformParameter
          (FRuntimeVirtualTextureSceneProxy *this,TVector4<double> *__return_storage_ptr__,
          ERuntimeVirtualTextureShaderUniform param_1)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TVector4<double> *pTVar7;
  
  if ((int)param_1 < 4) {
    dVar3 = this->ShaderUniforms[(int)param_1].field0_0x0._s_0.Y;
    pdVar1 = &this->ShaderUniforms[(int)param_1].field0_0x0._s_0.Z;
    dVar4 = *pdVar1;
    dVar5 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         this->ShaderUniforms[(int)param_1].field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar5;
    return __return_storage_ptr__;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\RuntimeVirtualTextureSceneProxy.cpp"
                     ,0x119,L"");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector4<double> *)(*pcVar2)();
    return pTVar7;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  return __return_storage_ptr__;
}

// MarkUnused @ 145912500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRuntimeVirtualTextureSceneProxy::MarkUnused(FRuntimeVirtualTextureSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FRuntimeVirtualTextureSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FRuntimeVirtualTextureSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRuntimeVirtualTextureSceneProxy::MarkUnused_::__l2::TSTR_GetProducerHandle170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::TSTR_GetProducerHandle170>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// Release @ 1459157a0

void __thiscall FRuntimeVirtualTextureSceneProxy::Release(FRuntimeVirtualTextureSceneProxy *this)

{
  if (this->VirtualTexture != (URuntimeVirtualTexture *)0x0) {
    URuntimeVirtualTexture::Release(this->VirtualTexture);
    this->VirtualTexture = (URuntimeVirtualTexture *)0x0;
  }
  return;
}

// RequestPreload @ 14591b4c0

void __thiscall
FRuntimeVirtualTextureSceneProxy::RequestPreload
          (FRuntimeVirtualTextureSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48;
  TBox2<double> local_38;
  
  if ((this->ProducerHandle).PackedValue != 0) {
    GetUVRectFromWorldBounds(&local_38,&this->Transform,param_1);
    if (GVirtualTextureSystem == (FVirtualTextureSystem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GVirtualTextureSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x16d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_68 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
    local_58 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_48 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
    FVirtualTextureSystem::RequestTiles
              (GVirtualTextureSystem,this->AllocatedVirtualTexture,
               (TVector2<double> *)&local_48._s_0,(TVector2<double> *)&local_58._s_0,
               (TVector2<double> *)&local_68._s_0,&local_38.Min,&local_38.Max,param_2);
  }
  return;
}

