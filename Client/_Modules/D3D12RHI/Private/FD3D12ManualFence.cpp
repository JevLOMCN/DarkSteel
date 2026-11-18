// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12ManualFence @ 1459ee6c0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ManualFence * __thiscall
FD3D12ManualFence::FD3D12ManualFence(FD3D12ManualFence *this,FD3D12Adapter *param_1)

{
  ID3D12Device *pIVar1;
  code *pcVar2;
  FD3D12Device **ppFVar3;
  bool bVar4;
  int iVar5;
  FD3D12ManualFence *pFVar6;
  longlong lVar7;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar8;
  TStaticArray<FD3D12Device_*,8,4294967295> *pTVar9;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *pTVar10;
  TPairInitializer<FD3D12Queue_*_&&,TRefCountPtr<ID3D12Fence>_&&> local_res8;
  TArray<FD3D12Queue,TFixedAllocator<3>_> *local_res18 [2];
  FString local_58;
  TArray<FD3D12Queue,TFixedAllocator<3>_> **local_48;
  TRefCountPtr<ID3D12Fence> **local_40;
  
  this->Parent = param_1;
  *(undefined8 *)&this->Fences = 0;
  *(undefined8 *)&(this->Fences).field_0x8 = 0;
  *(undefined8 *)&(this->Fences).field_0x20 = 0;
  *(undefined4 *)&(this->Fences).field_0x28 = 0;
  *(undefined4 *)&(this->Fences).field_0x2c = 0x80;
  *(undefined4 *)&(this->Fences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Fences).field_0x34 = 0;
  *(undefined8 *)&(this->Fences).field_0x40 = 0;
  *(undefined4 *)&(this->Fences).field_0x48 = 0;
  (this->NextFenceValueTOP).Counter = 0;
  this->NextFenceValueBOP = 0;
  pTVar9 = &this->Parent->Devices;
  this->CompletedFenceValue = 0;
  lVar7 = (longlong)(int)GNumExplicitGPUsForRendering;
  if (((int)GNumExplicitGPUsForRendering < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FD3D12ManualFence *)(*pcVar2)();
    return pFVar6;
  }
  ppFVar3 = pTVar9->Elements;
  while( true ) {
    if (pTVar9 == (TStaticArray<FD3D12Device_*,8,4294967295> *)(ppFVar3 + lVar7)) {
      return this;
    }
    pTVar8 = &pTVar9->Elements[0]->Queues;
    iVar5 = (pTVar9->Elements[0]->Queues).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) break;
    pTVar10 = (TArray<FD3D12Queue,TFixedAllocator<3>_> *)
              ((pTVar8->AllocatorInstance).InlineData + iVar5);
    if (pTVar8 != pTVar10) {
      local_48 = local_res18;
      local_40 = &local_res8.Value;
      do {
        local_res8.Value = (TRefCountPtr<ID3D12Fence> *)0x0;
        pIVar1 = (this->Parent->RootDevice).Reference;
        iVar5 = (**(code **)((longlong)*pIVar1 + 0x120))
                          (pIVar1,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,&local_res8.Value)
        ;
        if (iVar5 < 0) {
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar5,
                     "Parent->GetD3DDevice()->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(Fence.GetInitReference()))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                     ,0x97,(ID3D12Device *)0x0,&local_58);
        }
        (*(code *)(local_res8.Value)->Reference[6])(local_res8.Value,L"Manual Fence");
        local_res18[0] = pTVar8;
        TSet<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FD3D12Queue_*_&&,TRefCountPtr<ID3D12Fence>_&&>_>
                  ((TSet<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>,FDefaultSetAllocator>
                    *)&this->Fences,&local_res8,(bool *)&local_48);
        if (local_res8.Value != (TRefCountPtr<ID3D12Fence> *)0x0) {
          (*(code *)(local_res8.Value)->Reference[2])();
        }
        pTVar8 = (TArray<FD3D12Queue,TFixedAllocator<3>_> *)
                 ((pTVar8->AllocatorInstance).InlineData + 1);
      } while (pTVar8 != pTVar10);
    }
    pTVar9 = (TStaticArray<FD3D12Device_*,8,4294967295> *)(pTVar9->Elements + 1);
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FD3D12ManualFence *)(*pcVar2)();
  return pFVar6;
}

// AdvanceBOP @ 145a006c0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ManualFence::AdvanceBOP(FD3D12ManualFence *this)

