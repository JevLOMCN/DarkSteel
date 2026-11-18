// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// FMeshWireframeSceneProxy @ 14ca64f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshWireframeSceneProxy * __thiscall
FMeshWireframeSceneProxy::FMeshWireframeSceneProxy
          (FMeshWireframeSceneProxy *this,UMeshWireframeComponent *param_1,
          IMeshWireframeSource *param_2)

{
  int *piVar1;
  TArray<FWireframeLinesMeshBatchData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FMeshWireframeSceneProxy *pFVar11;
  longlong lVar12;
  longlong lVar13;
  UMaterial *pUVar14;
  undefined8 uVar15;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStackY_2d8 [32];
  <lambda_1> local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  undefined1 local_294;
  undefined1 local_293 [3];
  uint local_290 [2];
  ForAnyElementType local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275;
  undefined1 local_274;
  undefined1 local_273;
  undefined1 local_272;
  undefined1 local_271;
  undefined1 local_270;
  undefined1 local_26f;
  undefined1 local_26e;
  undefined1 local_26d;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264;
  undefined1 local_263;
  undefined1 local_262;
  undefined1 local_261;
  IMeshWireframeSource *local_260;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  int local_240;
  float local_23c;
  FMeshWireframeSceneProxy *local_238;
  undefined8 local_230;
  FPositionVertexBuffer *local_228;
  FStaticMeshVertexBuffer *local_220;
  FColorVertexBuffer *local_218;
  FDynamicMeshIndexBuffer32 *local_210;
  TArrayView<std::nullptr_t,int> local_208;
  code *local_1f8;
  ForAnyElementType **local_1f0;
  TArrayView<std::nullptr_t,int> local_1e8;
  code *local_1d8;
  ForAnyElementType **local_1d0;
  ForAnyElementType *local_1c8;
  uint *local_1c0;
  int *local_1b8;
  IMeshWireframeSource **local_1b0;
  <lambda_1> *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  ForAnyElementType *local_178;
  float *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  float *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  float *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  float *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  float *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  float *local_f8;
  undefined1 *local_f0;
  IMeshWireframeSource **local_e8;
  float *local_e0;
  FMeshWireframeSceneProxy *local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FMeshWireframeSceneProxy *pFStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  undefined1 local_98 [16];
  undefined **local_88;
  FMeshWireframeSceneProxy *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar19 = 0;
  local_230 = 0;
  local_260 = param_2;
  local_238 = this;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FMeshWireframeSceneProxy__6B_;
  pTVar2 = &this->MeshBatchDatas;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchDatas).ArrayNum = 0;
  (this->MeshBatchDatas).ArrayMax = 0;
  pcVar3 = *(code **)(*(longlong *)param_1 + 0xaa8);
  EVar7 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar3)(param_1,&this->MaterialRelevance,EVar7);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FPointSetSceneProxy");
  local_220 = &(this->VertexBuffers).StaticMeshVertexBuffer;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(local_220);
  local_228 = &(this->VertexBuffers).PositionVertexBuffer;
  FPositionVertexBuffer::FPositionVertexBuffer(local_228);
  local_218 = &(this->VertexBuffers).ColorVertexBuffer;
  FColorVertexBuffer::FColorVertexBuffer(local_218);
  local_210 = &this->IndexBuffer;
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(local_210);
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId50,"FMeshWireframeSceneProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\MeshWireframeComponent.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy(UMeshWireframeComponent*___ptr64,IMeshWireframeSource_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId50);
  }
  if ((local_260 == (IMeshWireframeSource *)0x0) ||
     (cVar5 = (**(code **)((longlong)*local_260 + 8))(), cVar5 == '\0')) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1858323789385826356>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\MeshWireframeComponent.cpp"
                       ,0x34,"WireSource && WireSource->IsValid()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMeshWireframeSceneProxy *)(*pcVar3)();
      return pFVar11;
    }
  }
  else {
    iVar8 = (**(code **)((longlong)*local_260 + 0x20))();
    if (0 < iVar8) {
      local_298 = (<lambda_1>)param_1->bEnableWireframe;
      local_297 = param_1->bEnableBoundaryEdges;
      local_296 = param_1->bEnableUVSeams;
      local_295 = param_1->bEnableNormalSeams;
      local_294 = param_1->bEnableTangentSeams;
      local_293[0] = param_1->bEnableColorSeams;
      local_240 = (**(code **)((longlong)*local_260 + 0x28))();
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = 0;
      uVar9 = (int)(local_240 + 0x3fff + (local_240 + 0x3fff >> 0x1f & 0x3fffU)) >> 0xe;
      local_290[0] = uVar9;
      if ((int)uVar9 < 1) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
      }
      else {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar9,&local_288,(int *)&local_280,
                           (int *)((longlong)&local_280 + 4));
        DefaultConstructItems<_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy_::__l2::EdgeBatch,int>
                  (local_288.Data + (longlong)iVar8 * 0x18,uVar9);
      }
      local_1c8 = &local_288;
      local_208.DataPtr = (void **)0x0;
      local_1c0 = local_290;
      local_208.ArrayNum = 0;
      local_1b8 = &local_240;
      local_1b0 = &local_260;
      local_1a8 = &local_298;
      local_1a0 = &local_297;
      local_198 = &local_296;
      local_190 = &local_295;
      local_188 = &local_294;
      local_180 = local_293;
      local_1f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_1f0 = &local_1c8;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_290[0],1,(TFunctionRef<void___cdecl(int)> *)&local_1f8,
                 local_298,None,&local_208);
      uVar18 = local_280 & 0xffffffff;
      pFVar11 = this;
      uVar21 = uVar19;
      uVar23 = uVar19;
      iVar8 = (int)local_280;
      if (0 < (int)local_290[0]) {
        do {
          uVar22 = (uint)uVar19;
          uVar9 = 0;
          if ((int)uVar22 < (int)uVar18) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FMeshWireframeSceneProxy *)(*pcVar3)();
            return pFVar11;
          }
          *(int *)(local_288.Data + uVar23) = (int)uVar21;
          uVar18 = (ulonglong)(int)local_280;
          uVar9 = 0;
          if ((int)uVar22 < (int)local_280) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FMeshWireframeSceneProxy *)(*pcVar3)();
              return pFVar11;
            }
            uVar18 = local_280 & 0xffffffff;
          }
          iVar8 = (int)uVar18;
          uVar19 = (ulonglong)(uVar22 + 1);
          uVar9 = (int)uVar21 + *(int *)(local_288.Data + uVar23 + 0x10);
          uVar21 = (ulonglong)uVar9;
          uVar23 = uVar23 + 0x18;
        } while ((int)(uVar22 + 1) < (int)local_290[0]);
        pFVar11 = local_238;
        if (uVar9 != 0) {
          uVar22 = uVar9 * 4;
          FPositionVertexBuffer::Init(local_228,uVar22,true);
          FStaticMeshVertexBuffer::Init(local_220,uVar22,1,true);
          FColorVertexBuffer::Init(local_218,uVar22,true);
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_210->Indices,uVar9 * 6,Default);
          iVar8 = (this->MeshBatchDatas).ArrayNum;
          piVar1 = &(this->MeshBatchDatas).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->MeshBatchDatas).ArrayNum = iVar8 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x18) = 0;
          iVar8 = (this->MeshBatchDatas).ArrayNum;
          uVar20 = iVar8 - 1;
          uVar10 = 0;
          if ((int)uVar20 < iVar8) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FMeshWireframeSceneProxy *)(*pcVar3)();
            return pFVar11;
          }
          lVar12 = (longlong)(this->MeshBatchDatas).ArrayNum;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          *(undefined4 *)(pFVar4 + lVar12 * 0x18 + -8) = 0;
          *(uint *)(pFVar4 + lVar12 * 0x18 + -4) = uVar22 - 1;
          *(uint *)(pFVar4 + lVar12 * 0x18 + -0xc) = uVar9 * 2;
          *(undefined4 *)(pFVar4 + lVar12 * 0x18 + -0x10) = 0;
          lVar13 = (**(code **)(*(longlong *)param_1 + 0x690))(param_1,0);
          if (lVar13 == 0) {
            pUVar14 = UMaterial::GetDefaultMaterial(MD_Surface);
          }
          else {
            pUVar14 = (UMaterial *)(**(code **)(*(longlong *)param_1 + 0x690))(param_1,0);
          }
          uVar15 = (**(code **)(pUVar14->_padding_ + 0x310))(pUVar14);
          this = local_238;
          *(undefined8 *)(pFVar4 + lVar12 * 0x18 + -0x18) = uVar15;
          local_24c = param_1->ThicknessScale;
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->WireframeColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_278 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->WireframeColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_277 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->WireframeColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_276 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->WireframeColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_23c = local_24c * param_1->WireframeThickness;
          local_275 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->BoundaryEdgeColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_274 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->BoundaryEdgeColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_273 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->BoundaryEdgeColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_272 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->BoundaryEdgeColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_271 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          local_258 = local_24c * param_1->BoundaryEdgeThickness;
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->UVSeamColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_270 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->UVSeamColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_26f = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->UVSeamColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_26e = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->UVSeamColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_254 = local_24c * param_1->UVSeamThickness;
          local_26d = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->NormalSeamColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_26c = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->NormalSeamColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_26b = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->NormalSeamColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_26a = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->NormalSeamColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_250 = local_24c * param_1->NormalSeamThickness;
          local_269 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->TangentSeamColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_268 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->TangentSeamColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_267 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->TangentSeamColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_266 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->TangentSeamColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_248 = local_24c * param_1->ColorSeamThickness;
          local_265 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          local_24c = local_24c * param_1->TangentSeamThickness;
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->ColorSeamColor).field0_0x0._s_0.B];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_264 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->ColorSeamColor).field0_0x0._s_0.G];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_263 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = FLinearColor::sRGBToLinearTable[(param_1->ColorSeamColor).field0_0x0._s_0.R];
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_262 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          fVar25 = (float)(param_1->ColorSeamColor).field0_0x0._s_0.A * __real_3b808081;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (__real_3f800000 <= fVar25) {
            fVar25 = __real_3f800000;
          }
          local_244 = param_1->LineDepthBiasSizeScale * param_1->LineDepthBias;
          local_261 = (undefined1)(int)(fVar25 * __real_437f0000 + __real_3f000000);
          local_178 = &local_288;
          local_170 = &local_23c;
          local_168 = &local_278;
          local_160 = &local_297;
          local_158 = &local_258;
          local_150 = &local_274;
          local_d8 = local_238;
          local_148 = &local_296;
          local_1e8.DataPtr = (void **)0x0;
          local_140 = &local_254;
          local_138 = &local_270;
          local_130 = &local_295;
          local_128 = &local_250;
          local_120 = &local_26c;
          local_118 = &local_294;
          local_110 = &local_24c;
          local_108 = &local_268;
          local_100 = local_293;
          local_f8 = &local_248;
          local_f0 = &local_264;
          local_e8 = &local_260;
          local_e0 = &local_244;
          local_1d8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_2>,void,int>
                      ::Call;
          local_1d0 = &local_178;
          local_1e8.ArrayNum = 0;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",local_290[0],1,
                     (TFunctionRef<void___cdecl(int)> *)&local_1d8,local_298,None,&local_1e8);
          local_a0 = (undefined ***)0x0;
          local_b8 = &
                     ___7__TFunction_OwnedObject_V<lambda_3>__1___0FMeshWireframeSceneProxy__QEAA_PEAVUMeshWireframeComponent__PEBVIMeshWireframeSource___Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_c8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                        ::Call;
          pFStack_b0 = this;
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy_::__l2::TSTR_MeshWireframeVertexBuffersInit243>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_98._0_8_ = local_c8[0];
            local_70 = local_a0;
            local_88 = local_b8;
            pFStack_80 = pFStack_b0;
            local_78 = local_a8;
            local_c8[0] = (code *)0x0;
            local_68 = 2;
            pFVar16 = (FRenderCommandTag *)
                      TRenderCommandTag<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::TSTR_MeshWireframeVertexBuffersInit243>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_98,pFVar16);
            uVar19 = (ulonglong)local_68;
            if ((2 < uVar19) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FMeshWireframeSceneProxy *)(*pcVar3)();
              return pFVar11;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar19] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_98._0_8_ != (code *)0x0) {
                pppuVar17 = (undefined ***)(local_98 + 0x10);
                if (local_70 != (undefined ***)0x0) {
                  pppuVar17 = local_70;
                }
                (*(code *)(*pppuVar17)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar19])(local_98);
            }
          }
          if (local_c8[0] != (code *)0x0) {
            pppuVar17 = &local_b8;
            if (local_a0 != (undefined ***)0x0) {
              pppuVar17 = local_a0;
            }
            (*(code *)(*pppuVar17)[2])();
          }
          DestructItems<_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy_::__l2::EdgeBatch,int>
                    ((EdgeBatch *)local_288.Data,(int)local_280);
          if ((EdgeBatch *)local_288.Data != (EdgeBatch *)0x0) {
            FMemory::Free(local_288.Data);
          }
          goto joined_r0x00014ca65bc3;
        }
      }
      DestructItems<_FMeshWireframeSceneProxy::FMeshWireframeSceneProxy_::__l2::EdgeBatch,int>
                ((EdgeBatch *)local_288.Data,iVar8);
      this = pFVar11;
      if ((EdgeBatch *)local_288.Data != (EdgeBatch *)0x0) {
        FMemory::Free(local_288.Data);
      }
    }
  }
