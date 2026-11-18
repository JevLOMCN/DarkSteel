// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 10

// AddBarriers<D3D12_BUFFER_BARRIER_const_> @ 1459e1490

/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddBarriers<D3D12_BUFFER_BARRIER_const_>
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,
          TArrayView<D3D12_BUFFER_BARRIER_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  uint uStack_34;
  longlong lStack_30;
  
  if (param_2->ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Barriers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x753,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = param_2->ArrayNum;
  piVar1 = &(this->BufferBarriers).ArrayNum;
  iVar8 = *piVar1;
  uVar10 = ((param_3 ^ 1) + 1) * -0x80000000 | 2;
  if ((int)uVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1459e1535:
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,uVar3,&(this->BufferBarriers).AllocatorInstance,piVar1,
                       &(this->BufferBarriers).ArrayMax);
    memcpy((this->BufferBarriers).AllocatorInstance.Data + (longlong)iVar6 * 0x28,param_2->DataPtr,
           (longlong)(int)uVar3 * 0x28);
  }
  else if (uVar3 != 0) goto LAB_1459e1535;
  if (iVar8 != 0) {
    iVar8 = (this->BarrierGroups).ArrayNum;
    uVar9 = iVar8 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->BarrierGroups).ArrayNum;
    if (*(uint *)((this->BarrierGroups).AllocatorInstance.Data + ((longlong)iVar8 + -1) * 0x10) ==
        uVar10) {
      uVar10 = 0;
      if ((int)(iVar8 - 1U) < iVar8) {
        uVar10 = ~(iVar8 - 1U) >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (this->BarrierGroups).AllocatorInstance.Data +
               (longlong)(this->BarrierGroups).ArrayNum * 0x10 + -0xc;
      *(uint *)pFVar2 = *(int *)pFVar2 + uVar3;
      goto LAB_1459e1700;
    }
  }
  lStack_30 = (longlong)*piVar1 - (ulonglong)uVar3;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data;
  local_38 = uVar10;
  uStack_34 = uVar3;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->BarrierGroups).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->BarrierGroups).ArrayNum;
  piVar1 = &(this->BarrierGroups).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
    (this->BarrierGroups).ArrayNum = iVar8;
  }
  (this->BarrierGroups).ArrayNum = iVar8 + 1;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,local_38);
  *(longlong *)(pFVar2 + 8) = lStack_30;
LAB_1459e1700:
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return;
}

// AddBarriers<D3D12_GLOBAL_BARRIER_const_> @ 1459e1760

/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddBarriers<D3D12_GLOBAL_BARRIER_const_>
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,
          TArrayView<D3D12_GLOBAL_BARRIER_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_38;
  uint uStack_34;
  longlong lStack_30;
  
  if (param_2->ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Barriers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x753,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->GlobalBarriers).ArrayNum;
  piVar1 = &(this->GlobalBarriers).ArrayNum;
  uVar3 = param_2->ArrayNum;
  iVar10 = ((param_3 ^ 1) + 1) * -0x80000000;
  if ((int)uVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1459e1804:
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,uVar3,&(this->GlobalBarriers).AllocatorInstance,piVar1,
                       &(this->GlobalBarriers).ArrayMax);
    memcpy((this->GlobalBarriers).AllocatorInstance.Data + (longlong)iVar6 * 0x10,param_2->DataPtr,
           (longlong)(int)uVar3 << 4);
  }
  else if (uVar3 != 0) goto LAB_1459e1804;
  if (iVar8 != 0) {
    iVar8 = (this->BarrierGroups).ArrayNum;
    uVar9 = iVar8 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->BarrierGroups).ArrayNum;
    if (*(int *)((this->BarrierGroups).AllocatorInstance.Data + ((longlong)iVar8 + -1) * 0x10) ==
        iVar10) {
      uVar7 = 0;
      if ((int)(iVar8 - 1U) < iVar8) {
        uVar7 = ~(iVar8 - 1U) >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (this->BarrierGroups).AllocatorInstance.Data +
               (longlong)(this->BarrierGroups).ArrayNum * 0x10 + -0xc;
      *(uint *)pFVar2 = *(int *)pFVar2 + uVar3;
      goto LAB_1459e19c8;
    }
  }
  lStack_30 = (longlong)*piVar1 - (ulonglong)uVar3;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data;
  local_38 = iVar10;
  uStack_34 = uVar3;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->BarrierGroups).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->BarrierGroups).ArrayNum;
  piVar1 = &(this->BarrierGroups).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
    (this->BarrierGroups).ArrayNum = iVar8;
  }
  (this->BarrierGroups).ArrayNum = iVar8 + 1;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,local_38);
  *(longlong *)(pFVar2 + 8) = lStack_30;
