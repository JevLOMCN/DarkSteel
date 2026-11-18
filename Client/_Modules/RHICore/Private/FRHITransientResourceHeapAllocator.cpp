// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 8

// FRHITransientResourceHeapAllocator @ 1446cf3a0

FRHITransientResourceHeapAllocator * __thiscall
FRHITransientResourceHeapAllocator::FRHITransientResourceHeapAllocator
          (FRHITransientResourceHeapAllocator *this,FRHITransientHeapCache *param_1)

{
  this->HeapCache = param_1;
  this->_padding_ = (longlong)&___7FRHITransientResourceHeapAllocator__6B_;
  (this->Heaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Heaps).ArrayNum = 0;
  (this->Heaps).ArrayMax = 0;
  this->CurrentCycle = 0;
  this->DeallocationCount = 0;
  this->CreateMode = Inline;
  *(undefined8 *)&(this->ActiveResources).Elements = 0;
  *(undefined8 *)&(this->ActiveResources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveResources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveResources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveResources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveResources).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActiveResources).Elements.field_0x30 = 0xffffffff;
  (this->ActiveResources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveResources).HashSize = 0;
  return this;
}

// ~FRHITransientResourceHeapAllocator @ 1446cfab0

void __thiscall
FRHITransientResourceHeapAllocator::~FRHITransientResourceHeapAllocator
          (FRHITransientResourceHeapAllocator *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FRHITransientResourceHeapAllocator__6B_;
  (this->ActiveResources).HashSize = 0;
  FVar1 = (this->ActiveResources).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FRHITransientResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRHITransientResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveResources).Elements);
  pFVar2 = (this->Heaps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CreateBufferInternal @ 1446d61f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FRHITransientResourceHeapAllocator::CreateBufferInternal
          (FRHITransientResourceHeapAllocator *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3,uint param_4,uint param_5,
          TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
          *param_6)

{
  int *piVar1;
  FRHITransientBuffer *pFVar2;
  int iVar3;
  FRHITransientBuffer *pFVar4;
  FRHITransientHeap *pFVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FRHITransientBuffer *pFVar9;
  ulonglong uVar10;
  ERHITransientHeapFlags EVar11;
  undefined1 local_a8 [4];
  uint local_a4;
  uint local_a0 [2];
  FRHITransientBuffer *local_98;
  FRHITransientAllocationFences *local_90;
  wchar_t *local_88;
  TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)> local_78
  ;
  
  pFVar4 = (FRHITransientBuffer *)0x0;
  uVar10 = (ulonglong)param_4;
  local_a4 = param_5;
  if ((GNumExplicitGPUsForRendering < 2) ||
     (EVar11 = AllowNNEBuffers, (param_1->Usage & NNE) == None)) {
    EVar11 = AllowBuffers;
  }
  pFVar9 = (FRHITransientBuffer *)(this->Heaps).AllocatorInstance.Data;
  local_a0[0] = (this->Heaps).ArrayNum;
  uVar6 = (ulonglong)(int)local_a0[0];
  local_98 = (FRHITransientBuffer *)(&pFVar9->_padding_ + uVar6);
  local_90 = param_3;
  local_88 = param_2;
  while( true ) {
    pFVar2 = local_98;
    if ((this->Heaps).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar9 == pFVar2) break;
    pFVar5 = (FRHITransientHeap *)pFVar9->_padding_;
    if ((uVar10 <= (pFVar5->Allocator).Capacity - (pFVar5->Allocator).UsedSize) &&
       (((pFVar5->Initializer).Flags & EVar11) != 0)) {
      local_78._0_8_ = *(undefined8 *)param_6;
      local_78._40_8_ = 0;
      if (local_78._0_8_ != 0) {
        puVar7 = *(undefined8 **)&param_6->field_0x28;
        if (*(undefined8 **)&param_6->field_0x28 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&param_6->field_0x10;
        }
        (**(code **)*puVar7)(puVar7,&local_78.field_0x10);
      }
      pFVar4 = FRHITransientHeap::CreateBuffer
                         (pFVar5,param_1,local_88,local_90,this->CurrentCycle,uVar10,local_a4,
                          &local_78);
      if (pFVar4 != (FRHITransientBuffer *)0x0) break;
    }
    uVar6 = (ulonglong)local_a0[0];
    pFVar9 = (FRHITransientBuffer *)&pFVar9->_padding_;
  }
  local_98 = pFVar4;
  if (pFVar4 == (FRHITransientBuffer *)0x0) {
    pFVar5 = FRHITransientHeapCache::Acquire(this->HeapCache,uVar10,EVar11);
    iVar3 = (this->Heaps).ArrayNum;
    piVar1 = &(this->Heaps).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Heaps).AllocatorInstance,piVar1);
    }
    local_78._40_8_ = 0;
    (this->Heaps).ArrayNum = iVar3 + 1;
    *(FRHITransientHeap **)((this->Heaps).AllocatorInstance.Data + (longlong)iVar3 * 8) = pFVar5;
    local_78._0_8_ = *(undefined8 *)param_6;
    if (local_78._0_8_ != 0) {
      puVar7 = (undefined8 *)&param_6->field_0x10;
      if (*(undefined8 **)&param_6->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&param_6->field_0x28;
      }
      (**(code **)*puVar7)(puVar7,&local_78.field_0x10);
    }
    pFVar4 = FRHITransientHeap::CreateBuffer
                       (pFVar5,param_1,local_88,local_90,this->CurrentCycle,uVar10,local_a4,
                        &local_78);
    local_98 = pFVar4;
    if (pFVar4 == (FRHITransientBuffer *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
    }
  }
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Emplace<FRHITransientBuffer_*_&>
            (&this->ActiveResources,(FRHITransientBuffer **)local_a0,(bool *)&local_98);
  if (*(longlong *)param_6 != 0) {
    plVar8 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return pFVar4;
}