joined_r0x00014ca65bc3:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// ~FMeshWireframeSceneProxy @ 14ca6afb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMeshWireframeSceneProxy::~FMeshWireframeSceneProxy(FMeshWireframeSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshWireframeSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  pFVar1 = (this->MeshBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14ca6d6b0

void __thiscall
`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  undefined4 local_res18 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  
  plVar3 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *plVar3 + (longlong)param_1 * 0x18;
  if (**(int **)((longlong)this + 8) + -1 <= param_1) {
    uVar9 = **(uint **)((longlong)this + 0x10) & 0x80003fff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffc000) + 1;
    }
    if (uVar9 != 0) {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      goto LAB_14ca6d74d;
    }
  }
  uVar9 = 0x4000;
LAB_14ca6d74d:
  piVar1 = (int *)(lVar2 + 0x14);
  if (*(int *)(lVar2 + 0x14) < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar9,(ForAnyElementType *)(lVar2 + 8),*(int *)(lVar2 + 0x10),piVar1);
  }
  iVar11 = param_1 * 0x4000;
  iVar10 = uVar9 + iVar11;
  do {
    if (iVar10 <= iVar11) {
      return;
    }
    cVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x18) + 0x30))
                      ((longlong *)**(undefined8 **)((longlong)this + 0x18),iVar11);
    if ((cVar7 != '\0') &&
       (((((**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x18) + 0x38))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x18),iVar11,local_res8,
                      local_res18,local_res10), **(char **)((longlong)this + 0x20) != '\0' ||
          ((**(char **)((longlong)this + 0x28) != '\0' && ((local_res10[0] & 4) != 0)))) ||
         ((**(char **)((longlong)this + 0x30) != '\0' && ((local_res10[0] & 8) != 0)))) ||
        ((((**(char **)((longlong)this + 0x38) != '\0' && ((local_res10[0] & 0x10) != 0)) ||
          ((**(char **)((longlong)this + 0x40) != '\0' && ((char)local_res10[0] < '\0')))) ||
         ((**(char **)((longlong)this + 0x48) != '\0' && ((local_res10[0] & 0x40) != 0)))))))) {
      local_38 = local_res8[0];
      uStack_34 = local_res18[0];
      local_30 = local_res10[0];
      if ((*(undefined4 **)(lVar2 + 8) <= &local_38) &&
         ((&local_38 < *(undefined4 **)(lVar2 + 8) + (longlong)*piVar1 * 3 &&
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
      iVar8 = *(int *)(lVar2 + 0x10);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)(lVar2 + 8),piVar1);
      }
      *(int *)(lVar2 + 0x10) = iVar8 + 1;
      lVar4 = *(longlong *)(lVar2 + 8);
      *(ulonglong *)(lVar4 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_34,local_38);
      *(uint *)(lVar4 + (longlong)iVar8 * 0xc + 8) = local_30;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

// operator() @ 14ca6f4c0

void __thiscall
`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  uint uVar3;
  float fVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  double dVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  ushort local_res8 [4];
  ushort local_res10 [4];
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_244;
  ushort local_242;
  ushort local_240;
  ushort local_23e;
  uint local_23c;
  uint local_238;
  uint local_234;
  double local_230;
  double local_228;
  double local_220;
  float local_218;
  float fStack_214;
  longlong local_210;
  TVector<float>_u_0 local_208;
  TVector<float>_u_0 local_1f8;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  TVector<float>_u_0 local_178;
  TVector<float>_u_0 local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  double local_f8;
  
  plVar5 = *(longlong **)this;
  lVar26 = (longlong)param_1;
  uVar31 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar31 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar28 = lVar26 * 3;
  plVar6 = *(longlong **)this;
  local_23c = *(uint *)(*plVar5 + lVar26 * 0x18);
  uVar31 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar31 = (uint)~param_1 >> 0x1f;
  }
  local_1a0 = lVar28;
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar16 = __real_3e45798ee0000000;
  dVar15 = __real_3ff0000000000000;
  local_198 = *plVar6;
  local_234 = 0;
  local_1a8 = (longlong)*(int *)(local_198 + 0x10 + lVar26 * 0x18);
  if (0 < local_1a8) {
    uVar21 = (ulonglong)(int)local_23c;
    local_210 = 0;
    uVar22 = (ulonglong)local_23c;
    uVar31 = (uint)__xmm_80000000000000008000000000000000;
    uVar33 = __xmm_80000000000000008000000000000000._4_4_;
    do {
      lVar23 = local_198;
      lVar26 = local_210;
      iVar18 = local_234 + (int)uVar22;
      uVar3 = iVar18 * 4;
      uVar11 = iVar18 * 6;
      local_1b0 = (uVar21 + local_210) * 6;
      uVar27 = 0;
      if ((int)local_234 < *(int *)(local_198 + 0x10 + lVar28 * 8)) {
        uVar27 = ~local_234 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar28 = *(longlong *)(lVar23 + 8 + lVar28 * 8);
      local_190 = *(ulonglong *)(lVar28 + lVar26 * 0xc);
      uVar27 = *(uint *)(lVar28 + 8 + lVar26 * 0xc);
      uVar24 = **(undefined4 **)((longlong)this + 0x10);
      fVar35 = **(float **)((longlong)this + 8);
      if (uVar27 != 1) {
        uVar20 = uVar27 & 4;
        if ((**(char **)((longlong)this + 0x18) == '\0') || (uVar20 == 0)) {
          if ((**(char **)((longlong)this + 0x30) == '\0') || ((uVar27 & 8) == 0)) {
            if ((**(char **)((longlong)this + 0x48) == '\0') || ((uVar27 & 0x10) == 0)) {
              if ((**(char **)((longlong)this + 0x60) == '\0') || (-1 < (char)uVar27)) {
                if ((**(char **)((longlong)this + 0x78) == '\0') || ((uVar27 & 0x40) == 0))
                goto LAB_14ca6f799;
                puVar25 = *(undefined4 **)((longlong)this + 0x88);
                lVar26 = 0x20;
                if (uVar20 == 0) {
                  lVar26 = 0x80;
                }
              }
              else {
                puVar25 = *(undefined4 **)((longlong)this + 0x70);
                lVar26 = 0x20;
                if (uVar20 == 0) {
                  lVar26 = 0x68;
                }
              }
            }
            else {
              puVar25 = *(undefined4 **)((longlong)this + 0x58);
              lVar26 = 0x20;
              if (uVar20 == 0) {
                lVar26 = 0x50;
              }
            }
          }
          else {
            puVar25 = *(undefined4 **)((longlong)this + 0x40);
            lVar26 = 0x20;
            if (uVar20 == 0) {
              lVar26 = 0x38;
            }
          }
          pfVar19 = *(float **)(lVar26 + (longlong)this);
        }
        else {
          pfVar19 = *(float **)((longlong)this + 0x20);
          puVar25 = *(undefined4 **)((longlong)this + 0x28);
        }
        uVar24 = *puVar25;
        fVar35 = *pfVar19;
      }
LAB_14ca6f799:
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x90) + 0x18))
                ((longlong *)**(undefined8 **)((longlong)this + 0x90),&local_1c8,
                 local_190 & 0xffffffff);
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x90) + 0x18))
                ((longlong *)**(undefined8 **)((longlong)this + 0x90),&local_230,local_190._4_4_);
      dVar8 = local_230 - local_1c8;
      dVar9 = local_228 - local_1c0;
      dVar10 = local_220 - local_1b8;
      dVar29 = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
      uVar12 = dVar8;
      uVar13 = dVar9;
      uVar14 = dVar10;
      if ((dVar29 != dVar15) &&
         (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar16 <= dVar29)) {
        local_f8 = dVar15 / SQRT(dVar29);
        uVar12 = dVar8 * local_f8;
        uVar13 = dVar9 * local_f8;
        uVar14 = dVar10 * local_f8;
      }
      uVar27 = uVar3 + 3;
      uVar22 = (ulonglong)(uVar3 * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x5c0));
      fVar4 = **(float **)((longlong)this + 0x98);
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x5b8);
      *(float *)(uVar22 + lVar26) = (float)local_1c8;
      *(float *)(uVar22 + 4 + lVar26) = (float)local_1c0;
      *(float *)(uVar22 + 8 + lVar26) = (float)local_1b8;
      uVar22 = (ulonglong)((uVar3 + 1) * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x5c0));
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x5b8);
      *(float *)(uVar22 + lVar26) = (float)local_230;
      *(float *)(uVar22 + 4 + lVar26) = (float)local_228;
      *(float *)(uVar22 + 8 + lVar26) = (float)local_220;
      uVar22 = (ulonglong)((uVar3 + 2) * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x5c0));
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x5b8);
      *(float *)(uVar22 + lVar26) = (float)local_230;
      *(float *)(uVar22 + 4 + lVar26) = (float)local_228;
      *(float *)(uVar22 + 8 + lVar26) = (float)local_220;
      uVar22 = (ulonglong)(uVar27 * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x5c0));
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x5b8);
      *(float *)(uVar22 + lVar26) = (float)local_1c8;
      *(float *)(uVar22 + 4 + lVar26) = (float)local_1c0;
      fVar34 = (float)(double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) ^ uVar33,
                                       (uint)uVar12 ^ uVar31);
      fVar32 = (float)(double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^ uVar33,
                                       (uint)uVar13 ^ uVar31);
      *(float *)(uVar22 + 8 + lVar26) = (float)local_1b8;
      fVar30 = (float)(double)CONCAT44((uint)((ulonglong)uVar14 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       (uint)uVar14 ^ (uint)__xmm_80000000000000008000000000000000);
      local_178._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_168._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_178._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_168._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_238 = uVar27;
      local_218 = fVar35;
      fStack_214 = fVar4;
      local_208._s_0.X = fVar34;
      local_208._s_0.Y = fVar32;
      local_208._s_0.Z = fVar30;
      FStaticMeshVertexBuffer::SetVertexTangents
                ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0xa0) + 0x4c8),uVar3,
                 (TVector<float> *)&local_168._s_0,(TVector<float> *)&local_178._s_0,
                 (TVector<float> *)&local_208._s_0);
      local_158._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_148._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_158._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_148._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1f8._s_0.X = fVar34;
      local_1f8._s_0.Y = fVar32;
      local_1f8._s_0.Z = fVar30;
      FStaticMeshVertexBuffer::SetVertexTangents
                ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0xa0) + 0x4c8),uVar3 + 1
                 ,(TVector<float> *)&local_148._s_0,(TVector<float> *)&local_158._s_0,
                 (TVector<float> *)&local_1f8._s_0);
      local_138._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_128._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_138._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_128._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1e8._s_0.X = (float)(double)uVar12;
      local_1e8._s_0.Y = (float)(double)uVar13;
      local_1e8._s_0.Z = (float)(double)uVar14;
      FStaticMeshVertexBuffer::SetVertexTangents
                ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0xa0) + 0x4c8),uVar3 + 2
                 ,(TVector<float> *)&local_128._s_0,(TVector<float> *)&local_138._s_0,
                 (TVector<float> *)&local_1e8._s_0);
      local_118._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_108._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_118._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_108._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1d8._s_0.X = (float)(double)uVar12;
      local_1d8._s_0.Y = (float)(double)uVar13;
      local_1d8._s_0.Z = (float)(double)uVar14;
      FStaticMeshVertexBuffer::SetVertexTangents
                ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0xa0) + 0x4c8),uVar27,
                 (TVector<float> *)&local_108._s_0,(TVector<float> *)&local_118._s_0,
                 (TVector<float> *)&local_1d8._s_0);
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar12 = CONCAT44(fStack_214,local_218);
      lVar28 = *(longlong *)(lVar26 + 0x560);
      lVar23 = (ulonglong)*(uint *)(lVar26 + 0x570) * (ulonglong)uVar3;
      if (*(char *)(lVar26 + 0x578) == '\0') {
        puVar2 = (ushort *)(lVar28 + lVar23 * 4);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((ushort *)(lVar23 + lVar28) < puVar2 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar2 < *(ushort **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_res10[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res10,fVar35);
        *puVar2 = local_res10[0];
        local_res8[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res8,fVar4);
        puVar2[1] = local_res8[0];
      }
      else {
        puVar1 = (undefined8 *)(lVar28 + lVar23 * 8);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((undefined8 *)(lVar23 + lVar28) < puVar1 + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar1 < *(undefined8 **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *puVar1 = uVar12;
      }
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      lVar28 = *(longlong *)(lVar26 + 0x560);
      lVar23 = (ulonglong)*(uint *)(lVar26 + 0x570) * (ulonglong)(uVar3 + 1);
      if (*(char *)(lVar26 + 0x578) == '\0') {
        puVar2 = (ushort *)(lVar28 + lVar23 * 4);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((ushort *)(lVar23 + lVar28) < puVar2 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar2 < *(ushort **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_res18[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res18,fVar35);
        *puVar2 = local_res18[0];
        local_res20[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res20,fVar4);
        puVar2[1] = local_res20[0];
      }
      else {
        puVar1 = (undefined8 *)(lVar28 + lVar23 * 8);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((undefined8 *)(lVar23 + lVar28) < puVar1 + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar1 < *(undefined8 **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *puVar1 = uVar12;
      }
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      lVar28 = *(longlong *)(lVar26 + 0x560);
      lVar23 = (ulonglong)*(uint *)(lVar26 + 0x570) * (ulonglong)(uVar3 + 2);
      if (*(char *)(lVar26 + 0x578) == '\0') {
        puVar2 = (ushort *)(lVar28 + lVar23 * 4);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((ushort *)(lVar23 + lVar28) < puVar2 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar2 < *(ushort **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_244 = 0;
        FGenericPlatformMath::StoreHalf(&local_244,fVar35);
        *puVar2 = local_244;
        local_242 = 0;
        FGenericPlatformMath::StoreHalf(&local_242,fVar4);
        puVar2[1] = local_242;
      }
      else {
        puVar1 = (undefined8 *)(lVar28 + lVar23 * 8);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((undefined8 *)(lVar23 + lVar28) < puVar1 + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar1 < *(undefined8 **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *puVar1 = uVar12;
      }
      uVar31 = local_238;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      lVar28 = *(longlong *)(lVar26 + 0x560);
      lVar23 = (ulonglong)*(uint *)(lVar26 + 0x570) * (ulonglong)local_238;
      if (*(char *)(lVar26 + 0x578) == '\0') {
        puVar2 = (ushort *)(lVar28 + lVar23 * 4);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((ushort *)(lVar23 + lVar28) < puVar2 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar2 < *(ushort **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_240 = 0;
        FGenericPlatformMath::StoreHalf(&local_240,fVar35);
        *puVar2 = local_240;
        local_23e = 0;
        FGenericPlatformMath::StoreHalf(&local_23e,fVar4);
        puVar2[1] = local_23e;
      }
      else {
        puVar1 = (undefined8 *)(lVar28 + lVar23 * 8);
        lVar23 = (**(code **)(**(longlong **)(lVar26 + 0x548) + 0x50))();
        if (((undefined8 *)(lVar23 + lVar28) < puVar1 + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar1 < *(undefined8 **)(lVar26 + 0x560)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *puVar1 = uVar12;
        uVar31 = local_238;
      }
      iVar18 = uVar3 + 2;
      *(undefined4 *)
       ((ulonglong)(uVar3 * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x610)) +
       *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x608)) = uVar24;
      *(undefined4 *)
       ((ulonglong)((uVar3 + 1) * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x610)) +
       *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x608)) = uVar24;
      *(undefined4 *)
       ((ulonglong)(uint)(iVar18 * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x610)) +
       *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x608)) = uVar24;
      *(undefined4 *)
       ((ulonglong)(uVar31 * *(int *)(*(longlong *)((longlong)this + 0xa0) + 0x610)) +
       *(longlong *)(*(longlong *)((longlong)this + 0xa0) + 0x608)) = uVar24;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar33 = 0;
      if ((int)uVar11 < *(int *)(lVar26 + 0x650)) {
        uVar33 = ~uVar11 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar28 = local_1b0;
      *(uint *)(*(longlong *)(lVar26 + 0x648) + local_1b0 * 4) = uVar3;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar33 = 0;
      if ((int)(uVar11 + 1) < *(int *)(lVar26 + 0x650)) {
        uVar33 = ~(uVar11 + 1) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)(*(longlong *)(lVar26 + 0x648) + 4 + lVar28 * 4) = uVar3 + 1;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar33 = 0;
      if ((int)(uVar11 + 2) < *(int *)(lVar26 + 0x650)) {
        uVar33 = ~(uVar11 + 2) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)(lVar26 + 0x648) + 8 + lVar28 * 4) = iVar18;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar33 = 0;
      if ((int)(uVar11 + 3) < *(int *)(lVar26 + 0x650)) {
        uVar33 = ~(uVar11 + 3) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)(lVar26 + 0x648) + 0xc + lVar28 * 4) = iVar18;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar33 = 0;
      if ((int)(uVar11 + 4) < *(int *)(lVar26 + 0x650)) {
        uVar33 = ~(uVar11 + 4) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)(*(longlong *)(lVar26 + 0x648) + 0x10 + lVar28 * 4) = uVar31;
      lVar26 = *(longlong *)((longlong)this + 0xa0);
      uVar31 = 0;
      if ((int)(uVar11 + 5) < *(int *)(lVar26 + 0x650)) {
        uVar31 = ~(uVar11 + 5) >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar33 = __xmm_80000000000000008000000000000000._4_4_;
      uVar31 = (uint)__xmm_80000000000000008000000000000000;
      local_210 = local_210 + 1;
      local_234 = local_234 + 1;
      uVar21 = (ulonglong)(int)local_23c;
      *(uint *)(*(longlong *)(lVar26 + 0x648) + 0x14 + lVar28 * 4) = uVar3;
      uVar22 = uVar21;
      lVar28 = local_1a0;
    } while (local_210 < local_1a8);
  }
  return;
}

// operator() @ 14ca70d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x4c8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)this + 0x5d0),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x580),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x5d0),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x298),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x298) + 0x18))
            ((longlong *)(*(longlong *)this + 0x298),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x620) + 0x18))
            ((longlong *)(*(longlong *)this + 0x620),param_1);
  return;
}

// CanBeOccluded @ 14ca7d650

bool __thiscall FMeshWireframeSceneProxy::CanBeOccluded(FMeshWireframeSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14ca8ee40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshWireframeSceneProxy::GetDynamicMeshElements
          (FMeshWireframeSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  int iVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FDynamicPrimitiveUniformBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  TStatIdData *pTVar16;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar17;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar18;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  ForElementType<FMeshBatchElement> FVar23;
  ForElementType<FMeshBatchElement> FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_97 [7];
  uint local_90;
  uint uStack_8c;
  FColor_u_0 local_88 [2];
  FName local_80;
  FScriptContainerElement *local_78;
  FName local_70;
  FName local_68;
  FDynamicPrimitiveUniformBuffer *local_58;
  FScriptContainerElement *local_50;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_48,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
               L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FMeshWireframeSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
                         L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)&pTVar16->Name;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (bVar12 = bVar5, bVar6 = bVar7, uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar21.Value;
        local_80.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\MeshWireframeComponent.cpp"
                   ,0x112);
        bVar5 = true;
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    bVar12 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar21.Value;
      uStack_8c = uVar20;
      local_70 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar10 = true;
      goto LAB_14ca8efee;
    }
  }
  bVar7 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_70 = local_68;
  FVar22 = local_68;
LAB_14ca8efee:
  local_90 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (local_90 & 0x1f) & 1) != 0) {
        iVar2 = (this->MeshBatchDatas).ArrayNum;
        pFVar25 = (this->MeshBatchDatas).AllocatorInstance.Data;
        local_50 = pFVar25 + (longlong)iVar2 * 0x18;
        while( true ) {
          pFVar9 = local_50;
          local_78 = pFVar25;
          if ((this->MeshBatchDatas).ArrayNum != iVar2) {
            local_97[0] = 0;
            `TCheckedPointerIterator<FWireframeLinesMeshBatchData_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_97);
          }
          if (pFVar25 == pFVar9) break;
          iVar13 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar20 = iVar13 / 0x49;
          uVar14 = 0;
          if ((int)uVar20 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar24 = (ForElementType<FMeshBatchElement>)
                   ((ulonglong)(uint)(iVar13 % 0x49) * 0xe0 +
                   (longlong)
                   (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar20]);
          if ((*(int *)((longlong)FVar24 + 0xa0) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar23 = FVar24;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar23 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98);
          }
          *(FDynamicMeshIndexBuffer32 **)((longlong)FVar23 + 0x18) = &this->IndexBuffer;
          *(uint *)((longlong)FVar24 + 0xd4) = *(uint *)((longlong)FVar24 + 0xd4) & 0xffffffbf;
          *(FLocalVertexFactory **)((longlong)FVar24 + 0xa8) = &this->VertexFactory;
          *(undefined8 *)((longlong)FVar24 + 0xb0) = *(undefined8 *)pFVar25;
          paVar3 = &param_4->OneFrameResources->Next;
          aVar17 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
          *(undefined8 *)((longlong)aVar17 + 8) = 0;
          local_58 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar17 + 0x10);
          *(undefined ***)aVar17 =
               &
               ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar18.Next = *paVar3;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar17 + 8) = TVar18.Next;
            LOCK();
            aVar19 = *paVar3;
            bVar11 = TVar18.Next == aVar19;
            if (bVar11) {
              *paVar3 = aVar17;
              aVar19 = TVar18.Next;
            }
            UNLOCK();
            TVar18.Next = aVar19;
          } while (!bVar11);
          FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_58);
          bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
          if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
             ((bVar1 & 0x60) != 0)) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = local_58;
          FDynamicPrimitiveUniformBuffer::Set
                    (local_58,(FRHICommandListBase *)param_4->RHICmdList,
                     (TMatrix<double> *)&this->_padding_,(TMatrix<double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,false,false,bVar11);
          pFVar25 = local_78;
          *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar23 + 8) =
               &pFVar8->UniformBuffer;
          *(undefined4 *)((longlong)FVar23 + 0x58) = *(undefined4 *)(local_78 + 8);
          *(undefined4 *)((longlong)FVar23 + 0x5c) = *(undefined4 *)(local_78 + 0xc);
          *(undefined4 *)((longlong)FVar23 + 0x68) = *(undefined4 *)(local_78 + 0x10);
          *(undefined4 *)((longlong)FVar23 + 0x6c) = *(undefined4 *)(local_78 + 0x14);
          *(uint *)((longlong)FVar24 + 0xd4) =
               ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar24 + 0xd4) & 0xfffffffe) &
               0xffffc07f;
          FMeshElementCollector::AddMesh(param_4,local_90,(FMeshBatch *)FVar24);
          pFVar25 = pFVar25 + 0x18;
        }
      }
      local_90 = local_90 + 1;
      FVar22 = local_70;
      bVar12 = bVar5;
      bVar6 = bVar7;
    } while ((int)local_90 < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14ca907c0

uint __thiscall FMeshWireframeSceneProxy::GetMemoryFootprint(FMeshWireframeSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x660;
}

// GetTypeHash @ 14ca93fd0

ulong64 __thiscall FMeshWireframeSceneProxy::GetTypeHash(FMeshWireframeSceneProxy *this)

{
  return 0x155348168;
}

// GetViewRelevance @ 14ca94660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FMeshWireframeSceneProxy::GetViewRelevance
          (FMeshWireframeSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar5 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  uVar6 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar5 & 0xffffdfff;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar6 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  return __return_storage_ptr__;
}

