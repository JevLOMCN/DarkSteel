// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 22

// FAdaptiveVirtualTexture @ 1458cad80

FAdaptiveVirtualTexture * __thiscall
FAdaptiveVirtualTexture::FAdaptiveVirtualTexture
          (FAdaptiveVirtualTexture *this,FAdaptiveVTDescription *param_1,
          FAllocatedVTDescription *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  TIntPoint<int>_u_0 TVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  FVirtualTextureProducerHandle FVar13;
  bool bVar14;
  FAdaptiveVirtualTexture *pFVar15;
  byte bVar16;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar17;
  
  this->_padding_ = (longlong)&___7FAdaptiveVirtualTexture__6B_;
  uVar3 = param_1->TileCountY;
  (this->AdaptiveDesc).TileCountX = param_1->TileCountX;
  (this->AdaptiveDesc).TileCountY = uVar3;
  (this->AdaptiveDesc).MaxAdaptiveLevel = param_1->MaxAdaptiveLevel;
  uVar3 = param_2->TileSize;
  uVar18 = param_2->TileBorderSize;
  (this->AllocatedDesc).Name = param_2->Name;
  (this->AllocatedDesc).TileSize = uVar3;
  (this->AllocatedDesc).TileBorderSize = uVar18;
  uVar3 = param_2->IndirectionTextureSize;
  uVar9 = param_2->Dimensions;
  uVar10 = param_2->NumTextureLayers;
  uVar11 = param_2->ForceSpaceID;
  uVar12 = param_2->AdaptiveLevelBias;
  FVar13 = param_2->ProducerHandle[0];
  (this->AllocatedDesc).MaxSpaceSize = param_2->MaxSpaceSize;
  (this->AllocatedDesc).IndirectionTextureSize = uVar3;
  (this->AllocatedDesc).Dimensions = uVar9;
  (this->AllocatedDesc).NumTextureLayers = uVar10;
  (this->AllocatedDesc).ForceSpaceID = uVar11;
  (this->AllocatedDesc).AdaptiveLevelBias = uVar12;
  (this->AllocatedDesc).ProducerHandle[0] = FVar13;
  uVar7 = *(undefined8 *)(param_2->ProducerHandle + 3);
  *(undefined8 *)((this->AllocatedDesc).ProducerHandle + 1) =
       *(undefined8 *)(param_2->ProducerHandle + 1);
  *(undefined8 *)((this->AllocatedDesc).ProducerHandle + 3) = uVar7;
  uVar7 = *(undefined8 *)(param_2->ProducerHandle + 7);
  *(undefined8 *)((this->AllocatedDesc).ProducerHandle + 5) =
       *(undefined8 *)(param_2->ProducerHandle + 5);
  *(undefined8 *)((this->AllocatedDesc).ProducerHandle + 7) = uVar7;
  *(undefined8 *)((this->AllocatedDesc).ProducerLayerIndex + 4) =
       *(undefined8 *)(param_2->ProducerLayerIndex + 4);
  (this->AllocationSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocationSlots).ArrayNum = 0;
  (this->AllocationSlots).ArrayMax = 0;
  (this->FreeSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeSlots).ArrayNum = 0;
  (this->FreeSlots).ArrayMax = 0;
  this->AllocatedVirtualTextureLowMips = (FAllocatedVirtualTexture *)0x0;
  this->NumAllocated = 0;
  FHashTable::FHashTable(&this->GridIndexMap,0x400,0);
  FHashTable::FHashTable(&this->AllocatedVTMap,0x400,0);
  (this->SlotsPendingRootPageMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotsPendingRootPageMap).ArrayNum = 0;
  (this->SlotsPendingRootPageMap).ArrayMax = 0;
  (this->LRUHeap).HeapNum = 0;
  (this->LRUHeap).HeapSize = 0;
  (this->LRUHeap).IndexSize = 0;
  (this->LRUHeap).Heap = (uint *)0x0;
  (this->LRUHeap).Keys = (uint *)0x0;
  (this->LRUHeap).HeapIndexes = (uint *)0x0;
  (this->RequestsToMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsToMap).ArrayNum = 0;
  (this->RequestsToMap).ArrayMax = 0;
  (this->TextureUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureUpdates).ArrayNum = 0;
  (this->TextureUpdates).ArrayMax = 0;
  (this->ProducersToRelease).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProducersToRelease).ArrayNum = 0;
  (this->ProducersToRelease).ArrayMax = 0;
  uVar3 = (this->AdaptiveDesc).TileCountY;
  uVar18 = 1;
  if (uVar3 != 0) {
    uVar18 = uVar3;
  }
  uVar1 = (ulonglong)(uVar18 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar20 = 0x20 - (int)lVar4;
  uVar3 = (this->AdaptiveDesc).TileCountX;
  uVar18 = 1;
  if (uVar3 != 0) {
    uVar18 = uVar3;
  }
  uVar2 = (ulonglong)(uVar18 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar19 = 0x20 - (int)lVar4;
  if (0x20U - iVar20 < 0x20U - iVar19) {
    iVar20 = iVar19;
  }
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  lVar5 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  iVar19 = (int)lVar4 - (this->AdaptiveDesc).MaxAdaptiveLevel;
  iVar21 = (int)lVar5 - (this->AdaptiveDesc).MaxAdaptiveLevel;
  this->MaxLevel = 0x20 - iVar20;
  if ((iVar21 < 0) || (iVar19 < 0)) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3000819673198493424>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                        ,0x110,"AdaptiveGridLevelsX >= 0 && AdaptiveGridLevelsY >= 0");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FAdaptiveVirtualTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  bVar16 = 0;
  bVar17 = bVar16;
  if (0 < iVar21) {
    bVar17 = (byte)iVar21;
  }
  if (0 < iVar19) {
    bVar16 = (byte)iVar19;
  }
  TVar8._s_0.Y = 1 << (bVar16 & 0x1f);
  TVar8._s_0.X = 1 << (bVar17 & 0x1f);
  (this->GridSize).field0_0x0 = TVar8;
  return this;
}