LAB_1459e19c8:
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return;
}

// AddBarriers<D3D12_TEXTURE_BARRIER_const_> @ 1459e1a20

/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddBarriers<D3D12_TEXTURE_BARRIER_const_>
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,
          TArrayView<D3D12_TEXTURE_BARRIER_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  uint uStack_34;
  longlong lStack_30;
  
  if (param_2->ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Barriers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x753,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = param_2->ArrayNum;
  piVar1 = &(this->TextureBarriers).ArrayNum;
  iVar8 = *piVar1;
  uVar10 = ((param_3 ^ 1) + 1) * -0x80000000 | 1;
  if ((int)uVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1459e1ac5:
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar3,&(this->TextureBarriers).AllocatorInstance,piVar1,
                       &(this->TextureBarriers).ArrayMax);
    memcpy((this->TextureBarriers).AllocatorInstance.Data + (longlong)iVar6 * 0x40,param_2->DataPtr,
           (longlong)(int)uVar3 << 6);
  }
  else if (uVar3 != 0) goto LAB_1459e1ac5;
  if (iVar8 != 0) {
    iVar8 = (this->BarrierGroups).ArrayNum;
    uVar9 = iVar8 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->BarrierGroups).ArrayNum;
    if (*(uint *)((this->BarrierGroups).AllocatorInstance.Data + ((longlong)iVar8 + -1) * 0x10) ==
        uVar10) {
      uVar10 = 0;
      if ((int)(iVar8 - 1U) < iVar8) {
        uVar10 = ~(iVar8 - 1U) >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (this->BarrierGroups).AllocatorInstance.Data +
               (longlong)(this->BarrierGroups).ArrayNum * 0x10 + -0xc;
      *(uint *)pFVar2 = *(int *)pFVar2 + uVar3;
      goto LAB_1459e1c89;
    }
  }
  lStack_30 = (longlong)*piVar1 - (ulonglong)uVar3;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data;
  local_38 = uVar10;
  uStack_34 = uVar3;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->BarrierGroups).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->BarrierGroups).ArrayNum;
  piVar1 = &(this->BarrierGroups).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
    (this->BarrierGroups).ArrayNum = iVar8;
  }
  (this->BarrierGroups).ArrayNum = iVar8 + 1;
  pFVar2 = (this->BarrierGroups).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,local_38);
  *(longlong *)(pFVar2 + 8) = lStack_30;
LAB_1459e1c89:
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return;
}

// GetMemberArrayForBarrierType<1> @ 1459e6530

pdm_9a95960e __cdecl FD3D12EnhancedBarriersBatcher::GetMemberArrayForBarrierType<1>(void)

{
  return (pdm_9a95960e)0x10;
}

// GetMemberArrayForBarrierType<2> @ 1459e6540

pdm_94393683 __cdecl FD3D12EnhancedBarriersBatcher::GetMemberArrayForBarrierType<2>(void)

{
  return (pdm_94393683)0x20;
}

// GetMemberArrayForBarrierType<0> @ 1459e6550

pdm_40804fe6 __cdecl FD3D12EnhancedBarriersBatcher::GetMemberArrayForBarrierType<0>(void)

{
  return (pdm_40804fe6)0x30;
}

// AddBufferBarrier @ 1459fea40

