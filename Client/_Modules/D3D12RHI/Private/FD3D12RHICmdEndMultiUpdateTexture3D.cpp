// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12RHICmdEndMultiUpdateTexture3D @ 145a444c0

FD3D12RHICmdEndMultiUpdateTexture3D * __thiscall
FD3D12RHICmdEndMultiUpdateTexture3D::FD3D12RHICmdEndMultiUpdateTexture3D
          (FD3D12RHICmdEndMultiUpdateTexture3D *this,
          TArray<FUpdateTexture3DData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FD3D12RHICmdEndMultiUpdateTexture3D *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_res8;
  
  uVar13 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12RHICmdEndMultiUpdateTexture3D__6B_;
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FD3D12RHICmdEndMultiUpdateTexture3D *)(*pcVar5)();
    return pFVar9;
  }
  this->MipIdx = *(uint *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FD3D12RHICmdEndMultiUpdateTexture3D *)(*pcVar5)();
    return pFVar9;
  }
  this_00 = *(FRHITexture **)(param_1->AllocatorInstance).Data;
  (this->DstTexture).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  piVar1 = &(this->UpdateInfos).ArrayNum;
  (this->UpdateInfos).ArrayMax = 0;
  piVar2 = &(this->UpdateInfos).ArrayMax;
  *piVar1 = 0;
  (this->UpdateInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = param_1->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar8,&(this->UpdateInfos).AllocatorInstance,0,piVar2);
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,uVar8,&(this->UpdateInfos).AllocatorInstance,piVar1,piVar2);
  memset((this->UpdateInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x38,0,
         (longlong)(int)uVar8 * 0x38);
  if (0 < (this->UpdateInfos).ArrayNum) {
    local_res8 = 0;
    uVar14 = uVar13;
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < (this->UpdateInfos).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FD3D12RHICmdEndMultiUpdateTexture3D *)(*pcVar5)();
        return pFVar9;
      }
      pFVar11 = (this->UpdateInfos).AllocatorInstance.Data + uVar14;
      uVar8 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FD3D12RHICmdEndMultiUpdateTexture3D *)(*pcVar5)();
        return pFVar9;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar4 + local_res8 + 0xc);
      *(undefined4 *)(pFVar11 + 4) = *(undefined4 *)(pFVar4 + local_res8 + 0x10);
      *(undefined4 *)(pFVar11 + 8) = *(undefined4 *)(pFVar4 + local_res8 + 0x14);
      *(undefined4 *)(pFVar11 + 0x2c) = *(undefined4 *)(pFVar4 + local_res8 + 0x2c);
      *(undefined4 *)(pFVar11 + 0x28) = *(undefined4 *)(pFVar4 + local_res8 + 0x28);
      *(undefined4 *)(pFVar11 + 0x24) = *(undefined4 *)(pFVar4 + local_res8 + 0x24);
      lVar10 = (**(code **)(((this->DstTexture).Reference)->_padding_ + 0x20))();
      *(uint *)(pFVar11 + 0x20) = GPixelFormats[*(byte *)(lVar10 + 0x33)].PlatformFormat;
      uVar3 = *(undefined4 *)(pFVar4 + local_res8 + 0x30);
      *(undefined4 *)(pFVar11 + 0x30) = uVar3;
      if (((char)uVar3 != '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SubresourceFootprint.RowPitch % ( 256 ) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                             ,0x9f5,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FD3D12RHICmdEndMultiUpdateTexture3D *)(*pcVar5)();
        return pFVar9;
      }
      lVar10 = *(longlong *)(pFVar4 + local_res8 + 0x48);
      uVar13 = (ulonglong)(uVar12 + 1);
      local_res8 = local_res8 + 0x88;
      *(longlong *)(pFVar11 + 0x10) = lVar10;
      uVar14 = uVar14 + 0x38;
      *(undefined8 *)(pFVar11 + 0x18) = *(undefined8 *)(lVar10 + 0x60);
    } while ((int)(uVar12 + 1) < (this->UpdateInfos).ArrayNum);
  }
  return this;
}

