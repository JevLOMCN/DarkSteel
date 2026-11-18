// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FCanvasBatchedElementRenderItem @ 14890dae0

void __thiscall
FCanvasBatchedElementRenderItem::~FCanvasBatchedElementRenderItem
          (FCanvasBatchedElementRenderItem *this)

{
  undefined1 *puVar1;
  FRenderData *this_00;
  FBatchedElementParameters *pFVar2;
  
  this_00 = this->Data;
  this->_padding_ = (longlong)&___7FCanvasBatchedElementRenderItem__6B_;
  if (this_00 != (FRenderData *)0x0) {
    pFVar2 = (this_00->BatchedElementParameters).Reference;
    if (pFVar2 != (FBatchedElementParameters *)0x0) {
      puVar1 = &pFVar2->field_0x8;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (*(int *)puVar1 == 0) {
        (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      }
    }
    FBatchedElements::~FBatchedElements(&this_00->BatchedElements);
    ::operator_delete(this_00,0x180);
    this->_padding_ = (longlong)&___7FCanvasBaseRenderItem__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7FCanvasBaseRenderItem__6B_;
  return;
}

// GetCanvasBatchedElementRenderItem @ 148956400

FCanvasBatchedElementRenderItem * __thiscall
FCanvasBatchedElementRenderItem::GetCanvasBatchedElementRenderItem
          (FCanvasBatchedElementRenderItem *this)

{
  return this;
}

// Render_GameThread @ 148979090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FCanvasBatchedElementRenderItem::Render_GameThread
          (FCanvasBatchedElementRenderItem *this,FCanvas *param_1,FCanvasRenderThreadScope *param_2)

{
  FRenderData *pFVar1;
  FRenderTarget *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  wchar_t *local_b0;
  FRenderData *pFStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  Type TStack_8c;
  FRenderData *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  bool bStack_60;
  undefined3 uStack_5f;
  Type TStack_5c;
  EShaderPlatform local_58;
  undefined6 uStack_56;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = this->Data;
  if (((((pFVar1->BatchedElements).LineVertices.ArrayNum == 0) &&
       ((pFVar1->BatchedElements).Points.ArrayNum == 0)) &&
      ((pFVar1->BatchedElements).Sprites.ArrayNum == 0)) &&
     ((((pFVar1->BatchedElements).MeshElements.ArrayNum == 0 &&
       ((pFVar1->BatchedElements).ThickLines.ArrayNum == 0)) &&
      ((pFVar1->BatchedElements).WireTris.ArrayNum < 1)))) {
    bVar4 = false;
  }
  else {
    pFVar2 = param_1->RenderTarget;
    fVar9 = (float)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    local_78 = this->Data;
    uVar8 = param_1->AllowedModes;
    fVar9 = __real_3f800000 / fVar9;
    uStack_70 = (uint)(param_1->HitProxyConsumer != (FHitProxyConsumer *)0x0);
    puVar5 = (undefined4 *)(**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,local_b8);
    uStack_6c = *puVar5;
    lVar6 = (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,local_b8);
    pFStack_a8 = local_78;
    lStack_a0 = CONCAT44(uStack_6c,uStack_70);
    uVar8 = uVar8 & 2;
    local_78 = (FRenderData *)0x0;
    uStack_98 = *(undefined4 *)(lVar6 + 4);
    bStack_60 = uVar8 != 0;
    TStack_8c = param_1->FeatureLevel;
    local_58 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TStack_8c];
    local_b0 = L"CanvasBatchedElements";
    uVar3 = CONCAT62(uStack_56,local_58);
    uStack_90 = _bStack_60;
    fStack_94 = fVar9;
    local_68._0_4_ = uStack_98;
    local_68._4_4_ = fVar9;
    TStack_5c = TStack_8c;
    local_50 = FMemory::Malloc(0x38,8);
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCanvasRenderThreadScope::AddPass<`FCanvasBatchedElementRenderItem::Render_GameThread'::`6'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_50[1] = (longlong)local_b0;
    local_50[2] = (longlong)pFStack_a8;
    local_50[3] = lStack_a0;
    local_50[4] = CONCAT44(fStack_94,uStack_98);
    *(undefined4 *)(local_50 + 5) = uStack_90;
    *(Type *)((longlong)local_50 + 0x2c) = TStack_8c;
    *(int *)(local_50 + 6) = (int)uVar3;
    *(int *)((longlong)local_50 + 0x34) = SUB64(uStack_56,2);
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = (FRenderData *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FCanvasRenderThreadScope::AddPass<`FCanvasBatchedElementRenderItem::Render_GameThread'::__l6::<lambda_1>_>'::__l2::<lambda_1>,void,FCanvasRenderContext_&>
                 ::Call;
    }
    FCanvasRenderThreadScope::EnqueueRenderCommand
              (param_2,(TFunction<void___cdecl(FCanvasRenderContext_&)> *)&local_78);
    if (local_78 != (FRenderData *)0x0) {
      plVar7 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    bVar4 = true;
    if (uVar8 != 0) {
      this->Data = (FRenderData *)0x0;
    }
  }
  return bVar4;
}

// Render_RenderThread @ 148979280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FCanvasBatchedElementRenderItem::Render_RenderThread
          (FCanvasBatchedElementRenderItem *this,FCanvasRenderContext *param_1,
          FMeshPassProcessorRenderState *param_2,FCanvas *param_3)

{
  int *piVar1;
  FRenderData *pFVar2;
  FRDGBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FRDGEventName *pFVar8;
  FRenderTargetParameters *pFVar9;
  bool bVar10;
  undefined8 *local_a8;
  FRenderTargetBinding local_a0;
  <lambda_1> local_88;
  FRDGEventName local_38;
  
  pFVar2 = this->Data;
  bVar10 = false;
  if ((((((pFVar2->BatchedElements).LineVertices.ArrayNum != 0) ||
        ((pFVar2->BatchedElements).Points.ArrayNum != 0)) ||
       ((pFVar2->BatchedElements).Sprites.ArrayNum != 0)) ||
      (((pFVar2->BatchedElements).MeshElements.ArrayNum != 0 ||
       ((pFVar2->BatchedElements).ThickLines.ArrayNum != 0)))) ||
     (0 < (pFVar2->BatchedElements).WireTris.ArrayNum)) {
    local_88.DrawRenderState.BlendState = param_2->BlendState;
    local_88.DrawRenderState.DepthStencilState = param_2->DepthStencilState;
    local_88.DrawRenderState.DepthStencilAccess = param_2->DepthStencilAccess;
    local_88.DrawRenderState._20_4_ = *(undefined4 *)&param_2->field_0x14;
    local_88.DrawRenderState.ViewUniformBuffer = param_2->ViewUniformBuffer;
    bVar10 = true;
    local_88.DrawRenderState.InstancedViewUniformBuffer = param_2->InstancedViewUniformBuffer;
    local_88.DrawRenderState.PassUniformBuffer = param_2->PassUniformBuffer;
    local_88.DrawRenderState.NaniteUniformBuffer = param_2->NaniteUniformBuffer;
    local_88.DrawRenderState.StencilRef = param_2->StencilRef;
    local_88.DrawRenderState._60_4_ = *(undefined4 *)&param_2->field_0x3c;
    local_88.LocalData = pFVar2;
    local_88.Canvas = param_3;
    pFVar8 = FRDGEventName::FRDGEventName(&local_38,1,L"CanvasBatchedElements");
    pFVar9 = FRDGAllocator::Alloc<FRenderTargetParameters>
                       ((FRDGAllocator *)&param_1->GraphBuilder->_padding_);
    local_a0.ResolveTexture = (FRDGTexture *)0x0;
    local_a0.Texture = param_1->RenderTarget;
    local_a0.LoadAction = ELoad;
    local_a0.MipIndex = '\0';
    local_a0.ArraySlice = -1;
    bVar5 = FRenderTargetBinding::Validate(&local_a0);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    (pFVar9->RenderTargets).Output.Elements[0].Texture = local_a0.Texture;
    (pFVar9->RenderTargets).Output.Elements[0].ResolveTexture = local_a0.ResolveTexture;
    (pFVar9->RenderTargets).Output.Elements[0].LoadAction = local_a0.LoadAction;
    (pFVar9->RenderTargets).Output.Elements[0].MipIndex = local_a0.MipIndex;
    (pFVar9->RenderTargets).Output.Elements[0].ArraySlice = local_a0.ArraySlice;
    *(undefined4 *)&(pFVar9->RenderTargets).Output.Elements[0].field_0x14 = local_a0._20_4_;
    FCanvasRenderContext::
    AddPass<_FCanvasBatchedElementRenderItem::Render_RenderThread_::__l6::<lambda_1>,FRenderTargetParameters>
              (param_1,pFVar8,pFVar9,&local_88);
    if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  if ((param_3->AllowedModes & 2) != 0) {
    pFVar3 = param_1->GraphBuilder;
    pFVar2 = this->Data;
    local_a8 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x10,0x10);
    if (local_a8 == (undefined8 *)0x0) {
      local_a8 = (undefined8 *)0x0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      local_a8[1] = pFVar2;
      *local_a8 = &
                  ___7__TObject_UFDeleter__1____DeferredDelete_VFRenderData_FCanvasBatchedElementRenderItem___FCanvasRenderContext__QEAAXPEBVFRenderData_FCanvasBatchedElementRenderItem___Z__FRDGAllocator__6B_
      ;
    }
    if (((undefined8 **)pFVar3->_padding_ <= &local_a8) &&
       (&local_a8 < (undefined8 **)pFVar3->_padding_ + *(int *)((longlong)&pFVar3->_padding_ + 4)))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = (int)pFVar3->_padding_;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pFVar3->_padding_,piVar1);
    }
    *(int *)&pFVar3->_padding_ = iVar7 + 1;
    *(undefined8 **)(pFVar3->_padding_ + (longlong)iVar7 * 8) = local_a8;
    this->Data = (FRenderData *)0x0;
  }
  return bVar10;
}

