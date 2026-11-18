// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// SetSRV @ 145a31890

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::SetSRV
          (void *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ForElementType<FD3D12RayTracingScene_*> *pFVar1;
  FD3D12RayTracingGlobalResourceBinder *this_00;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FD3D12RayTracingScene_*> *pFVar6;
  longlong lVar7;
  ForElementType<FD3D12RayTracingScene_*> local_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = (ulonglong)param_2;
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) +
            0x30;
    if (*(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) goto LAB_145a318f4;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SRV != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x142e,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a318f4:
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar7 + 0x18) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28.SecondaryData._0_4_ = *(undefined4 *)(lVar7 + 0x38);
    local_28.SecondaryData._4_4_ = *(undefined4 *)(lVar7 + 0x3c);
    uStack_18 = *(undefined4 *)(lVar7 + 0x40);
    uStack_14 = *(undefined4 *)(lVar7 + 0x44);
    *(undefined8 *)((longlong)this + uVar3 * 8 + 0x110) = *(undefined8 *)(lVar7 + 0x38);
    *(undefined4 *)((longlong)this + uVar3 * 4 + 0x490) = uStack_14;
    *(ulonglong *)((longlong)this + 0x7a8) =
         *(ulonglong *)((longlong)this + 0x7a8) | 1L << (uVar3 & 0x3f);
  }
  this_00 = *(FD3D12RayTracingGlobalResourceBinder **)this;
  if ((*(longlong *)(lVar7 + 0x18) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xff,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
            (this_00,*(FD3D12BaseShaderResource **)(lVar7 + 0x10));
  local_28.InlineData = *(uchar (*) [8])(lVar7 + 0x90);
  if (local_28.InlineData != (uchar  [8])0x0) {
    pFVar1 = (ForElementType<FD3D12RayTracingScene_*> *)((longlong)this + 0x790);
    pFVar6 = *(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798);
    if (*(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798) ==
        (ForElementType<FD3D12RayTracingScene_*> *)0x0) {
      pFVar6 = pFVar1;
    }
    if (((pFVar6 <= &local_28) &&
        (&local_28 <
         (ForElementType<FD3D12RayTracingScene_*> *)
         (pFVar6->InlineData + (longlong)*(int *)((longlong)this + 0x7a4) * 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int *)((longlong)this + 0x7a0);
    if (iVar5 == *(int *)((longlong)this + 0x7a4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_>
                        (0x808,pFVar1,(int *)((longlong)this + 0x7a4));
    }
    *(int *)((longlong)this + 0x7a0) = iVar5 + 1;
    pFVar6 = *(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798);
    if (*(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798) ==
        (ForElementType<FD3D12RayTracingScene_*> *)0x0) {
      pFVar6 = pFVar1;
    }
    *(uchar (*) [8])(pFVar6->InlineData + (longlong)iVar5 * 8) = local_28.InlineData;
  }
  return;
}

// SetSRV @ 145a31a80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::SetSRV
          (void *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  ForElementType<FD3D12RayTracingScene_*> *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FD3D12RayTracingScene_*> *pFVar7;
  longlong lVar8;
  ForElementType<FD3D12RayTracingScene_*> local_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar4 = (ulonglong)param_2;
  if (param_1 == (FRHIShaderResourceView *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) +
            0x30;
    if (*(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) == 0) {
      lVar8 = 0;
    }
    if (lVar8 != 0) goto LAB_145a31ae4;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("SRV != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x142e,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145a31ae4:
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar8 + 0x18) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_28.SecondaryData._0_4_ = *(undefined4 *)(lVar8 + 0x38);
    local_28.SecondaryData._4_4_ = *(undefined4 *)(lVar8 + 0x3c);
    uStack_18 = *(undefined4 *)(lVar8 + 0x40);
    uStack_14 = *(undefined4 *)(lVar8 + 0x44);
    *(undefined8 *)((longlong)this + uVar4 * 8 + 0x110) = *(undefined8 *)(lVar8 + 0x38);
    *(undefined4 *)((longlong)this + uVar4 * 4 + 0x490) = uStack_14;
    *(ulonglong *)((longlong)this + 0x7a8) =
         *(ulonglong *)((longlong)this + 0x7a8) | 1L << (uVar4 & 0x3f);
  }
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar8 + 0x18) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xff,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
            (*(FD3D12RayTracingShaderBindingTableInternal **)(lVar2 + 8),*(uint *)(lVar2 + 0x2c),
             *(uint *)(lVar2 + 0x28),*(ERayTracingLocalShaderBindingType *)(lVar2 + 0x20),
             *(FD3D12BaseShaderResource **)(lVar8 + 0x10));
  local_28.InlineData = *(uchar (*) [8])(lVar8 + 0x90);
  if (local_28.InlineData != (uchar  [8])0x0) {
    pFVar1 = (ForElementType<FD3D12RayTracingScene_*> *)((longlong)this + 0x790);
    pFVar7 = *(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798);
    if (*(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798) ==
        (ForElementType<FD3D12RayTracingScene_*> *)0x0) {
      pFVar7 = pFVar1;
    }
    if (((pFVar7 <= &local_28) &&
        (&local_28 <
         (ForElementType<FD3D12RayTracingScene_*> *)
         (pFVar7->InlineData + (longlong)*(int *)((longlong)this + 0x7a4) * 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = *(int *)((longlong)this + 0x7a0);
    if (iVar6 == *(int *)((longlong)this + 0x7a4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_>
                        (0x808,pFVar1,(int *)((longlong)this + 0x7a4));
    }
    *(int *)((longlong)this + 0x7a0) = iVar6 + 1;
    pFVar7 = *(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798);
    if (*(ForElementType<FD3D12RayTracingScene_*> **)((longlong)this + 0x798) ==
        (ForElementType<FD3D12RayTracingScene_*> *)0x0) {
      pFVar7 = pFVar1;
    }
    *(uchar (*) [8])(pFVar7->InlineData + (longlong)iVar6 * 8) = local_28.InlineData;
  }
  return;
}

// SetTexture @ 145a31c90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::SetTexture
          (void *this,FRHITexture *param_1,uchar param_2)

{
  uint uVar1;
  FRHITexture *pFVar2;
  longlong *plVar3;
  FD3D12Resource *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar11 = 0;
  uVar12 = (ulonglong)param_2;
  lVar9 = lVar11;
  if ((param_1 != (FRHITexture *)0x0) &&
     (lVar8 = (**(code **)(param_1->_padding_ + 0x48))(param_1), lVar8 != 0)) {
    lVar9 = *(longlong *)(lVar8 + 0x200 + (ulonglong)uVar1 * 8);
  }
  lVar9 = *(longlong *)(lVar9 + 0x240);
  if (lVar9 == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8588839787656375226>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1446,"SRV");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar1 = *(uint *)((longlong)this + 8);
    pFVar2 = (GBlackTexture->TextureRHI).Reference;
    lVar9 = lVar11;
    if ((pFVar2 != (FRHITexture *)0x0) &&
       (lVar8 = (**(code **)(pFVar2->_padding_ + 0x48))(), lVar8 != 0)) {
      lVar9 = *(longlong *)(lVar8 + 0x200 + (ulonglong)uVar1 * 8);
    }
    lVar9 = *(longlong *)(lVar9 + 0x240);
    if ((lVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SRV != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x144a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar9 + 0x18) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = *(undefined4 *)(lVar9 + 0x44);
    *(undefined8 *)((longlong)this + uVar12 * 8 + 0x110) = *(undefined8 *)(lVar9 + 0x38);
    *(undefined4 *)((longlong)this + uVar12 * 4 + 0x490) = uVar6;
    *(ulonglong *)((longlong)this + 0x7a8) =
         *(ulonglong *)((longlong)this + 0x7a8) | 1L << (uVar12 & 0x3f);
  }
  plVar3 = *(longlong **)this;
  plVar10 = (longlong *)*plVar3;
  uVar1 = 0;
  bVar7 = *(uint *)(plVar10 + 0x5f) != 0;
  if (bVar7) {
    for (; (*(uint *)(plVar10 + 0x5f) >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  uVar12 = 0x20;
  if (bVar7) {
    uVar12 = (ulonglong)uVar1;
  }
  if (param_1 != (FRHITexture *)0x0) {
    lVar9 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
    plVar10 = (longlong *)*plVar3;
    if (lVar9 != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x200 + uVar12 * 8);
    }
  }
  pFVar4 = *(FD3D12Resource **)(lVar11 + 400);
  if ((pFVar4 == (FD3D12Resource *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (plVar10[0x31] == 0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  FD3D12CommandList::UpdateResidency((FD3D12CommandList *)plVar10[0x31],pFVar4);
  return;
}

// SetTexture @ 145a31e80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::SetTexture
          (void *this,FRHITexture *param_1,uchar param_2)

{
  uint uVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar9 = 0;
  uVar4 = (ulonglong)param_2;
  lVar8 = lVar9;
  if ((param_1 != (FRHITexture *)0x0) &&
     (lVar7 = (**(code **)(param_1->_padding_ + 0x48))(param_1), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar7 + 0x200 + (ulonglong)uVar1 * 8);
  }
  lVar8 = *(longlong *)(lVar8 + 0x240);
  if (lVar8 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8588839787656375226>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1446,"SRV");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(uint *)((longlong)this + 8);
    pFVar2 = (GBlackTexture->TextureRHI).Reference;
    if ((pFVar2 != (FRHITexture *)0x0) &&
       (lVar8 = (**(code **)(pFVar2->_padding_ + 0x48))(), lVar8 != 0)) {
      lVar9 = *(longlong *)(lVar8 + 0x200 + (ulonglong)uVar1 * 8);
    }
    lVar8 = *(longlong *)(lVar9 + 0x240);
    if ((lVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SRV != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x144a,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar8 + 0x18) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = *(undefined4 *)(lVar8 + 0x44);
    *(undefined8 *)((longlong)this + uVar4 * 8 + 0x110) = *(undefined8 *)(lVar8 + 0x38);
    *(undefined4 *)((longlong)this + uVar4 * 4 + 0x490) = uVar5;
    *(ulonglong *)((longlong)this + 0x7a8) =
         *(ulonglong *)((longlong)this + 0x7a8) | 1L << (uVar4 & 0x3f);
  }
  lVar9 = *(longlong *)this;
  FD3D12RayTracingShaderBindingTableInternal::AddReferencedTexture
            (*(FD3D12RayTracingShaderBindingTableInternal **)(lVar9 + 8),*(uint *)(lVar9 + 0x2c),
             *(uint *)(lVar9 + 0x28),*(ERayTracingLocalShaderBindingType *)(lVar9 + 0x20),param_1);
  return;
}

// SetUAV @ 145a32010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::SetUAV
          (void *this,FRHIUnorderedAccessView *param_1,uchar param_2)

{
  FD3D12RayTracingGlobalResourceBinder *this_00;
  code *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  uVar2 = (ulonglong)param_2;
  if (param_1 == (FRHIUnorderedAccessView *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) +
            0x30;
    if (*(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) goto LAB_145a32074;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UAV != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x141c,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145a32074:
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar5 + 0x18) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = *(undefined4 *)(lVar5 + 0x44);
    *(undefined8 *)((longlong)this + uVar2 * 8 + 0x310) = *(undefined8 *)(lVar5 + 0x38);
    *(undefined4 *)((longlong)this + uVar2 * 4 + 0x590) = uVar3;
    *(ulonglong *)((longlong)this + 0x7b8) =
         *(ulonglong *)((longlong)this + 0x7b8) | 1L << (uVar2 & 0x3f);
  }
  this_00 = *(FD3D12RayTracingGlobalResourceBinder **)this;
  if ((*(longlong *)(lVar5 + 0x18) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xff,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
            (this_00,*(FD3D12BaseShaderResource **)(lVar5 + 0x10));
  return;
}

// SetUAV @ 145a32140

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::SetUAV
          (void *this,FRHIUnorderedAccessView *param_1,uchar param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)param_2;
  if (param_1 == (FRHIUnorderedAccessView *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) +
            0x30;
    if (*(longlong *)(&param_1[4].field_0x10 + (ulonglong)*(uint *)((longlong)this + 8) * 8) == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) goto LAB_145a321a4;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("UAV != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x141c,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a321a4:
  if (*(char *)((longlong)this + 0xc) == '\0') {
    if ((*(longlong *)(lVar6 + 0x18) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = *(undefined4 *)(lVar6 + 0x44);
    *(undefined8 *)((longlong)this + uVar3 * 8 + 0x310) = *(undefined8 *)(lVar6 + 0x38);
    *(undefined4 *)((longlong)this + uVar3 * 4 + 0x590) = uVar4;
    *(ulonglong *)((longlong)this + 0x7b8) =
         *(ulonglong *)((longlong)this + 0x7b8) | 1L << (uVar3 & 0x3f);
  }
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar6 + 0x18) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xff,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
            (*(FD3D12RayTracingShaderBindingTableInternal **)(lVar1 + 8),*(uint *)(lVar1 + 0x2c),
             *(uint *)(lVar1 + 0x28),*(ERayTracingLocalShaderBindingType *)(lVar1 + 0x20),
             *(FD3D12BaseShaderResource **)(lVar6 + 0x10));
  return;
}

