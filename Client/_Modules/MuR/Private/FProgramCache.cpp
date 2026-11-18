// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 18

// GetRangeIndex @ 14a9a6e50

/* WARNING: Removing unreachable block (ram,0x00014a9a6f61) */

ExecutionIndex * __thiscall
UE::Mutable::Private::FProgramCache::GetRangeIndex(FProgramCache *this,uint param_1)

{
  int *piVar1;
  FProgramCache *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FProgramCache *pFVar6;
  ExecutionIndex *pEVar7;
  uchar *puVar8;
  uint uVar9;
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  uchar local_10;
  uchar uStack_f;
  uchar uStack_e;
  uchar uStack_d;
  uchar uStack_c;
  uchar uStack_b;
  uchar uStack_a;
  uchar uStack_9;
  
  if ((this->m_usedRangeIndices).ArrayNum == 0) {
    pFVar2 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
    local_18 = '\0';
    uStack_17 = '\0';
    uStack_16 = '\0';
    uStack_15 = '\0';
    uStack_14 = '\0';
    uStack_13 = '\0';
    uStack_12 = '\0';
    uStack_11 = '\0';
    local_10 = '\0';
    uStack_f = '\0';
    uStack_e = '\0';
    uStack_d = '\0';
    uStack_c = '\0';
    uStack_b = '\0';
    uStack_a = '\0';
    uStack_9 = '\0';
    pFVar6 = this;
    if (pFVar2 != (FProgramCache *)0x0) {
      pFVar6 = pFVar2;
    }
    if (pFVar6 <= (FProgramCache *)&stack0xffffffffffffffe8) {
      pFVar6 = this;
      if (pFVar2 != (FProgramCache *)0x0) {
        pFVar6 = pFVar2;
      }
      if ((&stack0xffffffffffffffe8 <
           (pFVar6->m_usedRangeIndices).AllocatorInstance.InlineData +
           (longlong)(this->m_usedRangeIndices).ArrayMax * 0x10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pEVar7 = (ExecutionIndex *)(*pcVar3)();
        return pEVar7;
      }
    }
    iVar5 = (this->m_usedRangeIndices).ArrayNum;
    piVar1 = &(this->m_usedRangeIndices).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>::ForElementType<UE::Mutable::Private::ExecutionIndex>_>
                        (0x810,(ForElementType<UE::Mutable::Private::ExecutionIndex> *)this,piVar1);
    }
    (this->m_usedRangeIndices).ArrayNum = iVar5 + 1;
    pFVar2 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
    pFVar6 = this;
    if (pFVar2 != (FProgramCache *)0x0) {
      pFVar6 = pFVar2;
    }
    puVar8 = (pFVar6->m_usedRangeIndices).AllocatorInstance.InlineData + (longlong)iVar5 * 0x10;
    puVar8[0] = '\0';
    puVar8[1] = '\0';
    puVar8[2] = '\0';
    puVar8[3] = '\0';
    puVar8[4] = '\0';
    puVar8[5] = '\0';
    puVar8[6] = '\0';
    puVar8[7] = '\0';
    *(undefined8 *)puVar8 = _local_18;
    local_18 = '\0';
    uStack_17 = '\0';
    uStack_16 = '\0';
    uStack_15 = '\0';
    uStack_14 = '\0';
    uStack_13 = '\0';
    uStack_12 = '\0';
    uStack_11 = '\0';
    *(undefined4 *)(puVar8 + 8) = _local_10;
    *(undefined4 *)(puVar8 + 0xc) = _uStack_c;
    local_10 = '\0';
    uStack_f = '\0';
    uStack_e = '\0';
    uStack_d = '\0';
    uStack_c = '\0';
    uStack_b = '\0';
    uStack_a = '\0';
    uStack_9 = '\0';
  }
  if (((uint)(this->m_usedRangeIndices).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("i < uint32_t(m_usedRangeIndices.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x206,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pEVar7 = (ExecutionIndex *)(*pcVar3)();
    return pEVar7;
  }
  uVar9 = 0;
  if ((int)param_1 < (this->m_usedRangeIndices).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pEVar7 = (ExecutionIndex *)(*pcVar3)();
    return pEVar7;
  }
  pFVar2 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
  if (pFVar2 != (FProgramCache *)0x0) {
    this = pFVar2;
  }
  return (ExecutionIndex *)
         ((this->m_usedRangeIndices).AllocatorInstance.InlineData + (longlong)(int)param_1 * 0x10);
}

// GetRangeIndexIndex @ 14a9a7000

/* WARNING: Removing unreachable block (ram,0x00014a9a7144) */

uint __thiscall
UE::Mutable::Private::FProgramCache::GetRangeIndexIndex(FProgramCache *this,ExecutionIndex *param_1)

{
  int *piVar1;
  int iVar2;
  FProgramCache *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FProgramCache *pFVar8;
  uchar *puVar9;
  FProgramCache *pFVar10;
  FProgramCache *pFVar11;
  uchar local_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  uchar uStack_34;
  uchar uStack_33;
  uchar uStack_32;
  uchar uStack_31;
  uchar local_30;
  uchar uStack_2f;
  uchar uStack_2e;
  uchar uStack_2d;
  uchar uStack_2c;
  uchar uStack_2b;
  uchar uStack_2a;
  uchar uStack_29;
  
  if (*(int *)&param_1->field_0x8 == 0) {
    return 0;
  }
  if ((this->m_usedRangeIndices).ArrayNum == 0) {
    pFVar3 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
    local_38 = '\0';
    uStack_37 = '\0';
    uStack_36 = '\0';
    uStack_35 = '\0';
    uStack_34 = '\0';
    uStack_33 = '\0';
    uStack_32 = '\0';
    uStack_31 = '\0';
    local_30 = '\0';
    uStack_2f = '\0';
    uStack_2e = '\0';
    uStack_2d = '\0';
    uStack_2c = '\0';
    uStack_2b = '\0';
    uStack_2a = '\0';
    uStack_29 = '\0';
    pFVar8 = this;
    if (pFVar3 != (FProgramCache *)0x0) {
      pFVar8 = pFVar3;
    }
    if (pFVar8 <= (FProgramCache *)&stack0xffffffffffffffc8) {
      pFVar8 = this;
      if (pFVar3 != (FProgramCache *)0x0) {
        pFVar8 = pFVar3;
      }
      if ((&stack0xffffffffffffffc8 <
           (pFVar8->m_usedRangeIndices).AllocatorInstance.InlineData +
           (longlong)(this->m_usedRangeIndices).ArrayMax * 0x10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar7 = (this->m_usedRangeIndices).ArrayNum;
    piVar1 = &(this->m_usedRangeIndices).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>::ForElementType<UE::Mutable::Private::ExecutionIndex>_>
                        (0x810,(ForElementType<UE::Mutable::Private::ExecutionIndex> *)this,piVar1);
    }
    (this->m_usedRangeIndices).ArrayNum = iVar7 + 1;
    pFVar3 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
    pFVar8 = this;
    if (pFVar3 != (FProgramCache *)0x0) {
      pFVar8 = pFVar3;
    }
    puVar9 = (pFVar8->m_usedRangeIndices).AllocatorInstance.InlineData + (longlong)iVar7 * 0x10;
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar9[4] = '\0';
    puVar9[5] = '\0';
    puVar9[6] = '\0';
    puVar9[7] = '\0';
    *(undefined8 *)puVar9 = _local_38;
    local_38 = '\0';
    uStack_37 = '\0';
    uStack_36 = '\0';
    uStack_35 = '\0';
    uStack_34 = '\0';
    uStack_33 = '\0';
    uStack_32 = '\0';
    uStack_31 = '\0';
    *(undefined4 *)(puVar9 + 8) = _local_30;
    *(undefined4 *)(puVar9 + 0xc) = _uStack_2c;
    local_30 = '\0';
    uStack_2f = '\0';
    uStack_2e = '\0';
    uStack_2d = '\0';
    uStack_2c = '\0';
    uStack_2b = '\0';
    uStack_2a = '\0';
    uStack_29 = '\0';
  }
  pFVar3 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
  pFVar8 = this;
  if (pFVar3 != (FProgramCache *)0x0) {
    pFVar8 = pFVar3;
  }
  pFVar11 = (FProgramCache *)
            ((pFVar8->m_usedRangeIndices).AllocatorInstance.InlineData +
            (longlong)(this->m_usedRangeIndices).ArrayNum * 0x10);
  if (pFVar8 != pFVar11) {
    iVar7 = *(int *)&param_1->field_0x8;
    pFVar10 = pFVar8;
    do {
      iVar2 = *(int *)((pFVar10->m_usedRangeIndices).AllocatorInstance.InlineData + 8);
      if ((iVar2 == iVar7) &&
         (bVar5 = CompareItems<TTuple<int,int>,int>
                            (*(TTuple<int,int> **)
                              (pFVar10->m_usedRangeIndices).AllocatorInstance.InlineData,
                             *(TTuple<int,int> **)param_1,iVar2), bVar5)) {
        uVar6 = (uint)((longlong)pFVar10 - (longlong)pFVar8 >> 4);
        if (uVar6 != 0xffffffff) {
          return uVar6;
        }
        break;
      }
      pFVar10 = (FProgramCache *)((pFVar10->m_usedRangeIndices).AllocatorInstance.InlineData + 0x10)
      ;
    } while (pFVar10 != pFVar11);
  }
  pFVar8 = this;
  if (pFVar3 != (FProgramCache *)0x0) {
    pFVar8 = pFVar3;
  }
  if (pFVar8 <= param_1) {
    pFVar8 = this;
    if (pFVar3 != (FProgramCache *)0x0) {
      pFVar8 = pFVar3;
    }
    if ((param_1 < (ExecutionIndex *)
                   ((pFVar8->m_usedRangeIndices).AllocatorInstance.InlineData +
                   (longlong)(this->m_usedRangeIndices).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  iVar7 = (this->m_usedRangeIndices).ArrayNum;
  piVar1 = &(this->m_usedRangeIndices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>::ForElementType<UE::Mutable::Private::ExecutionIndex>_>
                      (0x810,(ForElementType<UE::Mutable::Private::ExecutionIndex> *)this,piVar1);
  }
  (this->m_usedRangeIndices).ArrayNum = iVar7 + 1;
  pFVar3 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
  pFVar8 = this;
  if (pFVar3 != (FProgramCache *)0x0) {
    pFVar8 = pFVar3;
  }
  ExecutionIndex::ExecutionIndex
            ((ExecutionIndex *)
             ((pFVar8->m_usedRangeIndices).AllocatorInstance.InlineData + (longlong)iVar7 * 0x10),
             param_1);
  return (this->m_usedRangeIndices).ArrayNum - 1;
}

// IsValid @ 14a9a9c60

bool __thiscall
UE::Mutable::Private::FProgramCache::IsValid(FProgramCache *this,FCacheAddress param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FOpExecutionData *pFVar6;
  uint uVar7;
  FCacheAddress local_res10 [3];
  
  uVar7 = param_1.At;
  if (uVar7 != 0) {
    uVar1 = (this->OpExecutionData).m_index0.ArrayNum;
    if (uVar7 < uVar1) {
      local_res10[0] = param_1;
      if (((param_1.ExecutionIndex == 0) && (param_1.ExecutionOptions == '\0')) &&
         (param_1.Type == Full)) {
        uVar5 = 0;
        if ((int)uVar7 < (int)uVar1) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar6 = (FOpExecutionData *)
                 ((this->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                 (longlong)(int)uVar7 * 8);
      }
      else {
        pFVar6 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                 ::Find((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                         *)&(this->OpExecutionData).m_otherIndex,local_res10);
      }
      if (pFVar6 != (FOpExecutionData *)0x0) {
        if (local_res10[0].Type == Full) {
          return pFVar6->IsValueValid;
        }
        if (local_res10[0].Type == ImageDesc) {
          return pFVar6->IsDescCacheValid;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x273,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
  }
  return false;
}

// SetColour @ 14a9e5670

void __thiscall
UE::Mutable::Private::FProgramCache::SetColour
          (FProgramCache *this,FCacheAddress param_1,TVector4<float> *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  TArray<UE::Math::TVector4<float>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar12;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3a0,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != Color) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Color || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3a2,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar12 = &this->ColorResults;
  uVar3 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = Color;
  if (uVar3 == 0) {
    pFVar11->field5_0x4 = (FOpExecutionData_u_4)(this->ColorResults).ArrayNum;
    pTVar4 = (TVector4<float> *)(pTVar12->AllocatorInstance)._padding_;
    if ((pTVar4 <= param_2) && (param_2 < pTVar4 + (this->ColorResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = (this->ColorResults).ArrayNum;
    piVar1 = &(this->ColorResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x1010,&pTVar12->AllocatorInstance,piVar1);
    }
    (this->ColorResults).ArrayNum = iVar9 + 1;
    uVar6 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    puVar2 = (undefined8 *)((pTVar12->AllocatorInstance)._padding_ + (longlong)iVar9 * 0x10);
    *puVar2 = *(undefined8 *)&param_2->field0_0x0;
    puVar2[1] = uVar6;
  }
  else {
    uVar6 = *(undefined8 *)&param_2->field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    uVar10 = 0;
    if ((int)uVar3 < (this->ColorResults).ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar2 = (undefined8 *)((pTVar12->AllocatorInstance)._padding_ + (longlong)(int)uVar3 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3af,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// SetExtensionData @ 14a9e5870

void __thiscall
UE::Mutable::Private::FProgramCache::SetExtensionData
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FExtensionData *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  undefined8 *puVar12;
  TArray<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x404,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != ExtensionData) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::ExtensionData || Data->DataType == EDataType::None"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x406,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar13 = &this->ExtensionDataResults;
  uVar2 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = ExtensionData;
  iVar9 = (this->ExtensionDataResults).ArrayNum;
  if (uVar2 == 0) {
    (pFVar11->field5_0x4).DataTypeIndex = iVar9;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
             (pTVar13->AllocatorInstance)._padding_;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->ExtensionDataResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->ExtensionDataResults).ArrayNum;
    piVar1 = &(this->ExtensionDataResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->ExtensionDataResults).ArrayNum = iVar9 + 1;
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    *puVar12 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    puVar12[1] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar9) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar5 = param_2->Object;
    puVar12 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
    *puVar12 = pFVar5;
    puVar12[1] = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x413,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetImage @ 14a9e5c60

void __thiscall
UE::Mutable::Private::FProgramCache::SetImage
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  FCacheAddress *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FImage *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FOpExecutionData *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TArray<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  FCacheAddress local_38;
  FCacheAddress local_30;
  FCacheAddress local_28;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("At.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x418,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar10->DataType != Image) && (pFVar10->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Image || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x41a,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10->IsValueValid = '\x01';
  pTVar13 = &this->ImageResults;
  uVar3 = (pFVar10->field5_0x4).DataTypeIndex;
  pFVar10->DataType = Image;
  iVar9 = (this->ImageResults).ArrayNum;
  if (uVar3 == 0) {
    (pFVar10->field5_0x4).DataTypeIndex = iVar9;
    local_30 = (FCacheAddress)param_2->Object;
    local_28 = (FCacheAddress)(param_2->SharedReferenceCount).ReferenceController;
    if (local_28 != (FCacheAddress)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      UNLOCK();
    }
    pFVar4 = (FCacheAddress *)(pTVar13->AllocatorInstance)._padding_;
    local_38 = param_1;
    if ((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (longlong)(this->ImageResults).ArrayMax * 3))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->ImageResults).ArrayNum;
    piVar1 = &(this->ImageResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x818,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->ImageResults).ArrayNum = iVar9 + 1;
    pFVar4 = (FCacheAddress *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar9 * 0x18);
    *pFVar4 = local_38;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    pFVar4[1] = local_30;
    pFVar4[2] = local_28;
    local_28.At = 0;
    local_28.ExecutionIndex = 0;
    local_28.ExecutionOptions = '\0';
    local_28.Type = Full;
    local_30.At = 0;
    local_30.ExecutionIndex = 0;
    local_30.ExecutionOptions = '\0';
    local_30.Type = Full;
  }
  else {
    uVar11 = 0;
    if ((int)uVar3 < iVar9) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar2 = (pTVar13->AllocatorInstance)._padding_ + (longlong)(int)uVar3 * 0x18;
    pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar6 = param_2->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = *(TReferenceControllerBase<1> **)(lVar2 + 0x10);
    *(FImage **)(lVar2 + 8) = pFVar6;
    *(TReferenceControllerBase<1> **)(lVar2 + 0x10) = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((pFVar10->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x427,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetInstance @ 14a9e5ee0

void __thiscall
UE::Mutable::Private::FProgramCache::SetInstance
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FInstance *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  undefined8 *puVar12;
  TArray<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3f0,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != Instance) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Instance || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3f2,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar13 = &this->InstanceResults;
  uVar2 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = Instance;
  iVar9 = (this->InstanceResults).ArrayNum;
  if (uVar2 == 0) {
    (pFVar11->field5_0x4).DataTypeIndex = iVar9;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)
             (pTVar13->AllocatorInstance)._padding_;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->InstanceResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->InstanceResults).ArrayNum;
    piVar1 = &(this->InstanceResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->InstanceResults).ArrayNum = iVar9 + 1;
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    *puVar12 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    puVar12[1] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar9) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar5 = param_2->Object;
    puVar12 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
    *puVar12 = pFVar5;
    puVar12[1] = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3ff,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetLayout @ 14a9e6100

void __thiscall
UE::Mutable::Private::FProgramCache::SetLayout
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLayout *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  undefined8 *puVar12;
  TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x446,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != Layout) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Layout || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x448,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar13 = &this->LayoutResults;
  uVar2 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = Layout;
  iVar9 = (this->LayoutResults).ArrayNum;
  if (uVar2 == 0) {
    (pFVar11->field5_0x4).DataTypeIndex = iVar9;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
             (pTVar13->AllocatorInstance)._padding_;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->LayoutResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->LayoutResults).ArrayNum;
    piVar1 = &(this->LayoutResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->LayoutResults).ArrayNum = iVar9 + 1;
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    *puVar12 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    puVar12[1] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar9) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar5 = param_2->Object;
    puVar12 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
    *puVar12 = pFVar5;
    puVar12[1] = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x455,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetMaterial @ 14a9e6320

void __thiscall
UE::Mutable::Private::FProgramCache::SetMaterial
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMaterial *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  undefined8 *puVar12;
  TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3c8,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != Material) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Material || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3ca,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar13 = &this->MaterialResults;
  uVar2 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = Material;
  iVar9 = (this->MaterialResults).ArrayNum;
  if (uVar2 == 0) {
    (pFVar11->field5_0x4).DataTypeIndex = iVar9;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
             (pTVar13->AllocatorInstance)._padding_;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->MaterialResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->MaterialResults).ArrayNum;
    piVar1 = &(this->MaterialResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->MaterialResults).ArrayNum = iVar9 + 1;
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    *puVar12 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    puVar12[1] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar9) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar5 = param_2->Object;
    puVar12 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
    *puVar12 = pFVar5;
    puVar12[1] = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x3d7,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetMatrix @ 14a9e6540

void __thiscall
UE::Mutable::Private::FProgramCache::SetMatrix
          (FProgramCache *this,FCacheAddress param_1,TMatrix<float> *param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  TMatrix<float> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FOpExecutionData *pFVar21;
  longlong lVar22;
  TArray<UE::Math::TMatrix<float>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar23;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if (((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("at.At < OpExecutionData.size_code()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3b4,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar21 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if (((pFVar21->DataType != Matrix) && (pFVar21->DataType != None)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data->DataType == EDataType::Matrix || Data->DataType == EDataType::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3b6,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar21->IsValueValid = '\x01';
  pTVar23 = &this->MatrixResults;
  uVar4 = (pFVar21->field5_0x4).DataTypeIndex;
  pFVar21->DataType = Matrix;
  if (uVar4 == 0) {
    pFVar21->field5_0x4 = (FOpExecutionData_u_4)(this->MatrixResults).ArrayNum;
    pTVar5 = (TMatrix<float> *)(pTVar23->AllocatorInstance)._padding_;
    if (((pTVar5 <= param_2) && (param_2 < pTVar5 + (this->MatrixResults).ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar19 = (this->MatrixResults).ArrayNum;
    piVar1 = &(this->MatrixResults).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x1040,&pTVar23->AllocatorInstance,piVar1);
    }
    (this->MatrixResults).ArrayNum = iVar19 + 1;
    uVar12 = *(undefined8 *)(param_2->M[0] + 2);
    lVar6 = (pTVar23->AllocatorInstance)._padding_;
    lVar22 = (longlong)iVar19 * 0x40;
    *(undefined8 *)(lVar22 + lVar6) = *(undefined8 *)param_2->M[0];
    ((undefined8 *)(lVar22 + lVar6))[1] = uVar12;
    uVar12 = *(undefined8 *)(param_2->M[1] + 2);
    puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar6);
    *puVar3 = *(undefined8 *)param_2->M[1];
    puVar3[1] = uVar12;
    uVar12 = *(undefined8 *)(param_2->M[2] + 2);
    puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar6);
    *puVar3 = *(undefined8 *)param_2->M[2];
    puVar3[1] = uVar12;
    uVar12 = *(undefined8 *)(param_2->M[3] + 2);
    puVar3 = (undefined8 *)(lVar22 + 0x30 + lVar6);
    *puVar3 = *(undefined8 *)param_2->M[3];
    puVar3[1] = uVar12;
  }
  else {
    uVar12 = *(undefined8 *)param_2->M[1];
    uVar13 = *(undefined8 *)(param_2->M[1] + 2);
    fVar8 = param_2->M[0][0];
    fVar9 = param_2->M[0][1];
    fVar10 = param_2->M[0][2];
    fVar11 = param_2->M[0][3];
    uVar14 = *(undefined8 *)param_2->M[2];
    uVar15 = *(undefined8 *)(param_2->M[2] + 2);
    uVar20 = 0;
    if ((int)uVar4 < (this->MatrixResults).ArrayNum) {
      uVar20 = ~uVar4 >> 0x1f;
    }
    uVar16 = *(undefined8 *)param_2->M[3];
    uVar17 = *(undefined8 *)(param_2->M[3] + 2);
    if ((uVar20 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar6 = (pTVar23->AllocatorInstance)._padding_;
    lVar22 = (longlong)(int)uVar4 * 0x40;
    pfVar2 = (float *)(lVar22 + lVar6);
    *pfVar2 = fVar8;
    pfVar2[1] = fVar9;
    pfVar2[2] = fVar10;
    pfVar2[3] = fVar11;
    puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar6);
    *puVar3 = uVar12;
    puVar3[1] = uVar13;
    puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar6);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (undefined8 *)(lVar22 + 0x30 + lVar6);
    *puVar3 = uVar16;
    puVar3[1] = uVar17;
  }
  if (((pFVar21->field5_0x4).DataTypeIndex == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data->DataTypeIndex != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3c3,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// SetMesh @ 14a9e67a0

void __thiscall
UE::Mutable::Private::FProgramCache::SetMesh
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  FCacheAddress *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMesh *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FOpExecutionData *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TArray<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  FCacheAddress local_38;
  FCacheAddress local_30;
  FCacheAddress local_28;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("At.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x42e,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar10->DataType != Mesh) && (pFVar10->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Mesh || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x432,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10->IsValueValid = '\x01';
  pTVar13 = &this->MeshResults;
  uVar3 = (pFVar10->field5_0x4).DataTypeIndex;
  pFVar10->DataType = Mesh;
  iVar9 = (this->MeshResults).ArrayNum;
  if (uVar3 == 0) {
    (pFVar10->field5_0x4).DataTypeIndex = iVar9;
    local_30 = (FCacheAddress)param_2->Object;
    local_28 = (FCacheAddress)(param_2->SharedReferenceCount).ReferenceController;
    if (local_28 != (FCacheAddress)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      UNLOCK();
    }
    pFVar4 = (FCacheAddress *)(pTVar13->AllocatorInstance)._padding_;
    local_38 = param_1;
    if ((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (longlong)(this->MeshResults).ArrayMax * 3))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->MeshResults).ArrayNum;
    piVar1 = &(this->MeshResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x818,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->MeshResults).ArrayNum = iVar9 + 1;
    pFVar4 = (FCacheAddress *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar9 * 0x18);
    *pFVar4 = local_38;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    pFVar4[1] = local_30;
    pFVar4[2] = local_28;
    local_28.At = 0;
    local_28.ExecutionIndex = 0;
    local_28.ExecutionOptions = '\0';
    local_28.Type = Full;
    local_30.At = 0;
    local_30.ExecutionIndex = 0;
    local_30.ExecutionOptions = '\0';
    local_30.Type = Full;
  }
  else {
    uVar11 = 0;
    if ((int)uVar3 < iVar9) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar2 = (pTVar13->AllocatorInstance)._padding_ + (longlong)(int)uVar3 * 0x18;
    pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar6 = param_2->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = *(TReferenceControllerBase<1> **)(lVar2 + 0x10);
    *(FMesh **)(lVar2 + 8) = pFVar6;
    *(TReferenceControllerBase<1> **)(lVar2 + 0x10) = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((pFVar10->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x43f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetProjector @ 14a9e72f0

void __thiscall
UE::Mutable::Private::FProgramCache::SetProjector
          (FProgramCache *this,FCacheAddress param_1,FProjector *param_2)

{
  int *piVar1;
  EProjectorType *pEVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FProjector *pFVar6;
  longlong lVar7;
  code *pcVar8;
  EProjectorType EVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FOpExecutionData *pFVar20;
  longlong lVar21;
  TArray<UE::Mutable::Private::FProjector,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar22;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if (((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("at.At < OpExecutionData.size_code()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3dc,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar20 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if (((pFVar20->DataType != Projector) && (pFVar20->DataType != None)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data->DataType == EDataType::Projector || Data->DataType == EDataType::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3de,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar20->IsValueValid = '\x01';
  pTVar22 = &this->ProjectorResults;
  uVar5 = (pFVar20->field5_0x4).DataTypeIndex;
  pFVar20->DataType = Projector;
  if (uVar5 == 0) {
    pFVar20->field5_0x4 = (FOpExecutionData_u_4)(this->ProjectorResults).ArrayNum;
    pFVar6 = (FProjector *)(pTVar22->AllocatorInstance)._padding_;
    if (((pFVar6 <= param_2) && (param_2 < pFVar6 + (this->ProjectorResults).ArrayMax)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar18 = (this->ProjectorResults).ArrayNum;
    piVar1 = &(this->ProjectorResults).ArrayMax;
    if (iVar18 == *piVar1) {
      iVar18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x438,&pTVar22->AllocatorInstance,piVar1);
    }
    (this->ProjectorResults).ArrayNum = iVar18 + 1;
    uVar13 = *(undefined8 *)((longlong)&(param_2->position).field0_0x0 + 4);
    lVar21 = (longlong)iVar18 * 0x38;
    lVar7 = (pTVar22->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar21 + lVar7) = *(undefined8 *)param_2;
    ((undefined8 *)(lVar21 + lVar7))[1] = uVar13;
    uVar13 = *(undefined8 *)((longlong)&(param_2->direction).field0_0x0 + 8);
    puVar3 = (undefined8 *)(lVar21 + 0x10 + lVar7);
    *puVar3 = *(undefined8 *)&(param_2->direction).field0_0x0;
    puVar3[1] = uVar13;
    uVar13 = *(undefined8 *)&(param_2->scale).field0_0x0;
    puVar3 = (undefined8 *)(lVar21 + 0x20 + lVar7);
    *puVar3 = *(undefined8 *)((longlong)&(param_2->up).field0_0x0 + 4);
    puVar3[1] = uVar13;
    *(undefined8 *)(lVar21 + 0x30 + lVar7) =
         *(undefined8 *)((longlong)&(param_2->scale).field0_0x0 + 8);
  }
  else {
    uVar13 = *(undefined8 *)&(param_2->direction).field0_0x0;
    uVar14 = *(undefined8 *)((longlong)&(param_2->direction).field0_0x0 + 8);
    EVar9 = param_2->type;
    fVar10 = (param_2->position).field0_0x0._s_0.X;
    fVar11 = (param_2->position).field0_0x0._s_0.Y;
    fVar12 = (param_2->position).field0_0x0._s_0.Z;
    uVar15 = *(undefined8 *)((longlong)&(param_2->up).field0_0x0 + 4);
    uVar16 = *(undefined8 *)&(param_2->scale).field0_0x0;
    uVar19 = 0;
    if ((int)uVar5 < (this->ProjectorResults).ArrayNum) {
      uVar19 = ~uVar5 >> 0x1f;
    }
    uVar4 = *(undefined8 *)((longlong)&(param_2->scale).field0_0x0 + 8);
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = (pTVar22->AllocatorInstance)._padding_;
    lVar21 = (longlong)(int)uVar5 * 0x38;
    pEVar2 = (EProjectorType *)(lVar21 + lVar7);
    *pEVar2 = EVar9;
    pEVar2[1] = (EProjectorType)fVar10;
    pEVar2[2] = (EProjectorType)fVar11;
    pEVar2[3] = (EProjectorType)fVar12;
    puVar3 = (undefined8 *)(lVar21 + 0x10 + lVar7);
    *puVar3 = uVar13;
    puVar3[1] = uVar14;
    puVar3 = (undefined8 *)(lVar21 + 0x20 + lVar7);
    *puVar3 = uVar15;
    puVar3[1] = uVar16;
    *(undefined8 *)(lVar21 + 0x30 + lVar7) = uVar4;
  }
  if (((pFVar20->field5_0x4).DataTypeIndex == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data->DataTypeIndex != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x3eb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

// SetString @ 14a9e7540

void __thiscall
UE::Mutable::Private::FProgramCache::SetString
          (FProgramCache *this,FCacheAddress param_1,
          TSharedPtr<UE::Mutable::Private::String_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<UE::Mutable::Private::String_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  String *pSVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOpExecutionData *pFVar11;
  undefined8 *puVar12;
  TArray<TSharedPtr<UE::Mutable::Private::String_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar13;
  FCacheAddress local_res10;
  
  local_res10 = param_1;
  if ((uint)(this->OpExecutionData).m_index0.ArrayNum <= param_1.At) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("at.At < OpExecutionData.size_code()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x45c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                      (&this->OpExecutionData,&local_res10);
  if ((pFVar11->DataType != String) && (pFVar11->DataType != None)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::String || Data->DataType == EDataType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x45e,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11->IsValueValid = '\x01';
  pTVar13 = &this->StringResults;
  uVar2 = (pFVar11->field5_0x4).DataTypeIndex;
  pFVar11->DataType = String;
  iVar9 = (this->StringResults).ArrayNum;
  if (uVar2 == 0) {
    (pFVar11->field5_0x4).DataTypeIndex = iVar9;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)
             (pTVar13->AllocatorInstance)._padding_;
    if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->StringResults).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->StringResults).ArrayNum;
    piVar1 = &(this->StringResults).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->StringResults).ArrayNum = iVar9 + 1;
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    *puVar12 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    puVar12[1] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar9) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pSVar5 = param_2->Object;
    puVar12 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + (pTVar13->AllocatorInstance)._padding_);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
    *puVar12 = pSVar5;
    puVar12[1] = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((pFVar11->field5_0x4).DataTypeIndex == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataTypeIndex!=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x46b,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetUnused @ 14a9e7760

void __thiscall
UE::Mutable::Private::FProgramCache::SetUnused(FProgramCache *this,FOpExecutionData *param_1)

{
  EDataType EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  uVar2 = (param_1->field5_0x4).DataTypeIndex;
  lVar7 = (longlong)(int)uVar2;
  param_1->IsValueValid = '\0';
  if (uVar2 != 0) {
    if (PhysicsAsset < param_1->DataType) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("uint8(Data.DataType) < uint8(EDataType::Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x242,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar1 = param_1->DataType;
    if (EVar1 == Image) {
      uVar5 = 0;
      if ((int)uVar2 < (this->ImageResults).ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator=
                ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
                 ((this->ImageResults).AllocatorInstance._padding_ + (lVar7 * 3 + 1) * 8),
                 (FNullTag *)0x0);
    }
    else {
      if (EVar1 == Mesh) {
        uVar5 = 0;
        if ((int)uVar2 < (this->MeshResults).ArrayNum) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator=
                  ((TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
                   ((this->MeshResults).AllocatorInstance._padding_ + (lVar7 * 3 + 1) * 8),
                   (FNullTag *)0x0);
        return;
      }
      if (EVar1 == Instance) {
        uVar5 = 0;
        if ((int)uVar2 < (this->InstanceResults).ArrayNum) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar6 = (undefined8 *)(lVar7 * 0x10 + (this->InstanceResults).AllocatorInstance._padding_);
        local_18 = 0;
        FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (puVar6 != &local_18) {
          *puVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar6 + 1),&FStack_10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_10.ReferenceController);
        return;
      }
      if (EVar1 == ExtensionData) {
        uVar5 = 0;
        if ((int)uVar2 < (this->ExtensionDataResults).ArrayNum) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar6 = (undefined8 *)
                 (lVar7 * 0x10 + (this->ExtensionDataResults).AllocatorInstance._padding_);
        local_28 = 0;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (puVar6 != &local_28) {
          *puVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar6 + 1),&FStack_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_20.ReferenceController);
        return;
      }
    }
  }
  return;
}

// ~FProgramCache @ 14ab604f0

void __thiscall UE::Mutable::Private::FProgramCache::~FProgramCache(FProgramCache *this)

{
  void *pvVar1;
  FProgramCache *pFVar2;
  FProgramCache *pFVar3;
  
  DestructItems<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
             (this->MaterialResults).AllocatorInstance._padding_,(this->MaterialResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->MaterialResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->MaterialResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->MaterialResults).AllocatorInstance._padding_;
  (this->MaterialResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->MatrixResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->MatrixResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->MatrixResults).AllocatorInstance._padding_;
  (this->MatrixResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
             (this->ExtensionDataResults).AllocatorInstance._padding_,
             (this->ExtensionDataResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->ExtensionDataResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->ExtensionDataResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->ExtensionDataResults).AllocatorInstance._padding_;
  (this->ExtensionDataResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::String_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::String_const_,1> *)
             (this->StringResults).AllocatorInstance._padding_,(this->StringResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->StringResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->StringResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->StringResults).AllocatorInstance._padding_;
  (this->StringResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->ProjectorResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->ProjectorResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->ProjectorResults).AllocatorInstance._padding_;
  (this->ProjectorResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)
             (this->InstanceResults).AllocatorInstance._padding_,(this->InstanceResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->InstanceResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->InstanceResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->InstanceResults).AllocatorInstance._padding_;
  (this->InstanceResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
             (this->LayoutResults).AllocatorInstance._padding_,(this->LayoutResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->LayoutResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->LayoutResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->LayoutResults).AllocatorInstance._padding_;
  (this->LayoutResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>
            ((TResourceResult<UE::Mutable::Private::FMesh> *)
             (this->MeshResults).AllocatorInstance._padding_,(this->MeshResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->MeshResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->MeshResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->MeshResults).AllocatorInstance._padding_;
  (this->MeshResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>
            ((TResourceResult<UE::Mutable::Private::FImage> *)
             (this->ImageResults).AllocatorInstance._padding_,(this->ImageResults).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->ImageResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->ImageResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->ImageResults).AllocatorInstance._padding_;
  (this->ImageResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->ColorResults).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->ColorResults).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->ColorResults).AllocatorInstance._padding_;
  (this->ColorResults).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::
  ~CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>(&this->OpExecutionData);
  pFVar2 = *(FProgramCache **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
  pFVar3 = this;
  if (pFVar2 != (FProgramCache *)0x0) {
    pFVar3 = pFVar2;
  }
  DestructItems<UE::Mutable::Private::ExecutionIndex,int>
            ((ExecutionIndex *)pFVar3,(this->m_usedRangeIndices).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter -
              *(longlong *)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData.field_0x8);
  UNLOCK();
  FGlobalMemoryCounter::Update
            (-*(longlong *)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData.field_0x8);
  pvVar1 = *(void **)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData;
  *(undefined8 *)&(this->m_usedRangeIndices).AllocatorInstance.SecondaryData.field_0x8 = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// ClearDescCache @ 14ab6baf0

void __thiscall UE::Mutable::Private::FProgramCache::ClearDescCache(FProgramCache *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *this_00;
  int iVar7;
  bool bVar8;
  uint local_a8;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_98;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *pTStack_78;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *local_70;
  undefined2 local_68;
  TIterator local_58;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Mutable::Private::FProgramCache::ClearDescCache(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId677,"Mutable_ProgramDescCacheClear",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
               ,0x2a5);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Mutable::Private::FProgramCache::ClearDescCache(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId677);
  }
  local_a8 = 0;
  this_00 = (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
             *)&(this->OpExecutionData).m_otherIndex;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  ::TIterator::TIterator(&local_58,this_00);
  iVar7 = 1;
  local_68 = 0;
  TStack_98._padding_ = local_58._padding_;
  TStack_98.Array =
       (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        *)local_58._padding_;
  TStack_98.UnvisitedBitMask = (undefined4)local_58._padding_;
  TStack_98.CurrentBitIndex = local_58._padding_._4_4_;
  TStack_98._24_8_ = local_58._padding_;
  pTStack_78 = local_58.Set;
  local_70 = this_00;
  do {
    if (((int)local_a8 < 0) || ((this->OpExecutionData).m_index0.ArrayNum <= (int)local_a8)) {
      if ((TStack_98.Array)->NumBits <= TStack_98.CurrentBitIndex) {
        if (((char)local_68 != '\0') && (local_68._1_1_ != '\0')) {
          uVar5 = *(int *)&(this_00->Elements).field_0x10 - *(int *)&(this_00->Elements).field_0x44;
          if (3 < uVar5) {
            uVar1 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar7 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((0 < (int)uVar5) && (this_00->HashSize < iVar7)) || (iVar7 < this_00->HashSize)) {
            this_00->HashSize = iVar7;
            TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::Rehash(this_00);
          }
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      if ((-1 < (int)local_a8) &&
         (iVar4 = (this->OpExecutionData).m_index0.ArrayNum, (int)local_a8 < iVar4))
      goto LAB_14ab6bbe0;
      lVar6 = *(longlong *)local_58._padding_ + ((longlong)TStack_98.CurrentBitIndex * 3 + 1) * 8;
    }
    else {
      iVar4 = (this->OpExecutionData).m_index0.ArrayNum;
LAB_14ab6bbe0:
      uVar5 = 0;
      if ((int)local_a8 < iVar4) {
        uVar5 = ~local_a8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (this->OpExecutionData).m_index0.AllocatorInstance._padding_ +
              (longlong)(int)local_a8 * 8;
    }
    *(byte *)(lVar6 + 2) = *(byte *)(lVar6 + 2) & 0xfe;
    if (((int)local_a8 < 0) || ((this->OpExecutionData).m_index0.ArrayNum <= (int)local_a8)) {
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      ::FindFirstSetBit(&TStack_98);
      this_00 = local_70;
    }
    else {
      local_a8 = local_a8 + 1;
    }
    if (((char)local_68 != '\0') && (local_68._1_1_ != '\0')) {
      uVar5 = *(int *)&(this_00->Elements).field_0x10 - *(int *)&(this_00->Elements).field_0x44;
      if (uVar5 < 4) {
        iVar4 = 1;
      }
      else {
        uVar1 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar5) && (this_00->HashSize < iVar4)) || (iVar4 < this_00->HashSize)) {
        this_00->HashSize = iVar4;
        TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash(this_00);
      }
    }
  } while( true );
}

// GetInstance @ 14ab75390

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
UE::Mutable::Private::FProgramCache::GetInstance
          (FProgramCache *this,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *__return_storage_ptr__,
          FCacheAddress param_1)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  FOpExecutionData *pFVar7;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar8;
  uint uVar9;
  FCacheAddress local_res18 [2];
  
  if (param_1.At == 0) {
    __return_storage_ptr__->Object = (FInstance *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_res18[0] = param_1;
  pFVar7 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                     (&this->OpExecutionData,local_res18);
  if (pFVar7 == (FOpExecutionData *)0x0) {
    __return_storage_ptr__->Object = (FInstance *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (pFVar7->DataType != Instance) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->DataType == EDataType::Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x2fb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  uVar1 = (pFVar7->field5_0x4).DataTypeIndex;
  uVar9 = 0;
  if ((int)uVar1 < (this->InstanceResults).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar2 = (this->InstanceResults).AllocatorInstance._padding_;
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)(int)uVar1 * 0x10);
  pFVar4 = *(FInstance **)(lVar2 + (longlong)(int)uVar1 * 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7->OpHitCount == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data->OpHitCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x2ff,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar7->OpHitCount = pFVar7->OpHitCount - 1;
  if ((pFVar7->OpHitCount == 0) && (pFVar7->IsCacheLocked == '\0')) {
    SetUnused(this,pFVar7);
  }
  __return_storage_ptr__->Object = pFVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Init @ 14ab7d9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Mutable::Private::FProgramCache::Init(FProgramCache *this,uint param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector4<float>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar2;
  TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar3;
  TArray<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar4;
  TArray<UE::Mutable::Private::FProjector,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar5;
  TArray<TSharedPtr<UE::Mutable::Private::String_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar6;
  TArray<UE::Math::TMatrix<float>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar7;
  TArray<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar8;
  TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar9;
  void *_Dst;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_168 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar1 = &(this->OpExecutionData).m_index0.ArrayNum;
  iVar16 = *piVar1;
  if (iVar16 < (int)param_1) {
    iVar15 = Core::Private::
             ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                       (8,4,param_1 - iVar16,(ForAnyElementType *)&this->OpExecutionData,piVar1,
                        &(this->OpExecutionData).m_index0.ArrayMax);
    memset((void *)((this->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                   (longlong)iVar15 * 8),0,(longlong)(int)(param_1 - iVar16) << 3);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar16) {
      uVar18 = iVar16 - param_1;
      if ((int)(uVar18 | param_1) < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar14) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (uVar18 != 0) {
        _Dst = (void *)((this->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                       (longlong)(int)param_1 * 8);
        iVar16 = (*piVar1 - param_1) - uVar18;
        if (iVar16 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar18 * 8),(longlong)iVar16 << 3);
        }
        *piVar1 = *piVar1 - uVar18;
        Core::Private::
        ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)&this->OpExecutionData,*piVar1,
                   &(this->OpExecutionData).m_index0.ArrayMax);
      }
    }
  }
  if ((this->ColorResults).ArrayNum == 0) {
    pTVar2 = &this->ColorResults;
    puVar10 = (undefined8 *)(pTVar2->AllocatorInstance)._padding_;
    local_c8 = ___xmm_3f800000000000000000000000000000;
    uStack_c0 = _UNK_150689648;
    if ((puVar10 <= &local_c8) &&
       (&local_c8 < puVar10 + (longlong)(this->ColorResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->ColorResults).ArrayNum;
    piVar1 = &(this->ColorResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x1010,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ColorResults).ArrayNum = iVar16 + 1;
    piVar1 = &(this->ImageResults).ArrayMax;
    puVar10 = (undefined8 *)((pTVar2->AllocatorInstance)._padding_ + (longlong)iVar16 * 0x10);
    *puVar10 = local_c8;
    puVar10[1] = uStack_c0;
    iVar16 = (this->ImageResults).ArrayNum;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x818,&(this->ImageResults).AllocatorInstance,piVar1);
    }
    (this->ImageResults).ArrayNum = iVar16 + 1;
    pTVar3 = &this->LayoutResults;
    lVar17 = (longlong)iVar16;
    local_118 = 0;
    uStack_110 = 0;
    lVar11 = (this->ImageResults).AllocatorInstance._padding_;
    *(undefined8 *)(lVar11 + lVar17 * 0x18) = 0;
    *(undefined8 *)(lVar11 + 8 + lVar17 * 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x10 + lVar17 * 0x18) = 0;
    puVar10 = (undefined8 *)(pTVar3->AllocatorInstance)._padding_;
    if ((puVar10 <= &local_118) &&
       (&local_118 < puVar10 + (longlong)(this->LayoutResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->LayoutResults).ArrayNum;
    piVar1 = &(this->LayoutResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->LayoutResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar3->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x10) = local_118;
    *(undefined8 *)(lVar11 + 8 + (longlong)iVar16 * 0x10) = uStack_110;
    uStack_110 = 0;
    local_118 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    iVar16 = (this->MeshResults).ArrayNum;
    piVar1 = &(this->MeshResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x818,&(this->MeshResults).AllocatorInstance,piVar1);
    }
    (this->MeshResults).ArrayNum = iVar16 + 1;
    pTVar4 = &this->InstanceResults;
    lVar17 = (longlong)iVar16;
    local_108 = 0;
    uStack_100 = 0;
    lVar11 = (this->MeshResults).AllocatorInstance._padding_;
    *(undefined8 *)(lVar11 + lVar17 * 0x18) = 0;
    *(undefined8 *)(lVar11 + 8 + lVar17 * 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x10 + lVar17 * 0x18) = 0;
    puVar10 = (undefined8 *)(pTVar4->AllocatorInstance)._padding_;
    if ((puVar10 <= &local_108) &&
       (&local_108 < puVar10 + (longlong)(this->InstanceResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->InstanceResults).ArrayNum;
    piVar1 = &(this->InstanceResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->InstanceResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar4->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x10) = local_108;
    *(undefined8 *)(lVar11 + 8 + (longlong)iVar16 * 0x10) = uStack_100;
    uStack_100 = 0;
    local_108 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_b8 = 0;
    pTVar5 = &this->ProjectorResults;
    uStack_84 = 0;
    puVar12 = (undefined4 *)(pTVar5->AllocatorInstance)._padding_;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    if ((puVar12 <= &local_b8) &&
       (&local_b8 < puVar12 + (longlong)(this->ProjectorResults).ArrayMax * 0xe)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->ProjectorResults).ArrayNum;
    piVar1 = &(this->ProjectorResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x438,&pTVar5->AllocatorInstance,piVar1);
    }
    (this->ProjectorResults).ArrayNum = iVar16 + 1;
    lVar17 = (longlong)iVar16 * 0x38;
    lVar11 = (pTVar5->AllocatorInstance)._padding_;
    pTVar6 = &this->StringResults;
    *(undefined8 *)(lVar17 + lVar11) = CONCAT44(uStack_b4,local_b8);
    ((undefined8 *)(lVar17 + lVar11))[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar10 = (undefined8 *)(lVar17 + 0x10 + lVar11);
    *puVar10 = CONCAT44(uStack_a4,uStack_a8);
    puVar10[1] = CONCAT44(uStack_9c,uStack_a0);
    puVar10 = (undefined8 *)(lVar17 + 0x20 + lVar11);
    *puVar10 = CONCAT44(local_94,uStack_98);
    puVar10[1] = CONCAT44(uStack_8c,uStack_90);
    *(ulonglong *)(lVar17 + 0x30 + lVar11) = CONCAT44(uStack_84,uStack_88);
    puVar10 = (undefined8 *)(pTVar6->AllocatorInstance)._padding_;
    local_f8 = 0;
    uStack_f0 = 0;
    if ((puVar10 <= &local_f8) &&
       (&local_f8 < puVar10 + (longlong)(this->StringResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->StringResults).ArrayNum;
    piVar1 = &(this->StringResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x810,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->StringResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar6->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x10) = local_f8;
    *(undefined8 *)(lVar11 + 8 + (longlong)iVar16 * 0x10) = uStack_f0;
    uStack_f0 = 0;
    local_f8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar7 = &this->MatrixResults;
    puVar10 = (undefined8 *)(pTVar7->AllocatorInstance)._padding_;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if ((puVar10 <= &local_78) &&
       (&local_78 < puVar10 + (longlong)(this->MatrixResults).ArrayMax * 8)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->MatrixResults).ArrayNum;
    piVar1 = &(this->MatrixResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x1040,&pTVar7->AllocatorInstance,piVar1);
    }
    (this->MatrixResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar7->AllocatorInstance)._padding_;
    pTVar8 = &this->ExtensionDataResults;
    lVar17 = (longlong)iVar16 * 0x40;
    *(undefined8 *)(lVar17 + lVar11) = local_78;
    ((undefined8 *)(lVar17 + lVar11))[1] = uStack_70;
    puVar10 = (undefined8 *)(lVar17 + 0x10 + lVar11);
    *puVar10 = local_68;
    puVar10[1] = uStack_60;
    puVar10 = (undefined8 *)(lVar17 + 0x20 + lVar11);
    *puVar10 = local_58;
    puVar10[1] = uStack_50;
    puVar10 = (undefined8 *)(lVar17 + 0x30 + lVar11);
    *puVar10 = local_48;
    puVar10[1] = uStack_40;
    puVar10 = (undefined8 *)(pTVar8->AllocatorInstance)._padding_;
    local_e8 = 0;
    uStack_e0 = 0;
    if ((puVar10 <= &local_e8) &&
       (&local_e8 < puVar10 + (longlong)(this->ExtensionDataResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->ExtensionDataResults).ArrayNum;
    piVar1 = &(this->ExtensionDataResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x810,&pTVar8->AllocatorInstance,piVar1);
    }
    (this->ExtensionDataResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar8->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x10) = local_e8;
    *(undefined8 *)(lVar11 + 8 + (longlong)iVar16 * 0x10) = uStack_e0;
    uStack_e0 = 0;
    local_e8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar9 = &this->MaterialResults;
    puVar10 = (undefined8 *)(pTVar9->AllocatorInstance)._padding_;
    local_d8 = 0;
    uStack_d0 = 0;
    if ((puVar10 <= &local_d8) &&
       (&local_d8 < puVar10 + (longlong)(this->MaterialResults).ArrayMax * 2)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar16 = (this->MaterialResults).ArrayNum;
    piVar1 = &(this->MaterialResults).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                         (0x810,&pTVar9->AllocatorInstance,piVar1);
    }
    (this->MaterialResults).ArrayNum = iVar16 + 1;
    lVar11 = (pTVar9->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x10) = local_d8;
    *(undefined8 *)(lVar11 + 8 + (longlong)iVar16 * 0x10) = uStack_d0;
    uStack_d0 = 0;
    local_d8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