// CreateTextureInternal @ 1446d6ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHITransientTexture * __thiscall
FRHITransientResourceHeapAllocator::CreateTextureInternal
          (FRHITransientResourceHeapAllocator *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3,ulong64 param_4,uint param_5,
          TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
          *param_6)

{
  int *piVar1;
  FRHITransientTexture *pFVar2;
  int iVar3;
  FRHITransientTexture *pFVar4;
  FRHITransientHeap *pFVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FRHITransientTexture *pFVar9;
  ERHITransientHeapFlags EVar10;
  undefined1 local_a8 [4];
  uint local_a4;
  uint local_a0 [2];
  FRHITransientTexture *local_98;
  FRHITransientAllocationFences *local_90;
  wchar_t *local_88;
  TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
  local_78;
  
  pFVar9 = (FRHITransientTexture *)(this->Heaps).AllocatorInstance.Data;
  local_a0[0] = (this->Heaps).ArrayNum;
  uVar6 = (ulonglong)(int)local_a0[0];
  local_a4 = param_5;
  local_98 = (FRHITransientTexture *)(&pFVar9->_padding_ + uVar6);
  EVar10 = AllowTextures;
  if ((param_1->Flags &
      (DepthStencilResolveTarget|DepthStencilTargetable|ResolveTargetable|RenderTargetable)) != None
     ) {
    EVar10 = AllowRenderTargets;
  }
  pFVar4 = (FRHITransientTexture *)0x0;
  local_90 = param_3;
  local_88 = param_2;
  while( true ) {
    pFVar2 = local_98;
    if ((this->Heaps).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar9 == pFVar2) break;
    pFVar5 = (FRHITransientHeap *)pFVar9->_padding_;
    if ((param_4 <= (pFVar5->Allocator).Capacity - (pFVar5->Allocator).UsedSize) &&
       (((pFVar5->Initializer).Flags & EVar10) != 0)) {
      local_78._0_8_ = *(undefined8 *)param_6;
      local_78._40_8_ = 0;
      if (local_78._0_8_ != 0) {
        puVar7 = *(undefined8 **)&param_6->field_0x28;
        if (*(undefined8 **)&param_6->field_0x28 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&param_6->field_0x10;
        }
        (**(code **)*puVar7)(puVar7,&local_78.field_0x10);
      }
      pFVar4 = FRHITransientHeap::CreateTexture
                         (pFVar5,param_1,local_88,local_90,this->CurrentCycle,param_4,local_a4,
                          &local_78);
      if (pFVar4 != (FRHITransientTexture *)0x0) break;
    }
    uVar6 = (ulonglong)local_a0[0];
    pFVar9 = (FRHITransientTexture *)&pFVar9->_padding_;
  }
  local_98 = pFVar4;
  if (pFVar4 == (FRHITransientTexture *)0x0) {
    pFVar5 = FRHITransientHeapCache::Acquire(this->HeapCache,param_4,EVar10);
    iVar3 = (this->Heaps).ArrayNum;
    piVar1 = &(this->Heaps).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Heaps).AllocatorInstance,piVar1);
    }
    local_78._40_8_ = 0;
    (this->Heaps).ArrayNum = iVar3 + 1;
    *(FRHITransientHeap **)((this->Heaps).AllocatorInstance.Data + (longlong)iVar3 * 8) = pFVar5;
    local_78._0_8_ = *(undefined8 *)param_6;
    if (local_78._0_8_ != 0) {
      puVar7 = (undefined8 *)&param_6->field_0x10;
      if (*(undefined8 **)&param_6->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&param_6->field_0x28;
      }
      (**(code **)*puVar7)(puVar7,&local_78.field_0x10);
    }
    pFVar4 = FRHITransientHeap::CreateTexture
                       (pFVar5,param_1,local_88,local_90,this->CurrentCycle,param_4,local_a4,
                        &local_78);
    local_98 = pFVar4;
    if (pFVar4 == (FRHITransientTexture *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
    }
  }
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Emplace<FRHITransientTexture_*_&>
            (&this->ActiveResources,(FRHITransientTexture **)local_a0,(bool *)&local_98);
  if (*(longlong *)param_6 != 0) {
    plVar8 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_6->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return pFVar4;
}

