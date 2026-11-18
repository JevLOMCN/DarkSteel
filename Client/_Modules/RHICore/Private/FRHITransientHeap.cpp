// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 8

// operator() @ 1446d04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FRHITransientHeap::Flush'::__l5::<lambda_1>::operator()
          (void *this,FRHITransientAllocationStats *param_1,FRHITransientResource *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FRHITransientAllocationStats::FAllocation> FVar7;
  TMap<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 auStackY_d8 [32];
  int local_98 [2];
  ulong64 local_90;
  longlong lStack_88;
  int local_80;
  undefined4 uStack_7c;
  FSparseArrayAllocationInfo local_78 [2];
  TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_50;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_2->AllocationType != Heap) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationType == ERHITransientAllocationType::Heap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x11a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_80 = (param_1->MemoryRanges).ArrayNum;
  local_90 = (param_2->HeapAllocation).Offset;
  lStack_88 = local_90 + (param_2->HeapAllocation).Size;
  this_00 = &param_1->Resources;
  local_50.AllocatorInstance.SecondaryData =
       (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0;
  local_50.ArrayNum = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
            (0x18,8,1,0,&local_50.AllocatorInstance,1,&local_50.ArrayMax);
  FVar7 = (ForElementType<FRHITransientAllocationStats::FAllocation>)&local_50;
  if (local_50.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0) {
    FVar7 = local_50.AllocatorInstance.SecondaryData;
  }
  *(ulong64 *)FVar7 = local_90;
  *(longlong *)((longlong)FVar7 + 8) = lStack_88;
  *(longlong *)((longlong)FVar7 + 0x10) = CONCAT44(uStack_7c,local_80);
  iVar1 = *(int *)&(param_1->Resources).field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this_00,(int *)&(param_1->Resources).field_0x8,
                       (int *)&(param_1->Resources).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Resources).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(param_1->Resources).field_0x30;
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(param_1->Resources).field_0x30 = iVar2;
    *(int *)&(param_1->Resources).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,local_78,iVar5);
  if (local_78[0].Pointer !=
      (TSparseSetElement<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    *(FRHITransientResource **)local_78[0].Pointer = param_2;
    UE::Core::Private::Tuple::
    TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2>
    ::
    TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2><TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
              ((TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2>
                *)((longlong)local_78[0].Pointer + 8),ForwardingConstructor,&local_50);
    *(undefined4 *)((longlong)local_78[0].Pointer + 0x48) = 0xffffffff;
  }
  local_98[0] = local_78[0].Index;
  uVar6 = ((uint)(*(ulonglong *)local_78[0].Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_78[0].Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)this_00,uVar6,local_78[0].Pointer,local_98,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                    *)this_00,uVar6,local_78[0].Pointer,local_98[0]);
  }
  if (local_50.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// AllocateMemoryInternal @ 1446d2c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientHeap::AllocateMemoryInternal
          (FRHITransientHeap *this,FRHITransientResource *param_1,
          FRHITransientHeapAllocation *param_2)

{
  int *piVar1;
  char cVar2;
  ERHIPipeline EVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res10 [8];
  FRHITransientHeapAllocation *local_res18;
  uint local_res20;
  
  uVar9 = *(undefined4 *)&param_2->Heap;
  uVar10 = *(undefined4 *)((longlong)&param_2->Heap + 4);
  uVar13 = param_2->Size;
  uVar11 = *(undefined4 *)((longlong)&param_2->Size + 4);
  uVar12 = param_2->Offset;
  uVar19 = param_2->AlignmentPad;
  uVar14 = *(undefined4 *)&param_2->field_0x1c;
  local_res18 = param_2;
  if ((param_1->AllocationType != Heap) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationType == ERHITransientAllocationType::Heap",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                          ,0x11a,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined4 *)&(param_1->HeapAllocation).Heap = uVar9;
  *(undefined4 *)((longlong)&(param_1->HeapAllocation).Heap + 4) = uVar10;
  *(int *)&(param_1->HeapAllocation).Size = (int)uVar13;
  *(undefined4 *)((longlong)&(param_1->HeapAllocation).Size + 4) = uVar11;
  (param_1->HeapAllocation).Offset = uVar12;
  (param_1->HeapAllocation).AlignmentPad = uVar19;
  *(undefined4 *)&(param_1->HeapAllocation).field_0x1c = uVar14;
  local_res20 = (this->AliasingOverlaps).ArrayNum;
  uVar17 = (ulonglong)(int)local_res20;
  pFVar20 = (this->AliasingOverlaps).AllocatorInstance.Data;
  pFVar18 = pFVar20 + uVar17 * 0x10;
  while( true ) {
    if ((this->AliasingOverlaps).ArrayNum != (int)uVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRHITransientHeapAllocator::FAliasingOverlap,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar20 == pFVar18) {
      (this->AliasingOverlaps).ArrayNum = 0;
      if ((this->AliasingOverlaps).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->AliasingOverlaps).AllocatorInstance,0,
                   &(this->AliasingOverlaps).ArrayMax);
      }
      uVar17 = local_res18->Offset + local_res18->Size;
      if (uVar17 < this->CommitSize) {
        uVar17 = this->CommitSize;
      }
      this->CommitSize = uVar17;
      return;
    }
    lVar5 = *(longlong *)pFVar20;
    uVar19 = *(uint *)(pFVar20 + 8);
    if ((*(char *)(lVar5 + 0xa5) != '\0') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InBeforeResource->IsAcquired()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                            ,0xf6,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (GRHIValidationEnabled != false) {
      cVar2 = *(char *)(lVar5 + 0xa8);
      if ((*(longlong *)(lVar5 + 0x10) != 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ResourceTask.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,0x133,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (param_1->AliasingOverlaps).ArrayNum;
      piVar1 = &(param_1->AliasingOverlaps).ArrayMax;
      uVar6 = *(undefined8 *)(lVar5 + 8);
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_1->AliasingOverlaps).AllocatorInstance,piVar1);
      }
      (param_1->AliasingOverlaps).ArrayNum = iVar16 + 1;
      pFVar7 = (param_1->AliasingOverlaps).AllocatorInstance.Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar16 * 0x10) = uVar6;
      pFVar7[(longlong)iVar16 * 0x10 + 8] = (FScriptContainerElement)(cVar2 != '\0');
    }
    uVar4 = (param_1->AcquirePasses).Min;
    if (uVar19 < uVar4) {
      uVar19 = uVar4;
    }
    EVar3 = param_1->AcquirePipeline;
    (param_1->AcquirePasses).Min = uVar19;
    if ((EVar3 == AsyncCompute) && (*(char *)(lVar5 + 0xa6) != '\0')) {
      if (*(uint *)(lVar5 + 0xa0) < uVar19) {
        uVar19 = *(uint *)(lVar5 + 0xa0);
      }
      *(uint *)(lVar5 + 0xa0) = uVar19;
    }
    else {
      uVar19 = (param_1->AcquirePasses).Max;
      if (*(uint *)(lVar5 + 0xa0) < uVar19) {
        uVar19 = *(uint *)(lVar5 + 0xa0);
      }
      *(uint *)(lVar5 + 0xa0) = uVar19;
    }
    if (((param_1->AcquirePasses).Max < (param_1->AcquirePasses).Min) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("AcquirePasses.Min <= AcquirePasses.Max",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                            ,0x109,L""), bVar15)) break;
    pFVar20 = pFVar20 + 0x10;
    uVar17 = (ulonglong)local_res20;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// CreateBuffer @ 1446d5e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FRHITransientHeap::CreateBuffer
          (FRHITransientHeap *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3,ulong64 param_4,ulong64 param_5,uint param_6,
          TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
          *param_7)