// ~FD3D12RHICmdEndMultiUpdateTexture3D @ 145a482e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RHICmdEndMultiUpdateTexture3D::~FD3D12RHICmdEndMultiUpdateTexture3D
          (FD3D12RHICmdEndMultiUpdateTexture3D *this)

{
  FD3D12ResourceLocation *this_00;
  FScriptContainerElement *pFVar1;
  FRHITexture *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->_padding_ = (longlong)&___7FD3D12RHICmdEndMultiUpdateTexture3D__6B_;
  if (0 < (this->UpdateInfos).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->UpdateInfos).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FD3D12ResourceLocation **)
                 ((this->UpdateInfos).AllocatorInstance.Data + lVar6 + 0x10);
      if (this_00 != (FD3D12ResourceLocation *)0x0) {
        FD3D12ResourceLocation::ReleaseResource(this_00);
        ::operator_delete(this_00,0x78);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < (this->UpdateInfos).ArrayNum);
  }
  (this->UpdateInfos).ArrayNum = 0;
  if ((this->UpdateInfos).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->UpdateInfos).AllocatorInstance,0,&(this->UpdateInfos).ArrayMax);
  }
  pFVar1 = (this->UpdateInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = (this->DstTexture).Reference;
  if (this_01 == (FRHITexture *)0x0) {
    return;
  }
  FRHIResource::Release((FRHIResource *)this_01);
  return;
}

// Execute @ 145a64980