// operator() @ 1458d3c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FAdaptiveVirtualTexture::ApplyPageTableUpdates'::__l5::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  FRHIGPUMask FVar3;
  int iVar4;
  FRDGResource *this_00;
  uint *puVar5;
  undefined1 local_res8 [8];
  FUpdateTextureRegion2D local_48;
  
  FVar3.GPUMask = *(uint *)&param_2->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_2,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  uVar2 = param_2->field_0x69;
  param_2->field_0x69 = 0;
  iVar4 = *(int *)((longlong)this + 0x10);
  puVar5 = *(uint **)((longlong)this + 8);
  puVar1 = puVar5 + (longlong)iVar4 * 3;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar4) {
      `TCheckedPointerIterator<FAdaptiveVirtualTexture::FIndirectionTextureUpdate_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    local_48.DestX = *puVar5;
    this_00 = *(FRDGResource **)this;
    local_48.DestY = puVar5[1];
    local_48.SrcX = 0;
    local_48.SrcY = 0;
    local_48.Width = 1;
    local_48.Height = 1;
    FRDGResource::ValidateRHIAccess(this_00);
    FRHICommandListBase::UpdateTexture2D
              ((FRHICommandListBase *)param_2,(FRHITexture *)this_00->ResourceRHI,0,&local_48,4,
               (uchar *)(puVar5 + 2));
    puVar5 = puVar5 + 3;
  }
  param_2->field_0x69 = uVar2;
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_2,FVar3);
  return;
}

// Allocate @ 1458dad30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::Allocate
          (FAdaptiveVirtualTexture *this,FRHICommandListBase *param_1,FVirtualTextureSystem *param_2
          ,uint param_3,uint param_4)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FVirtualTextureSpace *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  uVar6 = param_3 >> 4 & 0xffffff;
  if ((param_3 & 4) == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    if ((int)uVar6 < (this->AllocationSlots).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar9 = *(uint *)((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
    uVar8 = 0;
    if ((int)uVar6 < (this->AllocationSlots).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar8 = *(uint *)(*(longlong *)
                       ((this->AllocationSlots).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 0x10 + 8) + 0x74);
    uVar7 = uVar6;
    uVar6 = uVar9;
  }
  pTVar2 = CVarAVTLevelIncrement.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar9 = (this->AdaptiveDesc).MaxAdaptiveLevel;
  uVar5 = pTVar2->ShadowedValue[1] + uVar8;
  if (uVar5 < uVar9) {
    uVar9 = uVar5;
  }
  if (uVar9 <= uVar8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewLevel > CurrentLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                       ,600,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FVirtualTextureSystem::GetSpace
                     (param_2,(int)this->AllocatedVirtualTextureLowMips->_padding_);
  bVar3 = FVirtualTextureAllocator::TryAlloc(&pFVar4->Allocator,uVar9);
  if (bVar3) {
    Allocate(this,param_1,param_2,uVar6,uVar7,uVar9,param_4);
  }
  return;
}

// Allocate @ 1458daf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::Allocate
          (FAdaptiveVirtualTexture *this,FRHICommandListBase *param_1,FVirtualTextureSystem *param_2
          ,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FAllocatedVirtualTexture *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FAllocatedVirtualTexture *pFVar15;
  TArray<FAdaptiveVirtualTexture::FIndirectionTextureUpdate,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStackY_f8 [32];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  FVirtualTextureSystem *local_90;
  uint local_88;
  uint local_84;
  FRHICommandListBase *local_80;
  uint local_78;
  undefined4 uStack_74;
  FAllocatedVirtualTexture *pFStack_70;
  uint local_68;
  uint uStack_64;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar14 = (ulonglong)param_4;
  uVar8 = (this->AdaptiveDesc).MaxAdaptiveLevel;
  local_88 = (this->GridSize).field0_0x0._s_0.X;
  local_84 = param_3 / local_88;
  local_88 = param_3 % local_88;
  local_a4 = param_5;
  pFVar15 = (FAllocatedVirtualTexture *)0x0;
  uVar10 = (ulonglong)(local_88 * (this->AdaptiveDesc).TileCountX) /
           (ulonglong)(uint)(this->GridSize).field0_0x0._s_0.X;
  local_a0 = (uint)uVar10;
  uVar13 = (ulonglong)(local_84 * (this->AdaptiveDesc).TileCountY) /
           (ulonglong)(uint)(this->GridSize).field0_0x0._s_0.Y;
  local_9c = (uint)uVar13;
  uVar9 = 0;
  local_98 = param_3;
  local_90 = param_2;
  local_80 = param_1;
  if (param_4 != 0xffffffff) {
    uVar18 = uVar9;
    if ((int)param_4 < (this->AllocationSlots).ArrayNum) {
      uVar18 = ~param_4 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = (ulonglong)local_9c;
      uVar10 = (ulonglong)local_a0;
    }
    pFVar15 = *(FAllocatedVirtualTexture **)
               ((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)param_4 * 0x10 + 8);
  }
  iVar17 = 1 << ((byte)local_a4 & 0x1f);
  pFVar7 = (FAllocatedVirtualTexture *)
           AllocateVirtualTexture
                     (local_80,local_90,&this->AllocatedDesc,
                      (TIntPoint<int>)(this->GridSize).field0_0x0._s_0,
                      (uchar)this->AllocatedVirtualTextureLowMips->_padding_,iVar17,iVar17,
                      (TIntPoint<int>)(uVar13 << 0x20 | uVar10),uVar8 - param_5);
  if (pFVar15 == (FAllocatedVirtualTexture *)0x0) {
    if ((this->FreeSlots).ArrayNum == 0) {
      pFVar4 = (this->AllocationSlots).AllocatorInstance.Data;
      local_78 = param_3;
      pFStack_70 = pFVar7;
      if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar4 + (longlong)(this->AllocationSlots).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = (this->AllocationSlots).ArrayNum;
      piVar1 = &(this->AllocationSlots).ArrayMax;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->AllocationSlots).AllocatorInstance,piVar1);
        (this->AllocationSlots).ArrayNum = uVar8;
      }
      (this->AllocationSlots).ArrayNum = uVar8 + 1;
      pFVar4 = (this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      *(ulonglong *)pFVar4 = CONCAT44(uStack_74,local_78);
      *(FAllocatedVirtualTexture **)(pFVar4 + 8) = pFStack_70;
    }
    else {
      uVar8 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeSlots,Default);
      uVar18 = uVar9;
      if ((int)uVar8 < (this->AllocationSlots).ArrayNum) {
        uVar18 = ~uVar8 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10) =
           local_98;
      if ((int)uVar8 < (this->AllocationSlots).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(FAllocatedVirtualTexture **)
       ((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10 + 8) = pFVar7;
      param_3 = local_98;
    }
    pTVar2 = &this->SlotsPendingRootPageMap;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_a8 = uVar8;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         pFVar4 + (longlong)(this->SlotsPendingRootPageMap).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar17 = (this->SlotsPendingRootPageMap).ArrayNum;
    piVar1 = &(this->SlotsPendingRootPageMap).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SlotsPendingRootPageMap).ArrayNum = iVar17 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_a8;
    uVar9 = (param_3 >> 0x10 ^ param_3) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    FHashTable::Add(&this->GridIndexMap,uVar9 >> 0x10 ^ uVar9 & 0xffff,uVar8);
    FHashTable::Add(&this->AllocatedVTMap,(uint)((ulonglong)pFVar7 >> 4) & 0xffff,uVar8);
    FBinaryHeap<unsigned_int,unsigned_int>::Add(&this->LRUHeap,param_6 << 4 | local_a4,uVar8);
    this->NumAllocated = this->NumAllocated + 1;
  }
  else {
    RemapVirtualTexturePages(local_90,pFVar15,pFVar7,param_6);
    DestroyVirtualTexture(local_90,(IAllocatedVirtualTexture *)pFVar15,&this->ProducersToRelease);
    if (param_4 < (this->AllocatedVTMap).IndexSize) {
      uVar10 = (ulonglong)pFVar15 >> 4 & 0xffff & (ulonglong)(this->AllocatedVTMap).HashMask;
      puVar3 = (this->AllocatedVTMap).Hash;
      uVar8 = puVar3[uVar10];
      if (uVar8 == param_4) {
        puVar3[uVar10] = (this->AllocatedVTMap).NextIndex[uVar14];
      }
      else if (uVar8 != 0xffffffff) {
        puVar3 = (this->AllocatedVTMap).NextIndex;
        do {
          uVar10 = (ulonglong)uVar8;
          uVar8 = puVar3[uVar8];
          if (uVar8 == param_4) {
            puVar3[uVar10] = puVar3[uVar14];
            break;
          }
        } while (uVar8 != 0xffffffff);
      }
    }
    FHashTable::Add(&this->AllocatedVTMap,(uint)((ulonglong)pFVar7 >> 4) & 0xffff,param_4);
    if ((int)param_4 < (this->AllocationSlots).ArrayNum) {
      uVar9 = ~param_4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = local_a4;
    uVar18 = param_6 << 4 | local_a4;
    *(FAllocatedVirtualTexture **)
     ((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)param_4 * 0x10 + 8) = pFVar7;
    (this->LRUHeap).Keys[uVar14] = uVar18;
    uVar8 = (this->LRUHeap).HeapIndexes[uVar14];
    if ((uVar8 == 0) || ((this->LRUHeap).Keys[(this->LRUHeap).Heap[uVar8 - 1 >> 1]] <= uVar18)) {
      FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(&this->LRUHeap,uVar8);
    }
    else {
      FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(&this->LRUHeap,uVar8);
    }
    pFVar4 = (this->SlotsPendingRootPageMap).AllocatorInstance.Data;
    for (pFVar11 = pFVar4;
        pFVar11 != pFVar4 + (longlong)(this->SlotsPendingRootPageMap).ArrayNum * 4;
        pFVar11 = pFVar11 + 4) {
      if (*(uint *)pFVar11 == param_4) {
        if ((int)((longlong)pFVar11 - (longlong)pFVar4 >> 2) != -1) {
          return;
        }
        break;
      }
    }
    uVar8 = (uint)pFVar7->_padding_;
    uVar18 = uVar8 & 0x55555555;
    uVar12 = uVar8 >> 1 & 0x55555555;
    pTVar16 = &this->TextureUpdates;
    uVar8 = (uVar18 >> 1 ^ uVar18) & 0x33333333;
    pFVar4 = (pTVar16->AllocatorInstance).Data;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
    uVar18 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
    uVar8 = (uVar12 >> 1 ^ uVar12) & 0x33333333;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
    uVar8 = uVar8 >> 4 ^ uVar8;
    local_68 = local_88;
    uStack_64 = local_84;
    local_60 = ((uVar8 & 0xff) << 8 ^ uVar8 & 0xff0000 | (uVar9 | 0x10) << 0x14) << 4 |
               (uVar18 >> 8 ^ uVar18) & 0xffff;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar4 + (longlong)(this->TextureUpdates).ArrayMax * 0xc)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar17 = (this->TextureUpdates).ArrayNum;
    piVar1 = &(this->TextureUpdates).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar16->AllocatorInstance,piVar1);
    }
    (this->TextureUpdates).ArrayNum = iVar17 + 1;
    pFVar4 = (pTVar16->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar17 * 0xc) = CONCAT44(uStack_64,local_68);
    *(uint *)(pFVar4 + (longlong)iVar17 * 0xc + 8) = local_60;
  }
  return;
}

// AllocateVirtualTexture @ 1458dc460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IAllocatedVirtualTexture * __cdecl
FAdaptiveVirtualTexture::AllocateVirtualTexture
          (FRHICommandListBase *param_1,FVirtualTextureSystem *param_2,
          FAllocatedVTDescription *param_3,TIntPoint<int> param_4,uchar param_5,int param_6,
          int param_7,TIntPoint<int> param_8,int param_9)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  IAllocatedVirtualTexture *pIVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  longlong lVar18;
  int iStackX_24;
  undefined1 auStackY_1c8 [32];
  undefined1 local_194 [256];
  int iStack_94;
  uchar uStack_8e;
  undefined1 uStack_8d;
  undefined8 uStack_90;
  uint auStack_8c [7];
  uint auStack_70 [2];
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_194._236_8_ = param_3->Name;
  local_194._244_8_ = *(undefined8 *)&param_3->TileSize;
  local_194._252_4_ = param_3->MaxSpaceSize;
  iStack_94 = param_3->IndirectionTextureSize;
  uStack_90._0_1_ = param_3->Dimensions;
  uStack_90._1_1_ = param_3->NumTextureLayers;
  uStack_8e = param_3->ForceSpaceID;
  uStack_8d = param_3->AdaptiveLevelBias;
  uStack_90._4_4_ = *(uint *)(param_3->ProducerHandle + 0);
  auStack_8c._4_8_ = *(undefined8 *)(param_3->ProducerHandle + 1);
  auStack_8c._12_8_ = *(undefined8 *)(param_3->ProducerHandle + 3);
  local_68 = *(ulonglong *)(param_3->ProducerLayerIndex + 4);
  auStack_8c._20_8_ = *(undefined8 *)(param_3->ProducerHandle + 5);
  auStack_70 = (uint  [2])*(undefined8 *)(param_3->ProducerHandle + 7);
  local_194._20_8_ = param_1;
  if (((local_68 & 0x100000000) == 0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3000819673198493524>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                         ,0xac,"AllocatedDesc.bPrivateSpace"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar9 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar9;
  }
  uVar4 = uStack_90;
  local_68 = local_68 | 0x100000000;
  uStack_8e = param_5;
  iStackX_24 = param_4.field0_0x0._4_4_;
  uStack_90._4_4_ = SUB84(uVar4,4);
  uStack_8d = (char)param_9;
  if (iStackX_24 < param_4.field0_0x0._0_4_) {
    iStackX_24 = param_4.field0_0x0._0_4_;
  }
  iVar17 = 0;
  iStack_94 = iStackX_24;
  if (param_3->NumTextureLayers != '\0') {
    lVar18 = 0;
    lVar13 = (longlong)param_3 + (0x1c - (longlong)((longlong)register0x00000020 + -0x8c));
    local_194._4_8_ = lVar13;
    do {
      uVar3 = *(uint *)((longlong)((longlong)register0x00000020 + -0x8c) + lVar13 + lVar18 * 4);
      if (((uint *)((longlong)register0x00000020 + -0x8c))[lVar18] == uVar3) {
        uVar11 = (param_2->Producers).Producers.ArrayNum;
        uVar14 = uVar3 & 0x3fffff;
        if (uVar14 < uVar11) {
          if (((int)uVar11 <= (int)uVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pIVar9 = (IAllocatedVirtualTexture *)(*pcVar5)();
            return pIVar9;
          }
          pFVar16 = (param_2->Producers).Producers.AllocatorInstance.Data + (ulonglong)uVar14 * 0xf8
          ;
          if (*(ushort *)(pFVar16 + 0xf4) != (ushort)(uVar3 >> 0x16)) goto LAB_1458dc5db;
        }
        else {
LAB_1458dc5db:
          pFVar16 = (FScriptContainerElement *)0x0;
        }
        local_194._220_8_ = *(undefined8 *)(pFVar16 + 0xc0);
        local_194._28_8_ = *(undefined8 *)pFVar16;
        local_194._44_8_ = *(undefined8 *)(pFVar16 + 0x10);
        local_194._60_8_ = *(undefined8 *)(pFVar16 + 0x20);
        local_194._76_8_ = *(undefined8 *)(pFVar16 + 0x30);
        local_194._84_8_ = *(undefined8 *)(pFVar16 + 0x38);
        local_194._92_8_ = *(undefined8 *)(pFVar16 + 0x40);
        local_194._100_8_ = *(undefined8 *)(pFVar16 + 0x48);
        local_194._108_8_ = *(undefined8 *)(pFVar16 + 0x50);
        local_194._116_8_ = *(undefined8 *)(pFVar16 + 0x58);
        local_194._124_8_ = *(undefined8 *)(pFVar16 + 0x60);
        local_194._132_8_ = *(undefined8 *)(pFVar16 + 0x68);
        local_194._140_8_ = *(undefined8 *)(pFVar16 + 0x70);
        local_194._148_8_ = *(undefined8 *)(pFVar16 + 0x78);
        local_194._156_8_ = *(undefined8 *)(pFVar16 + 0x80);
        local_194._164_8_ = *(undefined8 *)(pFVar16 + 0x88);
        local_194._172_8_ = *(undefined8 *)(pFVar16 + 0x90);
        local_194._180_8_ = *(undefined8 *)(pFVar16 + 0x98);
        local_194._188_8_ = *(undefined8 *)(pFVar16 + 0xa0);
        local_194._196_8_ = *(undefined8 *)(pFVar16 + 0xa8);
        local_194._204_8_ = *(undefined8 *)(pFVar16 + 0xb0);
        local_194._212_8_ = *(undefined8 *)(pFVar16 + 0xb8);
        local_194._56_4_ = param_7;
        local_194._52_4_ = param_6;
        iVar6 = param_7;
        if (param_7 < param_6) {
          iVar6 = param_6;
        }
        iVar8 = 1;
        if (iVar6 != 0) {
          iVar8 = iVar6;
        }
        uVar1 = (ulonglong)(iVar8 - 1) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar14 = param_8.field0_0x0._0_4_ - param_8.field0_0x0._4_4_ ^
                 (uint)param_8.field0_0x0._s_0.Y >> 0xd;
        local_194._12_4_ = (undefined4)lVar13;
        local_194._70_6_ = (undefined6)((ulonglong)*(undefined8 *)(pFVar16 + 0x28) >> 0x10);
        local_194[0x44] = (undefined1)*(undefined8 *)(pFVar16 + 0x28);
        local_194[0x45] = (char)lVar13;
        uVar11 = (-0x61c88647 - uVar14) - param_8.field0_0x0._4_4_ ^ uVar14 << 8;
        uVar15 = (param_8.field0_0x0._s_0.Y - uVar11) - uVar14 ^ uVar11 >> 0xd;
        uVar14 = (uVar14 - uVar15) - uVar11 ^ uVar15 >> 0xc;
        uVar11 = (uVar11 - uVar15) - uVar14 ^ uVar14 << 0x10;
        uVar15 = (uVar15 - uVar11) - uVar14 ^ uVar11 >> 5;
        uVar14 = (uVar14 - uVar15) - uVar11 ^ uVar15 >> 3;
        uVar4 = *(undefined8 *)(pFVar16 + 0xe0);
        uVar11 = (uVar11 - uVar14) - uVar15 ^ uVar14 << 10;
        uVar15 = (uVar15 - uVar11) - uVar14 ^ uVar11 >> 0xf;
        uVar14 = *(int *)(pFVar16 + 8) - uVar15 ^ uVar15 >> 0xd;
        uVar11 = (-0x61c88647 - uVar14) - uVar15 ^ uVar14 << 8;
        uVar15 = (uVar15 - uVar14) - uVar11 ^ uVar11 >> 0xd;
        uVar14 = (uVar14 - uVar15) - uVar11 ^ uVar15 >> 0xc;
        uVar11 = (uVar11 - uVar14) - uVar15 ^ uVar14 << 0x10;
        uVar15 = (uVar15 - uVar11) - uVar14 ^ uVar11 >> 5;
        uVar14 = (uVar14 - uVar15) - uVar11 ^ uVar15 >> 3;
        uVar11 = (uVar11 - uVar14) - uVar15 ^ uVar14 << 10;
        local_194._40_4_ = (undefined4)((ulonglong)*(undefined8 *)(pFVar16 + 8) >> 0x20);
        local_194._36_4_ = (uVar15 - uVar11) - uVar14 ^ uVar11 >> 0xf;
        puVar10 = ::operator_new(0x20);
        param_1 = (FRHICommandListBase *)local_194._20_8_;
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[1] = uVar4;
          *puVar10 = &___7FVirtualTextureAddressRedirect__6B_;
          *(int *)(puVar10 + 3) = param_9;
          ((TIntPoint<int>_u_0 *)(puVar10 + 2))->_s_0 = (TIntPoint<int>_u_0_s_0)param_8.field0_0x0;
        }
        FVirtualTextureSystem::RegisterProducer
                  (param_2,(FRHICommandListBase *)local_194,
                   (FVTProducerDescription *)local_194._20_8_,(IVirtualTexture *)(local_194 + 0x1c))
        ;
        bVar2 = param_3->NumTextureLayers;
        lVar13 = local_194._4_8_;
        if (lVar18 < (longlong)(ulonglong)bVar2) {
          lVar13 = (longlong)param_3 + (0x1c - (longlong)((longlong)register0x00000020 + -0x8c));
          lVar12 = lVar18;
          do {
            if (*(uint *)((longlong)auStack_70 + lVar12 * 4 + lVar13 + -0x1c) == uVar3) {
              ((uint *)((longlong)register0x00000020 + -0x8c))[lVar12] = local_194._0_4_;
            }
            lVar12 = lVar12 + 1;
            local_194._4_8_ = lVar13;
          } while (lVar12 < (longlong)(ulonglong)bVar2);
        }
      }
      iVar17 = iVar17 + 1;
      lVar18 = lVar18 + 1;
    } while (iVar17 < (int)(uint)param_3->NumTextureLayers);
  }
  pIVar9 = FVirtualTextureSystem::AllocateVirtualTexture
                     (param_2,param_1,(FAllocatedVTDescription *)(local_194 + 0xec));
  return pIVar9;
}

// ApplyPageTableUpdates @ 1458dcfb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::ApplyPageTableUpdates
          (FAdaptiveVirtualTexture *this,FVirtualTextureSystem *param_1,FRDGBuilder *param_2,
          FRDGExternalAccessQueue *param_3)

{
  int *piVar1;
  TArray<FAdaptiveVirtualTexture::FIndirectionTextureUpdate,TSizedDefaultAllocator<32>_> *pTVar2;
  FResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVirtualTextureSpace *pFVar7;
  FRDGTexture *pFVar8;
  undefined8 *puVar9;
  FRDGEventName *pFVar10;
  undefined8 *puVar11;
  TRefCountPtr<IPooledRenderTarget> local_res8;
  undefined8 *local_78;
  <lambda_1> local_70;
  FRDGTextureAccess local_58;
  FRDGEventName local_40;
  
  puVar11 = (undefined8 *)0x0;
  if ((this->TextureUpdates).ArrayNum != 0) {
    pFVar7 = FVirtualTextureSystem::GetSpace
                       (param_1,(int)this->AllocatedVirtualTextureLowMips->_padding_);
    local_res8.Reference = (pFVar7->PageTableIndirection).RenderTarget.Reference;
    if (local_res8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_res8.Reference)->_padding_ + 0x30))();
    }
    pFVar8 = FRDGBuilder::RegisterExternalTexture(param_2,&local_res8,ForceImmediateFirstBarrier);
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      puVar9[2] = 0;
      *puVar9 = &___7__TObject_VFUpdateAdaptiveIndirectionTextureParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x1c) = 0;
      puVar11 = puVar9;
    }
    local_78 = puVar11;
    if (((undefined8 **)param_2->_padding_ <= &local_78) &&
       (&local_78 < (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4))
       ) {
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
    iVar6 = (int)param_2->_padding_;
    piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_2->_padding_,piVar1);
    }
    *(int *)&param_2->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_2->_padding_ + (longlong)iVar6 * 8) = local_78;
    FRDGTextureAccess::FRDGTextureAccess(&local_58,pFVar8,CopyDest);
    pTVar2 = &this->TextureUpdates;
    piVar1 = &(this->TextureUpdates).ArrayMax;
    puVar11[2] = local_58.Texture;
    *(FRDGTextureSubresourceRange *)(puVar11 + 3) = local_58.SubresourceRange;
    puVar11[4] = local_58._16_8_;
    local_70.MovedTextureUpdates.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_70.MovedTextureUpdates.ArrayNum = (this->TextureUpdates).ArrayNum;
    local_70.MovedTextureUpdates.ArrayMax = *piVar1;
    *piVar1 = 0;
    (this->TextureUpdates).ArrayNum = 0;
    local_70.Texture = pFVar8;
    pFVar10 = FRDGEventName::FRDGEventName(&local_40,1,L"UpdateAdaptiveIndirectionTexture");
    FRDGBuilder::
    AddPass<FUpdateAdaptiveIndirectionTextureParameters,_FAdaptiveVirtualTexture::ApplyPageTableUpdates_::__l5::<lambda_1>_>
              (param_2,pFVar10,(FUpdateAdaptiveIndirectionTextureParameters *)(puVar11 + 2),Readback
               ,&local_70);
    if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_70.MovedTextureUpdates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.MovedTextureUpdates.AllocatorInstance.Data);
    }
    (this->TextureUpdates).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (pFVar8 != (FRDGTexture *)0x0) {
      iVar6 = (param_3->Resources).ArrayNum;
      piVar1 = &(param_3->Resources).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                          (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_3,
                           piVar1);
      }
      (param_3->Resources).ArrayNum = iVar6 + 1;
      pFVar3 = (param_3->Resources).AllocatorInstance.Data;
      pFVar3[iVar6].Resource = (FRDGViewableResource *)pFVar8;
      pFVar3[iVar6].Access = SRVMask;
      pFVar3[iVar6].Pipelines = All;
    }
    if (local_res8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_res8.Reference)->_padding_ + 0x38))();
    }
  }
  return;
}

// Destroy @ 1458e88b0

void __thiscall
FAdaptiveVirtualTexture::Destroy(FAdaptiveVirtualTexture *this,FVirtualTextureSystem *param_1)

{
  FRecursiveMutex *this_00;
  TArray<FVirtualTextureProducerHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  FVirtualTextureProducerHandle *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FVirtualTextureProducerHandle *pFVar8;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  FVirtualTextureProducerHandle local_res20 [2];
  
  pTVar1 = &this->ProducersToRelease;
  DestroyVirtualTexture
            (param_1,(IAllocatedVirtualTexture *)this->AllocatedVirtualTextureLowMips,pTVar1);
  iVar3 = (this->AllocationSlots).ArrayNum;
  pFVar6 = (this->AllocationSlots).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->AllocationSlots).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAdaptiveVirtualTexture::FAllocation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(IAllocatedVirtualTexture **)(pFVar6 + 8) != (IAllocatedVirtualTexture *)0x0) {
      DestroyVirtualTexture(param_1,*(IAllocatedVirtualTexture **)(pFVar6 + 8),pTVar1);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar8 = (FVirtualTextureProducerHandle *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->ProducersToRelease).ArrayNum;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if ((this->ProducersToRelease).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureProducerHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar2) break;
    local_res20[0] = *pFVar8;
    if (param_1->bUpdating != false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x347,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = &param_1->Mutex;
    if (this_00 == (FRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UE::FRecursiveMutex::Lock(this_00);
    FVirtualTextureProducerCollection::ReleaseProducer(&param_1->Producers,param_1,local_res20);
    if (this_00 != (FRecursiveMutex *)0x0) {
      UE::FRecursiveMutex::Unlock(this_00);
    }
    pFVar8 = pFVar8 + 1;
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->TextureUpdates).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->RequestsToMap).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  operator_delete__((this->LRUHeap).Heap);
  operator_delete__((this->LRUHeap).Keys);
  operator_delete__((this->LRUHeap).HeapIndexes);
  (this->LRUHeap).HeapNum = 0;
  (this->LRUHeap).HeapSize = 0;
  (this->LRUHeap).IndexSize = 0;
  (this->LRUHeap).Heap = (uint *)0x0;
  (this->LRUHeap).Keys = (uint *)0x0;
  (this->LRUHeap).HeapIndexes = (uint *)0x0;
  pFVar6 = (this->SlotsPendingRootPageMap).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if ((this->AllocatedVTMap).IndexSize != 0) {
    (this->AllocatedVTMap).HashMask = 0;
    (this->AllocatedVTMap).IndexSize = 0;
    operator_delete__((this->AllocatedVTMap).Hash);
    (this->AllocatedVTMap).Hash = FHashTable::EmptyHash;
    operator_delete__((this->AllocatedVTMap).NextIndex);
    (this->AllocatedVTMap).NextIndex = (uint *)0x0;
  }
  if ((this->GridIndexMap).IndexSize != 0) {
    (this->GridIndexMap).HashMask = 0;
    (this->GridIndexMap).IndexSize = 0;
    operator_delete__((this->GridIndexMap).Hash);
    (this->GridIndexMap).Hash = FHashTable::EmptyHash;
    operator_delete__((this->GridIndexMap).NextIndex);
    (this->GridIndexMap).NextIndex = (uint *)0x0;
  }
  pFVar6 = (this->FreeSlots).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->AllocationSlots).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IAdaptiveVirtualTexture__6B_;
  ::operator_delete(this,0x140);
  return;
}

// DestroyVirtualTexture @ 1458e9c00

void __cdecl
FAdaptiveVirtualTexture::DestroyVirtualTexture
          (FVirtualTextureSystem *param_1,IAllocatedVirtualTexture *param_2,
          TArray<FVirtualTextureProducerHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  FRecursiveMutex *this;
  int *piVar1;
  TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IAllocatedVirtualTexture *local_18 [2];
  
  iVar6 = 0;
  if ((param_2->Description).NumTextureLayers != '\0') {
    do {
      TArray<FVirtualTextureProducerHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FVirtualTextureProducerHandle_const_&>
                (param_3,(param_2->Description).ProducerHandle + iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)(param_2->Description).NumTextureLayers);
  }
  this = &param_1->Mutex;
  local_18[0] = param_2;
  if ((this == (FRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::FRecursiveMutex::Lock(this);
  iVar6 = local_18[0]->NumRefs + -1;
  local_18[0]->NumRefs = iVar6;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewNumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x2e5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar6 == 0) {
    pTVar2 = &param_1->PendingDeleteAllocatedVTs;
    local_18[0]->FrameDeleted = param_1->Frame;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)(param_1->PendingDeleteAllocatedVTs).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (param_1->PendingDeleteAllocatedVTs).ArrayNum;
    piVar1 = &(param_1->PendingDeleteAllocatedVTs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->PendingDeleteAllocatedVTs).ArrayNum = iVar6 + 1;
    *(IAllocatedVirtualTexture **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_18[0];
  }
  if (this != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this);
  }
  return;
}

// Free @ 1458f84c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::Free
          (FAdaptiveVirtualTexture *this,FVirtualTextureSystem *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAdaptiveVirtualTexture::FIndirectionTextureUpdate,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  IAllocatedVirtualTexture *pIVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_78;
  <lambda_1> local_74 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar10 = (this->AllocationSlots).ArrayNum;
  uVar15 = ~param_2 >> 0x1f;
  uVar9 = 0;
  if ((int)param_2 < iVar10) {
    uVar9 = uVar15;
  }
  if (uVar9 == 0) {
    local_a8 = (uint *)(longlong)(int)param_2;
    local_a0 = (FScriptContainerElement *)(longlong)iVar10;
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
  iVar10 = (this->AllocationSlots).ArrayNum;
  puVar16 = (uint *)(longlong)(int)param_2;
  uVar9 = *(uint *)((this->AllocationSlots).AllocatorInstance.Data + (longlong)puVar16 * 0x10);
  uVar11 = 0;
  if ((int)param_2 < iVar10) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (local_a8 = puVar16, local_a0 = (FScriptContainerElement *)(longlong)iVar10,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar5 = *(IAllocatedVirtualTexture **)
            ((this->AllocationSlots).AllocatorInstance.Data + (longlong)puVar16 * 0x10 + 8);
  DestroyVirtualTexture(param_1,pIVar5,&this->ProducersToRelease);
  uVar11 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (param_2 < (this->GridIndexMap).IndexSize) {
    uVar11 = (uVar11 >> 0x10 ^ uVar11 & 0xffff) & (this->GridIndexMap).HashMask;
    puVar6 = (this->GridIndexMap).Hash;
    puVar13 = puVar6 + uVar11;
    uVar11 = puVar6[uVar11];
    if (uVar11 == param_2) {
      uVar11 = (this->GridIndexMap).NextIndex[param_2];
LAB_1458f8635:
      *puVar13 = uVar11;
    }
    else if (uVar11 != 0xffffffff) {
      puVar6 = (this->GridIndexMap).NextIndex;
      do {
        puVar13 = puVar6 + uVar11;
        uVar11 = puVar6[uVar11];
        if (uVar11 == param_2) {
          uVar11 = puVar6[param_2];
          goto LAB_1458f8635;
        }
      } while (uVar11 != 0xffffffff);
    }
  }
  if (param_2 < (this->AllocatedVTMap).IndexSize) {
    uVar12 = (ulonglong)pIVar5 >> 4 & 0xffff & (ulonglong)(this->AllocatedVTMap).HashMask;
    puVar6 = (this->AllocatedVTMap).Hash;
    puVar13 = puVar6 + uVar12;
    uVar11 = puVar6[uVar12];
    if (uVar11 == param_2) {
      uVar11 = (this->AllocatedVTMap).NextIndex[param_2];
LAB_1458f8695:
      *puVar13 = uVar11;
    }
    else if (uVar11 != 0xffffffff) {
      puVar6 = (this->AllocatedVTMap).NextIndex;
      do {
        puVar13 = puVar6 + uVar11;
        uVar11 = puVar6[uVar11];
        if (uVar11 == param_2) {
          uVar11 = puVar6[param_2];
          goto LAB_1458f8695;
        }
      } while (uVar11 != 0xffffffff);
    }
  }
  iVar10 = (this->AllocationSlots).ArrayNum;
  local_68 = 0;
  uStack_60 = 0;
  uVar11 = 0;
  if ((int)param_2 < iVar10) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (local_a8 = puVar16, local_a0 = (FScriptContainerElement *)(longlong)iVar10,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this->FreeSlots;
  pFVar4 = (this->AllocationSlots).AllocatorInstance.Data + (longlong)puVar16 * 0x10;
  *(ulonglong *)pFVar4 = CONCAT44(uStack_64,local_68);
  *(undefined8 *)(pFVar4 + 8) = uStack_60;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_78 = param_2;
  if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
     (lVar14 = (longlong)(this->FreeSlots).ArrayMax,
     (FScriptContainerElement *)&local_78 < pFVar4 + lVar14 * 4)) {
    local_90 = (longlong)(this->FreeSlots).ArrayNum;
    local_88 = 4;
    local_a8 = &local_78;
    local_a0 = pFVar4;
    local_98 = lVar14;
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
  iVar10 = (this->FreeSlots).ArrayNum;
  piVar1 = &(this->FreeSlots).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FreeSlots).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_78;
  local_74[0].InAllocationIndex = param_2;
  TArray<int,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FAdaptiveVirtualTexture::Free_::__l2::<lambda_1>_>
            (&this->SlotsPendingRootPageMap,local_74,Default);
  piVar1 = &this->NumAllocated;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumAllocated >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                         ,0x2b3,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_50 = 0;
  pTVar3 = &this->TextureUpdates;
  local_58 = (this->GridSize).field0_0x0._s_0.X;
  uStack_54 = uVar9 / local_58;
  local_58 = uVar9 % local_58;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
     (lVar14 = (longlong)(this->TextureUpdates).ArrayMax,
     (FScriptContainerElement *)&local_58 < pFVar4 + lVar14 * 0xc)) {
    local_90 = (longlong)(this->TextureUpdates).ArrayNum;
    local_88 = 0xc;
    local_a8 = &local_58;
    local_a0 = pFVar4;
    local_98 = lVar14;
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
  iVar10 = (this->TextureUpdates).ArrayNum;
  piVar1 = &(this->TextureUpdates).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->TextureUpdates).ArrayNum = iVar10 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  *(ulonglong *)(pFVar4 + (longlong)iVar10 * 0xc) = CONCAT44(uStack_54,local_58);
  *(undefined4 *)(pFVar4 + (longlong)iVar10 * 0xc + 8) = local_50;
  return;
}

// FreeLRU @ 1458f93a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FAdaptiveVirtualTexture::FreeLRU
          (FAdaptiveVirtualTexture *this,FRHICommandListBase *param_1,FVirtualTextureSystem *param_2
          ,uint param_3,uint param_4)

{
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FVirtualTextureSpace *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(this->LRUHeap).Heap;
  if ((uVar1 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                         ,0x2bd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar8 = (this->LRUHeap).Keys[uVar1] >> 4;
  if (param_3 < param_4 + uVar8) {
    return false;
  }
  pFVar6 = FVirtualTextureSystem::GetSpace
                     (param_2,(int)this->AllocatedVirtualTextureLowMips->_padding_);
  uVar7 = 0;
  if ((int)uVar1 < (this->AllocationSlots).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = *(uint *)(*(longlong *)
                     ((this->AllocationSlots).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 0x10 + 8) + 0x74);
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 1) break;
    bVar4 = FVirtualTextureAllocator::TryAlloc(&pFVar6->Allocator,uVar7);
  } while (!bVar4);
  if ((int)uVar7 < 1) {
    this_00 = &this->LRUHeap;
    puVar2 = (this->LRUHeap).Heap;
    uVar8 = *puVar2;
    this_00->HeapNum = this_00->HeapNum - 1;
    *puVar2 = puVar2[this_00->HeapNum];
    (this->LRUHeap).HeapIndexes[*(this->LRUHeap).Heap] = 0;
    (this->LRUHeap).HeapIndexes[uVar8] = 0xffffffff;
    FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(this_00,0);
    Free(this,param_2,uVar1,param_3);
  }
  else {
    uVar9 = 0;
    if ((int)uVar1 < (this->AllocationSlots).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    Allocate(this,param_1,param_2,
             *(uint *)((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10)
             ,uVar1,uVar7,uVar8);
  }
  return true;
}

// GetAllocatedVirtualTexture @ 1458fed20

IAllocatedVirtualTexture * __thiscall
FAdaptiveVirtualTexture::GetAllocatedVirtualTexture(FAdaptiveVirtualTexture *this)

{
  return (IAllocatedVirtualTexture *)this->AllocatedVirtualTextureLowMips;
}

// GetAllocatedVirtualTextures @ 1458fed30

void __thiscall
FAdaptiveVirtualTexture::GetAllocatedVirtualTextures
          (FAdaptiveVirtualTexture *this,TBox2<double> *param_1,uint param_2,
          TArray<FAdaptiveVirtualTexture::FAllocatedInfo,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_res18;
  uint local_128 [2];
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  FAllocatedVirtualTexture *local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  longlong local_e0;
  int local_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined1 auStack_c8 [16];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined1 local_78;
  undefined7 uStack_77;
  
  local_108 = this->AllocatedVirtualTextureLowMips;
  dStack_100 = (param_1->Min).field0_0x0._s_0.X;
  dStack_f8 = (param_1->Min).field0_0x0._s_0.Y;
  dStack_f0 = (param_1->Max).field0_0x0._s_0.X;
  dStack_e8 = (param_1->Max).field0_0x0._s_0.Y;
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar13 = (*(int *)((longlong)&local_108->_padding_ + 4) - this->MaxLevel) + param_2;
  local_d8 = 0;
  if (0 < iVar13) {
    local_d8 = iVar13;
  }
  local_e0 = *(longlong *)&param_1->bIsValid;
  if (((pFVar9 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < pFVar9 + (longlong)param_3->ArrayMax * 0x38)) &&
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
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
  *(FAllocatedVirtualTexture **)pFVar9 = local_108;
  *(double *)(pFVar9 + 8) = dStack_100;
  *(double *)(pFVar9 + 0x10) = dStack_f8;
  *(double *)(pFVar9 + 0x18) = dStack_f0;
  *(double *)(pFVar9 + 0x20) = dStack_e8;
  *(longlong *)(pFVar9 + 0x28) = local_e0;
  *(longlong *)(pFVar9 + 0x30) = CONCAT44(uStack_d4,local_d8);
  if (iVar13 < 0) {
    dVar25 = *(double *)&(param_1->Min).field0_0x0;
    uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar19 = SUB84(dVar25,0);
    if (dVar25 <= 0.0) {
      uVar20 = 0;
      uVar19 = 0;
    }
    dVar23 = (double)(this->GridSize).field0_0x0._s_0.X;
    dVar23 = dVar23 + dVar23;
    dVar25 = *(double *)&(param_1->Max).field0_0x0;
    uVar21 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar18 = SUB84(dVar25,0);
    uVar22 = (int)((ulonglong)dVar25 >> 0x20);
    if (__real_3ff0000000000000 <= dVar25) {
      uVar18 = SUB84(__real_3ff0000000000000,0);
      uVar22 = uVar21;
    }
    uVar12 = (longlong)ROUND((double)CONCAT44(uVar20,uVar19) * dVar23 - __real_3fe0000000000000) >>
             1;
    dVar24 = (double)(this->GridSize).field0_0x0._s_0.Y;
    dVar25 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
    uVar20 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar19 = SUB84(dVar25,0);
    if (dVar25 <= 0.0) {
      uVar20 = 0;
      uVar19 = 0;
    }
    dVar24 = dVar24 + dVar24;
    dVar25 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
    uVar16 = SUB84(dVar25,0);
    uVar17 = (int)((ulonglong)dVar25 >> 0x20);
    if (__real_3ff0000000000000 <= dVar25) {
      uVar16 = SUB84(__real_3ff0000000000000,0);
      uVar17 = uVar21;
    }
    uVar11 = (ulonglong)
             (uint)-(int)((longlong)
                          ROUND(__real_bfe0000000000000 - (double)CONCAT44(uVar22,uVar18) * dVar23)
                         >> 1);
    uVar6 = (longlong)ROUND((double)CONCAT44(uVar20,uVar19) * dVar24 - __real_3fe0000000000000) >> 1
    ;
    uVar7 = -(int)((longlong)
                   ROUND(__real_bfe0000000000000 - (double)CONCAT44(uVar17,uVar16) * dVar24) >> 1);
    local_110 = (ulonglong)uVar7;
    local_120 = uVar11;
    local_118 = uVar12;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar5 = (int)uVar6;
        local_res18 = (uint)uVar12;
        uVar6 = uVar12 & 0xffffffff;
        if ((int)local_res18 < (int)uVar11) {
          do {
            uVar15 = iVar5 * (this->GridSize).field0_0x0._s_0.X + (int)uVar6;
            uVar7 = GetAllocationIndex(this,uVar15);
            if (uVar7 == 0xffffffff) {
LAB_1458ff1af:
              uVar8 = uVar7;
              if (uVar7 == 0xffffffff) {
                uVar8 = uVar15;
              }
              uVar15 = 9;
              if (uVar7 != 0xffffffff) {
                uVar15 = 0xd;
              }
              local_128[0] = (int)this->AllocatedVirtualTextureLowMips->_padding_ << 0x1c |
                             (uVar8 & 0xffffff) << 4 | uVar15;
              pFVar9 = (param_4->AllocatorInstance).Data;
              if (((pFVar9 <= (FScriptContainerElement *)local_128) &&
                  ((FScriptContainerElement *)local_128 < pFVar9 + (longlong)param_4->ArrayMax * 4))
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar14 = param_4->ArrayNum;
              if (iVar14 == param_4->ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar14 + 1;
              *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_128[0];
            }
            else {
              uVar8 = 0;
              if ((int)uVar7 < (this->AllocationSlots).ArrayNum) {
                uVar8 = ~uVar7 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar10 = *(longlong *)
                        ((this->AllocationSlots).AllocatorInstance.Data +
                        (longlong)(int)uVar7 * 0x10 + 8);
              iVar14 = iVar13 + *(int *)(lVar10 + 0x74);
              if (iVar14 < 0) goto LAB_1458ff1af;
              dVar23 = (double)(this->GridSize).field0_0x0._s_0.Y;
              dVar25 = (double)(this->GridSize).field0_0x0._s_0.X;
              uVar28 = dVar23 * (param_1->Min).field0_0x0._s_0.Y - (double)iVar5;
              uVar27 = dVar23 * (param_1->Max).field0_0x0._s_0.Y - (double)iVar5;
              uVar3 = dVar25 * (param_1->Min).field0_0x0._s_0.X - (double)(int)local_res18;
              uVar26 = dVar25 * (param_1->Max).field0_0x0._s_0.X - (double)(int)local_res18;
              if ((((UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X < (double)uVar3) ||
                   ((double)uVar26 < UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X)) ||
                  (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y < (double)uVar28)) ||
                 ((double)uVar27 < UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                         ::__l5::_thread_safe_static_guard_0__),
                   `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                   ::__l5::_thread_safe_static_guard_0__ == -1)) {
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.Min.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.bIsValid = false;
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox._33_7_ = 0;
                  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.Max.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
                  _Init_thread_footer(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                       ::__l5::_thread_safe_static_guard_0__);
                }
                uStack_b8 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Max.field0_0x0._0_4_;
                uStack_b4 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Max.field0_0x0._4_4_;
                uStack_b0 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Max.field0_0x0._8_4_;
                uStack_ac = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                            ::__l5::EmptyBox.Max.field0_0x0._12_4_;
                auStack_c8 = (undefined1  [16])
                             `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                             ::__l5::EmptyBox.Min.field0_0x0;
                local_a8 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::EmptyBox._32_8_;
              }
              else {
                if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X <= (double)uVar26) {
                  uVar26 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
                }
                local_78 = 1;
                if ((double)uVar28 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
                  uVar28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
                }
                if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y <= (double)uVar27) {
                  uVar27 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
                }
                local_a8._1_7_ = uStack_77;
                local_a8._0_1_ = true;
                if ((double)uVar3 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
                  uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
                }
                uStack_b8 = (undefined4)uVar26;
                uStack_b4 = (undefined4)((ulonglong)uVar26 >> 0x20);
                uStack_b0 = (undefined4)uVar27;
                uStack_ac = (undefined4)((ulonglong)uVar27 >> 0x20);
                auStack_c8._8_8_ = uVar28;
                auStack_c8._0_8_ = uVar3;
              }
              pFVar9 = (param_3->AllocatorInstance).Data;
              piVar1 = &param_3->ArrayMax;
              local_d0 = lVar10;
              local_a0 = iVar14;
              if (((pFVar9 <= (FScriptContainerElement *)&local_d0) &&
                  ((FScriptContainerElement *)&local_d0 < pFVar9 + (longlong)*piVar1 * 0x38)) &&
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
              iVar14 = param_3->ArrayNum;
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x838,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar14 + 1;
              lVar10 = (longlong)iVar14 * 0x38;
              pFVar9 = (param_3->AllocatorInstance).Data;
              *(longlong *)(pFVar9 + lVar10) = local_d0;
              *(undefined8 *)(pFVar9 + lVar10 + 8) = auStack_c8._0_8_;
              *(undefined8 *)(pFVar9 + lVar10 + 0x10) = auStack_c8._8_8_;
              *(ulonglong *)(pFVar9 + lVar10 + 0x10 + 8) = CONCAT44(uStack_b4,uStack_b8);
              *(ulonglong *)(pFVar9 + lVar10 + 0x20) = CONCAT44(uStack_ac,uStack_b0);
              *(undefined8 *)(pFVar9 + lVar10 + 0x20 + 8) = local_a8;
              *(ulonglong *)(pFVar9 + lVar10 + 0x30) = CONCAT44(uStack_9c,local_a0);
            }
            local_res18 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            uVar11 = local_120;
            uVar12 = local_118;
          } while ((int)local_res18 < (int)local_120);
        }
        uVar6 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < (int)local_110);
    }
  }
  return;
}

// GetAllocationIndex @ 1458ff340

uint __thiscall
FAdaptiveVirtualTexture::GetAllocationIndex(FAdaptiveVirtualTexture *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (this->GridIndexMap).Hash
          [(uVar4 >> 0x10 ^ uVar4 & 0xffff) & (this->GridIndexMap).HashMask];
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = 0;
    if ((int)uVar4 < (this->AllocationSlots).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(uint *)((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10) ==
        param_1) {
      return uVar4;
    }
    uVar4 = (this->GridIndexMap).NextIndex[uVar4];
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// GetAllocationIndex @ 1458ff440

uint __thiscall
FAdaptiveVirtualTexture::GetAllocationIndex
          (FAdaptiveVirtualTexture *this,FAllocatedVirtualTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (this->AllocatedVTMap).Hash
          [(ulonglong)param_1 >> 4 & 0xffff & (ulonglong)(this->AllocatedVTMap).HashMask];
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = 0;
    if ((int)uVar4 < (this->AllocationSlots).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(FAllocatedVirtualTexture **)
         ((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8) ==
        param_1) {
      return uVar4;
    }
    uVar4 = (this->AllocatedVTMap).NextIndex[uVar4];
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// GetPackedAllocationRequest @ 1459012d0

uint __thiscall
FAdaptiveVirtualTexture::GetPackedAllocationRequest
          (FAdaptiveVirtualTexture *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  FVirtualTextureSpace *pFVar3;
  FAllocatedVirtualTexture *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_res18 [2];
  
  uVar6 = (int)this->AllocatedVirtualTextureLowMips->_padding_ << 0x1c;
  uVar7 = 0;
  if (param_2 == 0) {
    uVar7 = 8;
  }
  uVar7 = uVar6 | uVar7;
  if ((GVirtualTextureSystem == (FVirtualTextureSystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GVirtualTextureSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x16d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  pFVar3 = FVirtualTextureSystem::GetSpace
                     (GVirtualTextureSystem,(int)this->AllocatedVirtualTextureLowMips->_padding_);
  pFVar4 = FVirtualTextureAllocator::Find(&pFVar3->Allocator,param_1,local_res18);
  if ((pFVar4 != (FAllocatedVirtualTexture *)0x0) && (pFVar4->FrameAllocated <= param_3 - 3)) {
    if (pFVar4 != this->AllocatedVirtualTextureLowMips) {
      uVar5 = (this->AllocatedVTMap).Hash
              [(ulonglong)pFVar4 >> 4 & 0xffff & (ulonglong)(this->AllocatedVTMap).HashMask];
      do {
        if (uVar5 == 0xffffffff) {
          uVar5 = 0xffffffff;
LAB_1459014c3:
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                             ,0x1f8,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return uVar7;
          }
LAB_1459014e9:
          if ((this->AdaptiveDesc).MaxAdaptiveLevel <= *(uint *)((longlong)&pFVar4->_padding_ + 4))
          {
            uVar7 = uVar6;
          }
          return (uVar5 & 0xffffff) << 4 | uVar7 | 5;
        }
        uVar8 = 0;
        if ((int)uVar5 < (this->AllocationSlots).ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return uVar7;
        }
        if (*(FAllocatedVirtualTexture **)
             ((this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8) ==
            pFVar4) {
          if (uVar5 == 0xffffffff) goto LAB_1459014c3;
          goto LAB_1459014e9;
        }
        uVar5 = (this->AllocatedVTMap).NextIndex[uVar5];
      } while( true );
    }
    uVar5 = local_res18[0] >> 1 & 0x55555555;
    uVar6 = ((local_res18[0] & 0x55555555) >> 1 ^ local_res18[0] & 0x55555555) & 0x33333333;
    uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
    uVar8 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
    uVar6 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
    uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
    uVar6 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
    uVar5 = ((uVar6 >> 8 ^ uVar6) & 0xffff) * (this->GridSize).field0_0x0._s_0.X +
            ((uVar8 >> 8 ^ uVar8) & 0xffff);
    uVar6 = GetAllocationIndex(this,uVar5);
    if (uVar6 == 0xffffffff) {
      return (uVar5 & 0xffffff) << 4 | uVar7 | 1;
    }
  }
  return 0;
}

// GetProducers @ 145902960

void __thiscall
FAdaptiveVirtualTexture::GetProducers
          (FAdaptiveVirtualTexture *this,TIntRect<int> *param_1,uint param_2,
          TArray<FAdaptiveVirtualTexture::FProducerInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  FAllocatedVirtualTexture *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined1 local_78 [4];
  int local_74;
  uint local_70;
  FScriptContainerElement *local_68;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int *local_48;
  
  uVar3 = (this->AllocatedVirtualTextureLowMips->UniqueProducers).ArrayNum;
  uVar16 = (this->NumAllocated + 1) * uVar3;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_3->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar16,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
  }
  bVar2 = *(byte *)((longlong)&this->AllocatedVirtualTextureLowMips->_padding_ + 3);
  if (bVar2 <= param_2) {
    uVar5 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    iVar17 = 1 << (bVar2 & 0x1f);
    uVar12 = *(ulonglong *)&param_1->field0_0x0;
    uVar16 = 0;
    pFVar20 = (FScriptContainerElement *)
              ((longlong)((int)((ulonglong)uVar5 >> 0x20) + -1 + iVar17) / (longlong)iVar17 << 0x20
              | (longlong)((int)uVar5 + -1 + iVar17) / (longlong)iVar17 & 0xffffffffU);
    local_74 = param_2 - bVar2;
    local_68 = pFVar20;
    local_48 = piVar1;
    if (uVar3 != 0) {
      do {
        pFVar6 = this->AllocatedVirtualTextureLowMips;
        uVar13 = 0;
        if ((int)uVar16 < (pFVar6->UniqueProducers).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pFVar20 = local_68, bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(undefined4 *)
                 ((pFVar6->UniqueProducers).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
        iVar9 = param_3->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x418,&param_3->AllocatorInstance,piVar1);
          param_3->ArrayNum = iVar9;
          pFVar20 = local_68;
        }
        param_3->ArrayNum = iVar9 + 1;
        uVar16 = uVar16 + 1;
        lVar11 = (longlong)iVar9;
        pFVar15 = (param_3->AllocatorInstance).Data;
        *(undefined4 *)(pFVar15 + lVar11 * 0x18) = uVar4;
        *(ulonglong *)(pFVar15 + lVar11 * 0x18 + 4) =
             (longlong)((ulonglong)(uint)((longlong)uVar12 >> 0x3f) << 0x20 | uVar12 >> 0x20) /
             (longlong)iVar17 << 0x20 |
             (longlong)((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar12 & 0xffffffff) /
             (longlong)iVar17 & 0xffffffffU;
        *(FScriptContainerElement **)(pFVar15 + lVar11 * 0x18 + 0xc) = pFVar20;
        *(int *)(pFVar15 + lVar11 * 0x18 + 0x14) = local_74;
      } while (uVar16 < uVar3);
    }
  }
  local_48 = &param_3->ArrayMax;
  local_70 = (this->AllocationSlots).ArrayNum;
  uVar12 = (ulonglong)(int)local_70;
  pFVar20 = (this->AllocationSlots).AllocatorInstance.Data;
  pFVar15 = pFVar20 + uVar12 * 0x10;
  local_68 = pFVar15;
  do {
    if ((this->AllocationSlots).ArrayNum != (int)uVar12) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FAdaptiveVirtualTexture::FAllocation_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_78);
    }
    if (pFVar20 == pFVar15) {
      return;
    }
    if ((*(longlong *)(pFVar20 + 8) != 0) &&
       (bVar2 = *(byte *)(*(longlong *)(pFVar20 + 8) + 0x23), bVar2 <= param_2)) {
      uVar16 = (this->AllocatedDesc).TileSize;
      uVar18 = (uVar16 * (this->AdaptiveDesc).TileCountX) / (uint)(this->GridSize).field0_0x0._s_0.X
      ;
      uVar13 = (uVar16 * (this->AdaptiveDesc).TileCountY) / (uint)(this->GridSize).field0_0x0._s_0.Y
      ;
      uVar16 = (this->GridSize).field0_0x0._s_0.X;
      iVar14 = uVar13 * (*(uint *)pFVar20 / uVar16);
      iVar21 = (*(uint *)pFVar20 % uVar16) * uVar18;
      uVar16 = (this->AllocatedDesc).TileBorderSize;
      iVar9 = uVar13 + iVar14 + uVar16;
      iVar17 = uVar16 + iVar21 + uVar18;
      _local_60 = CONCAT44(iVar9,iVar17);
      pFVar15 = local_68;
      if ((*(int *)&param_1->field0_0x0 < iVar17) &&
         ((((int)(iVar21 - uVar16) < *(int *)((longlong)&param_1->field0_0x0 + 8) &&
           (*(int *)((longlong)&param_1->field0_0x0 + 4) < iVar9)) &&
          ((int)(iVar14 - uVar16) < *(int *)((longlong)&param_1->field0_0x0 + 0xc))))) {
        uVar5 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
        iStack_4c = (int)((ulonglong)uVar5 >> 0x20);
        iVar17 = iStack_4c - iVar14;
        iVar9 = (int)uVar5 - iVar21;
        iVar19 = 1 << (bVar2 & 0x1f);
        uVar16 = 0;
        iVar21 = (int)*(undefined8 *)&param_1->field0_0x0 - iVar21;
        iStack_54 = (int)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
        iVar14 = iStack_54 - iVar14;
        _local_58 = CONCAT44(iVar14,iVar21);
        _local_50 = CONCAT44(iVar17,iVar9);
        local_74 = param_2 - bVar2;
        if (uVar3 != 0) {
          do {
            lVar11 = *(longlong *)(pFVar20 + 8);
            uVar13 = 0;
            if ((int)uVar16 < *(int *)(lVar11 + 0xa0)) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar4 = *(undefined4 *)(*(longlong *)(lVar11 + 0x98) + (longlong)(int)uVar16 * 8);
            iVar10 = param_3->ArrayNum;
            if (iVar10 == *local_48) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar10 + 1;
            uVar16 = uVar16 + 1;
            lVar11 = (longlong)iVar10;
            pFVar15 = (param_3->AllocatorInstance).Data;
            *(undefined4 *)(pFVar15 + lVar11 * 0x18) = uVar4;
            *(ulonglong *)(pFVar15 + lVar11 * 0x18 + 4) =
                 (longlong)iVar14 / (longlong)iVar19 << 0x20 |
                 (longlong)iVar21 / (longlong)iVar19 & 0xffffffffU;
            *(ulonglong *)(pFVar15 + lVar11 * 0x18 + 0xc) =
                 (longlong)(iVar17 + -1 + iVar19) / (longlong)iVar19 << 0x20 |
                 (longlong)(iVar19 + -1 + iVar9) / (longlong)iVar19 & 0xffffffffU;
            *(int *)(pFVar15 + lVar11 * 0x18 + 0x14) = local_74;
            pFVar15 = local_68;
          } while (uVar16 < uVar3);
        }
      }
    }
    pFVar20 = pFVar20 + 0x10;
    uVar12 = (ulonglong)local_70;
  } while( true );
}

// GetSpaceID @ 145903240

int __thiscall FAdaptiveVirtualTexture::GetSpaceID(FAdaptiveVirtualTexture *this)

{
  return (int)this->AllocatedVirtualTextureLowMips->_padding_;
}

// Init @ 1459093a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::Init
          (FAdaptiveVirtualTexture *this,FRHICommandListBase *param_1,FVirtualTextureSystem *param_2
          )

{
  FAllocatedVirtualTexture *pFVar1;
  
  pFVar1 = (FAllocatedVirtualTexture *)
           AllocateVirtualTexture
                     (param_1,param_2,&this->AllocatedDesc,
                      (TIntPoint<int>)(this->GridSize).field0_0x0._s_0,0xff,
                      (this->GridSize).field0_0x0._s_0.X,(this->GridSize).field0_0x0._s_0.Y,
                      UE::Math::TIntPoint<int>::ZeroValue,(this->AdaptiveDesc).MaxAdaptiveLevel);
  this->AllocatedVirtualTextureLowMips = pFVar1;
  return;
}

// QueuePackedAllocationRequests @ 145913770

void __thiscall
FAdaptiveVirtualTexture::QueuePackedAllocationRequests
          (FAdaptiveVirtualTexture *this,TArrayView<unsigned_int_const_,int> *param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res10 [2];
  
  iVar4 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      if (uVar6 == 0) {
        uVar5 = 0xffffffff;
LAB_145913867:
        local_res10[0] = 0;
        uVar7 = 0;
        if ((int)uVar6 < iVar4) {
          uVar7 = uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res10[0] = *(uint *)(lVar8 + (longlong)param_1->DataPtr);
        if ((local_res10[0] & 4) != 0) {
          uVar5 = local_res10[0] >> 4 & 0xffffff;
          if (((this->AllocationSlots).ArrayNum <= (int)uVar5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = param_2 << 4 |
                  *(uint *)(*(longlong *)
                             ((this->AllocationSlots).AllocatorInstance.Data +
                             (ulonglong)uVar5 * 0x10 + 8) + 0x74);
          (this->LRUHeap).Keys[uVar5] = uVar7;
          uVar5 = (this->LRUHeap).HeapIndexes[uVar5];
          if ((uVar5 == 0) || ((this->LRUHeap).Keys[(this->LRUHeap).Heap[uVar5 - 1 >> 1]] <= uVar7))
          {
            FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(&this->LRUHeap,uVar5);
          }
          else {
            FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(&this->LRUHeap,uVar5);
          }
        }
        if ((local_res10[0] & 8) != 0) {
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (&this->RequestsToMap,local_res10);
        }
      }
      else {
        uVar5 = ~uVar6;
        uVar7 = 0;
        if ((int)uVar6 < iVar4) {
          uVar7 = uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        puVar1 = param_1->DataPtr;
        uVar7 = 0;
        if ((int)(uVar6 - 1) < iVar4) {
          uVar7 = -uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(lVar8 + (longlong)puVar1) != *(int *)((longlong)param_1->DataPtr + lVar8 + -4))
        goto LAB_145913867;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < iVar4);
  }
  return;
}

// QueuePackedAllocationRequests @ 1459139c0

void __cdecl
FAdaptiveVirtualTexture::QueuePackedAllocationRequests
          (FVirtualTextureSystem *param_1,TArrayView<unsigned_int_const_,int> *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  FAdaptiveVirtualTexture *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FAdaptiveVirtualTexture *pFVar11;
  uint uVar12;
  FAdaptiveVirtualTexture *this;
  ForAnyElementType FVar13;
  int iVar14;
  FIdentityFunctor local_res10;
  ForAnyElementType local_80;
  int local_78;
  int local_74 [3];
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<unsigned_int_const_,int> local_58;
  TArrayView<unsigned_int_const_,int> local_48;
  FAdaptiveVirtualTexture *pFVar15;
  
  local_78 = param_2->ArrayNum;
  lVar9 = (longlong)local_78;
  if (0 < local_78) {
    pFVar6 = (FAdaptiveVirtualTexture *)0x0;
    local_80.Data = (FScriptContainerElement *)0x0;
    iVar7 = 0;
    local_74[0] = 0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_78,0,&local_80,local_78,local_74);
    memcpy(local_80.Data,param_2->DataPtr,lVar9 << 2);
    AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
              ((uint *)local_80.Data,local_78,local_res10,(TLess<void>)local_res10);
    iVar4 = local_78;
    FVar3.Data = local_80.Data;
    if ((local_78 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((iVar4 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = *(uint *)FVar3.Data;
    pFVar11 = pFVar6;
    FVar13.Data = FVar3.Data;
    pFVar15 = pFVar6;
    if (0 < iVar4) {
      do {
        iVar14 = (int)pFVar15;
        if ((iVar14 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(uint *)FVar13.Data;
        uVar12 = uVar8 >> 0x1c;
        if (uVar1 >> 0x1c != uVar12) {
          this = pFVar6;
          if ((int)uVar12 < (param_1->AdaptiveVTs).ArrayNum) {
            if (((param_1->AdaptiveVTs).ArrayNum <= (int)uVar12) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this = *(FAdaptiveVirtualTexture **)
                    ((param_1->AdaptiveVTs).AllocatorInstance.Data + (ulonglong)uVar12 * 8);
          }
          iVar10 = (int)pFVar11;
          iVar7 = iVar14 - iVar10;
          if ((iVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15b,L"Invalid index (%lld)"), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((iVar7 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15c,L"Invalid count (%lld)"), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_68 = FVar3.Data + (longlong)iVar10 * 4;
          iStack_60 = iVar7;
          if ((iVar7 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_58._12_4_ = uStack_5c;
          local_58.ArrayNum = iStack_60;
          local_58.DataPtr = (uint *)local_68;
          QueuePackedAllocationRequests(this,&local_58,param_3);
          pFVar11 = pFVar15;
          uVar8 = uVar1;
        }
        iVar7 = (int)pFVar11;
        FVar13.Data = FVar13.Data + 4;
        pFVar15 = (FAdaptiveVirtualTexture *)(ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < iVar4);
    }
    if (iVar7 < iVar4) {
      pFVar6 = FVirtualTextureSystem::GetAdaptiveVirtualTexture(param_1,uVar8 >> 0x1c);
      iVar14 = iVar4;
      if (iVar4 - iVar7 < iVar4) {
        iVar14 = iVar4 - iVar7;
      }
      iStack_60 = 0;
      if (0 < iVar14) {
        iStack_60 = iVar14;
      }
      local_68 = FVar3.Data + ((longlong)iVar4 - (longlong)iStack_60) * 4;
      if ((iStack_60 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iStack_60;
      local_48.DataPtr = (uint *)local_68;
      QueuePackedAllocationRequests(pFVar6,&local_48,param_3);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  return;
}

// RemapVirtualTexturePages @ 145917d00

void __cdecl
FAdaptiveVirtualTexture::RemapVirtualTexturePages
          (FVirtualTextureSystem *param_1,FAllocatedVirtualTexture *param_2,
          FAllocatedVirtualTexture *param_3,uint param_4)

{
  FVirtualTextureProducerHandle *pFVar1;
  FVirtualTextureProducerHandle *pFVar2;
  byte bVar3;
  byte bVar4;
  FVirtualTexturePhysicalSpace *pFVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  FProducerEntry *pFVar10;
  FProducerEntry *pFVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint local_58;
  
  lVar7 = param_2->_padding_;
  lVar8 = param_3->_padding_;
  local_58 = 0;
  if ((param_2->UniqueProducers).ArrayNum != 0) {
    do {
      uVar13 = ~local_58 >> 0x1f;
      uVar14 = 0;
      if ((int)local_58 < (param_2->UniqueProducers).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_58;
      if (((param_2->UniqueProducers).AllocatorInstance.Data[lVar15 * 8 + 4] !=
           (FScriptContainerElement)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OldAllocatedVT->GetUniqueProducerMipBias(ProducerIndex) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                             ,0xe9,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = 0;
      if ((int)local_58 < (param_3->UniqueProducers).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((param_3->UniqueProducers).AllocatorInstance.Data[lVar15 * 8 + 4] !=
           (FScriptContainerElement)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewAllocatedVT->GetUniqueProducerMipBias(ProducerIndex) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
                             ,0xea,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = 0;
      if ((int)local_58 < (param_2->UniqueProducers).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (FVirtualTextureProducerHandle *)
               ((param_2->UniqueProducers).AllocatorInstance.Data + lVar15 * 8);
      uVar14 = 0;
      if ((int)local_58 < (param_3->UniqueProducers).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (FVirtualTextureProducerHandle *)
               ((param_3->UniqueProducers).AllocatorInstance.Data + lVar15 * 8);
      pFVar10 = FVirtualTextureProducerCollection::GetEntry(&param_1->Producers,pFVar1);
      pFVar11 = FVirtualTextureProducerCollection::GetEntry(&param_1->Producers,pFVar2);
      if ((pFVar10->Producer).Description.bPersistentHighestMip != false) {
        FVirtualTextureSystem::ForceUnlockAllTiles(param_1,pFVar1,&pFVar10->Producer);
      }
      bVar3 = (pFVar11->Producer).Description.MaxLevel;
      uVar14 = 0;
      bVar4 = (pFVar10->Producer).Description.MaxLevel;
      bVar12 = (pFVar10->Producer).Description.NumPhysicalGroups;
      lVar15 = param_2->_padding_;
      if (bVar12 != 0) {
        do {
          if ((bVar12 <= uVar14) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("GroupIndex < Description.NumPhysicalGroups",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                 ,0x22,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = 0;
          if ((int)uVar14 < (pFVar10->Producer).PhysicalGroups.ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = *(FVirtualTexturePhysicalSpace **)
                    ((pFVar10->Producer).PhysicalGroups.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 8);
          FTexturePagePool::RemapPages
                    (&pFVar5->Pool,param_1,(uchar)(int)lVar15,pFVar5,pFVar1,(uint)lVar7,pFVar2,
                     (uint)lVar8,(uint)bVar3 - (uint)bVar4,param_4);
          bVar12 = (pFVar10->Producer).Description.NumPhysicalGroups;
          uVar14 = uVar14 + 1;
        } while (uVar14 < bVar12);
      }
      local_58 = local_58 + 1;
    } while (local_58 < (uint)(param_2->UniqueProducers).ArrayNum);
  }
  return;
}

// UpdateAllocations @ 145927f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAdaptiveVirtualTexture::UpdateAllocations
          (FAdaptiveVirtualTexture *this,FVirtualTextureSystem *param_1,
          FRHICommandListImmediate *param_2,uint param_3)

{
  FRecursiveMutex *pFVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAdaptiveVirtualTexture::FIndirectionTextureUpdate,TSizedDefaultAllocator<32>_> *pTVar4;
  FVirtualTextureProducerHandle *pFVar5;
  char cVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  IVirtualTexture *pIVar9;
  code *pcVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  FVirtualTexturePhysicalSpace *pFVar19;
  FVirtualTextureSpace *pFVar20;
  FScriptContainerElement *pFVar21;
  FProducerEntry *pFVar22;
  TRefCountPtr<FBaseGraphTask> *pTVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStackY_108 [32];
  uint local_98;
  uint uStack_94;
  uint local_90;
  TRefCountPtr<FBaseGraphTask> local_88 [4];
  TRefCountPtr<FBaseGraphTask> *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId744,"FAdaptiveVirtualTexture::UpdateAllocations",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AdaptiveVirtualTexture.cpp"
               ,0x2e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId744);
  }
  pTVar11 = CVarAVTAgeToFree.Ref;
  if ((this->RequestsToMap).ArrayNum == 0) {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar17 = pTVar11->ShadowedValue[1];
    if (uVar17 != 0) {
      pFVar19 = FAllocatedVirtualTexture::GetPhysicalSpaceForPageTableLayer
                          (this->AllocatedVirtualTextureLowMips,0);
      uVar14 = VirtualTextureScalability::GetPageFreeThreshold();
      uVar26 = 0;
      if (uVar14 != 0) {
        uVar26 = uVar14;
      }
      uVar14 = 0;
      if (uVar26 < param_3) {
        uVar14 = param_3 - uVar26;
      }
      uVar15 = FTexturePagePool::GetNumVisiblePages(&pFVar19->Pool,uVar14);
      pTVar11 = CVarAVTMinPoolResidencyToFree.Ref;
      uVar26 = (pFVar19->Pool).NumPages;
      uVar14 = 1;
      if (1 < uVar26) {
        uVar14 = uVar26;
      }
      bVar13 = IsInParallelRenderingThread();
      if ((!bVar13) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar12 = CVarAVTMaxFreePerFrame.Ref;
      if ((uVar14 - 1) * pTVar11->ShadowedValue[1] < uVar15 * 100) {
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar18 = pTVar12->ShadowedValue[1];
        if (this->NumAllocated < pTVar12->ShadowedValue[1]) {
          iVar18 = this->NumAllocated;
        }
        iVar24 = 0;
        do {
          if (iVar18 <= iVar24) break;
          iVar24 = iVar24 + 1;
          bVar13 = FreeLRU(this,(FRHICommandListBase *)param_2,param_1,param_3,uVar17);
        } while (bVar13);
      }
    }
  }
  else {
    pFVar20 = FVirtualTextureSystem::GetSpace
                        (param_1,(int)this->AllocatedVirtualTextureLowMips->_padding_);
    pTVar11 = CVarAVTMaxPageResidency.Ref;
    uVar17 = (pFVar20->Description).MaxSpaceSize;
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar12 = CVarAVTMaxFreePerFrame.Ref;
    iVar18 = 0x5f;
    if (pTVar11->ShadowedValue[1] < 0x5f) {
      iVar18 = pTVar11->ShadowedValue[1];
    }
    iVar24 = 10;
    if (10 < iVar18) {
      iVar24 = iVar18;
    }
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar18 = pTVar12->ShadowedValue[1];
    if (this->NumAllocated < pTVar12->ShadowedValue[1]) {
      iVar18 = this->NumAllocated;
    }
    iVar25 = 0;
    do {
      if ((iVar18 <= iVar25) ||
         ((pFVar20->Allocator).NumAllocatedPages <= (iVar24 * uVar17 * uVar17) / 100)) break;
      iVar25 = iVar25 + 1;
      bVar13 = FreeLRU(this,(FRHICommandListBase *)param_2,param_1,param_3,0xf);
    } while (bVar13);
    pTVar11 = CVarAVTMaxAllocPerFrame.Ref;
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar18 = pTVar11->ShadowedValue[1];
    iVar24 = 0;
    if (0 < iVar18) {
      do {
        iVar25 = (this->RequestsToMap).ArrayNum;
        if (iVar25 == 0) break;
        iVar16 = rand();
        uVar26 = iVar16 % iVar25;
        uVar14 = ~uVar26 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar26 < (this->RequestsToMap).ArrayNum) {
          uVar17 = uVar14;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        Allocate(this,(FRHICommandListBase *)param_2,param_1,
                 *(uint *)((this->RequestsToMap).AllocatorInstance.Data + (longlong)(int)uVar26 * 4)
                 ,param_3);
        uVar17 = 0;
        if ((int)uVar26 < (this->RequestsToMap).ArrayNum) {
          uVar17 = uVar14;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar16 = (this->RequestsToMap).ArrayNum;
        pFVar21 = (this->RequestsToMap).AllocatorInstance.Data;
        iVar25 = ~uVar26 + iVar16;
        if (1 < iVar25) {
          iVar25 = 1;
        }
        if (iVar25 != 0) {
          memmove(pFVar21 + (longlong)(int)uVar26 * 4,pFVar21 + (longlong)(iVar16 - iVar25) * 4,
                  (longlong)iVar25 << 2);
        }
        piVar2 = &(this->RequestsToMap).ArrayNum;
        *piVar2 = *piVar2 + -1;
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar18);
    }
  }
  uVar17 = 0;
  if (0 < (this->SlotsPendingRootPageMap).ArrayNum) {
    pFVar1 = &param_1->Mutex;
    lVar27 = 0;
    pTVar3 = &this->SlotsPendingRootPageMap;
    do {
      uVar14 = ~uVar17 >> 0x1f;
      uVar26 = 0;
      if ((int)uVar17 < (this->SlotsPendingRootPageMap).ArrayNum) {
        uVar26 = uVar14;
      }
      if ((uVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar26 = *(uint *)((pTVar3->AllocatorInstance).Data + lVar27);
      uVar15 = 0;
      if ((int)uVar26 < (this->AllocationSlots).ArrayNum) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar21 = (this->AllocationSlots).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10;
      lVar7 = *(longlong *)(pFVar21 + 8);
      if ((pFVar1 == (FRecursiveMutex *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      UE::FRecursiveMutex::Lock(pFVar1);
      cVar6 = *(char *)(lVar7 + 0x6c);
      if (pFVar1 != (FRecursiveMutex *)0x0) {
        UE::FRecursiveMutex::Unlock(pFVar1);
      }
      uVar26 = uVar17;
      if (cVar6 == '\0') {
        uVar26 = uVar17 - 1;
        lVar27 = lVar27 + -4;
        uVar15 = 0;
        if ((int)uVar17 < (this->SlotsPendingRootPageMap).ArrayNum) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = (this->SlotsPendingRootPageMap).ArrayNum;
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        iVar18 = ~uVar17 + iVar24;
        if (1 < iVar18) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          memmove(pFVar8 + (longlong)(int)uVar17 * 4,pFVar8 + (longlong)(iVar24 - iVar18) * 4,
                  (longlong)iVar18 << 2);
        }
        piVar2 = &(this->SlotsPendingRootPageMap).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar3->AllocatorInstance,(this->SlotsPendingRootPageMap).ArrayNum,
                   &(this->SlotsPendingRootPageMap).ArrayMax);
        pTVar4 = &this->TextureUpdates;
        uVar17 = *(uint *)(lVar7 + 0x78) & 0x55555555;
        uVar14 = *(uint *)(lVar7 + 0x78) >> 1 & 0x55555555;
        uVar17 = (uVar17 >> 1 ^ uVar17) & 0x33333333;
        uVar17 = (uVar17 >> 2 ^ uVar17) & 0xf0f0f0f;
        uVar14 = (uVar14 >> 1 ^ uVar14) & 0x33333333;
        uVar15 = (uVar17 >> 4 ^ uVar17) & 0xff00ff;
        uVar14 = (uVar14 >> 2 ^ uVar14) & 0xf0f0f0f;
        local_98 = *(uint *)pFVar21;
        uVar14 = uVar14 >> 4 ^ uVar14;
        uVar17 = (this->GridSize).field0_0x0._s_0.X;
        uStack_94 = local_98 / uVar17;
        local_98 = local_98 % uVar17;
        uVar17 = uVar14 << 8;
        pFVar21 = (pTVar4->AllocatorInstance).Data;
        local_90 = (((uVar14 ^ uVar17) & 0xffff00ff ^ uVar17) & 0xffff00 |
                   (*(uint *)(lVar7 + 0x74) | 0x10) << 0x14) << 4 | (uVar15 >> 8 ^ uVar15) & 0xffff;
        if (((pFVar21 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             pFVar21 + (longlong)(this->TextureUpdates).ArrayMax * 0xc)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar18 = (this->TextureUpdates).ArrayNum;
        piVar2 = &(this->TextureUpdates).ArrayMax;
        if (iVar18 == *piVar2) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&pTVar4->AllocatorInstance,piVar2);
        }
        (this->TextureUpdates).ArrayNum = iVar18 + 1;
        pFVar21 = (pTVar4->AllocatorInstance).Data;
        *(ulonglong *)(pFVar21 + (longlong)iVar18 * 0xc) = CONCAT44(uStack_94,local_98);
        *(uint *)(pFVar21 + (longlong)iVar18 * 0xc + 8) = local_90;
      }
      uVar17 = uVar26 + 1;
      lVar27 = lVar27 + 4;
    } while ((int)uVar17 < (this->SlotsPendingRootPageMap).ArrayNum);
  }
  (this->RequestsToMap).ArrayNum = 0;
  if ((this->RequestsToMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RequestsToMap).AllocatorInstance,0,&(this->RequestsToMap).ArrayMax);
  }
  iVar18 = (this->ProducersToRelease).ArrayNum;
  uVar17 = iVar18 - 1;
  if (-1 < (int)uVar17) {
    lVar27 = (longlong)(int)uVar17;
    pFVar1 = &param_1->Mutex;
    do {
      uVar26 = 0;
      if ((int)uVar17 < (this->ProducersToRelease).ArrayNum) {
        uVar26 = ~uVar17 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar5 = (FVirtualTextureProducerHandle *)
               ((this->ProducersToRelease).AllocatorInstance.Data + lVar27 * 4);
      if ((param_1->bUpdating != false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bUpdating",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                              ,0x34e,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((pFVar1 == (FRecursiveMutex *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      UE::FRecursiveMutex::Lock(pFVar1);
      pFVar22 = FVirtualTextureProducerCollection::GetEntry(&param_1->Producers,pFVar5);
      if (pFVar22 == (FProducerEntry *)0x0) {
LAB_145928900:
        FVirtualTextureProducerCollection::ReleaseProducer(&param_1->Producers,param_1,pFVar5);
        bVar13 = true;
      }
      else {
        local_5c = 4;
        local_68 = (TRefCountPtr<FBaseGraphTask> *)0x0;
        local_60 = 0;
        pIVar9 = (pFVar22->Producer).VirtualTexture;
        (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,pFVar5,local_88);
        if (local_60 == 0) {
          pTVar23 = local_88;
          if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
            pTVar23 = local_68;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar23,0);
          if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
            FMemory::Free(local_68);
          }
          goto LAB_145928900;
        }
        pTVar23 = local_88;
        if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar23 = local_68;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar23,local_60);
        if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(local_68);
        }
        bVar13 = false;
      }
      if (pFVar1 != (FRecursiveMutex *)0x0) {
        UE::FRecursiveMutex::Unlock(pFVar1);
      }
      if (bVar13) {
        uVar26 = 0;
        if (iVar18 <= (this->ProducersToRelease).ArrayNum) {
          uVar26 = ~uVar17 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar21 = (this->ProducersToRelease).AllocatorInstance.Data + lVar27 * 4;
        iVar24 = ~uVar17 + (this->ProducersToRelease).ArrayNum;
        if (iVar24 != 0) {
          memmove(pFVar21,pFVar21 + 4,(longlong)iVar24 << 2);
        }
        piVar2 = &(this->ProducersToRelease).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
      iVar18 = iVar18 + -1;
      lVar27 = lVar27 + -1;
      uVar17 = uVar17 - 1;
    } while (-1 < (int)uVar17);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

