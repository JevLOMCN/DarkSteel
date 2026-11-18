// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 9

// FRHITransientHeapAllocator @ 1446cf300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientHeapAllocator * __thiscall
FRHITransientHeapAllocator::FRHITransientHeapAllocator
          (FRHITransientHeapAllocator *this,ulong64 param_1,uint param_2)

{
  ushort uVar1;
  FRHITransientAllocationFences local_28;
  
  this->Capacity = param_1;
  this->HeadHandle = 0xffff;
  this->GpuVirtualAddress = 0;
  this->UsedSize = 0;
  this->AlignmentWaste = 0;
  this->AllocationCount = 0;
  (this->RangeFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangeFreeList).ArrayNum = 0;
  (this->RangeFreeList).ArrayMax = 0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  this->AlignmentMin = param_2;
  uVar1 = CreateRange(this);
  this->HeadHandle = uVar1;
  local_28._17_2_ = 0;
  local_28._19_1_ = 0;
  local_28.Graphics = 0xffffffff;
  local_28.AsyncCompute = 0xffffffff;
  local_28.GraphicsForkJoin.Min = 0xffffffff;
  local_28.GraphicsForkJoin.Max = 0;
  local_28.Pipelines = None;
  InsertRange(this,uVar1,(FRHITransientResource *)0x0,&local_28,0,this->Capacity);
  return this;
}

