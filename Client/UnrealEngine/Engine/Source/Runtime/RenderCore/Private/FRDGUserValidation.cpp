// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 59

// FRDGUserValidation @ 145d8de00

FRDGUserValidation * __thiscall
FRDGUserValidation::FRDGUserValidation(FRDGUserValidation *this,FRDGAllocator *param_1)

{
  code *pcVar1;
  FRDGUserValidation *pFVar2;
  bool bVar3;
  
  this->Allocator = param_1;
  bVar3 = GRDGBuilderActive != false;
  *(undefined8 *)&(this->ResourceMap).Elements = 0;
  *(undefined8 *)&(this->ResourceMap).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ResourceMap).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ResourceMap).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ResourceMap).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResourceMap).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceMap).Elements.field_0x34 = 0;
  (this->ResourceMap).Hash.SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  (this->ResourceMap).HashSize = 0;
  this->bHasExecuted = false;
  this->bHasExecuteBegun = false;
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRDGBuilderActive",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x45,
                       L"Another FRDGBuilder already exists on the stack. Only one builder can be created at a time. This builder instance should be merged into the parent one."
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar2 = (FRDGUserValidation *)(*pcVar1)();
      return pFVar2;
    }
  }
  GRDGBuilderActive = true;
  return this;
}

// ~FRDGUserValidation @ 145d91100

void __thiscall FRDGUserValidation::~FRDGUserValidation(FRDGUserValidation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasExecuted == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasExecuted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x4b,
                       L"Render graph execution is required to ensure consistency with immediate mode."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ResourceMap).HashSize = 0;
  TSparseArray<TSparseSetElement<FRDGResource_*>,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<FRDGResource_*>,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
            (&(this->ResourceMap).Elements);
  return;
}

// operator() @ 145d955c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FRDGUserValidation::ValidateAddPass'::__l2::<lambda_2>::operator()
          (void *this,FRDGViewableResource *param_1)

{
  undefined1 *puVar1;
  FRDGViewableResource *local_res10 [3];
  undefined8 local_18;
  FRDGViewableResource **local_10;
  
  if ((param_1->bExternal == '\0' && param_1->bProduced == '\0') &&
     (!(bool)param_1->bQueuedForUpload)) {
    local_18 = *(undefined8 *)this;
    local_10 = local_res10;
    local_res10[0] = param_1;
    ``FRDGUserValidation::ValidateAddPass'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
    operator()(&local_18);
  }
  return;
}

// operator() @ 145d96620

void __thiscall
`FRDGUserValidation::ValidateAddPass'::__l2::<lambda_3>::operator()
          (void *this,FRDGResource *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
    lVar5 = *(longlong *)(lVar1 + 0x58);
    if (*(longlong *)(lVar1 + 0x58) == 0) {
      lVar5 = lVar1 + 0x48;
    }
    if (lVar5 == 0) {
      lVar5 = lVar1 + 0x40;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar1 + 0x60) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(FRDGResource **)(*(longlong *)(lVar1 + 8) + (longlong)iVar4 * 0x10) == param_1) {
          return;
        }
        iVar4 = *(int *)(*(longlong *)(lVar1 + 8) + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResourceMap.Contains(Resource)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                     ,0x292,
                     L"Resource at %p registered with pass %s is not part of the graph and is likely a dangling pointer or garbage value."
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// operator() @ 145d96870

void __thiscall
`FRDGUserValidation::ValidateAddPass'::__l2::<lambda_4>::operator()
          (void *this,FRDGResource *param_1)

{
  FRDGResource *local_res10 [3];
  undefined8 local_18;
  FRDGResource **local_10;
  
  if ((**(char **)this == '\0') && (**(char **)((longlong)this + 8) == '\0')) {
    local_18 = *(undefined8 *)((longlong)this + 0x10);
    local_10 = local_res10;
    local_res10[0] = param_1;
    ``FRDGUserValidation::ValidateAddPass'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::
    operator()(&local_18);
  }
  return;
}

// operator() @ 145d96c10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FRDGUserValidation::ValidateAddPass'::__l2::<lambda_5>::operator()
          (void *this,FRDGViewableResource *param_1,ERHIAccess param_2)