// DeallocateMemory @ 1446d74c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientResourceHeapAllocator::DeallocateMemory
          (FRHITransientResourceHeapAllocator *this,FRHITransientBuffer *param_1,
          FRHITransientAllocationFences *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_1 == (FRHITransientBuffer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x2f0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(char *)((longlong)&param_1->_padding_ + 7) != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationType == ERHITransientAllocationType::Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                         ,0x11a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = param_1->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x2f4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->Heaps).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->Heaps).ArrayNum * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    if (*(longlong *)pFVar5 == lVar2) goto LAB_1446d75ab;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Heaps.Contains(Heap)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                     ,0x2f5,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1446d75ab:
  *(undefined1 *)((longlong)&param_1->_padding_ + 5) = 0;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 1;
  }
  FRHITransientHeapAllocator::Deallocate
            ((FRHITransientHeapAllocator *)(lVar2 + 0x20),(FRHITransientResource *)param_1,param_2);
  *(longlong *)(lVar2 + 0xd0) = *(longlong *)(lVar2 + 0xd0) - param_1->_padding_;
  *(int *)(lVar2 + 0xc4) = *(int *)(lVar2 + 0xc4) + 1;
  this->DeallocationCount = this->DeallocationCount + 1;
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Remove(&this->ActiveResources,(FRHITransientResource *)param_1);
  return;
}

// DeallocateMemory @ 1446d7620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientResourceHeapAllocator::DeallocateMemory
          (FRHITransientResourceHeapAllocator *this,FRHITransientTexture *param_1,
          FRHITransientAllocationFences *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_1 == (FRHITransientTexture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x2e1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(char *)((longlong)&param_1->_padding_ + 7) != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationType == ERHITransientAllocationType::Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                         ,0x11a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = param_1->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x2e5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->Heaps).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->Heaps).ArrayNum * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    if (*(longlong *)pFVar5 == lVar2) goto LAB_1446d770b;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Heaps.Contains(Heap)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                     ,0x2e6,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1446d770b:
  *(undefined1 *)((longlong)&param_1->_padding_ + 5) = 0;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 1;
  }
  FRHITransientHeapAllocator::Deallocate
            ((FRHITransientHeapAllocator *)(lVar2 + 0x20),(FRHITransientResource *)param_1,param_2);
  *(longlong *)(lVar2 + 0xd0) = *(longlong *)(lVar2 + 0xd0) - param_1->_padding_;
  *(int *)(lVar2 + 0xac) = *(int *)(lVar2 + 0xac) + 1;
  this->DeallocationCount = this->DeallocationCount + 1;
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Remove(&this->ActiveResources,(FRHITransientResource *)param_1);
  return;
}

