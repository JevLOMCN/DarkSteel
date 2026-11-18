// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// FSlateSceneViewAllocator @ 145fe7660

FSlateSceneViewAllocator * __thiscall
FSlateSceneViewAllocator::FSlateSceneViewAllocator
          (FSlateSceneViewAllocator *this,FSlateRHIResourceManager *param_1,
          FSlateSceneViewAllocateInputs *param_2)

{
  TArray<FSlateSceneView,TRDGArrayAllocator<0>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  Type TVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FSlateSceneViewAllocator *pFVar14;
  uint uVar15;
  FSlateSceneView *_Dst;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  iVar13 = (param_1->ActiveScenes).ArrayNum;
  pTVar1 = &this->SceneViews;
  this->SceneViewWithNullSceneIndex = iVar13;
  piVar2 = &(this->SceneViews).ArrayNum;
  uVar17 = 0;
  piVar3 = &(this->SceneViews).ArrayMax;
  this->NumScenes = iVar13 + 1;
  (this->AllocateInputs).TextureExtent.field0_0x0 = (param_2->TextureExtent).field0_0x0;
  (this->AllocateInputs).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->AllocateInputs).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  uVar7 = *(undefined8 *)((param_2->ViewProjectionMatrix).M[0] + 2);
  *(undefined8 *)(this->AllocateInputs).ViewProjectionMatrix.M[0] =
       *(undefined8 *)(param_2->ViewProjectionMatrix).M[0];
  *(undefined8 *)((this->AllocateInputs).ViewProjectionMatrix.M[0] + 2) = uVar7;
  uVar7 = *(undefined8 *)((param_2->ViewProjectionMatrix).M[1] + 2);
  *(undefined8 *)(this->AllocateInputs).ViewProjectionMatrix.M[1] =
       *(undefined8 *)(param_2->ViewProjectionMatrix).M[1];
  *(undefined8 *)((this->AllocateInputs).ViewProjectionMatrix.M[1] + 2) = uVar7;
  uVar7 = *(undefined8 *)((param_2->ViewProjectionMatrix).M[2] + 2);
  *(undefined8 *)(this->AllocateInputs).ViewProjectionMatrix.M[2] =
       *(undefined8 *)(param_2->ViewProjectionMatrix).M[2];
  *(undefined8 *)((this->AllocateInputs).ViewProjectionMatrix.M[2] + 2) = uVar7;
  uVar7 = *(undefined8 *)((param_2->ViewProjectionMatrix).M[3] + 2);
  *(undefined8 *)(this->AllocateInputs).ViewProjectionMatrix.M[3] =
       *(undefined8 *)(param_2->ViewProjectionMatrix).M[3];
  *(undefined8 *)((this->AllocateInputs).ViewProjectionMatrix.M[3] + 2) = uVar7;
  (this->AllocateInputs).CursorPosition.field0_0x0 = (param_2->CursorPosition).field0_0x0;
  dVar8 = (param_2->Time).WorldTimeSeconds;
  (this->AllocateInputs).Time.RealTimeSeconds = (param_2->Time).RealTimeSeconds;
  (this->AllocateInputs).Time.WorldTimeSeconds = dVar8;
  fVar9 = (param_2->Time).DeltaWorldTimeSeconds;
  (this->AllocateInputs).Time.DeltaRealTimeSeconds = (param_2->Time).DeltaRealTimeSeconds;
  (this->AllocateInputs).Time.DeltaWorldTimeSeconds = fVar9;
  (this->AllocateInputs).ViewportScaleUI = param_2->ViewportScaleUI;
  (pTVar1->AllocatorInstance).Data = (FSlateSceneView *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  (this->UniformBuffers).Elements[0] = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  (this->UniformBuffers).Elements[1] = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  (this->UniformBuffers).Elements[2] = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  (this->UniformBuffers).Elements[3] = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  (this->UniformBuffers).Elements[4] = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  uVar15 = this->NumScenes;
  iVar13 = *piVar2;
  if (iVar13 < (int)uVar15) {
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_>
                       (0x10,8,uVar15 - iVar13,&pTVar1->AllocatorInstance,piVar2,piVar3);
    DefaultConstructItems<FSlateSceneView,int>
              ((pTVar1->AllocatorInstance).Data + iVar12,uVar15 - iVar13);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar13) {
      uVar16 = iVar13 - uVar15;
      if (((int)(uVar16 | uVar15) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSlateSceneViewAllocator *)(*pcVar6)();
        return pFVar14;
      }
      if (uVar16 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (int)uVar15;
        iVar13 = (*piVar2 - uVar15) - uVar16;
        if (iVar13 != 0) {
          memmove(_Dst,_Dst + (int)uVar16,(longlong)iVar13 << 4);
        }
        *piVar2 = *piVar2 - uVar16;
        UE::Core::Private::ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_>
                  (0x10,8,&pTVar1->AllocatorInstance,*piVar2,piVar3);
      }
    }
  }
  TVar10 = GMaxRHIFeatureLevel;
  uVar16 = *piVar2 - 1;
  uVar15 = 0;
  if ((int)uVar16 < *piVar2) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FSlateSceneViewAllocator *)(*pcVar6)();
    return pFVar14;
  }
  (pTVar1->AllocatorInstance).Data[(longlong)*piVar2 + -1].FeatureLevel = TVar10;
  uVar18 = uVar17;
  uVar20 = uVar17;
  if (0 < this->SceneViewWithNullSceneIndex) {
    do {
      uVar16 = (uint)uVar17;
      uVar19 = ~uVar16 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar16 < (param_1->ActiveScenes).ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSlateSceneViewAllocator *)(*pcVar6)();
        return pFVar14;
      }
      lVar5 = *(longlong *)((param_1->ActiveScenes).AllocatorInstance.Data + uVar20);
      uVar15 = 0;
      if ((int)uVar16 < *piVar2) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSlateSceneViewAllocator *)(*pcVar6)();
        return pFVar14;
      }
      *(longlong *)((longlong)&((pTVar1->AllocatorInstance).Data)->Scene + uVar18) = lVar5;
      uVar4 = *(undefined4 *)(lVar5 + 8);
      uVar15 = 0;
      if ((int)uVar16 < *piVar2) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSlateSceneViewAllocator *)(*pcVar6)();
        return pFVar14;
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      *(undefined4 *)((longlong)&((pTVar1->AllocatorInstance).Data)->FeatureLevel + uVar18) = uVar4;
      uVar18 = uVar18 + 0x10;
      uVar20 = uVar20 + 8;
    } while ((int)(uVar16 + 1) < this->SceneViewWithNullSceneIndex);
  }
  return this;
}