/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddBufferBarrier
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2,
          D3D12_BARRIER_SYNC param_3,D3D12_BARRIER_SYNC param_4,D3D12_BARRIER_ACCESS param_5,
          D3D12_BARRIER_ACCESS param_6)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<D3D12_BUFFER_BARRIER_const_,int> local_48;
  D3D12_BUFFER_BARRIER local_38;
  
  if ((int)(param_2->Desc)._padding_ != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource->GetDesc().Dimension == D3D12_RESOURCE_DIMENSION_BUFFER",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x812,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_3 != param_4) || (param_5 != param_6)) ||
     (((param_3 &
       (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
        D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
        D3D12_BARRIER_SYNC_ALL_SHADING|D3D12_BARRIER_SYNC_RAYTRACING|
        D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_PIXEL_SHADING|
        D3D12_BARRIER_SYNC_VERTEX_SHADING|D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL)) !=
       D3D12_BARRIER_SYNC_NONE &&
      ((param_5 == D3D12_BARRIER_ACCESS_COMMON ||
       ((param_5 &
        (D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
        D3D12_BARRIER_ACCESS_UNORDERED_ACCESS)) != D3D12_BARRIER_ACCESS_COMMON)))))) {
    local_38.AccessBefore = param_5;
    local_38.pResource = (param_2->Resource).Reference;
    local_48.DataPtr = &local_38;
    local_38.SyncAfter = param_4;
    local_38.AccessAfter = param_6;
    local_38.Offset = 0;
    local_38.Size = 0xffffffffffffffff;
    local_48.ArrayNum = 1;
    local_38.SyncBefore = param_3;
    AddBarriers<D3D12_BUFFER_BARRIER_const_>(this,param_1,&local_48,false);
  }
  return;
}

// AddGlobalBarrier @ 1459fecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddGlobalBarrier
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,
          D3D12_BARRIER_SYNC param_2,D3D12_BARRIER_SYNC param_3,D3D12_BARRIER_ACCESS param_4,
          D3D12_BARRIER_ACCESS param_5)

{
  undefined1 auStack_58 [32];
  TArrayView<D3D12_GLOBAL_BARRIER_const_,int> local_38;
  D3D12_GLOBAL_BARRIER local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (((param_2 != param_3) || (param_4 != param_5)) ||
     (((param_2 &
       (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
        D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
        D3D12_BARRIER_SYNC_ALL_SHADING|D3D12_BARRIER_SYNC_RAYTRACING|
        D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_PIXEL_SHADING|
        D3D12_BARRIER_SYNC_VERTEX_SHADING|D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL)) !=
       D3D12_BARRIER_SYNC_NONE &&
      ((param_4 == D3D12_BARRIER_ACCESS_COMMON ||
       ((param_4 &
        (D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
        D3D12_BARRIER_ACCESS_UNORDERED_ACCESS)) != D3D12_BARRIER_ACCESS_COMMON)))))) {
    local_28.AccessBefore = param_4;
    local_38.DataPtr = &local_28;
    local_28.AccessAfter = param_5;
    local_38.ArrayNum = 1;
    local_28.SyncBefore = param_2;
    local_28.SyncAfter = param_3;
    AddBarriers<D3D12_GLOBAL_BARRIER_const_>(this,param_1,&local_38,false);
  }
  return;
}