// Flush @ 1446dad60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHITransientResourceHeapAllocator::Flush
          (FRHITransientResourceHeapAllocator *this,FRHICommandListImmediate *param_1,
          FRHITransientAllocationStats *param_2)

{
  TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  FRHITransientResourceStats *pFVar4;
  uint uVar5;
  FRHITransientHeap *pFVar6;
  FRHITransientHeapCache *this_00;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  ulong64 uVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  FRHITransientHeap **ppFVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FRHITransientHeap **ppFVar19;
  ForElementType<FRHITransientHeap_*> FVar20;
  ForElementType<FRHITransientHeap_*> _Src;
  undefined1 local_res20 [8];
  undefined1 local_138 [8];
  ForElementType<FRHITransientHeap_*> local_130;
  undefined8 local_128;
  ForElementType<FRHITransientHeap_*> local_120;
  undefined8 local_118;
  TArrayView<FRHITransientHeap_*_const,int> local_108;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FRHITransientMemoryStats local_e8;
  FRHITransientHeapCache *local_a8;
  ulong64 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong64 uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  ulong64 local_70;
  ulonglong uStack_68;
  
  pFVar18 = (this->Heaps).AllocatorInstance.Data;
  pTVar1 = &this->Heaps;
  iVar12 = (this->Heaps).ArrayNum;
  uVar14 = 0;
  local_e8.Textures.AllocatedSize = 0;
  local_e8.Textures.AllocationCount = 0;
  local_e8.Textures.DeallocationCount = 0;
  local_e8.Textures.CreateCount = 0;
  local_108.DataPtr = (FRHITransientHeap **)(pFVar18 + (longlong)iVar12 * 8);
  local_e8.Buffers.AllocatedSize = 0;
  local_e8.Buffers.AllocationCount = 0;
  local_e8.Buffers.DeallocationCount = 0;
  local_e8.Buffers.CreateCount = 0;
  local_e8.AliasedSizeCurrent = 0;
  local_e8.AliasedSize = 0;
  uVar17 = uVar14;
  while( true ) {
    ppFVar16 = local_108.DataPtr;
    if ((this->Heaps).ArrayNum != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar18 == (FScriptContainerElement *)ppFVar16) break;
    pFVar6 = *(FRHITransientHeap **)pFVar18;
    FRHITransientHeap::Flush(pFVar6,this->CurrentCycle,&local_e8,param_2);
    uVar14 = (ulonglong)(uint)((int)uVar14 + (pFVar6->Buffers).Cache.ArrayNum);
    uVar17 = (ulonglong)(uint)((int)uVar17 + (pFVar6->Textures).Cache.ArrayNum);
    pFVar18 = pFVar18 + 8;
  }
  if ((__GTraceCounterTransientBufferCacheSize.Value != uVar14) &&
     (__GTraceCounterTransientBufferCacheSize.Value = uVar14, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientBufferCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientBufferCacheSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientBufferCacheSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientBufferCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientBufferCacheSize.CounterId._2_2_ = 0;
        __GTraceCounterTransientBufferCacheSize.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientBufferCacheSize.CounterId._0_2_,
               __GTraceCounterTransientBufferCacheSize.Value);
  }
  if ((__GTraceCounterTransientTextureCacheSize.Value != uVar17) &&
     (__GTraceCounterTransientTextureCacheSize.Value = uVar17, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientTextureCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientTextureCacheSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientTextureCacheSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientTextureCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientTextureCacheSize.CounterId._2_2_ = 0;
        __GTraceCounterTransientTextureCacheSize.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientTextureCacheSize.CounterId._0_2_,
               __GTraceCounterTransientTextureCacheSize.Value);
  }
  if (this->DeallocationCount != 0) {
    uVar5 = (this->Heaps).ArrayNum;
    ppFVar16 = (FRHITransientHeap **)0x0;
    local_120.Data = (FRHITransientHeap **)0x0;
    local_118 = 0;
    local_130.Data = (FRHITransientHeap **)0x0;
    local_128 = 0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    ppFVar19 = ppFVar16;
    if (0 < (int)uVar5) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
                (8,8,uVar5,&local_120,0,(int *)((longlong)&local_118 + 4));
      ppFVar19 = (FRHITransientHeap **)(local_118 & 0xffffffff);
    }
    FVar20.Data = local_120.Data;
    uVar5 = (this->Heaps).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    _Src.Data = ppFVar16;
    if (0 < (int)uVar5) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
                (8,8,uVar5,&local_130,0,(int *)((longlong)&local_128 + 4));
      ppFVar16 = (FRHITransientHeap **)(local_128 & 0xffffffff);
      _Src.Data = local_130.Data;
    }
    iVar12 = (this->Heaps).ArrayNum;
    uVar17 = (ulonglong)iVar12;
    pFVar18 = (pTVar1->AllocatorInstance).Data;
    local_108.DataPtr = (FRHITransientHeap **)CONCAT44(local_108.DataPtr._4_4_,iVar12);
    local_f8 = pFVar18 + uVar17 * 8;
    while( true ) {
      pFVar8 = local_f8;
      iVar13 = (int)ppFVar16;
      iVar12 = (int)ppFVar19;
      if ((this->Heaps).ArrayNum != (int)uVar17) {
        local_138[0] = 0;
        `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
      }
      if (pFVar18 == pFVar8) break;
      pFVar6 = *(FRHITransientHeap **)pFVar18;
      if ((pFVar6->Allocator).UsedSize == 0) {
        if (iVar12 == local_118._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
                             (0x808,&local_120,(int *)((longlong)&local_118 + 4));
          FVar20.Data = local_120.Data;
        }
        uVar17 = (ulonglong)local_108.DataPtr & 0xffffffff;
        pFVar18 = pFVar18 + 8;
        ppFVar19 = (FRHITransientHeap **)(ulonglong)(iVar12 + 1U);
        *(FRHITransientHeap **)((longlong)FVar20.Data + (longlong)iVar12 * 8) = pFVar6;
        local_118 = CONCAT44(local_118._4_4_,iVar12 + 1U);
      }
      else {
        if (iVar13 == local_128._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
                             (0x808,&local_130,(int *)((longlong)&local_128 + 4));
          _Src.Data = local_130.Data;
        }
        uVar17 = (ulonglong)local_108.DataPtr & 0xffffffff;
        pFVar18 = pFVar18 + 8;
        ppFVar16 = (FRHITransientHeap **)(ulonglong)(iVar13 + 1U);
        _Src.Data[iVar13] = pFVar6;
        local_128 = CONCAT44(local_128._4_4_,iVar13 + 1U);
      }
    }
    this_00 = this->HeapCache;
    local_f8 = (FScriptContainerElement *)FVar20.Data;
    if ((iVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_108._12_4_ = uStack_ec;
    local_108.ArrayNum = iVar12;
    local_108.DataPtr = (FRHITransientHeap **)local_f8;
    iStack_f0 = iVar12;
    FRHITransientHeapCache::Forfeit(this_00,&local_108);
    iVar12 = (this->Heaps).ArrayMax;
    piVar2 = &(this->Heaps).ArrayMax;
    (this->Heaps).ArrayNum = iVar13;
    if ((iVar13 == 0) && (iVar12 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,iVar12,&pTVar1->AllocatorInstance,iVar13,piVar2);
      if (iVar13 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar13 << 3);
      }
    }
    this->DeallocationCount = 0;
    if (_Src.Data != (FRHITransientHeap **)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src.Data);
    }
    if ((FScriptContainerElement *)FVar20.Data != (FScriptContainerElement *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar20.Data);
    }
  }
  uVar9 = local_e8.AliasedSize;
  local_a8 = this->HeapCache;
  uStack_a0 = local_e8.Textures.AllocatedSize;
  uStack_98._0_4_ = local_e8.Textures.AllocationCount;
  uStack_98._4_4_ = local_e8.Textures.DeallocationCount;
  uStack_90 = CONCAT44(local_e8.Textures._20_4_,local_e8.Textures.CreateCount);
  local_70 = local_e8.AliasedSizeCurrent;
  uStack_68 = local_e8.AliasedSize;
  uStack_88 = local_e8.Buffers.AllocatedSize;
  local_80 = local_e8.Buffers.AllocationCount;
  uStack_7c = local_e8.Buffers.DeallocationCount;
  uStack_78 = local_e8.Buffers.CreateCount;
  uStack_74 = local_e8.Buffers._20_4_;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[2] = local_a8;
    puVar15[3] = uStack_a0;
    puVar15[1] = 0;
    *puVar15 = &TRHILambdaCommand<FRHICommandListImmediate,`FRHITransientResourceHeapAllocator::Flush'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[4] = uStack_98;
    puVar15[5] = uStack_90;
    puVar15[0xb] = L"TRHILambdaCommand";
    puVar15[6] = uStack_88;
    puVar15[7] = CONCAT44(uStack_7c,local_80);
    puVar15[8] = CONCAT44(uStack_74,uStack_78);
    puVar15[9] = local_70;
    puVar15[10] = uVar9;
  }
  else {
    (local_a8->Stats).Textures.AllocatedSize =
         (local_a8->Stats).Textures.AllocatedSize + local_e8.Textures.AllocatedSize;
    puVar3 = &(local_a8->Stats).Textures.AllocationCount;
    *puVar3 = *puVar3 + local_e8.Textures.AllocationCount;
    puVar3 = &(local_a8->Stats).Textures.DeallocationCount;
    *puVar3 = *puVar3 + local_e8.Textures.DeallocationCount;
    puVar3 = &(local_a8->Stats).Textures.CreateCount;
    *puVar3 = *puVar3 + local_e8.Textures.CreateCount;
    pFVar4 = &(local_a8->Stats).Buffers;
    pFVar4->AllocatedSize = pFVar4->AllocatedSize + local_e8.Buffers.AllocatedSize;
    puVar3 = &(local_a8->Stats).Buffers.AllocationCount;
    *puVar3 = *puVar3 + local_e8.Buffers.AllocationCount;
    puVar3 = &(local_a8->Stats).Buffers.DeallocationCount;
    *puVar3 = *puVar3 + local_e8.Buffers.DeallocationCount;
    puVar3 = &(local_a8->Stats).Buffers.CreateCount;
    *puVar3 = *puVar3 + local_e8.Buffers.CreateCount;
    if (local_e8.AliasedSize < (local_a8->Stats).AliasedSize) {
      local_e8.AliasedSize = (local_a8->Stats).AliasedSize;
    }
    (local_a8->Stats).AliasedSize = local_e8.AliasedSize;
  }
  this->CurrentCycle = this->CurrentCycle + 1;
  return;
}

// SetCreateMode @ 1446e3fd0

void __thiscall
FRHITransientResourceHeapAllocator::SetCreateMode
          (FRHITransientResourceHeapAllocator *this,ERHITransientResourceCreateMode param_1)

{
  bool bVar1;
  ERHITransientResourceCreateMode EVar2;
  
  if ((!GRHITransientAllocatorParallelResourceCreation) ||
     (bVar1 = true, UE::RHICore::Nvidia::Aftermath::bEnabled)) {
    bVar1 = false;
  }
  EVar2 = Inline;
  if (bVar1) {
    EVar2 = param_1;
  }
  this->CreateMode = EVar2;
  return;
}

