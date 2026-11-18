// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// AddAliasingBarrier @ 1459fdf10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersBatcher::AddAliasingBarrier
          (FD3D12LegacyBarriersBatcher *this,FD3D12ContextCommon *param_1,ID3D12Resource *param_2,
          ID3D12Resource *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Barriers).ArrayNum;
  piVar1 = &(this->Barriers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Barriers).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Barriers).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(pFVar2 + lVar4 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar4) = 1;
  *(ID3D12Resource **)(pFVar2 + lVar4 + 8) = param_2;
  *(ID3D12Resource **)(pFVar2 + lVar4 + 0x10) = param_3;
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return;
}

// AddTransition @ 145a00390

/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

int __thiscall
FD3D12LegacyBarriersBatcher::AddTransition
          (FD3D12LegacyBarriersBatcher *this,FD3D12ContextCommon *param_1,FD3D12Resource *param_2,
          D3D12_RESOURCE_STATES param_3,D3D12_RESOURCE_STATES param_4,uint param_5)

{
  int *piVar1;
  ID3D12Resource *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_3 == param_4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Before != After",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x32e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = (this->Barriers).ArrayNum;
  if (iVar5 != 0) {
    uVar6 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar6 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = (this->Barriers).ArrayNum;
    lVar9 = ((longlong)iVar5 + -1) * 0x20;
    pFVar7 = (this->Barriers).AllocatorInstance.Data + lVar9;
    if ((((*(int *)pFVar7 == 0) &&
         ((param_2->Resource).Reference == *(ID3D12Resource **)(pFVar7 + 8))) &&
        (param_5 == *(uint *)(pFVar7 + 0x10))) &&
       ((param_3 == *(D3D12_RESOURCE_STATES *)(pFVar7 + 0x18) &&
        (param_4 == *(D3D12_RESOURCE_STATES *)(pFVar7 + 0x14))))) {
      uVar8 = ~(iVar5 - 1U);
      uVar6 = 0;
      if ((int)(iVar5 - 1U) < iVar5) {
        uVar6 = uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar7 = (this->Barriers).AllocatorInstance.Data + lVar9;
      iVar5 = (this->Barriers).ArrayNum + uVar8;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 0x20,(longlong)iVar5 << 5);
      }
      piVar1 = &(this->Barriers).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(ForAnyElementType *)this,(this->Barriers).ArrayNum,
                 &(this->Barriers).ArrayMax);
      return -1;
    }
  }
  if (((0x7ffffffd < (int)param_3) || (0x7ffffffd < (int)param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidD3D12ResourceState(Before) && IsValidD3D12ResourceState(After)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x344,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pIVar2 = (param_2->Resource).Reference;
  piVar1 = &(this->Barriers).ArrayMax;
  iVar5 = (this->Barriers).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_40 = SUB84(pIVar2,0);
  uStack_3c = (undefined4)((ulonglong)pIVar2 >> 0x20);
  (this->Barriers).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Barriers).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)pFVar7 = 0;
  *(undefined4 *)(pFVar7 + 4) = 0;
  *(undefined4 *)(pFVar7 + 8) = uStack_40;
  *(undefined4 *)(pFVar7 + 0xc) = uStack_3c;
  *(uint *)(pFVar7 + 0x10) = param_5;
  *(D3D12_RESOURCE_STATES *)(pFVar7 + 0x14) = param_3;
  *(D3D12_RESOURCE_STATES *)(pFVar7 + 0x18) = param_4;
  *(undefined4 *)(pFVar7 + 0x1c) = 0;
  if (((param_2->Desc).bBackBuffer) &&
     ((param_4 &
      (D3D12_RESOURCE_STATE_RESOLVE_DEST|D3D12_RESOURCE_STATE_COPY_DEST|
       D3D12_RESOURCE_STATE_STREAM_OUT|D3D12_RESOURCE_STATE_UNORDERED_ACCESS|
      D3D12_RESOURCE_STATE_RENDER_TARGET)) != D3D12_RESOURCE_STATE_COMMON)) {
    *(uint *)(pFVar7 + 4) = *(uint *)(pFVar7 + 4) | 0x80000000;
  }
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return 1;
}