{
  undefined1 *puVar1;
  TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
  *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulong64 uVar8;
  longlong *plVar9;
  code *pcVar10;
  TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
  *pTVar11;
  bool bVar12;
  FD3D12PayloadBase *this_00;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FD3D12PayloadBase *local_b8;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_b0;
  TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this->NextFenceValueBOP = this->NextFenceValueBOP + 1;
  uVar17 = *(int *)&(this->Fences).field_0x8 - *(int *)&(this->Fences).field_0x34;
  uVar8 = this->NextFenceValueBOP;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  iVar18 = 0;
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
  }
  iVar6 = *(int *)&(this->Fences).field_0x28;
  puVar1 = &(this->Fences).field_0x10;
  pTVar2 = &this->Fences;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = local_80;
  if (iVar6 != 0) {
    puVar20 = *(uint **)&(this->Fences).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    local_80 = 0;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      local_80 = local_80 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_84 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145a007ae;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_94 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uStack_94 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iStack_84 = local_80 + -1 + local_res10;
    if (iVar6 < iStack_84) {
      iStack_84 = iVar6;
    }
  }
LAB_145a007ae:
  uVar17 = *(uint *)&(this->Fences).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_78 = *(int *)&(this->Fences).field_0x8 - *(int *)&(this->Fences).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iVar18);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  iStack_98 = iVar18;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar7 = *(uint *)&(this->Fences).field_0x28;
  if (uVar17 != uVar7) {
    puVar19 = *(undefined1 **)&(this->Fences).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145a008ad;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    uVar17 = local_res18 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar17) {
      uVar17 = uVar7;
    }
  }
LAB_145a008ad:
  while( true ) {
    pTVar11 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar17) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2))
    break;
    puVar4 = (undefined8 *)(*(longlong *)pTVar11 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    this_00 = ::operator_new(0x360);
    if (this_00 == (FD3D12PayloadBase *)0x0) {
      this_00 = (FD3D12PayloadBase *)0x0;
    }
    else {
      FD3D12PayloadBase::FD3D12PayloadBase(this_00,(FD3D12Queue *)*puVar4);
      this_00->_padding_ = (longlong)&___7FD3D12Payload__6B_;
    }
    plVar9 = (longlong *)puVar4[1];
    piVar3 = &(this_00->ManualFencesToSignal).ArrayMax;
    iVar18 = (this_00->ManualFencesToSignal).ArrayNum;
    local_b8 = this_00;
    if (iVar18 == *piVar3) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this_00->ManualFencesToSignal).AllocatorInstance,piVar3);
    }
    pFVar15 = (this_00->ManualFencesToSignal).AllocatorInstance.Data + (longlong)iVar18 * 0x10;
    (this_00->ManualFencesToSignal).ArrayNum = iVar18 + 1;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    *(longlong **)pFVar15 = plVar9;
    *(ulong64 *)(pFVar15 + 8) = uVar8;
    if (((local_b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar18 = local_b0.ArrayNum;
    if (local_b0.ArrayNum == local_b0.ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
    }
    local_b0.ArrayNum = iVar18 + 1;
    *(FD3D12PayloadBase **)(local_b0.AllocatorInstance.Data + (longlong)iVar18 * 8) = local_b8;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_b0);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// AdvanceTOP @ 145a00a80

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ManualFence::AdvanceTOP(FD3D12ManualFence *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  (this->NextFenceValueTOP).Counter = (this->NextFenceValueTOP).Counter + 1;
  UNLOCK();
  return;
}

// GetCompletedFenceValue @ 145a18000

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ulong64 __thiscall FD3D12ManualFence::GetCompletedFenceValue(FD3D12ManualFence *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (!param_1) {
    return this->CompletedFenceValue;
  }
  iVar2 = *(int *)&(this->Fences).field_0x28;
  iVar12 = 0;
  uVar5 = 1;
  uVar11 = 0xffffffffffffffff;
  puVar1 = &(this->Fences).field_0x10;
  iVar14 = 0;
  iVar6 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->Fences).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145a180bf;
      uVar10 = puVar15[lVar9 + 1];
    }
    uVar5 = -uVar10 & uVar10;
    uVar8 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = iVar14 + -1 + (int)lVar9;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_145a180bf:
  uVar10 = *(uint *)&(this->Fences).field_0x28;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Fences).field_0x8 - *(int *)&(this->Fences).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar5 = *(uint *)&(this->Fences).field_0x28;
  if (uVar10 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Fences).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145a181d0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_145a181d0:
  while( true ) {
    if (*(int *)&(this->Fences).field_0x8 - *(int *)&(this->Fences).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar8 = (**(code **)(**(longlong **)
                           (*(longlong *)&this->Fences + 8 +
                           (longlong)TStack_60.CurrentBitIndex * 0x18) + 0x40))();
    if (uVar8 < uVar11) {
      uVar11 = uVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->CompletedFenceValue = uVar11;
  return uVar11;
}