{
  code *pcVar1;
  bool bVar2;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((**(char **)this == '\0') && ((param_2 & (CopyDest|CopySrc|CPURead)) != None)) {
    GetRHIAccessName(&local_48,param_2);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsCopy || !EnumHasAnyFlags(Access, AccessMaskCopy)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x29e,
                       L"Pass \'%s\' uses resource \'%s\' with access \'%s\' containing states which require the \'ERDGPass::Copy\' flag."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((**(char **)((longlong)this + 0x10) == '\0') && ((param_2 & (UAVCompute|SRVCompute)) != None))
  {
    GetRHIAccessName(&local_38,param_2);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsAnyCompute || !EnumHasAnyFlags(Access, AccessMaskCompute)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x29f,
                       L"Pass \'%s\' uses resource \'%s\' with access \'%s\' containing states which require the \'ERDGPass::Compute\' or \'ERDGPassFlags::AsyncCompute\' flag."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((**(char **)((longlong)this + 0x18) == '\0') &&
     ((param_2 &
      (DSVWrite|ResolveDst|RTV|UAVGraphics|DSVRead|ResolveSrc|SRVGraphics|VertexOrIndexBuffer|
      Present)) != None)) {
    GetRHIAccessName(&local_28,param_2);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsRaster || !EnumHasAnyFlags(Access, AccessMaskRaster)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x2a0,
                       L"Pass \'%s\' uses resource \'%s\' with access \'%s\' containing states which require the \'ERDGPass::Raster\' flag."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((**(char **)((longlong)this + 0x10) == '\0') && (**(char **)((longlong)this + 0x18) == '\0'))
     && ((param_2 & IndirectArgs) != None)) {
    GetRHIAccessName(&local_18,param_2);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsAnyCompute || bIsRaster || !EnumHasAnyFlags(Access, AccessMaskComputeOrRaster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x2a1,
                       L"Pass \'%s\' uses resource \'%s\' with access \'%s\' containing states which require the \'ERDGPassFlags::Compute\' or \'ERDGPassFlags::AsyncCompute\' or \'ERDGPass::Raster\' flag."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator() @ 145d97960

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FRDGUserValidation::ValidateAddPass'::__l2::<lambda_8>::operator()
          (void *this,FRDGParameter *param_1)

{
  EUniformBufferBaseType EVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  FRDGViewableResource *pFVar6;
  bool bVar7;
  FRDGTexture *pFVar8;
  FRDGTextureSRV *pFVar9;
  FRDGTextureUAV *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferUAV *pFVar12;
  TRDGResourceAccessArray<FRDGTextureAccess> *pTVar13;
  TRDGResourceAccessArray<FRDGBufferAccess> *pTVar14;
  FRenderTargetBindingSlots *pFVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ERHIAccess local_48;
  ERHIAccess local_30;
  
  EVar1 = param_1->MemberType;
  if ((((EVar1 != UBMT_RENDER_TARGET_BINDING_SLOTS) && (EVar1 != UBMT_RDG_BUFFER_ACCESS_ARRAY)) &&
      (EVar1 != UBMT_RDG_TEXTURE_ACCESS_ARRAY)) &&
     (*(FRDGResource **)param_1->MemberPtr != (FRDGResource *)0x0)) {
    __l2::<lambda_3>::operator()(*(void **)this,*(FRDGResource **)param_1->MemberPtr);
  }
  switch(EVar1) {
  case UBMT_RDG_TEXTURE:
    pFVar8 = FRDGParameter::GetAsTexture(param_1);
    if (pFVar8 != (FRDGTexture *)0x0) {
      __l2::<lambda_2>::operator()(*(void **)((longlong)this + 8),(FRDGViewableResource *)pFVar8);
    }
    break;
  case UBMT_RDG_TEXTURE_ACCESS:
    if ((EVar1 != UBMT_RDG_TEXTURE_ACCESS) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemberType == UBMT_RDG_TEXTURE_ACCESS",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                           ,0x87,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar18 = param_1->MemberPtr;
    uVar4 = puVar18[2];
    pFVar6 = (FRDGViewableResource *)*puVar18;
    local_48 = (ERHIAccess)uVar4;
    **(byte **)((longlong)this + 0x18) = **(byte **)((longlong)this + 0x18) | (uVar4 & 0x2fc00) != 0
    ;
    if (pFVar6 != (FRDGViewableResource *)0x0) {
      puVar18 = *(undefined8 **)((longlong)this + 0x28);
      __l2::<lambda_5>::operator()((void *)*puVar18,pFVar6,local_48);
      if ((uVar4 & 0x2fc00) != 0) {
        puVar16 = (undefined1 *)puVar18[1];
        goto LAB_145d97c66;
      }
    }
    break;
  case UBMT_RDG_TEXTURE_ACCESS_ARRAY:
    pTVar13 = FRDGParameter::GetAsTextureAccessArray(param_1);
    iVar2 = *(int *)&pTVar13->field_0x8;
    puVar17 = *(undefined8 **)pTVar13;
    puVar18 = puVar17 + (longlong)iVar2 * 3;
    while( true ) {
      if (*(int *)&pTVar13->field_0x8 != iVar2) {
        `TCheckedPointerIterator<FRDGTextureAccess_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar17 == puVar18) break;
      puVar3 = *(undefined8 **)((longlong)this + 0x28);
      uVar4 = puVar17[2];
      local_30 = (ERHIAccess)uVar4;
      __l2::<lambda_5>::operator()((void *)*puVar3,(FRDGViewableResource *)*puVar17,local_30);
      if ((uVar4 & 0x2fc00) != 0) {
        *(undefined1 *)puVar3[1] = 1;
      }
      puVar17 = puVar17 + 3;
    }
    break;
  case UBMT_RDG_TEXTURE_SRV:
  case UBMT_RDG_TEXTURE_NON_PIXEL_SRV:
    pFVar9 = FRDGParameter::GetAsTextureSRV(param_1);
    if (pFVar9 != (FRDGTextureSRV *)0x0) {
      pFVar8 = (pFVar9->Desc).Texture;
LAB_145d97a50:
      __l2::<lambda_4>::operator()(*(void **)((longlong)this + 0x10),(FRDGResource *)pFVar8);
      __l2::<lambda_2>::operator()(*(void **)((longlong)this + 8),(FRDGViewableResource *)pFVar8);
    }
    break;
  case UBMT_RDG_TEXTURE_UAV:
    **(undefined1 **)((longlong)this + 0x18) = 1;
    pFVar10 = FRDGParameter::GetAsTextureUAV(param_1);
    if (pFVar10 != (FRDGTextureUAV *)0x0) {
      __l2::<lambda_4>::operator()
                (*(void **)((longlong)this + 0x10),(FRDGResource *)(pFVar10->Desc).Texture);
    }
    break;
  case UBMT_RDG_BUFFER_ACCESS:
    if ((EVar1 != UBMT_RDG_BUFFER_ACCESS) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemberType == UBMT_RDG_BUFFER_ACCESS",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                           ,0x99,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar18 = param_1->MemberPtr;
    pFVar6 = (FRDGViewableResource *)*puVar18;
    uVar4 = puVar18[1];
    if (pFVar6 != (FRDGViewableResource *)0x0) {
      puVar18 = *(undefined8 **)((longlong)this + 0x30);
      __l2::<lambda_5>::operator()((void *)*puVar18,pFVar6,(ERHIAccess)uVar4);
      if ((uVar4 & 0x2fc00) != 0) {
        puVar16 = (undefined1 *)puVar18[1];
        goto LAB_145d97c66;
      }
    }
    break;
  case UBMT_RDG_BUFFER_ACCESS_ARRAY:
    pTVar14 = FRDGParameter::GetAsBufferAccessArray(param_1);
    iVar2 = *(int *)&pTVar14->field_0x8;
    puVar18 = *(undefined8 **)pTVar14;
    puVar17 = puVar18 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)&pTVar14->field_0x8 != iVar2) {
        `TCheckedPointerIterator<FRDGBufferAccess_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar18 == puVar17) break;
      puVar3 = *(undefined8 **)((longlong)this + 0x30);
      uVar4 = puVar18[1];
      __l2::<lambda_5>::operator()
                ((void *)*puVar3,(FRDGViewableResource *)*puVar18,(ERHIAccess)uVar4);
      if ((uVar4 & 0x2fc00) != 0) {
        *(undefined1 *)puVar3[1] = 1;
      }
      puVar18 = puVar18 + 2;
    }
    break;
  case UBMT_RDG_BUFFER_SRV:
    pFVar11 = FRDGParameter::GetAsBufferSRV(param_1);
    if (pFVar11 != (FRDGBufferSRV *)0x0) {
      pFVar8 = (FRDGTexture *)(pFVar11->Desc).Buffer;
      goto LAB_145d97a50;
    }
    break;
  case UBMT_RDG_BUFFER_UAV:
    **(undefined1 **)((longlong)this + 0x18) = 1;
    pFVar12 = FRDGParameter::GetAsBufferUAV(param_1);
    if (pFVar12 != (FRDGBufferUAV *)0x0) {
      __l2::<lambda_4>::operator()
                (*(void **)((longlong)this + 0x10),(FRDGResource *)(pFVar12->Desc).Buffer);
    }
    break;
  case UBMT_RDG_UNIFORM_BUFFER:
  case UBMT_NESTED_STRUCT:
  case UBMT_INCLUDED_STRUCT:
  case UBMT_REFERENCED_STRUCT:
    break;
  case UBMT_RENDER_TARGET_BINDING_SLOTS:
    puVar18 = *(undefined8 **)((longlong)this + 0x38);
    pFVar15 = FRDGParameter::GetAsRenderTargetBindingSlots(param_1);
    *puVar18 = pFVar15;
    puVar16 = *(undefined1 **)((longlong)this + 0x18);
LAB_145d97c66:
    *puVar16 = 1;
    break;
  default:
    goto switchD_145d979d6_default;
  }
switchD_145d979d6_default:
  return;
}

// ExecuteGuard @ 145db4830

void __thiscall
FRDGUserValidation::ExecuteGuard(FRDGUserValidation *this,wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasExecuted != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasExecuted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x50,
                       L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetAllowRHIAccess @ 145dcbd00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl FRDGUserValidation::SetAllowRHIAccess(FRDGPass *param_1,bool param_2)

{
  FRHIUniformBufferLayout *this;
  undefined1 local_res10 [24];
  FRDGParameterStruct local_28;
  
  if (GRDGValidation != 0) {
    local_28.Contents = (param_1->ParameterStruct).Contents;
    this = (param_1->ParameterStruct).Layout.Reference;
    local_res10[0] = param_2;
    local_28.Layout.Reference = this;
    if (this != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    local_28.Metadata = (param_1->ParameterStruct).Metadata;
    FRDGParameterStruct::Enumerate<_FRDGUserValidation::SetAllowRHIAccess_::__l2::<lambda_1>_>
              (&local_28,(<lambda_1>)local_res10);
    if (this != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
  }
  return;
}

// TryMarkForClobber @ 145dd3830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRDGUserValidation::TryMarkForClobber(FRDGUserValidation *this,FRDGViewableResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGViewableResource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1cf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((param_1->bClobbered == '\0') && (param_1->bExternal == 0)) &&
       (!(bool)param_1->bQueuedForUpload)) {
      bVar2 = IsDebugAllowed(&GRDGDebugResourceFilterName,(wchar_t *)param_1->_padding_);
      if (bVar2) {
        param_1->bClobbered = '\x01';
        return true;
      }
    }
  }
  return false;
}

// ValidateAddPass @ 145dd4550

void __thiscall
FRDGUserValidation::ValidateAddPass
          (FRDGUserValidation *this,FRDGEventName *param_1,ERDGPassFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if ((this->bHasExecuted != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x50,
                           L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_2 & (Copy|AsyncCompute|Compute|Raster)) != None) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, ERDGPassFlags::Copy | ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute | ERDGPassFlags::Raster)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x254,
                           L"Pass %s may not specify any of the (Copy, Compute, AsyncCompute, Raster) flags, because it has no parameters. Use None instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateAddPass @ 145dd4620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRDGUserValidation::ValidateAddPass(FRDGUserValidation *this,FRDGPass *param_1)

{
  ERDGPassFlags EVar1;
  FRDGTexture *pFVar2;
  code *pcVar3;
  FRenderTargetBindingSlots *pFVar4;
  FRenderTargetBindingSlots *pFVar5;
  bool bVar6;
  byte bVar7;
  FRenderTargetBindingSlots *pFVar8;
  FRenderTargetBinding *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FRDGPass *local_res10;
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_168;
  bool local_167;
  <lambda_1> local_166 [6];
  FScriptContainerElement *local_160;
  FRenderTargetBindingSlots *local_158;
  FRDGTexture *local_150;
  <lambda_2> local_148;
  <lambda_3> local_140;
  FRDGTexture *local_130;
  FRDGTexture *local_128;
  FRDGTexture *local_120;
  FRDGParameterStruct local_118;
  <lambda_7> local_100;
  <lambda_6> local_f0;
  FScriptContainerElement **local_e0;
  FRDGTexture **local_d8;
  FScriptContainerElement **local_d0;
  FRDGTexture **local_c8;
  FScriptContainerElement **local_c0;
  FRDGTexture **local_b8;
  FScriptContainerElement **local_b0;
  FRDGTexture **local_a8;
  <lambda_5> local_a0;
  <lambda_4> local_80;
  <lambda_8> local_68;
  
  if (GRDGValidation == 0) {
    return;
  }
  uVar11 = 0;
  local_158 = (FRenderTargetBindingSlots *)0x0;
  local_118.Layout.Reference = (param_1->ParameterStruct).Layout.Reference;
  local_118.Contents = (param_1->ParameterStruct).Contents;
  EVar1 = param_1->Flags;
  local_res10 = param_1;
  if (local_118.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_118.Layout.Reference);
  }
  local_118.Metadata = (param_1->ParameterStruct).Metadata;
  if ((local_res10->FullPathIfDebug).Data.ArrayNum < 2) {
    if ((local_res10->Name).FormattedEventName.Data.ArrayNum < 2) {
      local_160 = (FScriptContainerElement *)(local_res10->Name).EventFormat;
    }
    else {
      local_160 = (local_res10->Name).FormattedEventName.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_160 = (local_res10->FullPathIfDebug).Data.AllocatorInstance.Data;
  }
  bVar7 = (byte)EVar1;
  local_166[0] = (<lambda_1>)0x0;
  local_res20[0] = (bool)(bVar7 & 1);
  local_res18[0] = false;
  local_167 = (bool)(bVar7 >> 3 & 1);
  local_168 = (EVar1 & (AsyncCompute|Compute)) != None;
  local_148.PassName = (wchar_t **)&local_160;
  local_140.Pass = &local_res10;
  local_80.bIsAnyCompute = &local_168;
  local_80.bIsRaster = local_res20;
  local_80.PassName = (wchar_t **)&local_160;
  local_a0.bIsCopy = &local_167;
  local_a0.Pass = &local_res10;
  local_a0.bIsAnyCompute = &local_168;
  local_a0.bIsRaster = local_res20;
  local_f0.CheckResourceAccess = &local_a0;
  local_f0.bCanProduce = local_res18;
  local_100.CheckResourceAccess = &local_a0;
  local_100.bCanProduce = local_res18;
  local_68.CheckValidResource = &local_140;
  local_68.MarkAsConsumed = &local_148;
  local_68.CheckComputeOrRaster = &local_80;
  local_68.bCanProduce = local_res18;
  local_68.MarkAsProduced = local_166;
  local_68.CheckTextureAccess = &local_100;
  local_68.CheckBufferAccess = &local_f0;
  local_68.RenderTargetBindingSlots = &local_158;
  local_140.__this = this;
  FRDGParameterStruct::Enumerate<_FRDGUserValidation::ValidateAddPass_::__l2::<lambda_8>_>
            (&local_118,&local_68);
  if ((((local_res18[0] == false) && ((EVar1 & NeverCull) == None)) &&
      (((local_118.Layout.Reference)->Flags & HasNonGraphOutputs) == None)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCanProduce || EnumHasAnyFlags(PassFlags, ERDGPassFlags::NeverCull) || PassParameters.HasExternalOutputs()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x32a,
                         L"Pass \'%s\' has no graph parameters defined on its parameter struct and did not specify \'NeverCull\'. The pass will always be culled."
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_158 == (FRenderTargetBindingSlots *)0x0) {
    if ((local_res20[0] == false) || ((bVar7 >> 5 & 1) != 0)) goto LAB_145dd4aed;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsRaster || bSkipRenderPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x333,
                       L"Pass \'%s\' is set to \'Raster\' but is missing render target binding slots. Use \'SkipRenderPass\' if this is desired."
                      );
    if (bVar6) goto code_r0x000145dd488e;
  }
  else if ((local_res20[0] == false) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsRaster",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                              ,0x32f,
                              L"Pass \'%s\' has render target binding slots but is not set to \'Raster\'."
                             ), bVar6)) {
code_r0x000145dd488e:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_158;
  if (local_158 != (FRenderTargetBindingSlots *)0x0) {
    pFVar2 = local_158->ShadingRateTexture;
    if (pFVar2 != (FRDGTexture *)0x0) {
      `FRDGUserValidation::ValidateAddPass'::__l2::<lambda_3>::operator()
                (&local_140,(FRDGResource *)pFVar2);
      bVar7 = *(byte *)((longlong)&pFVar2->_padding_ + 1);
      local_128 = pFVar2;
      if (((bVar7 & 5) == 0) && (-1 < (char)bVar7)) {
        local_e0 = (FScriptContainerElement **)local_148.PassName;
        local_d8 = &local_128;
        ``FRDGUserValidation::ValidateAddPass'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
        operator()(&local_e0);
      }
    }
    pFVar5 = local_158;
    pFVar2 = (local_158->DepthStencil).Texture;
    pFVar8 = pFVar4;
    if (pFVar2 != (FRDGTexture *)0x0) {
      if (((*(uint *)&(pFVar2->Desc).field_0x0 & 0x8000004) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAnyFlags(Texture->Desc.Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::DepthStencilResolveTarget)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                             ,0x359,
                             L"Pass \'%s\' attempted to bind texture \'%s\' as a depth stencil render target, but the texture has not been created with TexCreate_DepthStencilTargetable."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((pFVar2->Desc).field_0x30 != '\x01') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Texture->Desc.NumMips == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                             ,0x346,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      `FRDGUserValidation::ValidateAddPass'::__l2::<lambda_3>::operator()
                (&local_140,(FRDGResource *)pFVar2);
      bVar7 = (byte)(pFVar5->DepthStencil).DepthStencilAccess.Value;
      if (((((bVar7 & 0xf) != 2) && ((bVar7 & 0xf0) != 0x20)) &&
          (bVar7 = *(undefined1 *)((longlong)&pFVar2->_padding_ + 1), local_120 = pFVar2,
          (bVar7 & 5) == 0)) && (-1 < (char)bVar7)) {
        local_d0 = (FScriptContainerElement **)local_148.PassName;
        local_c8 = &local_120;
        ``FRDGUserValidation::ValidateAddPass'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
        operator()(&local_d0);
      }
    }
    do {
      local_130 = (pFVar8->Output).Elements[0].ResolveTexture;
      local_150 = (pFVar8->Output).Elements[0].Texture;
      if ((local_130 != (FRDGTexture *)0x0) && (local_130 != local_150)) {
        if ((local_150 == (FRDGTexture *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderTarget.GetTexture()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                               ,0x36e,
                               L"Pass %s specified resolve target \'%s\' with a null render target."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((local_130->Desc).field_0x0 & 2) == 0) {
          local_c0 = &local_160;
          local_b8 = &local_130;
          `FRDGUserValidation::ValidateAddPass'::__l62::<lambda_10>::operator()(&local_c0);
        }
        `FRDGUserValidation::ValidateAddPass'::__l2::<lambda_3>::operator()
                  (&local_140,(FRDGResource *)local_150);
      }
      if (local_150 == (FRDGTexture *)0x0) {
        uVar12 = (ulonglong)(8 - (int)uVar11);
        pFVar9 = (pFVar4->Output).Elements + uVar11;
        do {
          if (((pFVar9->Texture != (FRDGTexture *)0x0) ||
              (pFVar9->ResolveTexture != (FRDGTexture *)0x0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RenderTarget.GetTexture() == nullptr && RenderTarget.GetResolveTexture() == nullptr"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                                 ,0x391,
                                 L"Render targets must be packed. No empty spaces in the array."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = pFVar9 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        break;
      }
      if (((local_150->Desc).field_0x0 & 3) == 0) {
        local_b0 = &local_160;
        local_a8 = &local_150;
        `FRDGUserValidation::ValidateAddPass'::__l74::<lambda_11>::operator()(&local_b0);
      }
      `FRDGUserValidation::ValidateAddPass'::__l2::<lambda_3>::operator()
                (&local_140,(FRDGResource *)local_150);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      pFVar8 = (FRenderTargetBindingSlots *)((pFVar8->Output).Elements + 1);
    } while (uVar10 < 8);
  }
LAB_145dd4aed:
  if (local_118.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)local_118.Layout.Reference);
  }
  return;
}

// ValidateAddPass @ 145dd4b30

void __thiscall
FRDGUserValidation::ValidateAddPass
          (FRDGUserValidation *this,void *param_1,FShaderParametersMetadata *param_2,
          FRDGEventName *param_3,ERDGPassFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if ((param_1 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParameterStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x25e,L"Pass \'%s\' created with null parameters."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->bHasExecuted != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x50,
                           L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_4 & (Copy|AsyncCompute|Compute|Raster)) == None) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Flags, ERDGPassFlags::Raster | ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute | ERDGPassFlags::Copy)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x262,
                           L"Pass %s must specify at least one of the following flags: (Copy, Compute, AsyncCompute, Raster)"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((byte)param_4 & 6) == 6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Flags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x265,
                           L"Pass %s specified both Compute and AsyncCompute. They are mutually exclusive."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((byte)param_4 & 5) == 5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Flags, ERDGPassFlags::Raster | ERDGPassFlags::AsyncCompute)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x268,
                           L"Pass %s specified both Raster and AsyncCompute. They are mutually exclusive."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((param_4 & SkipRenderPass) != None) && ((param_4 & Raster) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Flags, ERDGPassFlags::SkipRenderPass) || EnumHasAllFlags(Flags, ERDGPassFlags::Raster)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x26b,
                           L"Pass %s specified SkipRenderPass without Raster. Only raster passes support this flag."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((param_4 & NeverMerge) != None) && ((param_4 & Raster) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Flags, ERDGPassFlags::NeverMerge) || EnumHasAllFlags(Flags, ERDGPassFlags::Raster)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x26e,
                           L"Pass %s specified NeverMerge without Raster. Only raster passes support this flag."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateAddSubresourceAccess @ 145dd4d50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateAddSubresourceAccess
          (FRDGUserValidation *this,FRDGViewableResource *param_1,FRDGSubresourceState *param_2,
          ERHIAccess param_3)

{
  ERHIAccess EVar1;
  code *pcVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  if ((((GRDGValidation != 0) &&
       (EVar1 = param_2->Access, (GRHIMergeableAccessMask & EVar1) == None)) && (EVar1 != None)) &&
     (((param_3 & GRHIMergeableAccessMask) == None && (EVar1 != param_3)))) {
    GetRHIAccessName(&local_18,param_3);
    GetRHIAccessName(&local_28,param_2->Access);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bOldAccessMergeable || bNewAccessMergeable || Subresource.Access == Access",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x247,
                       L"Resource %s has incompatible access states specified for the same subresource. AccessBefore: %s, AccessAfter: %s."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ValidateCommitBuffer @ 145dd6310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCommitBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x189,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((param_1->Desc).Usage & ReservedResource) == None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Buffer->Desc.Usage, EBufferUsageFlags::ReservedResource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x18a,
                         L"Buffer %s is not marked as reserved and thus cannot be queued for reserved resource commit."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->_padding_ & 0x100) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->IsExternal()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x18b,
                         L"Only external buffers support commit operation. It is expected that reserved resource commit mechanism is only used when perserving buffer contents is required."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_2 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommitSizeInBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x18c,L"Attempted to set a reserved buffer commit size of 0 for buffer %s"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateConvertToExternalResource @ 145dd6410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateConvertToExternalResource
          (FRDGUserValidation *this,FRDGViewableResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGViewableResource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1b5,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->bHasExecuteBegun != false) && (param_1->bTransient != '\0')) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuteBegun || !Resource->bTransient",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1b8,
                         L"Unable to convert resource %s to external because passes in the graph have already executed."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateConvertToExternalUniformBuffer @ 145dd64a0

void __thiscall
FRDGUserValidation::ValidateConvertToExternalUniformBuffer
          (FRDGUserValidation *this,FRDGUniformBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if ((param_1 == (FRDGUniformBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x1c2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->bHasExecuteBegun != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuteBegun",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x1c5,
                           L"Unable to convert uniform buffer %s to external because passes in the graph have already executed."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateCreateBuffer @ 145dd6550

void __thiscall
FRDGUserValidation::ValidateCreateBuffer
          (FRDGUserValidation *this,FRDGBufferDesc *param_1,wchar_t *param_2,ERDGBufferFlags param_3
          )

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_2 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name!=nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xf9,L"Creating a buffer requires a valid debug name.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((param_1->Usage & (StructuredBuffer|ByteAddressBuffer)) ==
         (StructuredBuffer|ByteAddressBuffer)) && (param_1->BytesPerElement != 4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.BytesPerElement == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xfe,
                         L"Creating buffer \'%s\' as a structured buffer that is also byte addressable, BytesPerElement must be 4! Instead it is %d"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_3 & SkipTracking) != None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ERDGBufferFlags::SkipTracking)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x101,
                         L"Cannot create buffer %s with the SkipTracking flag. Only registered buffers can use this flag."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateCreateBuffer @ 145dd6680

/* WARNING: Removing unreachable block (ram,0x000145dd66f1) */
/* WARNING: Removing unreachable block (ram,0x000145dd6716) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateBuffer(FRDGUserValidation *this,FRDGBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGBuffer *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
    if ((((param_1->Desc).NumElements * (param_1->Desc).BytesPerElement == 0) &&
        (param_1->NumElementsCallback == (TFunction<unsigned_int___cdecl(void)> *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer->Desc.GetSize() > 0 || Buffer->NumElementsCallback",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x74,L"Creating buffer \'%s\' is zero bytes in size."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateCreateResource @ 145dd6780

/* WARNING: Removing unreachable block (ram,0x000145dd67dc) */
/* WARNING: Removing unreachable block (ram,0x000145dd6801) */

void __thiscall
FRDGUserValidation::ValidateCreateResource(FRDGUserValidation *this,FRDGResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res10;
  FRDGResource *local_res18 [2];
  
  local_res10 = param_1;
  if ((param_1 == (FRDGResource *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x55,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
  ::Emplace<FRDGResource_*_&>(&this->ResourceMap,local_res18,(bool *)&local_res10);
  return;
}

// ValidateCreateSRV @ 145dd6810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateSRV(FRDGUserValidation *this,FRDGBufferSRVDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if ((param_1->Buffer == (FRDGBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x119,L"Buffer SRV created with a null buffer."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->bHasExecuted != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x50,
                           L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateCreateSRV @ 145dd68b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateSRV(FRDGUserValidation *this,FRDGTextureSRVDesc *param_1)

{
  FRDGTexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (GRDGValidation != 0) {
    pFVar1 = param_1->Texture;
    if (pFVar1 == (FRDGTexture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x10c,L"Texture SRV created with a null texture.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = FRHITextureSRVCreateInfo::Validate
                      ((FRHITextureDesc *)&pFVar1->Desc,(FRHITextureSRVCreateInfo *)param_1,
                       (wchar_t *)pFVar1->_padding_,true);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FRDGTextureSRVDesc::CheckValidity(Texture->Desc, Desc, Texture->Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x10e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ValidateCreateSRV @ 145dd69a0

/* WARNING: Removing unreachable block (ram,0x000145dd6a06) */
/* WARNING: Removing unreachable block (ram,0x000145dd6a2b) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateSRV(FRDGUserValidation *this,FRDGBufferSRV *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGBufferSRV *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGBufferSRV *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateSRV @ 145dd6a40

/* WARNING: Removing unreachable block (ram,0x000145dd6aa6) */
/* WARNING: Removing unreachable block (ram,0x000145dd6acb) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateSRV(FRDGUserValidation *this,FRDGTextureSRV *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGTextureSRV *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGTextureSRV *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateTexture @ 145dd6ae0

void __thiscall
FRDGUserValidation::ValidateCreateTexture
          (FRDGUserValidation *this,FRDGTextureDesc *param_1,wchar_t *param_2,
          ERDGTextureFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_2 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name!=nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xdf,L"Creating a texture requires a valid debug name.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FRHITextureDesc::Validate((FRHITextureDesc *)param_1,param_2,true);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FRDGTextureDesc::CheckValidity(Desc, Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xe3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((*(uint *)param_1 >> 0x12 & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::Presentable)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xe6,L"Illegal to create texture %s with presentable flag.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((1 < (byte)param_1->field_0x31) && ((*(ulonglong *)param_1 & 0x20000) != 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsUAVForMSAATexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xed,L"TexCreate_UAV is not allowed on MSAA texture %s.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_3 & SkipTracking) != None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ERDGTextureFlags::SkipTracking)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xef,
                         L"Cannot create texture %s with the SkipTracking flag. Only registered textures can use this flag."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateCreateTexture @ 145dd6c70

/* WARNING: Removing unreachable block (ram,0x000145dd6cd6) */
/* WARNING: Removing unreachable block (ram,0x000145dd6cfb) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateTexture(FRDGUserValidation *this,FRDGTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGTexture *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGTexture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateUAV @ 145dd6d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateUAV(FRDGUserValidation *this,FRDGBufferUAVDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if ((param_1->Buffer == (FRDGBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x135,L"Buffer UAV created with a null buffer."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->bHasExecuted != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x50,
                           L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateCreateUAV @ 145dd6db0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateUAV(FRDGUserValidation *this,FRDGTextureUAVDesc *param_1)

{
  FRDGTexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (GRDGValidation != 0) {
    pFVar1 = param_1->Texture;
    if ((pFVar1 == (FRDGTexture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x126,L"Texture UAV created with a null texture."), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->bHasExecuted != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x50,
                           L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((*(uint *)&pFVar1->Desc >> 0x11 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture->Desc.Flags & ETextureCreateFlags::UAV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x129,
                           L"Attempted to create UAV from texture %s which was not created with TexCreate_UAV"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((byte)(pFVar1->Desc).field_0x30 <= *(byte *)((longlong)&param_1->_padding_ + 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.MipLevel < Texture->Desc.NumMips",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x12a,
                           L"Failed to create UAV at mip %d: the texture %s has only %d mip levels."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ValidateCreateUAV @ 145dd6ee0

/* WARNING: Removing unreachable block (ram,0x000145dd6f46) */
/* WARNING: Removing unreachable block (ram,0x000145dd6f6b) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateUAV(FRDGUserValidation *this,FRDGBufferUAV *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGBufferUAV *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGBufferUAV *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateUAV @ 145dd6f80

/* WARNING: Removing unreachable block (ram,0x000145dd6fe6) */
/* WARNING: Removing unreachable block (ram,0x000145dd700b) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateUAV(FRDGUserValidation *this,FRDGTextureUAV *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGTextureUAV *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGTextureUAV *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateUniformBuffer @ 145dd7020

/* WARNING: Removing unreachable block (ram,0x000145dd7086) */
/* WARNING: Removing unreachable block (ram,0x000145dd70ab) */

void __thiscall
FRDGUserValidation::ValidateCreateUniformBuffer(FRDGUserValidation *this,FRDGUniformBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGUniformBuffer *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGUniformBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateCreateUniformBuffer @ 145dd70c0

void __thiscall
FRDGUserValidation::ValidateCreateUniformBuffer
          (FRDGUserValidation *this,void *param_1,FShaderParametersMetadata *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_2 == (FShaderParametersMetadata *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParameterStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x142,L"Uniform buffer \'%s\' created with null parameters.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateCreateViewableResource @ 145dd71a0

/* WARNING: Removing unreachable block (ram,0x000145dd71fd) */
/* WARNING: Removing unreachable block (ram,0x000145dd7222) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateCreateViewableResource
          (FRDGUserValidation *this,FRDGViewableResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res10;
  FRDGViewableResource *local_res18 [2];
  
  local_res18[0] = param_1;
  if ((param_1 == (FRDGViewableResource *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x55,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
  ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res10,(bool *)local_res18);
  return;
}

// ValidateExecuteBegin @ 145dd7230

void __thiscall FRDGUserValidation::ValidateExecuteBegin(FRDGUserValidation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasExecuted != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasExecuted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x399,
                       L"Render graph execution should only happen once to ensure consistency with immediate mode."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bHasExecuteBegun != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasExecuteBegun",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x39a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bHasExecuteBegun = true;
  return;
}

// ValidateExecuteEnd @ 145dd72b0

void __thiscall FRDGUserValidation::ValidateExecuteEnd(FRDGUserValidation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasExecuteBegun != false) {
    this->bHasExecuted = true;
    GRDGBuilderActive = false;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bHasExecuteBegun",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                     ,0x3a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bHasExecuted = true;
  GRDGBuilderActive = false;
  return;
}

// ValidateExecutePassBegin @ 145dd7310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExecutePassBegin(FRDGUserValidation *this,FRDGPass *param_1)

{
  if ((this->bParallelExecuteEnabled == false) && (GRDGValidation != 0)) {
    SetAllowRHIAccess(param_1,true);
    return;
  }
  return;
}

// ValidateExecutePassEnd @ 145dd7340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExecutePassEnd(FRDGUserValidation *this,FRDGPass *param_1)

{
  if ((this->bParallelExecuteEnabled == false) && (GRDGValidation != 0)) {
    SetAllowRHIAccess(param_1,false);
    return;
  }
  return;
}

// ValidateExternalAccess @ 145dd7370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExternalAccess
          (FRDGUserValidation *this,FRDGViewableResource *param_1,ERHIAccess param_2,
          FRDGPass *param_3)

{
  FRDGViewableResource *local_res10;
  ERHIAccess local_res18 [2];
  FRDGPass *local_res20;
  FRDGViewableResource **local_28;
  FAccessModeState *local_20;
  FRDGPass **local_18;
  ERHIAccess *local_10;
  
  if (GRDGValidation != 0) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    local_res20 = param_3;
    if (((param_1->AccessModeState).Access & param_2) == None) {
      local_28 = &local_res10;
      local_18 = &local_res20;
      local_10 = local_res18;
      local_20 = &param_1->AccessModeState;
      `FRDGUserValidation::ValidateExternalAccess'::__l2::<lambda_1>::operator()(&local_28);
    }
    if (((param_1->AccessModeState).field_0x4 & local_res20->Pipeline & All) == None) {
      local_28 = &local_res10;
      local_18 = &local_res20;
      local_20 = &param_1->AccessModeState;
      `FRDGUserValidation::ValidateExternalAccess'::__l2::<lambda_2>::operator()(&local_28);
    }
  }
  return;
}

// ValidateExtractBuffer @ 145dd7410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExtractBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1a7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
    if (((bVar1 & 5) == 0) && (-1 < (char)bVar1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->bProduced || Resource->bExternal || Resource->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1ab,
                         L"Unable to queue the extraction of the resource %s because it has not been produced by any pass."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_2 == (TRefCountPtr<FRDGPooledBuffer> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBufferPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1a2,L"Texture %s was extracted, but the output texture pointer is null."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ValidateExtractResource @ 145dd74e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExtractResource(FRDGUserValidation *this,FRDGViewableResource *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (FRDGViewableResource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x1a7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->bExternal == '\0' && param_1->bProduced == '\0') &&
     (!(bool)param_1->bQueuedForUpload)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource->bProduced || Resource->bExternal || Resource->bQueuedForUpload",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x1ab,
                       L"Unable to queue the extraction of the resource %s because it has not been produced by any pass."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ValidateExtractTexture @ 145dd7560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateExtractTexture
          (FRDGUserValidation *this,FRDGTexture *param_1,TRefCountPtr<IPooledRenderTarget> *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGTexture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1a7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
    if (((bVar1 & 5) == 0) && (-1 < (char)bVar1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->bProduced || Resource->bExternal || Resource->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1ab,
                         L"Unable to queue the extraction of the resource %s because it has not been produced by any pass."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_2 == (TRefCountPtr<IPooledRenderTarget> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutTexturePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x197,L"Texture %s was extracted, but the output texture pointer is null."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ValidateGetPooledBuffer @ 145dd7630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateGetPooledBuffer(FRDGUserValidation *this,FRDGBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1ec,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->_padding_ & 0x100) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->bExternal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1ed,
                         L"GetPooledBuffer called on buffer %s, but it is not external. Call PreallocateBuffer or register as an external buffer instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateGetPooledTexture @ 145dd76b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateGetPooledTexture(FRDGUserValidation *this,FRDGTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGTexture *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1e1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->_padding_ & 0x100) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->bExternal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1e2,
                         L"GetPooledTexture called on texture %s, but it is not external. Call PreallocateTexture or register as an external texture instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateRegisterExternalBuffer @ 145dd7790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateRegisterExternalBuffer
          (FRDGUserValidation *this,TRefCountPtr<FRDGPooledBuffer> *param_1,wchar_t *param_2,
          ERDGBufferFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_2 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name!=nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xbf,L"Attempted to register external buffer with NULL name.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->Reference == (FRDGPooledBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalPooledBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xc0,L"Attempted to register NULL external buffer.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateRegisterExternalBuffer @ 145dd7860

/* WARNING: Removing unreachable block (ram,0x000145dd66f1) */
/* WARNING: Removing unreachable block (ram,0x000145dd6716) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateRegisterExternalBuffer(FRDGUserValidation *this,FRDGBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *pFStackX_20;
  FRDGBuffer *apFStack_18 [2];
  
  if (GRDGValidation == 0) {
    return;
  }
  if (GRDGValidation != 0) {
    apFStack_18[0] = param_1;
    if ((param_1 == (FRDGBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&pFStackX_20,(bool *)apFStack_18);
    if ((((param_1->Desc).NumElements * (param_1->Desc).BytesPerElement == 0) &&
        (param_1->NumElementsCallback == (TFunction<unsigned_int___cdecl(void)> *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer->Desc.GetSize() > 0 || Buffer->NumElementsCallback",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x74,L"Creating buffer \'%s\' is zero bytes in size."), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateRegisterExternalTexture @ 145dd7880

void __thiscall
FRDGUserValidation::ValidateRegisterExternalTexture
          (FRDGUserValidation *this,TRefCountPtr<IPooledRenderTarget> *param_1,wchar_t *param_2,
          ERDGTextureFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_2 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name!=nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xb3,L"Attempted to register external texture with NULL name.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->Reference == (IPooledRenderTarget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalPooledTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0xb4,L"Attempted to register NULL external texture.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bHasExecuted != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x50,
                         L"Render graph operation \'%s\' with resource \'%s\' must be performed prior to graph execution."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateRegisterExternalTexture @ 145dd7950

/* WARNING: Removing unreachable block (ram,0x000145dd79b6) */
/* WARNING: Removing unreachable block (ram,0x000145dd79db) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateRegisterExternalTexture(FRDGUserValidation *this,FRDGTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGResource *local_res20;
  FRDGTexture *local_18 [2];
  
  if (GRDGValidation != 0) {
    local_18[0] = param_1;
    if ((param_1 == (FRDGTexture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TSet<FRDGResource_*,DefaultKeyFuncs<FRDGResource_*,0>,TSetAllocator<TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>_>
    ::Emplace<FRDGResource_*_&>(&this->ResourceMap,&local_res20,(bool *)local_18);
  }
  return;
}

// ValidateSetAccessFinal @ 145dd79f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateSetAccessFinal
          (FRDGUserValidation *this,FRDGViewableResource *param_1,ERHIAccess param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGViewableResource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1f7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((param_2 == None) ||
        (((param_2 & ReadOnlyExclusiveMask) != None && ((param_2 & WritableMask) != None)))) ||
       (((param_2 & WriteOnlyExclusiveMask) != None && ((param_2 & ReadableMask) != None)))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessFinal != ERHIAccess::Unknown && IsValidAccess(AccessFinal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1f8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->bExternal == '\0' && param_1->bExtracted == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->bExternal || Resource->bExtracted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1f9,
                         L"Cannot set final access on non-external resource \'%s\' unless it is first extracted or preallocated."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->AccessModeState).Mode != Internal) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->AccessModeState.Mode == FRDGViewableResource::EAccessMode::Internal"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x1fa,
                         L"Cannot set final access on a resource in external access mode: %s.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUploadBuffer @ 145dd7b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUploadBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,
          TFunction<void_const_*___cdecl(void)> *param_2,
          TFunction<unsigned___int64___cdecl(void)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x171,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)&param_1->_padding_ + 1) < '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Buffer->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x172,
                         L"Buffer %s already has an upload queued. Only one upload can be done for each graph."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((*(longlong *)param_2 == 0) || (*(longlong *)param_3 == 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialDataCallback && InitialDataSizeCallback",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x173,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUploadBuffer @ 145dd7bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUploadBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,
          TFunction<void_const_*___cdecl(void)> *param_2,
          TFunction<unsigned___int64___cdecl(void)> *param_3,
          TFunction<void___cdecl(void_const_*)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x17d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)&param_1->_padding_ + 1) < '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Buffer->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x17e,
                         L"Buffer %s already has an upload queued. Only one upload can be done for each graph."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((*(longlong *)param_2 == 0) || (*(longlong *)param_3 == 0)) || (*(longlong *)param_4 == 0))
    {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialDataCallback && InitialDataSizeCallback && InitialDataFreeCallback"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x17f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUploadBuffer @ 145dd7cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUploadBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,
          TFunction<void___cdecl(void_*,unsigned_int)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x165,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)&param_1->_padding_ + 1) < '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Buffer->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x166,
                         L"Buffer %s already has an upload queued. Only one upload can be done for each graph."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(longlong *)param_2 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialDataFillCallback",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x167,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUploadBuffer @ 145dd7d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUploadBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,void *param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x14d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)&param_1->_padding_ + 1) < '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Buffer->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x14e,
                         L"Buffer %s already has an upload queued. Only one upload can be done for each graph."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_2 == (void *)0x0) && (param_3 != 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialData || InitialDataSize == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x14f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUploadBuffer @ 145dd7e40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUploadBuffer
          (FRDGUserValidation *this,FRDGBuffer *param_1,void *param_2,ulong64 param_3,
          TFunction<void___cdecl(void_const_*)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x159,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)&param_1->_padding_ + 1) < '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Buffer->bQueuedForUpload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x15a,
                         L"Buffer %s already has an upload queued. Only one upload can be done for each graph."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((param_2 == (void *)0x0) && (param_3 != 0)) || (*(longlong *)param_4 == 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InitialData || InitialDataSize == 0) && InitialDataFreeCallback",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x15b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ValidateUseExternalAccessMode @ 145dd7f20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUseExternalAccessMode
          (FRDGUserValidation *this,FRDGViewableResource *param_1,ERHIAccess param_2,
          ERHIPipeline param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (GRDGValidation != 0) {
    if ((param_1 == (FRDGViewableResource *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x204,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_3 == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pipelines != ERHIPipeline::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x205,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_1->AccessModeState).bLocked != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AccessModeState.bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                           ,0x208,
                           L"Resource is locked in external access mode by the SkipTracking resource flag: %s."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_2 & ReadOnlyExclusiveMask) == None) || ((param_2 & ~ReadOnlyExclusiveMask) != None))
    {
      GetRHIPipelineName(&local_88,param_3);
      GetRHIAccessName(&local_98,param_2);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReadOnlyExclusiveAccess(ReadOnlyAccess)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x209,
                         L"A read only access is required when use external access mode. (Resource: %s, Access: %s, Pipelines: %s)"
                        );
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((param_1->AccessModeState).Mode != Internal) &&
       (((param_1->AccessModeState).Access != param_2 ||
        ((param_1->AccessModeState).Pipelines != param_3)))) {
      GetRHIPipelineName(&local_48,param_3);
      GetRHIPipelineName(&local_58,(param_1->AccessModeState).Pipelines);
      GetRHIAccessName(&local_68,param_2);
      GetRHIAccessName(&local_78,(param_1->AccessModeState).Access);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessModeState.Mode == FRDGViewableResource::EAccessMode::Internal || (AccessModeState.Access == ReadOnlyAccess && AccessModeState.Pipelines == Pipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x212,
                         L"UseExternalAccessMode called on a resource that is already in external access mode, but different parameters were used.\nResource: %s\n\tExisting Access: %s, Requested Access: %s\n\tExisting Pipelines: %s, Requested Pipelines: %s\n"
                        );
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((param_3 & Graphics) == None) &&
       ((param_2 &
        (DSVWrite|ResolveDst|RTV|UAVGraphics|DSVRead|ResolveSrc|SRVGraphics|VertexOrIndexBuffer|
        Present)) != None)) {
      GetRHIPipelineName(&local_28,param_3);
      GetRHIAccessName(&local_38,param_2);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Pipelines, ERHIPipeline::Graphics) || !EnumHasAnyFlags(ReadOnlyAccess, AccessMaskRaster)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x219,
                         L"Raster access flags were specified for external access but the graphics pipe was not specified.\nResource: %s\n\tRequested Access: %s\n\tRequested Pipelines: %s\n"
                        );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ValidateUseInternalAccessMode @ 145dd82a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGUserValidation::ValidateUseInternalAccessMode
          (FRDGUserValidation *this,FRDGViewableResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation != 0) {
    if (param_1 == (FRDGViewableResource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x223,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->AccessModeState).bLocked != '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AccessModeState.bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                         ,0x226,
                         L"Resource is locked in external access mode by the SkipTracking resource flag: %s."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// operator() @ 1504dbc10

bool __thiscall `FRDGUserValidation::ValidateAddPass'::__l62::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5626108275280839539>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5626108275280839539>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504dbc70

bool __thiscall `FRDGUserValidation::ValidateAddPass'::__l74::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5626108275280839550>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5626108275280839550>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504dc7d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
`FRDGUserValidation::ValidateExternalAccess'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5626108275280839220>);
  if (bVar4) {
    GetRHIAccessName(&local_28,**(ERHIAccess **)((longlong)this + 0x18));
    GetRHIAccessName(&local_38,**(ERHIAccess **)((longlong)this + 8));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5626108275280839220>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504dc8bb;
    }
  }
  bVar4 = false;
LAB_1504dc8bb:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504dcba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`FRDGUserValidation::ValidateExternalAccess'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5626108275280839224>);
  if (bVar4) {
    GetRHIPipelineName(&local_28,*(ERHIPipeline *)(**(longlong **)((longlong)this + 0x10) + 0x4b));
    GetRHIPipelineName(&local_38,*(ERHIPipeline *)(*(longlong *)((longlong)this + 8) + 4) & All);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5626108275280839224>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504dcc89;
    }
  }
  bVar4 = false;
LAB_1504dcc89:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

