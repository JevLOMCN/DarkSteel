// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// EnqueueRenderCommand @ 1488be4c0

void __thiscall
FCanvasRenderThreadScope::EnqueueRenderCommand
          (FCanvasRenderThreadScope *this,TFunction<void___cdecl(FCanvasRenderContext_&)> *param_1)

{
  TArray<TFunction<void___cdecl(FCanvasRenderContext_&)>,TSizedDefaultAllocator<32>_> *pTVar1;
  TFunction<void___cdecl(FCanvasRenderContext_&)> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = this->RenderCommands;
  pTVar2 = (TFunction<void___cdecl(FCanvasRenderContext_&)> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + pTVar1->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = pTVar1->ArrayNum;
  if (iVar6 == pTVar1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  *(undefined8 *)pFVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar7 + 0x28) = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)(pFVar7 + 0x18) = uVar4;
  *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)pFVar7 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// FCanvasRenderThreadScope @ 148905ef0

FCanvasRenderThreadScope * __thiscall
FCanvasRenderThreadScope::FCanvasRenderThreadScope(FCanvasRenderThreadScope *this,FCanvas *param_1)

{
  TArray<TFunction<void___cdecl(FCanvasRenderContext_&)>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  this->Canvas = param_1;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TArray<TFunction<void___cdecl(FCanvasRenderContext_&)>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
    this->RenderCommands = pTVar1;
    return this;
  }
  this->RenderCommands =
       (TArray<TFunction<void___cdecl(FCanvasRenderContext_&)>,TSizedDefaultAllocator<32>_> *)0x0;
  return this;
}

// ~FCanvasRenderThreadScope @ 14890dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCanvasRenderThreadScope::~FCanvasRenderThreadScope(FCanvasRenderThreadScope *this)