{
  ulong64 *puVar1;
  FRHITransientResourceStats *pFVar2;
  uint *puVar3;
  ERHIPipeline EVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong64 uVar8;
  FRHITransientBuffer *pFVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  uint local_78;
  uint local_74;
  EBufferUsageFlags local_70;
  uint local_6c;
  FRHITransientHeapAllocation local_68;
  <lambda_1> local_48;
  
  FRHITransientHeapAllocator::Allocate
            (&this->Allocator,&local_68,param_3,param_5,param_6,&this->AliasingOverlaps);
  local_68.Heap = this;
  if (local_68.Size == 0) {
    if (*(longlong *)param_7 != 0) {
      plVar11 = (longlong *)&param_7->field_0x10;
      if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_7->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    return (FRHITransientBuffer *)0x0;
  }
  local_78 = param_1->Size;
  local_74 = param_1->Stride;
  local_70 = param_1->Usage;
  local_6c = (param_1->GPUMask).GPUMask;
  uVar8 = CityHash64WithSeed((char *)&local_78,0x10,local_68.Offset);
  local_48.Allocation = &local_68;
  local_48.CreateBufferFunction = param_7;
  local_48.__this = this;
  pFVar9 = TRHITransientResourceCache<FRHITransientBuffer>::
           Acquire<_FRHITransientHeap::CreateBuffer_::__l2::<lambda_1>_>
                     (&this->Buffers,uVar8,&local_48);
  if (pFVar9 == (FRHITransientBuffer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x1a1,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRHITransientBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  EVar4 = param_3->Pipelines;
  if (EVar4 == All) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSinglePipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,99,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRHITransientBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar12 = param_3->Graphics;
  if (uVar12 == 0xffffffff) {
    uVar12 = param_3->AsyncCompute;
  }
  FRHITransientResource::Acquire((FRHITransientResource *)pFVar9,param_2,uVar12,EVar4,param_4);
  AllocateMemoryInternal(this,(FRHITransientResource *)pFVar9,&local_68);
  puVar1 = &(this->Stats).AliasedSizeCurrent;
  *puVar1 = *puVar1 + local_68.Size;
  pFVar2 = &(this->Stats).Buffers;
  pFVar2->AllocatedSize = pFVar2->AllocatedSize + local_68.Size;
  uVar5 = (this->Stats).AliasedSize;
  uVar10 = (this->Stats).AliasedSizeCurrent;
  puVar3 = &(this->Stats).Buffers.AllocationCount;
  *puVar3 = *puVar3 + 1;
  if (uVar10 < uVar5) {
    uVar10 = uVar5;
  }
  (this->Stats).AliasedSize = uVar10;
  if (*(longlong *)param_7 != 0) {
    plVar11 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return pFVar9;
}

// CreateTexture @ 1446d6650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientTexture * __thiscall
FRHITransientHeap::CreateTexture
          (FRHITransientHeap *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3,ulong64 param_4,ulong64 param_5,uint param_6,
          TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
          *param_7)

{
  ulong64 *puVar1;
  uint *puVar2;
  ERHIPipeline EVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  FRHITransientTexture *pFVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStackY_108 [32];
  FRHITransientHeapAllocation local_d8;
  <lambda_1> local_b8;
  FRHITextureDesc local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FRHITransientHeapAllocator::Allocate
            (&this->Allocator,&local_d8,param_3,param_5,param_6,&this->AliasingOverlaps);
  local_d8.Heap = this;
  if (local_d8.Size == 0) {
    if (*(longlong *)param_7 != 0) {
      plVar10 = (longlong *)&param_7->field_0x10;
      if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_7->field_0x28;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    pFVar8 = (FRHITransientTexture *)0x0;
  }
  else {
    local_98.Flags = None;
    local_98.ClearValue._0_8_ = 0;
    local_98.ClearValue.Value._4_8_ = 0;
    local_98._24_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_8_ = 0;
    local_98.NumMips = '\0';
    local_98.NumSamples = '\0';
    local_98.Dimension = Texture2D;
    local_98.Format = PF_Unknown;
    local_98.UAVFormat = PF_Unknown;
    local_98.FastVRAMPercentage = '\0';
    local_98._54_2_ = 0;
    local_98.AliasableFormats.AllocatorInstance.InlineData[0] = '\0';
    local_98.AliasableFormats.AllocatorInstance._1_3_ = 0;
    local_98.AliasableFormats.AllocatorInstance._padding_ = 0;
    local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_98.AliasableFormats.ArrayNum = 0;
    local_98.AliasableFormats.ArrayMax = 0;
    FRHITextureDesc::operator=(&local_98,param_1);
    uVar7 = CityHash64WithSeed((char *)&local_98,0x50,local_d8.Offset);
    if (local_98.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_b8.Allocation = &local_d8;
    local_b8.CreateTextureFunction = param_7;
    local_b8.__this = this;
    pFVar8 = TRHITransientResourceCache<FRHITransientTexture>::
             Acquire<_FRHITransientHeap::CreateTexture_::__l2::<lambda_1>_>
                       (&this->Textures,uVar7,&local_b8);
    if ((pFVar8 == (FRHITransientTexture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                           ,0x17d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHITransientTexture *)(*pcVar5)();
      return pFVar8;
    }
    EVar3 = param_3->Pipelines;
    if ((EVar3 == All) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSinglePipeline()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                           ,99,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHITransientTexture *)(*pcVar5)();
      return pFVar8;
    }
    uVar11 = param_3->Graphics;
    if (uVar11 == 0xffffffff) {
      uVar11 = param_3->AsyncCompute;
    }
    FRHITransientResource::Acquire((FRHITransientResource *)pFVar8,param_2,uVar11,EVar3,param_4);
    AllocateMemoryInternal(this,(FRHITransientResource *)pFVar8,&local_d8);
    puVar1 = &(this->Stats).AliasedSizeCurrent;
    *puVar1 = *puVar1 + local_d8.Size;
    (this->Stats).Textures.AllocatedSize = (this->Stats).Textures.AllocatedSize + local_d8.Size;
    uVar4 = (this->Stats).AliasedSize;
    uVar9 = (this->Stats).AliasedSizeCurrent;
    puVar2 = &(this->Stats).Textures.AllocationCount;
    *puVar2 = *puVar2 + 1;
    if (uVar9 < uVar4) {
      uVar9 = uVar4;
    }
    (this->Stats).AliasedSize = uVar9;
    if (*(longlong *)param_7 != 0) {
      plVar10 = (longlong *)&param_7->field_0x10;
      if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_7->field_0x28;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return pFVar8;
}

// DeallocateMemory @ 1446d7400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientHeap::DeallocateMemory
          (FRHITransientHeap *this,FRHITransientBuffer *param_1,
          FRHITransientAllocationFences *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  *(undefined1 *)((longlong)&param_1->_padding_ + 5) = 0;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 1;
  }
  FRHITransientHeapAllocator::Deallocate(&this->Allocator,(FRHITransientResource *)param_1,param_2);
  lVar3 = param_1->_padding_;
  puVar1 = &(this->Stats).Buffers.DeallocationCount;
  *puVar1 = *puVar1 + 1;
  puVar2 = &(this->Stats).AliasedSizeCurrent;
  *puVar2 = *puVar2 - lVar3;
  return;
}

// DeallocateMemory @ 1446d7460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientHeap::DeallocateMemory
          (FRHITransientHeap *this,FRHITransientTexture *param_1,
          FRHITransientAllocationFences *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  *(undefined1 *)((longlong)&param_1->_padding_ + 5) = 0;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 1;
  }
  FRHITransientHeapAllocator::Deallocate(&this->Allocator,(FRHITransientResource *)param_1,param_2);
  lVar3 = param_1->_padding_;
  puVar1 = &(this->Stats).Textures.DeallocationCount;
  *puVar1 = *puVar1 + 1;
  puVar2 = &(this->Stats).AliasedSizeCurrent;
  *puVar2 = *puVar2 - lVar3;
  return;
}

// DeallocateMemoryInternal @ 1446d7800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientHeap::DeallocateMemoryInternal
          (FRHITransientHeap *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2)

{
  param_1->bAcquired = false;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    param_1->bDiscardOnGraphicsWorkaround = true;
  }
  FRHITransientHeapAllocator::Deallocate(&this->Allocator,param_1,param_2);
  return;
}

// Flush @ 1446da270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientHeap::Flush
          (FRHITransientHeap *this,ulong64 param_1,FRHITransientMemoryStats *param_2,
          FRHITransientAllocationStats *param_3)

{
  uint *puVar1;
  int *piVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  <lambda_1> local_res8 [8];
  ulong64 local_78;
  ulong64 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (((this->Stats).Textures.DeallocationCount == 0) &&
     ((this->Stats).Buffers.DeallocationCount == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  (param_2->Textures).AllocatedSize =
       (param_2->Textures).AllocatedSize + (this->Stats).Textures.AllocatedSize;
  puVar1 = &(param_2->Textures).AllocationCount;
  *puVar1 = *puVar1 + (this->Stats).Textures.AllocationCount;
  puVar1 = &(param_2->Textures).DeallocationCount;
  *puVar1 = *puVar1 + (this->Stats).Textures.DeallocationCount;
  puVar1 = &(param_2->Textures).CreateCount;
  *puVar1 = *puVar1 + (this->Stats).Textures.CreateCount;
  (param_2->Buffers).AllocatedSize =
       (param_2->Buffers).AllocatedSize + (this->Stats).Buffers.AllocatedSize;
  puVar1 = &(param_2->Buffers).AllocationCount;
  *puVar1 = *puVar1 + (this->Stats).Buffers.AllocationCount;
  puVar1 = &(param_2->Buffers).DeallocationCount;
  *puVar1 = *puVar1 + (this->Stats).Buffers.DeallocationCount;
  puVar1 = &(param_2->Buffers).CreateCount;
  *puVar1 = *puVar1 + (this->Stats).Buffers.CreateCount;
  uVar10 = (this->Stats).AliasedSize;
  if (uVar10 < param_2->AliasedSize) {
    uVar10 = param_2->AliasedSize;
  }
  param_2->AliasedSize = uVar10;
  uVar3 = (this->Stats).AliasedSizeCurrent;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  (this->Stats).Textures.AllocatedSize = 0;
  (this->Stats).Textures.AllocationCount = 0;
  (this->Stats).Textures.DeallocationCount = 0;
  local_48 = 0;
  *(undefined8 *)&(this->Stats).Textures.CreateCount = 0;
  uStack_40 = 0;
  local_38 = 0;
  (this->Stats).Buffers.AllocatedSize = 0;
  (this->Stats).Buffers.AllocationCount = 0;
  (this->Stats).Buffers.DeallocationCount = 0;
  *(undefined8 *)&(this->Stats).Buffers.CreateCount = 0;
  (this->Stats).AliasedSize = uVar3;
  FRHITransientHeapAllocator::Flush(&this->Allocator);
  if (param_3 != (FRHITransientAllocationStats *)0x0) {
    TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
               *)&param_3->Resources,
              (*(int *)&(param_3->Resources).field_0x8 - *(int *)&(param_3->Resources).field_0x34) +
              (this->Buffers).Allocated.ArrayNum + (this->Textures).Allocated.ArrayNum);
    iVar9 = (this->Textures).Allocated.ArrayNum;
    pFVar11 = (this->Textures).Allocated.AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar11 + (longlong)iVar9 * 8;
    for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 8) {
      `FRHITransientHeap::Flush'::__l5::<lambda_1>::operator()
                (local_res8,param_3,*(FRHITransientResource **)pFVar11);
    }
    iVar9 = (this->Buffers).Allocated.ArrayNum;
    pFVar11 = (this->Buffers).Allocated.AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar11 + (longlong)iVar9 * 8;
    for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 8) {
      `FRHITransientHeap::Flush'::__l5::<lambda_1>::operator()
                (local_res8,param_3,*(FRHITransientResource **)pFVar11);
    }
    local_78 = (this->Allocator).Capacity;
    pFVar11 = (param_3->MemoryRanges).AllocatorInstance.Data;
    uStack_70 = this->CommitSize;
    local_68 = 0;
    if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar11 + (longlong)(param_3->MemoryRanges).ArrayMax * 0x18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (param_3->MemoryRanges).ArrayNum;
    piVar2 = &(param_3->MemoryRanges).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)param_3,piVar2);
    }
    (param_3->MemoryRanges).ArrayNum = iVar9 + 1;
    pFVar4 = (param_3->MemoryRanges).AllocatorInstance.Data;
    pFVar11 = pFVar4 + (longlong)iVar9 * 0x18;
    *(ulong64 *)pFVar11 = local_78;
    *(ulong64 *)(pFVar11 + 8) = uStack_70;
    *(ulonglong *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = CONCAT44(uStack_64,local_68);
  }
  uVar10 = this->CommitSizeMax;
  if (this->CommitSizeMax < this->CommitSize) {
    uVar10 = this->CommitSize;
  }
  this->CommitSizeMax = uVar10;
  if (bVar8) {
    this->CommitSize = 0;
    TRHITransientResourceCache<FRHITransientTexture>::
    Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>
              (&this->Textures,GFrameCounterRenderThread,local_res8[0]);
    iVar9 = (this->Textures).Allocated.ArrayNum;
    pFVar11 = (this->Textures).Allocated.AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar11 + (longlong)iVar9 * 8;
    for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 8) {
      lVar5 = *(longlong *)pFVar11;
      if ((*(char *)(lVar5 + 0xa7) != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationType == ERHITransientAllocationType::Heap",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                             ,0x11a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = *(longlong *)(lVar5 + 0x58) + *(longlong *)(lVar5 + 0x50);
      if (uVar10 < this->CommitSize) {
        uVar10 = this->CommitSize;
      }
      this->CommitSize = uVar10;
    }
    TRHITransientResourceCache<FRHITransientBuffer>::
    Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>
              (&this->Buffers,GFrameCounterRenderThread,(<lambda_1>)local_res8[0]);
    iVar9 = (this->Buffers).Allocated.ArrayNum;
    pFVar11 = (this->Buffers).Allocated.AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar11 + (longlong)iVar9 * 8;
    for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 8) {
      lVar5 = *(longlong *)pFVar11;
      if ((*(char *)(lVar5 + 0xa7) != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationType == ERHITransientAllocationType::Heap",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                             ,0x11a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = *(longlong *)(lVar5 + 0x58) + *(longlong *)(lVar5 + 0x50);
      if (uVar10 < this->CommitSize) {
        uVar10 = this->CommitSize;
      }
      this->CommitSize = uVar10;
    }
  }
  return;
}