/* WARNING: Removing unreachable block (ram,0x000145a649a4) */
/* WARNING: Removing unreachable block (ram,0x000145a64a15) */
/* WARNING: Removing unreachable block (ram,0x000145a649ba) */
/* WARNING: Removing unreachable block (ram,0x000145a64da3) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RHICmdEndMultiUpdateTexture3D::Execute
          (FD3D12RHICmdEndMultiUpdateTexture3D *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  EPixelFormat EVar2;
  undefined4 uVar3;
  uint uVar4;
  FRHITexture *pFVar5;
  FRHIComputeCommandList *this_00;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  longlong *plVar12;
  FD3D12CommandContext *this_01;
  FRHIBreadcrumbAllocator *pFVar13;
  FRHIBreadcrumbNode *pFVar14;
  longlong lVar15;
  FD3D12Resource *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  uint local_res20;
  uint local_158;
  ED3D12Access local_154;
  longlong *local_148;
  FRHIBreadcrumbScope local_138;
  undefined1 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  uint local_114;
  FName local_110;
  FD3D12Resource *local_108;
  undefined8 local_100;
  char *local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  wchar_t *pwStack_d8;
  D3D12_TEXTURE_COPY_LOCATION local_d0;
  D3D12_TEXTURE_COPY_LOCATION local_a0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pFVar5 = (this->DstTexture).Reference;
  local_res20 = 0;
  local_120 = 0;
  local_148 = (longlong *)0x0;
  local_158 = 0;
  plVar12 = &pFVar5[1]._padding_;
  if (plVar12 != (longlong *)0x0) {
    local_res20 = (uint)*plVar12;
    local_11c = 0;
    if (local_res20 != 0) {
      for (; (local_res20 >> local_11c & 1) == 0; local_11c = local_11c + 1) {
      }
    }
    local_158 = 0x20;
    if (local_res20 != 0) {
      local_158 = local_11c;
    }
    local_100 = CONCAT44(local_158,local_res20);
    local_148 = *(longlong **)
                 ((longlong)(&pFVar5[1].TextureDesc.AliasableFormats.AllocatorInstance + -5) +
                 (ulonglong)local_158 * 8);
  }
  local_118 = 0;
  do {
    if (local_148 == (longlong *)0x0) {
      `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId =
           `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::Desc.TraceGpuSpecId;
      `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId =
           `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::Desc.TraceCpuSpecId;
      return;
    }
    if ((local_148[0x28] == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar1 = param_1->ActivePipelines;
    uVar3 = *(undefined4 *)(local_148[0x28] + 8);
    if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b7,
                           L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b8,
                           L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar12 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
    this_01 = (FD3D12CommandContext *)(**(code **)(*plVar12 + 0x290))(plVar12,uVar3);
    pFVar16 = (FD3D12Resource *)local_148[0x32];
    uVar4 = this->MipIdx;
    local_d0.pResource = (pFVar16->Resource).Reference;
    local_d0.field2_0x10._8_8_ = 0;
    local_d0.field2_0x10.PlacedFootprint.Offset._4_4_ = 0;
    local_d0.field2_0x10.SubresourceIndex = uVar4;
    local_d0.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    local_d0.field2_0x10._16_8_ = 0;
    local_d0.field2_0x10._24_8_ = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_154 = Unknown;
    local_60 = 0;
    uStack_58 = 0;
    bVar8 = false;
    local_108 = pFVar16;
    if (!pFVar16->bRequiresResourceStateTracking) {
      local_154 = pFVar16->DefaultD3D12Access;
      if ((((local_154 & ReadOnlyExclusiveMask) == Unknown) ||
          ((local_154 & WritableMask) == Unknown)) &&
         (((local_154 & WriteOnlyExclusiveMask) == Unknown ||
          ((local_154 & ReadableMask) == Unknown)))) {
        if ((local_154 >> 0x14 & 1) == 0) goto LAB_145a64bc0;
        if ((local_154 == Unknown) || ((local_154 & local_154 - CPURead) != Unknown))
        goto LAB_145a64b9a;
      }
      else {
LAB_145a64b9a:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAccess(BeforeD3D12Access)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                           ,0x2ed,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_145a64bc0:
        if ((local_154 == Unknown) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BeforeD3D12Access != ED3D12Access::Unknown",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                               ,0x2ee,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FD3D12ContextCommon::AddBarrier
                ((FD3D12ContextCommon *)this_01,pFVar16,local_154,CopyDest,uVar4);
      bVar8 = true;
    }
    FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_01);
    uVar19 = 0;
    if (0 < (this->UpdateInfos).ArrayNum) {
      lVar18 = 0;
      do {
        pvVar7 = ThreadLocalStoragePointer;
        uVar10 = 0;
        if ((int)uVar19 < (this->UpdateInfos).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (this->UpdateInfos).AllocatorInstance.Data + lVar18;
        local_128 = 0;
        local_a0.pResource =
             *(ID3D12Resource **)(*(longlong *)(*(longlong *)(pFVar17 + 0x10) + 0x10) + 0x20);
        local_a0.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
        local_a0.field2_0x10.PlacedFootprint.Offset = *(undefined8 *)(pFVar17 + 0x18);
        local_a0.field2_0x10._8_8_ = *(undefined8 *)(pFVar17 + 0x20);
        local_a0.field2_0x10._16_8_ = *(undefined8 *)(pFVar17 + 0x28);
        local_a0.field2_0x10._24_8_ = *(undefined8 *)(pFVar17 + 0x30);
        if ((*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          uStack_e8 = 0xa25;
          local_f0 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
          ;
          pwStack_d8 = L"EndMultiUpdateTexture3D";
          local_e0 = 0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._0_4_ = 0x5108f120;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._4_4_ = 1;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._0_4_ = 0xa25;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._4_4_ = uStack_e4;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._0_4_ = 0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._4_4_ = 0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._0_4_ = 0x510915a0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._4_4_ = 1;
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)
                     &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                      ::__l2::Desc.Cs,4000);
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceGpuSpecId = 0;
          `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(``FD3D12RHICmdEndMultiUpdateTexture3D::Execute'::__l13::<lambda_1>::operator()<>'::
                 __l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if ((*(longlong *)&this_01->field_0x1d8 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExecutingCmdList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                               ,0x221,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(FRHIComputeCommandList **)&this_01->field_0x1d8;
        pFVar13 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
        pFVar14 = FMemStackBase::Alloc(&pFVar13->Inner,0x50,8);
        pFVar14->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
        pFVar14->Parent = FRHIBreadcrumbNode::Sentinel;
        pFVar14->ListLink = (FRHIBreadcrumbNode *)0x0;
        (pFVar14->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
        (pFVar14->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
        pFVar14->TraceCpuSpecId = 0;
        pFVar14->TraceCpuMetadataId = 0;
        pFVar14->Data =
             (FRHIBreadcrumbData *)
             &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc;
        pFVar14->Allocator = pFVar13;
        LOCK();
        UNLOCK();
        uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
        FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
        pFVar14->BeginPipes = (atomic<unsigned_char>)0x0;
        pFVar14->EndPipes = (atomic<unsigned_char>)0x0;
        pFVar14->ID = uVar10;
        pFVar14->_padding_ =
             (longlong)
             &
             ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
        ;
        pFVar14[1]._padding_ =
             (longlong)
             &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc;
        if ((`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
           (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
          EnterCriticalSection
                    ((LPCRITICAL_SECTION)
                     &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                      ::__l2::Desc.Cs);
          if (`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
            aVar11 = (atomic<unsigned_int>)
                     FCpuProfilerTrace::OutputEventType
                               ((wchar_t *)
                                CONCAT44(`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                         ::__l2::Desc._padding_._4_4_,
                                         (undefined4)
                                         `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                         ::__l2::Desc._padding_),
                                (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                                 ::__l2::Desc._padding_._4_4_,
                                                 (undefined4)
                                                 `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                                 ::__l2::Desc._padding_),
                                (uint)`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                                      ::__l2::Desc._padding_);
            LOCK();
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
            ::__l2::Desc.TraceCpuSpecId = aVar11;
            UNLOCK();
          }
          LeaveCriticalSection
                    ((LPCRITICAL_SECTION)
                     &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                      ::__l2::Desc.Cs);
        }
        pFVar14->TraceCpuSpecId =
             (uint)`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
                   ::__l2::Desc.TraceCpuSpecId;
        FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_138,this_00,pFVar14);
        local_128 = 1;
        local_110 = *(FName *)(local_148 + 3);
        lVar15 = (**(code **)(*local_148 + 0x20))(local_148);
        EVar2 = *(EPixelFormat *)(lVar15 + 0x33);
        lVar15 = (**(code **)(*local_148 + 0x20))(local_148);
        FD3D12CommandContext::CopyTextureRegionChecked
                  (this_01,&local_d0,*(int *)pFVar17,*(int *)(pFVar17 + 4),*(int *)(pFVar17 + 8),
                   *(EPixelFormat *)(lVar15 + 0x33),&local_a0,(D3D12_BOX *)0x0,EVar2,&local_110);
        pFVar16 = (FD3D12Resource *)local_148[0x32];
        if ((pFVar16 == (FD3D12Resource *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                               ,0x1a5,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)&this_01->field_0x188 == 0) {
          (**(code **)(*(longlong *)this_01 + 8))(this_01);
        }
        FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this_01->field_0x188,pFVar16);
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_138);
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x38;
        pFVar16 = local_108;
      } while ((int)uVar19 < (this->UpdateInfos).ArrayNum);
    }
    FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_01);
    if (bVar8) {
      FD3D12ContextCommon::AddBarrier
                ((FD3D12ContextCommon *)this_01,pFVar16,CopyDest,local_154,uVar4);
    }
    local_res20 = local_res20 & ~(1 << ((byte)local_158 & 0x1f));
    local_158 = 0;
    if (local_res20 != 0) {
      for (; (local_res20 >> local_158 & 1) == 0; local_158 = local_158 + 1) {
      }
    }
    if (local_res20 == 0) {
      return;
    }
    local_148 = (longlong *)local_148[(ulonglong)local_158 + 0x40];
    local_114 = local_158;
  } while( true );
}