{
  FCanvas *pFVar1;
  TArray<TFunction<void___cdecl(FCanvasRenderContext_&)>,TSizedDefaultAllocator<32>_> *pTVar2;
  FRenderTarget *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  TIntPoint<int>_u_0 TVar7;
  code *pcVar8;
  bool bVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar1 = this->Canvas;
  pTVar2 = this->RenderCommands;
  pFVar3 = pFVar1->RenderTarget;
  TVar4 = (pFVar1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  TVar5 = (pFVar1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  TVar6 = (pFVar1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
  TVar7 = (pFVar1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
  bVar9 = pFVar1->bScaledToRenderTarget;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x40,8);
  local_80[1] = (code *)pTVar2;
  local_80[2] = (code *)pFVar3;
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(TIntPoint<int>_u_0 *)(local_80 + 3) = TVar4;
  *(TIntPoint<int>_u_0 *)(local_80 + 4) = TVar5;
  *(TIntPoint<int>_u_0 *)(local_80 + 5) = TVar6;
  *(TIntPoint<int>_u_0 *)(local_80 + 6) = TVar7;
  *(bool *)(local_80 + 7) = bVar9;
  if (local_80 != (code **)&DAT_fffffffffffffff8) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCanvasRenderThreadScope::~FCanvasRenderThreadScope_::__l2::TSTR_DispatchCanvasRenderCommands601>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::__l2::TSTR_DispatchCanvasRenderCommands601>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar12 = (ulonglong)local_48;
    if (2 < uVar12) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  return;
}

// operator() @ 14890fb80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FCanvasRenderThreadScope::
AddPass<`FCanvasBatchedElementRenderItem::Render_GameThread'::__l6::<lambda_1>_>'::__l2::<lambda_1>
::operator()(void *this,FCanvasRenderContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGEventName *pFVar3;
  FRenderTargetParameters *pFVar4;
  FRenderTargetBinding local_38;
  FRDGEventName local_20;
  
  pFVar3 = FRDGEventName::FRDGEventName(&local_20,L"%s");
  pFVar4 = FRDGAllocator::Alloc<FRenderTargetParameters>
                     ((FRDGAllocator *)&param_1->GraphBuilder->_padding_);
  local_38.Texture = param_1->RenderTarget;
  local_38.ResolveTexture = (FRDGTexture *)0x0;
  local_38.LoadAction = ELoad;
  local_38.MipIndex = '\0';
  local_38.ArraySlice = -1;
  bVar2 = FRenderTargetBinding::Validate(&local_38);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (pFVar4->RenderTargets).Output.Elements[0].Texture = local_38.Texture;
  (pFVar4->RenderTargets).Output.Elements[0].ResolveTexture = local_38.ResolveTexture;
  (pFVar4->RenderTargets).Output.Elements[0].LoadAction = local_38.LoadAction;
  (pFVar4->RenderTargets).Output.Elements[0].MipIndex = local_38.MipIndex;
  (pFVar4->RenderTargets).Output.Elements[0].ArraySlice = local_38.ArraySlice;
  *(undefined4 *)&(pFVar4->RenderTargets).Output.Elements[0].field_0x14 = local_38._20_4_;
  FCanvasRenderContext::
  AddPass<_FCanvasBatchedElementRenderItem::Render_GameThread_::__l6::<lambda_1>,FRenderTargetParameters>
            (param_1,pFVar3,pFVar4,(<lambda_1> *)((longlong)this + 8));
  if (local_20.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14890ffe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  TIntPoint<int>_u_0 TVar4;
  longlong lVar5;
  code *pcVar6;
  EShaderPlatform EVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  uint uVar10;
  uint uVar11;
  IRendererModule *pIVar12;
  FRDGEventName *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TKeyValue<FRHITexture_*,FRDGTexture_*> *pTVar17;
  TRefCountPtr<IPooledRenderTarget> TVar18;
  FRDGTexture *pFVar19;
  FShaderParametersMetadata *pFVar20;
  wchar_t *pwVar21;
  FRDGPass *this_00;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined1 auStackY_908 [32];
  uint local_8d8 [2];
  FRenderTargetBinding local_8d0;
  wchar_t *local_8b8;
  undefined1 local_8b0 [64];
  FRHIUniformBufferLayout *local_870;
  FShaderParametersMetadata *local_868;
  FRDGEventName local_860;
  FRDGEventName local_848;
  FRDGEventName local_830;
  undefined1 local_818 [24];
  FRDGAllocator local_800 [7];
  ForElementType<FRDGPass_*> local_670;
  uint local_668;
  uint local_664 [25];
  TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
  local_600 [10];
  FRDGUserValidation local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_908;
  pIVar12 = GetRendererModule();
  (**(code **)((longlong)*pIVar12 + 0x90))(pIVar12,param_1);
  EVar7 = GMaxRHIShaderPlatform;
  pFVar13 = FRDGEventName::FRDGEventName(&local_848,1,L"CanvasRenderThreadScope");
  local_860.EventFormat = pFVar13->EventFormat;
  ::FString::FString(&local_860.FormattedEventName,&pFVar13->FormattedEventName);
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,&local_860,None,EVar7);
  if (local_848.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_8b0._8_8_ = local_818;
  cVar2 = *(char *)((longlong)this + 0x30);
  lVar15 = *(longlong *)((longlong)this + 0x20);
  lVar3 = *(longlong *)((longlong)this + 0x28);
  TVar4 = (TIntPoint<int>_u_0)
          *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)((longlong)this + 0x10))->_s_0;
  lVar5 = *(longlong *)((longlong)this + 0x18);
  local_8b0._16_8_ =
       (**(code **)(**(longlong **)((longlong)this + 8) + 8))
                 (*(longlong **)((longlong)this + 8),local_818);
  if ((((int)((ulonglong)lVar5 >> 0x20) - TVar4._s_0.Y) * ((int)lVar5 - TVar4._s_0.X) < 1) ||
     (local_8b0._24_8_ = TVar4, local_8b0._32_8_ = lVar5, cVar2 != '\0')) {
    local_8b0._32_8_ = *(longlong *)(local_8b0._16_8_ + 0xa4);
    local_8b0._24_8_ = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  }
  uVar24 = 0;
  uVar11 = *(uint *)(*(longlong *)this + 8);
  local_8b0._40_8_ = lVar15;
  local_8b0._48_8_ = lVar3;
  if (uVar11 != 0) {
    do {
      plVar22 = *(longlong **)this;
      uVar10 = 0;
      if ((int)uVar24 < (int)plVar22[1]) {
        uVar10 = ~uVar24 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar23 = (undefined8 *)(*plVar22 + (longlong)(int)uVar24 * 0x30);
      UE::Core::Private::Function::CheckCallable((void *)*puVar23);
      pcVar6 = (code *)*puVar23;
      plVar22 = (longlong *)puVar23[5];
      if ((longlong *)puVar23[5] == (longlong *)0x0) {
        plVar22 = puVar23 + 2;
      }
      uVar14 = (**(code **)(*plVar22 + 8))();
      (*pcVar6)(uVar14,local_8b0 + 8);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar11);
  }
  puVar23 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  lVar15 = (**(code **)(*(longlong *)*puVar23 + 0x20))();
  if (*(byte *)(lVar15 + 0x31) < 2) goto LAB_148910448;
  pFVar16 = (FScriptContainerElement *)
            FRDGAllocator::Alloc<FRenderTargetParameters>((FRDGAllocator *)(local_818 + 0x18));
  puVar23 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
  pwVar21 = (wchar_t *)*puVar23;
  uVar11 = ((uint)((ulonglong)pwVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar21 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_8b8 = pwVar21;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
  ::FindIdByHash(local_600,(FHashType)(uint)local_8d8,
                 (FRHITexture **)(ulonglong)((uVar11 >> 0x10 ^ uVar11) & 0x7fffffff));
  if (local_8d8[0] == 0xffffffff) {
LAB_148910259:
    TVar18 = CreateRenderTarget((FRHITexture *)local_8b0,pwVar21);
    pFVar19 = FRDGBuilder::RegisterExternalTexture
                        ((FRDGBuilder *)local_818,
                         (TRefCountPtr<IPooledRenderTarget> *)TVar18.Reference,None);
    if ((longlong *)local_8b0._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_8b0._0_8_ + 0x38))();
    }
  }
  else {
    pTVar17 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
              ::FData::Get(&local_600[0].KeyValueData,local_8d8[0]);
    puVar1 = &(pTVar17->Pair).field_0x8;
    if ((puVar1 == (undefined1 *)0x0) ||
       (pFVar19 = *(FRDGTexture **)puVar1, pFVar19 == (FRDGTexture *)0x0)) goto LAB_148910259;
  }
  local_8d0.Texture =
       (FRDGTexture *)
       (**(code **)(**(longlong **)((longlong)this + 8) + 8))
                 (*(longlong **)((longlong)this + 8),local_818);
  local_8d0.LoadAction = ELoad;
  local_8d0.MipIndex = '\0';
  local_8d0.ArraySlice = -1;
  local_8d0.ResolveTexture = pFVar19;
  bVar8 = FRenderTargetBinding::Validate(&local_8d0);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x220,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (((FRenderTargetBindingSlots *)&pFVar16->field_0x0)->Output).Elements[0].Texture =
       local_8d0.Texture;
  *(FRDGTexture **)&pFVar16[8].field_0x0 = local_8d0.ResolveTexture;
  *(ulonglong *)&pFVar16[0x10].field_0x0 = CONCAT44(local_8d0._20_4_,local_8d0._16_4_);
  pFVar13 = FRDGEventName::FRDGEventName(&local_830,1,L"MSAAResolveCanvas");
  pFVar20 = FRenderTargetParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&local_118,pFVar16,pFVar20,pFVar13,Raster);
  FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)local_818);
  pwVar21 = FRDGEventName::GetTCHAR(pFVar13);
  EVar9 = FRDGBuilder::OverridePassFlags((FRDGBuilder *)local_818,pwVar21,Raster);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),400,8);
  local_8b0._56_8_ = pFVar16;
  if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_870 = (pFVar20->Layout).Reference;
  if (local_870 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_870);
  }
  local_868 = pFVar20;
  FRDGPass::FRDGPass(this_00,pFVar13,(FRDGParameterStruct *)(local_8b0 + 0x38),EVar9,Async);
  this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar16;
  this_00->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRenderTargetParameters,``FCanvasRenderThreadScope::~FCanvasRenderThreadScope'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>_>
        ::_vftable_;
  FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)local_818,this_00);
  if (local_668 == local_664[0]) {
    local_668 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,&local_670,(int *)local_664);
  }
  local_670.Data[(int)local_668] = this_00;
  (this_00->Handle).Index = local_668;
  local_668 = local_668 + 1;
  FRDGBuilder::SetupParameterPass((FRDGBuilder *)local_818,this_00);
  if (local_830.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.FormattedEventName.Data.AllocatorInstance.Data);
  }
LAB_148910448:
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  puVar23 = *(undefined8 **)this;
  if (puVar23 != (undefined8 *)0x0) {
    DestructItems<TFunction<void___cdecl(FCanvasRenderContext_&)>,int>
              ((TFunction<void___cdecl(FCanvasRenderContext_&)> *)*puVar23,*(int *)(puVar23 + 1));
    if ((void *)*puVar23 != (void *)0x0) {
      FMemory::Free((void *)*puVar23);
    }
    ::operator_delete(puVar23,0x10);
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  return;
}