// AddTextureBarrier @ 1459ffad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::AddTextureBarrier
          (FD3D12EnhancedBarriersBatcher *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2,
          D3D12_BARRIER_SYNC param_3,D3D12_BARRIER_SYNC param_4,D3D12_BARRIER_ACCESS param_5,
          D3D12_BARRIER_ACCESS param_6,D3D12_BARRIER_LAYOUT param_7,D3D12_BARRIER_LAYOUT param_8,
          uint param_9,bool param_10)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  TArrayView<D3D12_TEXTURE_BARRIER_const_,int> local_78;
  D3D12_TEXTURE_BARRIER local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((int)(param_2->Desc)._padding_ == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource->GetDesc().Dimension != D3D12_RESOURCE_DIMENSION_BUFFER",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x7d8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->Resource).Reference == (ID3D12Resource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource->GetResource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x7da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_10) && (param_7 != D3D12_BARRIER_LAYOUT_UNDEFINED)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bDiscard || (LayoutBefore == D3D12_BARRIER_LAYOUT_UNDEFINED)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x7dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((((param_3 != param_4) || (param_5 != param_6)) || (param_7 != param_8)) ||
     (((param_3 &
       (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
        D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
        D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
        D3D12_BARRIER_SYNC_ALL_SHADING|D3D12_BARRIER_SYNC_RAYTRACING|
        D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_PIXEL_SHADING|
        D3D12_BARRIER_SYNC_VERTEX_SHADING|D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL)) !=
       D3D12_BARRIER_SYNC_NONE &&
      ((param_5 == D3D12_BARRIER_ACCESS_COMMON ||
       ((param_5 &
        (D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
        D3D12_BARRIER_ACCESS_UNORDERED_ACCESS)) != D3D12_BARRIER_ACCESS_COMMON)))))) {
    if (((param_2->Desc).bBackBuffer) &&
       ((param_6 &
        (D3D12_BARRIER_ACCESS_RESOLVE_DEST|D3D12_BARRIER_ACCESS_COPY_DEST|
         D3D12_BARRIER_ACCESS_STREAM_OUTPUT|D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
        D3D12_BARRIER_ACCESS_RENDER_TARGET)) != D3D12_BARRIER_ACCESS_COMMON)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_68.AccessBefore = param_5;
    local_68.pResource = (param_2->Resource).Reference;
    local_68.Subresources.IndexOrFirstMipLevel = param_9;
    local_68.Subresources.NumMipLevels = 0;
    local_68.Subresources.FirstArraySlice = 0;
    local_68.Subresources.NumArraySlices = 0;
    local_68.Subresources.FirstPlane = 0;
    local_68.Subresources.NumPlanes = 0;
    local_78.DataPtr = &local_68;
    local_68.SyncAfter = param_4;
    local_68.AccessAfter = param_6;
    local_68.LayoutAfter = param_8;
    local_68.LayoutBefore = param_7;
    local_68.Flags = (D3D12_TEXTURE_BARRIER_FLAGS)param_10;
    local_78.ArrayNum = 1;
    local_68.SyncBefore = param_3;
    AddBarriers<D3D12_TEXTURE_BARRIER_const_>(this,param_1,&local_78,bVar2);
  }
  return;
}

// FlushIntoCommandList @ 145a16450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersBatcher::FlushIntoCommandList
          (FD3D12EnhancedBarriersBatcher *this,FD3D12CommandList *param_1,
          FD3D12QueryAllocator *param_2)

