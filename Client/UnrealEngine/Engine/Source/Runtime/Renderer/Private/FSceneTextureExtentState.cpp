// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Compute @ 1454e4b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntPoint<int> __thiscall
FSceneTextureExtentState::Compute(FSceneTextureExtentState *this,FSceneViewFamily *param_1)

{
  FSceneView *pFVar1;
  code *pcVar2;
  byte bVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TIntPoint<int> TVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  longlong in_R8;
  byte bVar15;
  byte bVar16;
  undefined4 local_res8;
  int iStackX_c;
  TIntPoint<int>_u_0 local_res10;
  TIntPoint<int> local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58 [24];
  
  bVar16 = 0;
  bVar15 = 0;
  bVar8 = false;
  bVar13 = 0;
  pFVar14 = *(FScriptContainerElement **)(in_R8 + 0x18);
  iVar12 = *(int *)(in_R8 + 0x20);
  local_58._8_8_ = pFVar14 + (longlong)iVar12 * 8;
  while( true ) {
    uVar6 = local_58._8_8_;
    if (*(int *)(in_R8 + 0x20) != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == (FScriptContainerElement *)uVar6) break;
    pFVar1 = *(FSceneView **)pFVar14;
    bVar16 = bVar16 | pFVar1->bIsSceneCapture;
    bVar15 = bVar15 | pFVar1->bIsReflectionCapture;
    bVar7 = IStereoRendering::IsStereoEyeView(pFVar1);
    if ((bVar7) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    bVar13 = bVar13 | pFVar1->bExcludeFromSceneTextureExtents;
    bVar8 = (bool)(bVar8 | bVar3);
    pFVar14 = pFVar14 + 8;
  }
  param_1->_padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  FSceneRenderer::GetDesiredInternalBufferSize((FSceneViewFamily *)local_58);
  pTVar5 = CVarSceneTargetsResizeMethodForceOverride.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar2 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  pTVar4 = CVarSceneTargetsResizeMethod.Ref;
  iVar12 = 0;
  if ((pTVar5->ShadowedValue[1] == 1) || (!bVar8)) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar10.field0_0x0;
    }
    local_res10._s_0.Y = local_58._4_4_;
    local_res10._s_0.X = local_58._0_4_;
    iVar11 = 2;
    if (pTVar4->ShadowedValue[1] < 2) {
      iVar11 = pTVar4->ShadowedValue[1];
    }
    iVar12 = 0;
    if (0 < iVar11) {
      iVar12 = iVar11;
    }
LAB_1454e4da1:
    if (iVar12 == 0) goto LAB_1454e4e22;
    if (iVar12 == 1) {
      iStackX_c = GSystemResolution.ResY;
      local_res8 = GSystemResolution.ResX;
      local_res10 = _local_res8;
      goto LAB_1454e4e22;
    }
    if (iVar12 == 2) goto LAB_1454e4dd7;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                       ,0x105,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar10.field0_0x0;
    }
  }
  else {
    local_res10._s_0.X = local_58._0_4_;
    if ((bVar16 == 0) && (bVar15 == 0)) {
      local_res10._s_0.Y = local_58._4_4_;
      if (((local_58._0_4_ != (this->LastStereoExtent).field0_0x0._s_0.X) ||
          (local_58._4_4_ != (this->LastStereoExtent).field0_0x0._s_0.Y)) &&
         ((this->LastStereoExtent).field0_0x0 = local_res10, 2 < (byte)LogRenderer._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_struct_UE::Math::TIntPoint<int>___cdecl_FSceneTextureExtentState::Compute(FSceneViewFamily_const&___ptr64)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        local_res10._s_0.Y = local_58._4_4_;
        local_res10._s_0.X = local_58._0_4_;
      }
    }
    else {
      local_res10._s_0.Y = local_58._4_4_;
      iVar11 = (this->LastStereoExtent).field0_0x0._s_0.X;
      if ((iVar11 < (int)local_58._0_4_) ||
         ((this->LastStereoExtent).field0_0x0._s_0.Y < (int)local_58._4_4_)) {
        if ((((0 < iVar11) && (bVar16 != 0)) &&
            (`public:_struct_UE::Math::TIntPoint<int>___cdecl_FSceneTextureExtentState::Compute(FSceneViewFamily_const&___ptr64)___ptr64'
             ::__l48::DisplayedCaptureSizeWarning == false)) &&
           (`public:_struct_UE::Math::TIntPoint<int>___cdecl_FSceneTextureExtentState::Compute(FSceneViewFamily_const&___ptr64)___ptr64'
            ::__l48::DisplayedCaptureSizeWarning = true, 2 < (byte)LogRenderer._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_struct_UE::Math::TIntPoint<int>___cdecl_FSceneTextureExtentState::Compute(FSceneViewFamily_const&___ptr64)___ptr64'
                      ::__l52::LOG_Static,(FLogCategoryBase *)&LogRenderer);
          local_res10._s_0.Y = local_58._4_4_;
          local_res10._s_0.X = local_58._0_4_;
        }
        goto LAB_1454e4da1;
      }
LAB_1454e4dd7:
      local_res10._s_0.X = local_res10._s_0.X;
      if (local_res10._s_0.X < (this->LastExtent).field0_0x0._s_0.X) {
        local_res10._s_0.X = (this->LastExtent).field0_0x0._s_0.X;
      }
      if ((int)local_58._4_4_ < (this->LastExtent).field0_0x0._s_0.Y) {
        local_58._4_4_ = (this->LastExtent).field0_0x0._s_0.Y;
      }
      local_res10._s_0.Y = local_58._4_4_;
    }
LAB_1454e4e22:
    param_1->_padding_ = (longlong)local_res10;
  }
  uVar9 = *(uint *)(in_R8 + 0xa0);
  if (this->ThisFrameNumber != uVar9) {
    this->DesiredExtentIndex = this->DesiredExtentIndex + 1;
    this->ThisFrameNumber = uVar9;
    uVar9 = this->DesiredExtentIndex;
    if (this->DesiredExtentIndex == 3) {
      this->DesiredExtentIndex = 0;
      uVar9 = 0;
    }
    this->LargestDesiredExtents[uVar9].field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this->HistoryFlags[this->DesiredExtentIndex] = None;
  }
  uVar9 = this->DesiredExtentIndex;
  if (bVar13 == 0) {
    local_res18.field0_0x0._s_0.Y = *(int *)((longlong)&param_1->_padding_ + 4);
    local_res18.field0_0x0._s_0.X = (int)param_1->_padding_;
    if (local_res18.field0_0x0._s_0.X < this->LargestDesiredExtents[uVar9].field0_0x0._s_0.X) {
      local_res18.field0_0x0._s_0.X = this->LargestDesiredExtents[uVar9].field0_0x0._s_0.X;
    }
    if (local_res18.field0_0x0._s_0.Y < this->LargestDesiredExtents[uVar9].field0_0x0._s_0.Y) {
      local_res18.field0_0x0._s_0.Y = this->LargestDesiredExtents[uVar9].field0_0x0._s_0.Y;
    }
    bVar7 = GIsHighResScreenshot != false;
    this->LargestDesiredExtents[uVar9].field0_0x0 = local_res18.field0_0x0;
    this->HistoryFlags[this->DesiredExtentIndex] =
         this->HistoryFlags[this->DesiredExtentIndex] |
         -(uint)bVar7 & HighresScreenshot | -(uint)(bVar15 != 0) & ReflectionCapture |
         (uint)(bVar16 != 0);
  }
  if ((GIsHighResScreenshot == false) && (!bVar8)) {
    bVar8 = true;
    if (((bVar15 != 0) ||
        ((bVar13 != 0 ||
         (((this->HistoryFlags[0] | this->HistoryFlags[1] | this->HistoryFlags[2]) & MaskAll) !=
          None)))) ||
       ((iVar12 = (this->LastExtent).field0_0x0._s_0.Y, iVar12 != 0 &&
        ((float)((uint)((float)(this->LastExtent).field0_0x0._s_0.X / (float)iVar12 -
                       (float)(int)param_1->_padding_ /
                       (float)*(int *)((longlong)&param_1->_padding_ + 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) goto LAB_1454e4f85;
    this->LargestDesiredExtents[0].field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this->HistoryFlags[0] = None;
    this->LargestDesiredExtents[1].field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this->HistoryFlags[1] = None;
    this->LargestDesiredExtents[2].field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this->HistoryFlags[2] = None;
  }
  bVar8 = false;
LAB_1454e4f85:
  if (((bool)((byte)((this->HistoryFlags[2] | this->HistoryFlags[1] | this->HistoryFlags[0]) >> 2) &
             1) == GIsHighResScreenshot) && (bVar8)) {
    local_res18.field0_0x0._s_0.X = this->LargestDesiredExtents[0].field0_0x0._s_0.X;
    local_res18.field0_0x0._s_0.Y = this->LargestDesiredExtents[0].field0_0x0._s_0.Y;
    if (local_res18.field0_0x0._s_0.X < (int)param_1->_padding_) {
      local_res18.field0_0x0._s_0.X = (int)param_1->_padding_;
    }
    if (local_res18.field0_0x0._s_0.Y < *(int *)((longlong)&param_1->_padding_ + 4)) {
      local_res18.field0_0x0._s_0.Y = *(int *)((longlong)&param_1->_padding_ + 4);
    }
    param_1->_padding_ = (longlong)local_res18.field0_0x0;
    iVar12 = this->LargestDesiredExtents[1].field0_0x0._s_0.X;
    iVar11 = this->LargestDesiredExtents[1].field0_0x0._s_0.Y;
    if (iVar12 < local_res18.field0_0x0._s_0.X) {
      iVar12 = local_res18.field0_0x0._s_0.X;
    }
    if (iVar11 < local_res18.field0_0x0._s_0.Y) {
      iVar11 = local_res18.field0_0x0._s_0.Y;
    }
    local_res18.field0_0x0._s_0.Y = iVar11;
    local_res18.field0_0x0._s_0.X = iVar12;
    param_1->_padding_ = (longlong)local_res18.field0_0x0;
    local_res18.field0_0x0._s_0.X = this->LargestDesiredExtents[2].field0_0x0._s_0.X;
    local_res18.field0_0x0._s_0.Y = this->LargestDesiredExtents[2].field0_0x0._s_0.Y;
    if (local_res18.field0_0x0._s_0.X < iVar12) {
      local_res18.field0_0x0._s_0.X = iVar12;
    }
    if (local_res18.field0_0x0._s_0.Y < iVar11) {
      local_res18.field0_0x0._s_0.Y = iVar11;
    }
    param_1->_padding_ = (longlong)local_res18.field0_0x0;
  }
  if ((((int)param_1->_padding_ < 1) || (*(int *)((longlong)&param_1->_padding_ + 4) < 1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DesiredExtent.X > 0 && DesiredExtent.Y > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                         ,0x14c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  QuantizeSceneBufferSize((TIntPoint<int> *)param_1,(TIntPoint<int> *)param_1,0);
  if (bVar13 == 0) {
    (this->LastExtent).field0_0x0 = (TIntPoint<int>_u_0)param_1->_padding_;
  }
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// Get @ 1454f1a00

FSceneTextureExtentState * __cdecl FSceneTextureExtentState::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.DesiredExtentIndex = 0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.LastStereoExtent.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0_s_0)0x0
      ;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.LastExtent.field0_0x0 = (TIntPoint<int>_u_0)(TIntPoint<int>_u_0_s_0)0x0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.HistoryFlags[2] = None;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.ThisFrameNumber = 0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.LargestDesiredExtents[0].field0_0x0 =
           (TIntPoint<int>_u_0)(TIntPoint<int>_u_0_s_0)0x0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.LargestDesiredExtents[1].field0_0x0 =
           (TIntPoint<int>_u_0)(TIntPoint<int>_u_0_s_0)0x0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.LargestDesiredExtents[2].field0_0x0 =
           (TIntPoint<int>_u_0)(TIntPoint<int>_u_0_s_0)0x0;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.HistoryFlags[0] = None;
      `public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
      ::__l2::Instance.HistoryFlags[1] = None;
      _Init_thread_footer(&`public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FSceneTextureExtentState&___ptr64___cdecl_FSceneTextureExtentState::Get(void)'
          ::__l2::Instance;
}