// AddUAV @ 145a00630

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersBatcher::AddUAV(FD3D12LegacyBarriersBatcher *this,FD3D12ContextCommon *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Barriers).ArrayNum;
  piVar1 = &(this->Barriers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Barriers).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Barriers).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(pFVar2 + lVar4 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar4 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar4) = 2;
  *(undefined8 *)(pFVar2 + lVar4 + 8) = 0;
  if (GD3D12BatchResourceBarriers == 0) {
    if (param_1->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    FlushIntoCommandList(this,param_1->CommandList,&param_1->TimestampQueries);
  }
  return;
}

// FlushIntoCommandList @ 145a16a20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersBatcher::FlushIntoCommandList
          (FD3D12LegacyBarriersBatcher *this,FD3D12CommandList *param_1,
          FD3D12QueryAllocator *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  ID3D12GraphicsCommandList *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FEndWork *pFVar7;
  FD3D12QueryLocation *pFVar8;
  FBeginWork *pFVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int local_res8 [2];
  FD3D12CommandList *local_res10;
  FD3D12QueryAllocator *local_res18;
  FD3D12QueryLocation local_68;
  FD3D12QueryLocation local_50;
  
  iVar12 = (this->Barriers).ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  if (0 < iVar12) {
    lVar16 = 0;
    uVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar14 < iVar12) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = (this->Barriers).ArrayNum;
      lVar15 = lVar16 * 0x20;
      bVar13 = -(char)((int)*(undefined4 *)((this->Barriers).AllocatorInstance.Data + lVar15 + 4) >>
                      0x1f);
      uVar10 = uVar14;
      if ((int)uVar14 < iVar12) {
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar12) {
            uVar6 = ~uVar10 >> 0x1f;
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
          param_1 = local_res10;
          param_2 = local_res18;
          if (bVar13 != (byte)((uint)*(undefined4 *)
                                      ((this->Barriers).AllocatorInstance.Data + lVar15 + 4) >> 0x1f
                              )) break;
          uVar6 = 0;
          if ((int)uVar10 < (this->Barriers).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
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
          uVar10 = uVar10 + 1;
          lVar11 = lVar16 * 0x20;
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x20;
          pFVar2 = (this->Barriers).AllocatorInstance.Data + lVar11 + 4;
          *(uint *)pFVar2 = *(uint *)pFVar2 & 0x7fffffff;
          iVar12 = (this->Barriers).ArrayNum;
          param_1 = local_res10;
          param_2 = local_res18;
        } while ((int)uVar10 < iVar12);
      }
      if (bVar13 != 0) {
        pFVar7 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                           (&(param_1->State).EventStream);
        pFVar8 = FD3D12QueryAllocator::Allocate(param_2,&local_68,ProfilerTimestampBOP,pFVar7);
        FD3D12CommandList::EndQuery(param_1,pFVar8);
      }
      pIVar3 = (param_1->Interfaces).GraphicsCommandList.Reference;
      puVar1 = &(param_1->State).NumCommands;
      *puVar1 = *puVar1 + 1;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0xd0);
      uVar6 = 0;
      if ((int)uVar14 < (this->Barriers).ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(pIVar3,uVar10 - uVar14);
      param_1 = local_res10;
      param_2 = local_res18;
      if (bVar13 != 0) {
        local_res8[0] = 0;
        pFVar9 = FD3D12CommandList::
                 EmplaceProfilerEvent<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
                           (local_res10,local_res8);
        param_2 = local_res18;
        pFVar8 = FD3D12QueryAllocator::Allocate
                           (local_res18,&local_50,ProfilerTimestampTOP,&pFVar9->GPUTimestampTOP);
        FD3D12CommandList::EndQuery(param_1,pFVar8);
      }
      iVar12 = (this->Barriers).ArrayNum;
      uVar14 = uVar10;
    } while ((int)uVar10 < iVar12);
  }
  (this->Barriers).ArrayNum = 0;
  if ((this->Barriers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,&(this->Barriers).ArrayMax);
  }
  return;
}