{
  uint *puVar1;
  int iVar2;
  ID3D12GraphicsCommandList8 *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FEndWork *pFVar8;
  FD3D12QueryLocation *pFVar9;
  FScriptContainerElement *pFVar10;
  FBeginWork *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  byte bVar19;
  longlong lVar20;
  uint local_res8;
  int local_88 [2];
  longlong local_80;
  FD3D12QueryLocation local_78;
  FD3D12QueryLocation local_60;
  
  iVar15 = (this->BarrierGroups).ArrayNum;
  local_res8 = 0;
  if (0 < iVar15) {
    local_80 = 0;
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)local_res8 < iVar15) {
        uVar13 = ~local_res8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = (this->BarrierGroups).ArrayNum;
      lVar14 = lVar17 * 0x10;
      iVar2 = *(int *)((this->BarrierGroups).AllocatorInstance.Data + lVar14);
      bVar19 = -(char)(iVar2 >> 0x1f);
      lVar16 = lVar17;
      uVar13 = local_res8;
      lVar20 = local_80;
      if ((int)local_res8 < iVar15) {
        do {
          uVar18 = 0;
          if ((int)uVar13 < iVar15) {
            uVar18 = ~uVar13 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar20 = lVar16;
          if (bVar19 != (byte)((uint)*(undefined4 *)
                                      ((this->BarrierGroups).AllocatorInstance.Data + lVar14) >>
                              0x1f)) break;
          uVar18 = 0;
          if ((int)uVar13 < (this->BarrierGroups).ArrayNum) {
            uVar18 = ~uVar13 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar13 = uVar13 + 1;
          pFVar12 = (this->BarrierGroups).AllocatorInstance.Data + lVar14;
          lVar16 = lVar16 + 1;
          lVar14 = lVar14 + 0x10;
          *(uint *)pFVar12 = *(uint *)pFVar12 & 0x7fffffff;
          iVar15 = (this->BarrierGroups).ArrayNum;
          lVar20 = lVar16;
        } while ((int)uVar13 < iVar15);
      }
      local_80 = lVar20;
      if (bVar19 != 0) {
        pFVar8 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                           (&(param_1->State).EventStream);
        pFVar9 = FD3D12QueryAllocator::Allocate(param_2,&local_78,ProfilerTimestampBOP,pFVar8);
        FD3D12CommandList::EndQuery(param_1,pFVar9);
      }
      if (lVar17 < lVar16) {
        lVar20 = lVar17 << 4;
        lVar17 = lVar16 - lVar17;
        uVar18 = local_res8;
        do {
          uVar6 = 0;
          if ((int)uVar18 < (this->BarrierGroups).ArrayNum) {
            uVar6 = ~uVar18 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this->BarrierGroups).AllocatorInstance.Data + lVar20;
          iVar15 = *(int *)pFVar12;
          if (iVar15 == 0) {
            uVar6 = *(uint *)(pFVar12 + 8);
            uVar7 = 0;
            if ((int)uVar6 < (this->GlobalBarriers).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = (this->GlobalBarriers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
LAB_145a167d5:
            *(FScriptContainerElement **)(pFVar12 + 8) = pFVar10;
          }
          else {
            if (iVar15 == 1) {
              uVar6 = *(uint *)(pFVar12 + 8);
              uVar7 = 0;
              if ((int)uVar6 < (this->TextureBarriers).ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar10 = (this->TextureBarriers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40
              ;
              goto LAB_145a167d5;
            }
            if (iVar15 == 2) {
              uVar6 = *(uint *)(pFVar12 + 8);
              uVar7 = 0;
              if ((int)uVar6 < (this->BufferBarriers).ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(FScriptContainerElement **)(pFVar12 + 8) =
                   (this->BufferBarriers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x28;
            }
            else {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                                 ,0x870,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          uVar18 = uVar18 + 1;
          lVar20 = lVar20 + 0x10;
          lVar17 = lVar17 + -1;
          lVar16 = local_80;
        } while (lVar17 != 0);
      }
      pIVar3 = (param_1->Interfaces).GraphicsCommandList8.Reference;
      puVar1 = &(param_1->State).NumCommands;
      *puVar1 = *puVar1 + 1;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x280);
      uVar18 = 0;
      if ((int)local_res8 < (this->BarrierGroups).ArrayNum) {
        uVar18 = ~local_res8 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(pIVar3,uVar13 - local_res8);
      if (iVar2 < 0) {
        local_88[0] = 0;
        pFVar11 = FD3D12CommandList::
                  EmplaceProfilerEvent<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
                            (param_1,local_88);
        pFVar9 = FD3D12QueryAllocator::Allocate
                           (param_2,&local_60,ProfilerTimestampTOP,&pFVar11->GPUTimestampTOP);
        FD3D12CommandList::EndQuery(param_1,pFVar9);
      }
      iVar15 = (this->BarrierGroups).ArrayNum;
      lVar17 = lVar16;
      local_res8 = uVar13;
    } while ((int)uVar13 < iVar15);
  }
  (this->BarrierGroups).ArrayNum = 0;
  if ((this->BarrierGroups).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,&(this->BarrierGroups).ArrayMax);
  }
  (this->GlobalBarriers).ArrayNum = 0;
  if ((this->GlobalBarriers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->GlobalBarriers).AllocatorInstance,0,&(this->GlobalBarriers).ArrayMax
              );
  }
  (this->TextureBarriers).ArrayNum = 0;
  if ((this->TextureBarriers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->TextureBarriers).AllocatorInstance,0,
               &(this->TextureBarriers).ArrayMax);
  }
  (this->BufferBarriers).ArrayNum = 0;
  if ((this->BufferBarriers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->BufferBarriers).AllocatorInstance,0,&(this->BufferBarriers).ArrayMax
              );
  }
  return;
}