// CreateUniformBuffer @ 145ffd2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniformBufferRef<FViewUniformShaderParameters> __cdecl
FSlateSceneViewAllocator::CreateUniformBuffer(Type param_1,FSlateSceneViewAllocateInputs *param_2)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FViewUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_0000000c;
  TIntPoint<int>_u_0_s_0 *in_R8;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_23b8 [32];
  TIntRect<int>_u_0 local_2378;
  FFeedbackShaderParams local_2368;
  FRHIResource *local_2348 [2];
  undefined1 local_2338 [48];
  TIntPoint<int>_u_0_s_0 local_2308;
  longlong local_22f8;
  longlong lStack_22f0;
  longlong local_22e8;
  double dStack_22e0;
  TVector4<float>_u_0 local_22d8;
  TVector4<float>_u_0 local_22c8;
  TVector4<float>_u_0 local_22b8;
  TVector4<float>_u_0 local_22a8;
  TVector2<float>_u_0 local_2298;
  TVector2<float>_u_0 TStack_2290;
  EDebugViewShaderMode local_2288;
  ulong64 local_2280;
  undefined8 local_2278;
  undefined8 local_2270;
  undefined1 local_2268 [16];
  undefined1 local_2258 [16];
  undefined1 local_2248 [16];
  double local_2238;
  double dStack_2230;
  double local_2228;
  double dStack_2220;
  double local_2218;
  double dStack_2210;
  undefined1 local_2208 [16];
  double local_21f8;
  double dStack_21f0;
  undefined1 local_21e8 [144];
  undefined1 local_2158 [16];
  undefined1 local_2148 [16];
  double local_2138;
  double dStack_2130;
  double local_2128;
  double dStack_2120;
  double local_2118;
  double dStack_2110;
  undefined1 local_2108 [16];
  double local_20f8;
  double dStack_20f0;
  TVector<double>_u_0 local_20e8;
  TIntRect<int>_u_0 local_20d0;
  TVector<double>_u_0 local_20c0;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  FViewMatrices local_2098;
  FViewUniformShaderParameters local_1818;
  ulonglong local_68;
  
  TVar4._4_4_ = in_register_0000000c;
  TVar4._0_4_ = param_1;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_23b8;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId646,"FSlateSceneViewAllocator::CreateUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderingPolicy.cpp"
               ,0x286);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId646);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags._8_8_ = _UNK_15060db28;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CustomShowFlags.NumBits = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags._24_8_ = _UNK_15060db28;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CustomShowFlags.MaxBits = 0x80;
    FEngineShowFlags::InitCustomShowFlags
              (&`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
                ::__l2::DefaultShowFlags,ESFIM_Game);
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Pivot = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LightInfluences = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HitProxies = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Bounds = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ModeWidgets = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.EditingLevelInstance = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Selection = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Splines = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Cover = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MeshEdges = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Snap = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Grid = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LargeVertices = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Editor = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Brushes = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.BSPSplit = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.AudioRadius = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CameraFrustums = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MassProperties = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Constraints = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.StreamingBounds = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LightMapDensity = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.StationaryLightOverlap = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ShaderComplexity = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LightComplexity = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeInstanceUpdates = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HISMCClusterTree = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HISMCOcclusionBounds = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Navigation = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.DebugAI = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeSSS = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.SelectionOutline = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.DisableOcclusionQueries = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeInstanceOcclusionQueries = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.OcclusionMeshes = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VREditing = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ServerDrawDebug = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Bones = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeVirtualTexture = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.RequiredTextureResolution = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.OutputMaterialTextureScales = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MaterialTextureScaleAccuracy = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MeshUVDensityAccuracy = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.PrimitiveDistanceAccuracy = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ShaderComplexityWithQuadOverdraw = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.QuadOverdraw = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HLODColoration = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LODColoration = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeShadingModels = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeSSR = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLightingOnProbes = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeGlobalDistanceField = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.PhysicsField = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeMeshDistanceFields = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeDistanceFieldAO = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VolumeLightingSamples = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeVolumetricLightmap = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.PrecomputedVisibilityCells = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLightCulling = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.DistanceCulledPrimitives = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.StereoRendering = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HMDDistortion = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.HighResScreenshotMask = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CameraSafeFrames = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CameraAspectRatioBars = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CollisionPawn = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CollisionVisibility = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Collision = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ActorColoration = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Game = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Volumes = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LightRadius = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Wireframe = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ShadowFrustums = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeOutOfBoundsPixels = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeTSR = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeTemporalUpscaler = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeReprojection = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeMotionVectors = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeMotionBlur = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ScreenPercentage = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.PhysicalMaterialMasks = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VertexColors = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeDOF = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.TestImage = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.OpaqueCompositeEditorPrimitives = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CompositeEditorPrimitives = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.CompositeDebugPrimitives = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MotionBlur = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.GBufferHints = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VectorFields = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeVirtualShadowMap = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeGroom = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeSubstrate = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLumen = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeNanite = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeBuffer = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MaterialAmbientOcclusion = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.MaterialNormal = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.ReflectionOverride = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LightingOnlyOverride = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.OverrideDiffuseAndSpecular = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLocalExposure = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLocalFogVolumes = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeSkyLightIlluminance = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeHDR = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.RandomColor = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.FrontBackFace = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Zebra = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.Clay = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.StereoMotionVectors = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.AlphaInvert = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.SceneCaptureCopySceneDepth = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeShadowCasters = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLWCComplexity = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeGPUSkinCache = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenShortRangeAmbientOcclusion = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenSecondaryBounces = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenFarFieldTraces = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenGlobalTraces = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenDetailTraces = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.LumenScreenTraces = 1;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.DebugDrawDistantVirtualSMLights = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeVolumetricCloudConservativeDensity = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VirtualTexturePrimitives = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizePostProcessStack = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeCalibrationCustom = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeCalibrationGrayscale = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeCalibrationColor = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeLightFunctionAtlas = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.VisualizeSkyAtmosphere = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.RayTracingDebug = 0;
    `private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
    ::__l2::DefaultShowFlags.PathTracing = 0;
    atexit(`FSlateSceneViewAllocator::CreateUniformBuffer'::__l2::
           _dynamic_atexit_destructor_for__DefaultShowFlags__);
    _Init_thread_footer(&`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_2378._s_0.Min.field0_0x0 = (TIntPoint<int>)in_R8[1];
  local_2378._s_0.Max.field0_0x0 = (TIntPoint<int>)((TIntPoint<int>_u_0 *)(in_R8 + 2))->_s_0;
  if ((local_2378._8_4_ == local_2378._0_4_) && (local_2378._12_4_ == local_2378._4_4_)) {
    local_2378._s_0.Max.field0_0x0 = (TIntPoint<int>)*in_R8;
  }
  local_21e8._0_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_21e8._8_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_21e8._32_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_21e8._40_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_21e8._64_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_21e8._72_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_21e8._96_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_21e8._104_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_20e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20a8._0_4_ = eSSP_FULL;
  local_20a8._4_4_ = 1.0;
  local_21e8._16_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_21e8._24_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  uVar13 = SUB84((double)(float)in_R8[4].Y,0);
  uVar14 = (undefined4)((ulonglong)(double)(float)in_R8[4].Y >> 0x20);
  uStack_20a0._0_4_ = 1.0;
  uStack_20a0._4_1_ = false;
  uStack_20a0._5_3_ = 0;
  uVar11 = SUB84((double)(float)in_R8[5].Y,0);
  uVar12 = (undefined4)((ulonglong)(double)(float)in_R8[5].Y >> 0x20);
  local_21e8._48_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_21e8._56_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  uVar9 = SUB84((double)(float)in_R8[6].Y,0);
  uVar10 = (undefined4)((ulonglong)(double)(float)in_R8[6].Y >> 0x20);
  local_2238 = (double)(float)in_R8[7].X;
  dStack_2230 = (double)(float)in_R8[7].Y;
  local_21e8._80_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_21e8._88_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_2228 = (double)(float)in_R8[8].X;
  dStack_2220 = (double)(float)in_R8[8].Y;
  local_2218 = (double)(float)in_R8[9].X;
  dStack_2210 = (double)(float)in_R8[9].Y;
  local_20e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_20e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_20c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_20c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = SUB84((double)(float)in_R8[10].Y,0);
  uVar8 = (undefined4)((ulonglong)(double)(float)in_R8[10].Y >> 0x20);
  local_21e8._112_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_21e8._120_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_21f8 = (double)(float)in_R8[0xb].X;
  dStack_21f0 = (double)(float)in_R8[0xb].Y;
  local_2268._8_4_ = uVar13;
  local_2268._0_8_ = (double)(float)in_R8[4].X;
  local_2268._12_4_ = uVar14;
  local_2258._8_4_ = uVar11;
  local_2258._0_8_ = (double)(float)in_R8[5].X;
  local_2258._12_4_ = uVar12;
  local_2248._8_4_ = uVar9;
  local_2248._0_8_ = (double)(float)in_R8[6].X;
  local_2248._12_4_ = uVar10;
  local_2208._8_4_ = uVar7;
  local_2208._0_8_ = (double)(float)in_R8[10].X;
  local_2208._12_4_ = uVar8;
  local_21e8._136_4_ = uVar13;
  local_21e8._128_8_ = (double)(float)in_R8[4].X;
  local_21e8._140_4_ = uVar14;
  local_2158._8_4_ = uVar11;
  local_2158._0_8_ = (double)(float)in_R8[5].X;
  local_2158._12_4_ = uVar12;
  local_2148._8_4_ = uVar9;
  local_2148._0_8_ = (double)(float)in_R8[6].X;
  local_2148._12_4_ = uVar10;
  local_2108._8_4_ = uVar7;
  local_2108._0_8_ = (double)(float)in_R8[10].X;
  local_2108._12_4_ = uVar8;
  local_2138 = local_2238;
  dStack_2130 = dStack_2230;
  local_2128 = local_2228;
  dStack_2120 = dStack_2220;
  local_2118 = local_2218;
  dStack_2110 = dStack_2210;
  local_20f8 = local_21f8;
  dStack_20f0 = dStack_21f0;
  local_20d0._0_8_ = local_2378._s_0.Min.field0_0x0;
  local_20d0._8_8_ = local_2378._s_0.Max.field0_0x0;
  FViewMatrices::FViewMatrices(&local_2098,(FMinimalInitializer *)local_21e8);
  local_2338._24_8_ = in_R8[0xd];
  local_2338._32_8_ = in_R8[0xe];
  local_2338._8_8_ = local_2378._s_0.Min.field0_0x0;
  local_2338._40_8_ = in_R8[0xf];
  local_2338._16_8_ = local_2378._s_0.Max.field0_0x0;
  local_2308 = in_R8[0xc];
  local_2338._0_8_ =
       &`private:_static_class_TUniformBufferRef<FViewUniformShaderParameters>___cdecl_FSlateSceneViewAllocator::CreateUniformBuffer(ERHIFeatureLevel::Type,FSlateSceneViewAllocateInputs_const&___ptr64)'
        ::__l2::DefaultShowFlags;
  local_22f8 = 0;
  lStack_22f0 = 0;
  local_22e8 = 0;
  dStack_22e0 = 0.0;
  local_22d8._0_8_ = 0;
  local_22d8._8_8_ = 0;
  local_22c8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_22c8._8_8_ = _UNK_150689648;
  local_22b8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_22b8._8_8_ = _UNK_150689648;
  local_22a8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_22a8._8_8_ = _UNK_150689648;
  local_2298 = ___xmm_3f800000000000003f80000000000000;
  TStack_2290 = _UNK_15076b198;
  local_2288 = DVSM_None;
  local_2280 = 0;
  local_2278._0_4_ = 0;
  local_2278._4_4_ = 0.0;
  local_2270._0_4_ = 0.0;
  local_2270._4_1_ = false;
  local_2270._5_1_ = false;
  local_2270._6_1_ = false;
  local_2270._7_1_ = false;
  FViewUniformShaderParameters::FViewUniformShaderParameters(&local_1818);
  SetupCommonViewUniformBufferParameters
            (&local_1818,(TIntPoint<int> *)in_R8,1,(TIntRect<int> *)&local_2378._s_0,&local_2098,
             &local_2098,(FSetupViewUniformParametersInputs *)local_2338);
  local_1818.ViewportScaleUI = (float)in_R8[0x10].X;
  local_1818.CursorPosition.field0_0x0 = *(TIntPoint<int>_u_0 *)(in_R8 + 0xc);
  local_1818.BufferToSceneTextureScale.field0_0x0._s_0.X = 1.0;
  local_1818.BufferToSceneTextureScale.field0_0x0._s_0.Y = 1.0;
  if (((int)param_2 != 1) || (local_1818.MobilePreviewMode = 1.0, (int)GMaxRHIFeatureLevel < 2)) {
    local_1818.MobilePreviewMode = 0.0;
  }
  UpdateNoiseTextureParameters(&local_1818);
  local_2368.BufferUAV = (FRHIUnorderedAccessView *)0x0;
  local_2368.BufferSize = 0;
  local_2368.TileShift = 0;
  local_2368.TileMask = 0;
  local_2368.TileJitterOffset = 0;
  local_2368.SampleOffset = 0;
  local_2368.ExtendedDebugBufferSize = 0;
  VirtualTexture::GetFeedbackShaderParams(&local_2368);
  VirtualTexture::UpdateViewUniformShaderParameters(&local_2368,&local_1818);
  pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (local_2348,(FRHIUniformBufferLayout *)&local_1818,
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,ValidateResources);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)TVar4 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_2348[0] != (FRHIResource *)0x0) {
    FRHIResource::Release(local_2348[0]);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar4;
}