// Allocate @ 1446d18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRHITransientHeapAllocation * __thiscall
FRHITransientHeapAllocator::Allocate
          (FRHITransientHeapAllocator *this,FRHITransientHeapAllocation *__return_storage_ptr__,
          FRHITransientAllocationFences *param_1,ulong64 param_2,uint param_3,
          TArray<FRHITransientHeapAllocator::FAliasingOverlap,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  ulong64 uVar2;
  code *pcVar3;
  TArray<FRHITransientHeapAllocator::FAliasingOverlap,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  FRHITransientHeapAllocation *pFVar9;
  ForElementType<unsigned_short> FVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  uint uVar23;
  undefined2 uVar24;
  FRHITransientHeapAllocator *this_00;
  ulong64 uVar25;
  undefined1 auStackY_188 [32];
  ushort local_138 [4];
  uint local_130;
  ulong64 local_128;
  ulong64 local_120;
  FRHITransientAllocationFences *local_118;
  ulonglong local_110;
  FRHITransientHeapAllocator *local_108;
  longlong local_100;
  ulong64 local_f8;
  FRHITransientHeapAllocation *local_f0;
  TArray<FRHITransientHeapAllocator::FAliasingOverlap,TSizedDefaultAllocator<32>_> *local_e8;
  ForElementType<unsigned_short> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_e8 = param_4;
  local_118 = param_1;
  local_108 = this;
  local_f8 = param_2;
  local_f0 = __return_storage_ptr__;
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x86,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
    return pFVar9;
  }
  local_4c = 0x40;
  if (param_3 < this->AlignmentMin) {
    param_3 = this->AlignmentMin;
  }
  uVar22 = 0;
  local_d8.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_50 = 0;
  uVar6 = GetFirstFreeRangeHandle(this);
  uVar15 = (uint)uVar6;
  local_128 = 0;
  local_130 = (uint)this->HeadHandle;
  local_120 = 0;
  uVar23 = 0;
  uVar24 = 0xffff;
  uVar20 = uVar22;
  uVar21 = uVar22;
  uVar25 = uVar22;
  while (uVar6 != 0xffff) {
    uVar14 = (undefined2)uVar15;
    if (((this->Ranges).ArrayNum <= (int)uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar20 = local_128, bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    pFVar18 = (this->Ranges).AllocatorInstance.Data;
    uVar2 = *(ulong64 *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x28);
    local_110 = *(longlong *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x20) + uVar2;
    if (local_50 == 0) {
      uVar19 = ((local_108->GpuVirtualAddress - 1) + uVar2 + param_3 & ~((ulonglong)param_3 - 1)) -
               local_108->GpuVirtualAddress;
      if (local_110 <= uVar19) {
        uVar15 = (uint)*(ushort *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x30);
        uVar24 = uVar14;
        goto LAB_1446d1b15;
      }
      uVar20 = local_f8 + uVar19;
      uVar21 = uVar2;
      uVar25 = uVar2;
      local_120 = uVar19;
LAB_1446d1a7e:
      uVar7 = (uint)((ulonglong)*(undefined8 *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x10) >> 0x20);
      uVar11 = (uint)*(undefined8 *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x10);
      local_128 = uVar20;
      if (((uVar11 <= uVar7) && (uVar11 < local_118->Graphics)) && (local_118->Graphics < uVar7)) {
LAB_1446d1add:
        uVar15 = (uint)*(ushort *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x30);
        uVar24 = uVar14;
        goto LAB_1446d1ae5;
      }
      uVar11 = (local_118->GraphicsForkJoin).Max;
      uVar12 = (local_118->GraphicsForkJoin).Min;
      if ((((uVar12 <= uVar11) && (uVar12 < *(uint *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 8))) &&
          (*(uint *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 8) < uVar11)) ||
         (((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false &&
           (pFVar18[(ulonglong)uVar15 * 0x38 + 0x18] == (FScriptContainerElement)0x3)) &&
          ((local_118->Pipelines == AsyncCompute && (uVar12 < uVar7)))))) goto LAB_1446d1add;
      uVar7 = local_130;
      if ((short)local_130 == -1) {
        uVar7 = CONCAT22((short)(local_130 >> 0x10),uVar24);
      }
      local_130 = uVar7;
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                             (0x202,&local_d8,&local_4c);
      }
      lVar13 = (longlong)local_50;
      local_50 = local_50 + 1;
      FVar10 = (ForElementType<unsigned_short>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar10 = local_d8.SecondaryData;
      }
      *(undefined2 *)((longlong)FVar10 + lVar13 * 2) = uVar14;
      if (local_128 <= local_110) {
        local_110 = local_110 - local_128;
        local_f0->Heap = (FRHITransientHeap *)0x0;
        local_f0->Size = 0;
        local_f0->Offset = 0;
        local_f0->AlignmentPad = 0;
        if ((local_50 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!RangeCandidates.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                               ,0xd9,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
          return pFVar9;
        }
        local_100 = (local_128 - uVar21) - local_f8;
        local_108->AlignmentWaste = local_108->AlignmentWaste + local_100;
        local_108->AllocationCount = local_108->AllocationCount + 1;
        local_108->UsedSize = local_108->UsedSize + (local_128 - uVar21);
        this_00 = local_108;
        uVar19 = uVar22;
        uVar15 = uVar7;
        if (local_50 < 1) goto LAB_1446d1f3b;
        goto LAB_1446d1c50;
      }
      uVar25 = uVar25 + *(longlong *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x20);
      uVar15 = (uint)*(ushort *)(pFVar18 + (ulonglong)uVar15 * 0x38 + 0x30);
      uVar20 = local_128;
    }
    else {
      local_128 = uVar20;
      if (uVar2 == uVar25) goto LAB_1446d1a7e;
LAB_1446d1ae5:
      local_50 = 0;
      uVar20 = local_128;
      if (local_4c < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                  (2,2,0,&local_d8,0,&local_4c);
        uVar20 = local_128;
      }
LAB_1446d1b15:
      local_130 = 0xffff;
      uVar14 = uVar24;
    }
    uVar24 = uVar14;
    this = local_108;
    __return_storage_ptr__ = local_f0;
    uVar6 = (ushort)uVar15;
  }
  __return_storage_ptr__->Heap = (FRHITransientHeap *)0x0;
  uVar20 = uVar22;
  uVar15 = uVar23;
  goto LAB_1446d208e;
  while( true ) {
    this_00 = local_108;
    uVar7 = local_130;
    if ((int)uVar11 < local_50 + -1) {
      uVar19 = (ulonglong)local_130;
      local_138[0] = uVar6;
      if (((local_108->Ranges).ArrayNum <= (int)(local_130 & 0xffff)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
        return pFVar9;
      }
      uVar16 = (ulonglong)local_138[0];
      pFVar18 = (this_00->Ranges).AllocatorInstance.Data;
      if (((this_00->Ranges).ArrayNum <= (int)(uint)local_138[0]) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
        return pFVar9;
      }
      pFVar17 = (this_00->Ranges).AllocatorInstance.Data + uVar16 * 0x38;
      if ((*(ushort *)(pFVar18 + (uVar19 & 0xffff) * 0x38 + 0x30) != local_138[0]) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreviousRange.NextFreeHandle == CurrentHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                             ,0x19a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
        return pFVar9;
      }
      *(undefined2 *)(pFVar18 + (uVar19 & 0xffff) * 0x38 + 0x30) = *(undefined2 *)(pFVar17 + 0x30);
      *(undefined2 *)(pFVar17 + 0x30) = 0xffff;
      *(undefined8 *)pFVar17 = 0;
      pFVar18 = (this_00->RangeFreeList).AllocatorInstance.Data;
      if (((pFVar18 <= (FScriptContainerElement *)local_138) &&
          ((FScriptContainerElement *)local_138 <
           pFVar18 + (longlong)(this_00->RangeFreeList).ArrayMax * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
        return pFVar9;
      }
      iVar8 = (this_00->RangeFreeList).ArrayNum;
      piVar1 = &(this_00->RangeFreeList).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&(this_00->RangeFreeList).AllocatorInstance,piVar1);
      }
      (this_00->RangeFreeList).ArrayNum = iVar8 + 1;
      *(ushort *)((this_00->RangeFreeList).AllocatorInstance.Data + (longlong)iVar8 * 2) =
           local_138[0];
    }
    uVar22 = uVar22 + 2;
    uVar19 = (ulonglong)(uVar11 + 1);
    uVar15 = local_130;
    if (local_50 <= (int)(uVar11 + 1)) break;
LAB_1446d1c50:
    local_130 = uVar15;
    uVar11 = (uint)uVar19;
    uVar15 = 0;
    if ((int)uVar11 < local_50) {
      uVar15 = ~uVar11 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    FVar10 = (ForElementType<unsigned_short>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
      FVar10 = local_d8.SecondaryData;
    }
    uVar6 = *(ushort *)(uVar22 + (longlong)FVar10);
    if (((this_00->Ranges).ArrayNum <= (int)(uint)uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    pFVar18 = (this_00->Ranges).AllocatorInstance.Data + (ulonglong)uVar6 * 0x38;
    lVar13 = *(longlong *)pFVar18;
    if (lVar13 != 0) {
      if ((local_118->Pipelines == All) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Acquire.IsSinglePipeline()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                             ,0x1c,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
        return pFVar9;
      }
      pTVar4 = local_e8;
      uVar15 = *(uint *)(pFVar18 + 8);
      if (uVar15 == 0xffffffff) {
        if (local_118->AsyncCompute == 0xffffffff) {
LAB_1446d1d56:
          uVar15 = *(uint *)(pFVar18 + 0x14);
        }
        else {
          uVar15 = *(uint *)(pFVar18 + 0xc);
        }
      }
      else if (*(int *)(pFVar18 + 0xc) != -1) {
        if (local_118->AsyncCompute == 0xffffffff) goto LAB_1446d1d56;
        uVar15 = (local_118->GraphicsForkJoin).Min;
      }
      iVar8 = local_e8->ArrayNum;
      if (iVar8 == local_e8->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_e8->AllocatorInstance,&local_e8->ArrayMax);
      }
      pTVar4->ArrayNum = iVar8 + 1;
      pFVar18 = (pTVar4->AllocatorInstance).Data;
      *(longlong *)(pFVar18 + (longlong)iVar8 * 0x10) = lVar13;
      *(uint *)(pFVar18 + (longlong)iVar8 * 0x10 + 8) = uVar15;
    }
  }
LAB_1446d1f3b:
  uVar22 = local_f8;
  uVar19 = local_110;
  uVar15 = (uint)local_100;
  uVar11 = local_50 - 1;
  if (local_110 == 0) {
    if ((int)uVar11 < local_50) {
      uVar23 = ~uVar11 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    FVar10 = (ForElementType<unsigned_short>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
      FVar10 = local_d8.SecondaryData;
    }
    RemoveRange(this_00,(ushort)uVar7,*(ushort *)((longlong)FVar10 + (longlong)(local_50 + -1) * 2))
    ;
    uVar20 = local_120;
    __return_storage_ptr__ = local_f0;
  }
  else {
    if ((int)uVar11 < local_50) {
      uVar23 = ~uVar11 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    FVar10 = (ForElementType<unsigned_short>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
      FVar10 = local_d8.SecondaryData;
    }
    uVar6 = *(ushort *)((longlong)FVar10 + (longlong)(local_50 + -1) * 2);
    if (((this_00->Ranges).ArrayNum <= (int)(uint)uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRHITransientHeapAllocation *)(*pcVar3)();
      return pFVar9;
    }
    pFVar18 = (this_00->Ranges).AllocatorInstance.Data;
    lVar13 = (ulonglong)uVar6 * 0x38;
    *(ulong64 *)(pFVar18 + lVar13 + 0x28) = local_128;
    *(ulonglong *)(pFVar18 + lVar13 + 0x20) = uVar19;
    uVar20 = local_120;
    __return_storage_ptr__ = local_f0;
  }
LAB_1446d208e:
  __return_storage_ptr__->Size = uVar22;
  __return_storage_ptr__->Offset = uVar20;
  __return_storage_ptr__->AlignmentPad = uVar15;
  if (local_d8.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_d8.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateRange @ 1446d6540

ushort __thiscall FRHITransientHeapAllocator::CreateRange(FRHITransientHeapAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar6 = (this->RangeFreeList).ArrayNum;
  if (iVar6 == 0) {
    iVar6 = (this->Ranges).ArrayNum;
    piVar1 = &(this->Ranges).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Ranges).AllocatorInstance,piVar1);
    }
    (this->Ranges).ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6 * 0x38;
    pFVar2 = (this->Ranges).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + lVar7 + 0x19) = 0;
    *(undefined2 *)(pFVar2 + lVar7 + 0x1d) = 0;
    pFVar2[lVar7 + 0x1f] = (FScriptContainerElement)0x0;
    *(undefined4 *)(pFVar2 + lVar7 + 0x34) = 0;
    *(undefined8 *)(pFVar2 + lVar7) = 0;
    *(undefined8 *)(pFVar2 + lVar7 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar2 + lVar7 + 0x10) = 0xffffffff;
    *(undefined4 *)(pFVar2 + lVar7 + 0x14) = 0;
    pFVar2[lVar7 + 0x18] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar2 + lVar7 + 0x20) = 0;
    *(undefined8 *)(pFVar2 + lVar7 + 0x28) = 0;
    *(undefined4 *)(pFVar2 + lVar7 + 0x30) = 0xffffffff;
    return (short)(this->Ranges).ArrayNum - 1;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  iVar6 = (this->RangeFreeList).ArrayNum;
  iVar8 = iVar6 + -1;
  uVar5 = *(ushort *)((this->RangeFreeList).AllocatorInstance.Data + (longlong)iVar6 * 2 + -2);
  (this->RangeFreeList).ArrayNum = iVar8;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,&(this->RangeFreeList).AllocatorInstance,iVar8,&(this->RangeFreeList).ArrayMax);
  return uVar5;
}

// Deallocate @ 1446d6ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientHeapAllocator::Deallocate
          (FRHITransientHeapAllocator *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  
  if ((param_1 == (FRHITransientResource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x107,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->AllocationType != Heap) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationType == ERHITransientAllocationType::Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                         ,0x11a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (param_1->HeapAllocation).Size;
  if (((uVar6 == 0) || (this->UsedSize < uVar6)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.Size > 0 && Allocation.Size <= UsedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x109,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (ulonglong)(param_1->HeapAllocation).AlignmentPad;
  uVar8 = (param_1->HeapAllocation).Offset - uVar6;
  uVar1 = this->HeadHandle;
  uVar9 = (param_1->HeapAllocation).Size + uVar6;
  uVar5 = GetFirstFreeRangeHandle(this);
  while (uVar5 != 0xffff) {
    if (((this->Ranges).ArrayNum <= (int)(uint)uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = (ulonglong)(uint)uVar5 * 0x38;
    pFVar2 = (this->Ranges).AllocatorInstance.Data;
    if (uVar8 < *(ulonglong *)(pFVar2 + lVar7 + 0x28)) break;
    uVar1 = uVar5;
    uVar5 = *(ushort *)(pFVar2 + lVar7 + 0x30);
  }
  InsertRange(this,uVar1,param_1,param_2,uVar8,uVar9);
  this->UsedSize = this->UsedSize - uVar9;
  this->AlignmentWaste = this->AlignmentWaste - (ulonglong)(param_1->HeapAllocation).AlignmentPad;
  this->AllocationCount = this->AllocationCount - 1;
  return;
}

// Flush @ 1446da6e0

void __thiscall FRHITransientHeapAllocator::Flush(FRHITransientHeapAllocator *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ushort uVar9;
  longlong lVar10;
  ushort local_48 [4];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  uVar4 = GetFirstFreeRangeHandle(this);
  uVar9 = 0xffff;
joined_r0x0001446da704:
  do {
    if (uVar4 == 0xffff) {
      return;
    }
    if (((this->Ranges).ArrayNum <= (int)(uint)uVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_40 = 0xffffffffffffffff;
    pFVar6 = (this->Ranges).AllocatorInstance.Data + (ulonglong)(uint)uVar4 * 0x38;
    uStack_38 = 0xffffffff;
    uStack_34 = 0;
    local_30 = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(pFVar6 + 0x10) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x18) = 0;
    if (uVar9 != 0xffff) {
      if (((this->Ranges).ArrayNum <= (int)(uint)uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->Ranges).AllocatorInstance.Data;
      lVar10 = (ulonglong)uVar9 * 0x38;
      if (*(longlong *)(pFVar8 + lVar10 + 0x28) + *(longlong *)(pFVar8 + lVar10 + 0x20) ==
          *(longlong *)(pFVar6 + 0x28)) {
        *(longlong *)(pFVar8 + lVar10 + 0x20) =
             *(longlong *)(pFVar6 + 0x20) + *(longlong *)(pFVar8 + lVar10 + 0x20);
        local_48[0] = uVar4;
        if (((this->Ranges).ArrayNum <= (int)(uint)uVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = (ulonglong)local_48[0];
        pFVar6 = (this->Ranges).AllocatorInstance.Data;
        if (((this->Ranges).ArrayNum <= (int)(uint)local_48[0]) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->Ranges).AllocatorInstance.Data + uVar7 * 0x38;
        uVar4 = *(ushort *)(pFVar8 + 0x30);
        if ((*(ushort *)(pFVar6 + lVar10 + 0x30) != local_48[0]) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousRange.NextFreeHandle == CurrentHandle",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                               ,0x19a,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined2 *)(pFVar6 + lVar10 + 0x30) = *(undefined2 *)(pFVar8 + 0x30);
        *(undefined2 *)(pFVar8 + 0x30) = 0xffff;
        *(undefined8 *)pFVar8 = 0;
        pFVar6 = (this->RangeFreeList).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar6 + (longlong)(this->RangeFreeList).ArrayMax * 2)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (this->RangeFreeList).ArrayNum;
        piVar1 = &(this->RangeFreeList).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&(this->RangeFreeList).AllocatorInstance,piVar1);
        }
        (this->RangeFreeList).ArrayNum = iVar5 + 1;
        *(ushort *)((this->RangeFreeList).AllocatorInstance.Data + (longlong)iVar5 * 2) =
             local_48[0];
        goto joined_r0x0001446da704;
      }
    }
    uVar9 = *(ushort *)(pFVar6 + 0x30);
    uVar4 = uVar9;
  } while( true );
}

// GetFirstFreeRangeHandle @ 1446de240

ushort __thiscall
FRHITransientHeapAllocator::GetFirstFreeRangeHandle(FRHITransientHeapAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  uVar3 = this->HeadHandle;
  if ((this->Ranges).ArrayNum <= (int)(uint)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)((this->Ranges).AllocatorInstance.Data + (ulonglong)uVar3 * 0x38 + 0x30);
}

// InsertRange @ 1446e0230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ushort __thiscall
FRHITransientHeapAllocator::InsertRange
          (FRHITransientHeapAllocator *this,ushort param_1,FRHITransientResource *param_2,
          FRHITransientAllocationFences *param_3,ulong64 param_4,ulong64 param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TInterval<unsigned_int> TVar3;
  bool bVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar5 = CreateRange(this);
  if ((this->Ranges).ArrayNum <= (int)(uint)uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  pFVar6 = (this->Ranges).AllocatorInstance.Data + (ulonglong)uVar5 * 0x38;
  *(FRHITransientResource **)pFVar6 = param_2;
  TVar3 = param_3->GraphicsForkJoin;
  *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)param_3;
  *(TInterval<unsigned_int> *)(pFVar6 + 0x10) = TVar3;
  *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&param_3->Pipelines;
  *(ulong64 *)(pFVar6 + 0x28) = param_4;
  *(ulong64 *)(pFVar6 + 0x20) = param_5;
  if ((this->Ranges).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  *(undefined2 *)(pFVar6 + 0x30) = *(undefined2 *)(pFVar1 + (ulonglong)param_1 * 0x38 + 0x30);
  *(ushort *)(pFVar1 + (ulonglong)param_1 * 0x38 + 0x30) = uVar5;
  return uVar5;
}

// RemoveRange @ 1446e29c0

ushort __thiscall
FRHITransientHeapAllocator::RemoveRange
          (FRHITransientHeapAllocator *this,ushort param_1,ushort param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ushort local_res18 [4];
  
  local_res18[0] = param_2;
  if ((this->Ranges).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  uVar7 = (ulonglong)local_res18[0];
  pFVar2 = (this->Ranges).AllocatorInstance.Data;
  if ((this->Ranges).ArrayNum <= (int)(uint)local_res18[0]) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  pFVar8 = (this->Ranges).AllocatorInstance.Data + uVar7 * 0x38;
  uVar5 = *(ushort *)(pFVar8 + 0x30);
  if (*(ushort *)(pFVar2 + (ulonglong)param_1 * 0x38 + 0x30) != local_res18[0]) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PreviousRange.NextFreeHandle == CurrentHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                       ,0x19a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  *(undefined2 *)(pFVar2 + (ulonglong)param_1 * 0x38 + 0x30) = *(undefined2 *)(pFVar8 + 0x30);
  *(undefined2 *)(pFVar8 + 0x30) = 0xffff;
  *(undefined8 *)pFVar8 = 0;
  pFVar2 = (this->RangeFreeList).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->RangeFreeList).ArrayMax * 2
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  iVar6 = (this->RangeFreeList).ArrayNum;
  piVar1 = &(this->RangeFreeList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&(this->RangeFreeList).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->RangeFreeList).AllocatorInstance.Data;
  (this->RangeFreeList).ArrayNum = iVar6 + 1;
  *(ushort *)(pFVar2 + (longlong)iVar6 * 2) = local_res18[0];
  return uVar5;
}

// Validate @ 1446e7730

void __thiscall FRHITransientHeapAllocator::Validate(FRHITransientHeapAllocator *this)

{
  return;
}

