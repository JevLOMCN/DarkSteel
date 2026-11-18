// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// ~FVulkanRenderPassManager @ 145b506b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall FVulkanRenderPassManager::~FVulkanRenderPassManager(FVulkanRenderPassManager *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FVulkanRenderPass *this_00;
  longlong *plVar4;
  FVulkanFramebuffer *this_01;
  void *pvVar5;
  code *pcVar6;
  TMap<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>_>
  *pTVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  TMap<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>_>
  *this_02;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  if ((GRHIGlobals.IsRHIInitialized) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GRHIGlobals.IsRHIInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.cpp"
                         ,0x1e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = 0;
  iVar2 = *(int *)&(this->RenderPasses).field_0x28;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RenderPasses).field_0x10;
  iVar18 = 0;
  uVar12 = 1;
  iVar11 = 0;
  uVar10 = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->RenderPasses).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_e8.Array;
    }
    uVar10 = *puVar19;
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar15;
      iVar18 = iVar18 + 0x20;
      iVar15 = iVar15 + 1;
      iVar11 = iVar2;
      uVar10 = 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145b50791;
      uVar10 = puVar19[lVar13 + 1];
    }
    uVar10 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = iVar18 + -1 + local_res20;
    if (iVar2 < iVar11) {
      iVar11 = iVar2;
    }
  }
LAB_145b50791:
  puVar17 = &(this->RenderPasses).field_0x10;
  uVar14 = *(uint *)&(this->RenderPasses).field_0x28;
  TStack_e8._padding_ = CONCAT44(uVar10,iVar15);
  uVar10 = uVar14 & 0xffffffe0;
  TStack_e8.CurrentBitIndex = iVar11;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = iVar18;
  uStack_c8 = CONCAT44(uStack_10c,
                       *(int *)&(this->RenderPasses).field_0x8 -
                       *(int *)&(this->RenderPasses).field_0x34);
  if ((((int)uVar14 < 0) || (iVar2 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->RenderPasses).field_0x28;
  if (uVar14 != uVar3) {
    puVar16 = *(undefined1 **)&(this->RenderPasses).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar17;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar10 = uVar10 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145b508b0;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar10;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_145b508b0:
  while( true ) {
    if (*(int *)&(this->RenderPasses).field_0x8 - *(int *)&(this->RenderPasses).field_0x34 !=
        (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_e8.CurrentBitIndex == uVar14) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) break;
    this_00 = *(FVulkanRenderPass **)
               (*(longlong *)&this->RenderPasses + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
    if (this_00 != (FVulkanRenderPass *)0x0) {
      FVulkanRenderPass::~FVulkanRenderPass(this_00);
      ::operator_delete(this_00,0x3c0);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar18 = 0;
  iVar15 = 0;
  local_c0 = &this->Framebuffers;
  iVar2 = *(int *)&(this->Framebuffers).field_0x28;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Framebuffers).field_0x10;
  iVar11 = 0;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Framebuffers).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_b8.Array;
    }
    uVar10 = *puVar19;
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145b509a0;
      uVar10 = puVar19[lVar13 + 1];
    }
    uVar12 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar15 + -1 + (int)lVar13;
    if (iVar2 < iVar11) {
      iVar11 = iVar2;
    }
  }
LAB_145b509a0:
  uVar10 = *(uint *)&(this->Framebuffers).field_0x28;
  TStack_b8.CurrentBitIndex = iVar11;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  uVar14 = uVar10 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar12,iVar18);
  iVar18 = (int)uVar10 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar15;
  uStack_98 = CONCAT44(uStack_10c,
                       *(int *)&(this->Framebuffers).field_0x8 -
                       *(int *)&(this->Framebuffers).field_0x34);
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = *(uint *)&(this->Framebuffers).field_0x28;
  if (uVar10 != uVar12) {
    puVar17 = *(undefined1 **)&(this->Framebuffers).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->Framebuffers).field_0x10;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar10 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_145b50ab1;
      uVar10 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar10 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar12 < (int)uVar10) {
      uVar10 = uVar12;
    }
  }
LAB_145b50ab1:
  do {
    pTVar7 = local_c0;
    this_02 = &this->Framebuffers;
    if (*(int *)(&local_c0->field_0x0 + 8) - *(int *)(&local_c0->field_0x0 + 0x34) != (int)uStack_98
       ) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b8.CurrentBitIndex == uVar10) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Framebuffers).field_0x10
        )) && (pTVar7 == this_02)) {
      TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
               *)&this->RenderPasses);
      TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
               *)this_02);
      *(undefined4 *)&(this->Framebuffers).field_0x48 = 0;
      pvVar5 = *(void **)&(this->Framebuffers).field_0x40;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_02);
      *(undefined4 *)&(this->RenderPasses).field_0x48 = 0;
      pvVar5 = *(void **)&(this->RenderPasses).field_0x40;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanRenderPass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->RenderPasses);
      BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FramebuffersLock);
      if (BVar9 == '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&this->FramebuffersLock);
      }
      BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
      if (BVar9 == '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      return;
    }
    plVar4 = *(longlong **)
              (*(longlong *)&pTVar7->field_0x0 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    uVar12 = (int)plVar4[1] - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 * 8;
      do {
        uVar14 = 0;
        if ((int)uVar12 < (int)plVar4[1]) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVulkanFramebuffer::Destroy(*(FVulkanFramebuffer **)(lVar13 + *plVar4),this->Device);
        uVar14 = 0;
        if ((int)uVar12 < (int)plVar4[1]) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = *(FVulkanFramebuffer **)(lVar13 + *plVar4);
        if (this_01 != (FVulkanFramebuffer *)0x0) {
          FVulkanFramebuffer::~FVulkanFramebuffer(this_01);
          ::operator_delete(this_01,0xe0);
        }
        lVar13 = lVar13 + -8;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    if (plVar4 != (longlong *)0x0) {
      if ((void *)*plVar4 != (void *)0x0) {
        FMemory::Free((void *)*plVar4);
      }
      ::operator_delete(plVar4,0x10);
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// operator() @ 145b53950

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanFramebuffer * __thiscall
`FVulkanRenderPassManager::GetOrCreateFramebuffer'::__l2::<lambda_1>::operator()
          (void *this,FFramebufferList *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FVulkanFramebuffer *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar11 = (param_1->Framebuffer).ArrayNum;
  uVar9 = 0;
  uVar12 = uVar9;
  if (iVar11 < 1) {
    return (FVulkanFramebuffer *)0x0;
  }
  while( true ) {
    uVar8 = (uint)uVar9;
    uVar10 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < iVar11) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FVulkanFramebuffer *)(*pcVar2)();
      return pFVar7;
    }
    lVar1 = *(longlong *)((param_1->Framebuffer).AllocatorInstance.Data + -0x38 + uVar12 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar6 = 0;
    if ((int)uVar8 < (param_1->Framebuffer).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    bVar5 = FVulkanFramebuffer::Matches
                      (*(FVulkanFramebuffer **)
                        ((param_1->Framebuffer).AllocatorInstance.Data + -0x38 + uVar12 + 0x38),
                       *(FRHISetRenderTargetsInfo **)this);
    if (bVar5) {
      local_28 = (int)uVar3;
      iStack_24 = (int)((ulonglong)uVar3 >> 0x20);
      iStack_20 = (int)uVar4;
      iStack_1c = (int)((ulonglong)uVar4 >> 0x20);
      lVar1 = *(longlong *)((longlong)this + 8);
      if ((((*(int *)(lVar1 + 0x398) == iStack_20) && (*(int *)(lVar1 + 0x39c) == iStack_1c)) &&
          (*(int *)(lVar1 + 0x38c) == local_28)) && (*(int *)(lVar1 + 0x390) == iStack_24)) {
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Framebuffer).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FVulkanFramebuffer *)(*pcVar2)();
          return pFVar7;
        }
        return *(FVulkanFramebuffer **)
                ((param_1->Framebuffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      }
    }
    iVar11 = (param_1->Framebuffer).ArrayNum;
    uVar9 = (ulonglong)(uVar8 + 1);
    uVar12 = uVar12 + 8;
    if (iVar11 <= (int)(uVar8 + 1)) {
      return (FVulkanFramebuffer *)0x0;
    }
  }
  pcVar2 = (code *)swi(3);
  pFVar7 = (FVulkanFramebuffer *)(*pcVar2)();
  return pFVar7;
}

// BeginRenderPass @ 145b57370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanRenderPassManager::BeginRenderPass
          (FVulkanRenderPassManager *this,FVulkanCommandListContext *param_1,
          FRHIRenderPassInfo *param_2,FVulkanRenderTargetLayout *param_3,
          FVulkanBeginRenderPassInfo *param_4)

{
  uint uVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRHIRenderPassInfo *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  FVulkanCommandBuffer *this_00;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  ERenderTargetActions *pEVar14;
  longlong lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStackY_2f8 [32];
  FVulkanPipelineBarrier local_288;
  VkClearValue local_168 [18];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  uVar13 = 0;
  uVar1 = param_4->RenderPass->NumUsedClearValues;
  memset(local_168,0,0x120);
  pFVar6 = param_2;
  uVar10 = uVar13;
  uVar12 = uVar13;
  do {
    uVar11 = (uint)uVar12;
    if ((pFVar6->ColorRenderTargets).Elements[0].RenderTarget == (FRHITexture *)0x0) break;
    uVar11 = uVar11 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar10 = uVar10 + 1;
    pFVar6 = (FRHIRenderPassInfo *)((pFVar6->ColorRenderTargets).Elements + 1);
  } while ((longlong)uVar10 < 8);
  local_288.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_288.MemoryBarriers.ArrayNum = 0;
  local_288.MemoryBarriers.ArrayMax = 1;
  local_288.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_288.ImageBarriers.ArrayNum = 0;
  local_288.ImageBarriers.ArrayMax = 2;
  local_288.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.BufferBarriers.ArrayNum = 0;
  local_288.BufferBarriers.ArrayMax = 0;
  lVar15 = (longlong)(int)uVar11;
  if (0 < (int)uVar11) {
    pEVar14 = &(param_2->ColorRenderTargets).Elements[0].Action;
    uVar10 = uVar13;
    do {
      pFVar2 = ((FColorEntry *)(pEVar14 + -0x15))->RenderTarget;
      plVar7 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x48))(pFVar2);
      lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if ((*(byte *)(lVar8 + 0x31) < 2) || (*(FRHITexture **)(pEVar14 + -0xd) == (FRHITexture *)0x0)
         ) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((*pEVar14 & ~(LoadOpMask|DontLoad_Store)) == Load_DontStore) {
        FVulkanPipelineBarrier::AddMemoryBarrier(&local_288,0x100,0x100,0x400,0x400);
      }
      uVar13 = uVar10;
      if (uVar1 != 0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
        if (*(int *)(lVar8 + 8) == 0) {
          fVar16 = FLinearColor::Black.field0_0x0._0_4_;
          uVar17 = FLinearColor::Black.field0_0x0._4_4_;
          uVar18 = FLinearColor::Black.field0_0x0._8_4_;
          uVar19 = FLinearColor::Black.field0_0x0._12_4_;
        }
        else {
          lVar8 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
          if ((*(int *)(lVar8 + 8) != 1) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<456935519012520230>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                 ,0x126,"ColorBinding == EClearBinding::EColorBound"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar16 = *(float *)(lVar8 + 0xc);
          uVar17 = *(undefined4 *)(lVar8 + 0x10);
          uVar18 = *(undefined4 *)(lVar8 + 0x14);
          uVar19 = *(undefined4 *)(lVar8 + 0x18);
        }
        uVar13 = (ulonglong)((int)uVar10 + 1);
        local_168[uVar10].depthStencil.depth = fVar16;
        *(undefined4 *)((longlong)local_168 + uVar10 * 0x10 + 0xc) = uVar19;
        *(undefined4 *)((longlong)local_168 + uVar10 * 0x10 + 4) = uVar17;
        *(undefined4 *)((longlong)local_168 + uVar10 * 0x10 + 8) = uVar18;
        if (bVar5) {
          uVar13 = (ulonglong)((int)uVar10 + 2);
        }
      }
      pEVar14 = pEVar14 + 0x18;
      lVar15 = lVar15 + -1;
      uVar10 = uVar13;
    } while (lVar15 != 0);
  }
  uVar11 = (uint)uVar13;
  pFVar2 = (param_2->DepthStencilRenderTarget).DepthStencilTarget;
  if (pFVar2 != (FRHITexture *)0x0) {
    bVar9 = (byte)(param_2->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
    if (((bVar9 & 0xf) == 1) || ((bVar9 & 0xf0) == 0x10)) {
      FVulkanPipelineBarrier::AddMemoryBarrier(&local_288,0x600,0x600,0x300,0x300);
    }
    lVar15 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
    if ((*(int *)(lVar15 + 8) != 0) && (uVar1 != 0)) {
      lVar15 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
      if ((*(int *)(lVar15 + 8) != 2) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<456935519012520236>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,300,"ColorBinding == EClearBinding::EDepthStencilBound"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = *(undefined4 *)(lVar15 + 0x10);
      uVar11 = uVar11 + 1;
      local_168[uVar13].depthStencil.depth = *(float *)(lVar15 + 0xc);
      *(undefined4 *)((longlong)local_168 + uVar13 * 0x10 + 4) = uVar17;
    }
  }
  if ((param_2->ShadingRateTexture).Reference != (FRHITexture *)0x0) {
    ValidateShadingRateDataType();
  }
  if ((param_4->RenderPass->NumUsedClearValues < uVar11) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5338510479092350776>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.cpp"
                         ,200,
                         "ClearValueIndex <= BeginRenderPassInfo.RenderPass.GetNumUsedClearValues()"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  FVulkanPipelineBarrier::Execute(&local_288,this_00);
  FVulkanCommandBuffer::BeginRenderPass(this_00,param_4,local_168);
  FVulkanPendingGfxState::SetViewport
            (param_1->PendingGfxState,0.0,0.0,0.0,(float)(param_3->Extent).Extent3D.width,
             (float)(param_3->Extent).Extent3D.height,__real_3f800000);
  if (local_288.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_288.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_288.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_288.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_288.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// EndRenderPass @ 145b65b50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanRenderPassManager::EndRenderPass
          (FVulkanRenderPassManager *this,FVulkanCommandListContext *param_1)

{
  VkCommandBuffer_T *pVVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FVulkanCommandBuffer *this_00;
  longlong lVar4;
  VkMemoryBarrier local_28;
  
  this_00 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  FVulkanCommandBuffer::EndRenderPass(this_00);
  pTVar2 = CVarVulkanDebugBarrier.Ref;
  pVVar1 = this_00->CommandBufferHandle;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_145b65b9c;
  }
  lVar4 = 0;
LAB_145b65b9c:
  if ((*(byte *)((longlong)pTVar2->ShadowedValue + lVar4) & 1) != 0) {
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.srcAccessMask = 0x1e07fff;
    local_28.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_28.dstAccessMask = 0x1e07fff;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x10000,0x10000,0,1,&local_28,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  return;
}

// GetOrCreateFramebuffer @ 145b6a1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanFramebuffer * __thiscall
FVulkanRenderPassManager::GetOrCreateFramebuffer
          (FVulkanRenderPassManager *this,FRHISetRenderTargetsInfo *param_1,
          FVulkanRenderTargetLayout *param_2,FVulkanRenderPass *param_3)

{
  FPlatformRWLock *SRWLock;
  TMap<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVulkanFramebuffer *pFVar9;
  FVulkanFramebuffer *pFVar10;
  undefined1 *puVar11;
  undefined1 auStackY_148 [32];
  uint local_f8 [2];
  FVulkanFramebuffer *local_f0;
  FVulkanFramebuffer *local_e8;
  TPairInitializer<unsigned_int_const_&,FVulkanRenderPassManager::FFramebufferList_*_const_&>
  local_e0;
  FVulkanRenderPass *local_d0;
  FVulkanRenderPassManager *local_c8;
  FRHISetRenderTargetsInfo *local_c0;
  FVulkanRenderTargetLayout *local_b8;
  uint *local_b0;
  FVulkanFramebuffer **local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e0.Value = (FFramebufferList **)param_2;
  local_d0 = param_3;
  local_c8 = this;
  if ((param_2->bCalculatedHash == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCalculatedHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.h"
                         ,0x10,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FVulkanFramebuffer *)(*pcVar6)();
    return pFVar9;
  }
  local_98._0_4_ = param_1->ColorRenderTarget[0].MipIndex;
  local_98._4_4_ = param_1->ColorRenderTarget[0].ArraySliceIndex;
  local_90._0_4_ = param_1->ColorRenderTarget[1].MipIndex;
  local_90._4_4_ = param_1->ColorRenderTarget[1].ArraySliceIndex;
  local_88._0_4_ = param_1->ColorRenderTarget[2].MipIndex;
  local_88._4_4_ = param_1->ColorRenderTarget[2].ArraySliceIndex;
  local_80._0_4_ = param_1->ColorRenderTarget[3].MipIndex;
  local_80._4_4_ = param_1->ColorRenderTarget[3].ArraySliceIndex;
  local_78._0_4_ = param_1->ColorRenderTarget[4].MipIndex;
  local_78._4_4_ = param_1->ColorRenderTarget[4].ArraySliceIndex;
  local_70._0_4_ = param_1->ColorRenderTarget[5].MipIndex;
  local_70._4_4_ = param_1->ColorRenderTarget[5].ArraySliceIndex;
  local_68._0_4_ = param_1->ColorRenderTarget[6].MipIndex;
  local_68._4_4_ = param_1->ColorRenderTarget[6].ArraySliceIndex;
  local_60._0_4_ = param_1->ColorRenderTarget[7].MipIndex;
  local_60._4_4_ = param_1->ColorRenderTarget[7].ArraySliceIndex;
  local_f8[0] = (*FCrc::MemCrc32Func)(&local_98,0x40,param_2->RenderPassCompatibleHash);
  SRWLock = &this->FramebuffersLock;
  local_c0 = param_1;
  local_b8 = param_2;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this_00 = &this->Framebuffers;
  pFVar9 = (FVulkanFramebuffer *)0x0;
  puVar1 = &(this->Framebuffers).field_0x38;
  puVar2 = &(this->Framebuffers).field_0x48;
  if (*(int *)&(this->Framebuffers).field_0x8 != *(int *)&(this->Framebuffers).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Framebuffers).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar8 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar2 - 1U & local_f8[0]) * 4);
    if (iVar8 != -1) {
      do {
        lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_f8[0]) {
          if (iVar8 != -1) {
            pFVar10 = (FVulkanFramebuffer *)(lVar4 + 8);
            if (lVar4 == 0) {
              pFVar10 = pFVar9;
            }
            if (pFVar10 != (FVulkanFramebuffer *)0x0) {
              local_e8 = (FVulkanFramebuffer *)
                         (((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
                          &pFVar10->AttachmentTextureViews)->AllocatorInstance).Data;
              pFVar10 = `FVulkanRenderPassManager::GetOrCreateFramebuffer'::__l2::<lambda_1>::
                        operator()(&local_c0,(FFramebufferList *)local_e8);
              param_2 = (FVulkanRenderTargetLayout *)local_e0.Value;
              if (pFVar10 != (FVulkanFramebuffer *)0x0) {
                ReleaseSRWLockShared((PSRWLOCK)SRWLock);
                return pFVar10;
              }
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x10);
      } while (iVar8 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(this->Framebuffers).field_0x8 != *(int *)&(this->Framebuffers).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Framebuffers).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    iVar8 = *(int *)(puVar11 + (ulonglong)(*(int *)puVar2 - 1U & local_f8[0]) * 4);
    if (iVar8 != -1) {
      do {
        lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_f8[0]) {
          pFVar10 = (FVulkanFramebuffer *)(lVar4 + 8);
          if (lVar4 == 0) {
            pFVar10 = pFVar9;
          }
          if (pFVar10 != (FVulkanFramebuffer *)0x0) {
            local_e8 = (FVulkanFramebuffer *)
                       (((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
                        &pFVar10->AttachmentTextureViews)->AllocatorInstance).Data;
            pFVar10 = `FVulkanRenderPassManager::GetOrCreateFramebuffer'::__l2::<lambda_1>::
                      operator()(&local_c0,(FFramebufferList *)local_e8);
            if (pFVar10 == (FVulkanFramebuffer *)0x0) goto LAB_145b6a47c;
            goto LAB_145b6a559;
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x10);
      } while (iVar8 != -1);
    }
  }
  pFVar10 = ::operator_new(0x10);
  local_e8 = pFVar9;
  if (pFVar10 != (FVulkanFramebuffer *)0x0) {
    (((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)&pFVar10->AttachmentTextureViews)
    ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar10->AttachmentTextureViews).ArrayNum = 0;
    (pFVar10->AttachmentTextureViews).ArrayMax = 0;
    local_e8 = pFVar10;
  }
  local_b0 = local_f8;
  local_a8 = &local_e8;
  TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,FVulkanRenderPassManager::FFramebufferList_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
              *)this_00,&local_e0,(bool *)&local_b0);
LAB_145b6a47c:
  pFVar10 = ::operator_new(0xe0);
  if (pFVar10 != (FVulkanFramebuffer *)0x0) {
    pFVar9 = FVulkanFramebuffer::FVulkanFramebuffer
                       (pFVar10,local_c8->Device,param_1,param_2,local_d0);
  }
  pFVar10 = local_e8;
  pFVar5 = (((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
            &local_e8->AttachmentTextureViews)->AllocatorInstance).Data;
  local_f0 = pFVar9;
  if (((pFVar5 <= (FScriptContainerElement *)&local_f0) &&
      ((FScriptContainerElement *)&local_f0 <
       pFVar5 + (longlong)
                ((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
                &local_e8->AttachmentTextureViews)->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FVulkanFramebuffer *)(*pcVar6)();
    return pFVar9;
  }
  iVar8 = ((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
          &pFVar10->AttachmentTextureViews)->ArrayNum;
  piVar3 = &((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)
            &pFVar10->AttachmentTextureViews)->ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar10,piVar3);
  }
  ((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)&pFVar10->AttachmentTextureViews)->
  ArrayNum = iVar8 + 1;
  *(FVulkanFramebuffer **)
   ((((TArray<FVulkanFramebuffer_*,TSizedDefaultAllocator<32>_> *)&pFVar10->AttachmentTextureViews)
    ->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_f0;
  pFVar10 = local_f0;
LAB_145b6a559:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return pFVar10;
}

// GetOrCreateRenderPass @ 145b6a5a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanRenderPass * __thiscall
FVulkanRenderPassManager::GetOrCreateRenderPass
          (FVulkanRenderPassManager *this,FVulkanRenderTargetLayout *param_1)

{
  longlong lVar1;
  VkAttachmentReference VVar2;
  code *pcVar3;
  FVulkanRenderPass **ppFVar4;
  bool bVar5;
  int iVar6;
  FVulkanRenderPass *pFVar7;
  FVulkanRenderPass *pFVar8;
  undefined1 *puVar9;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FVulkanRenderPass_*_const_&> local_res10;
  uint *local_38;
  FVulkanRenderPass ***local_30;
  
  if ((param_1->bCalculatedHash == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCalculatedHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.h"
                         ,0x15,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVulkanRenderPass *)(*pcVar3)();
    return pFVar7;
  }
  local_res8[0] = param_1->RenderPassFullHash;
  AcquireSRWLockShared((PSRWLOCK)this);
  pFVar7 = (FVulkanRenderPass *)0x0;
  if (*(int *)&(this->RenderPasses).field_0x8 != *(int *)&(this->RenderPasses).field_0x34) {
    puVar9 = *(undefined1 **)&(this->RenderPasses).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->RenderPasses).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->RenderPasses).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->RenderPasses + (longlong)iVar6 * 0x18;
        if (*(uint *)(*(longlong *)&this->RenderPasses + (longlong)iVar6 * 0x18) == local_res8[0]) {
          pFVar8 = (FVulkanRenderPass *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FVulkanRenderPass *)0x0) {
            VVar2 = (pFVar8->Layout).ColorReferences[0];
            ReleaseSRWLockShared((PSRWLOCK)this);
            return (FVulkanRenderPass *)VVar2;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  pFVar8 = ::operator_new(0x3c0);
  local_res10.Value = (FVulkanRenderPass **)pFVar7;
  if (pFVar8 != (FVulkanRenderPass *)0x0) {
    local_res10.Value =
         (FVulkanRenderPass **)FVulkanRenderPass::FVulkanRenderPass(pFVar8,this->Device,param_1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  ppFVar4 = local_res10.Value;
  if (*(int *)&(this->RenderPasses).field_0x8 != *(int *)&(this->RenderPasses).field_0x34) {
    puVar9 = *(undefined1 **)&(this->RenderPasses).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->RenderPasses).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->RenderPasses).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->RenderPasses + (longlong)iVar6 * 0x18;
        if (*(uint *)(*(longlong *)&this->RenderPasses + (longlong)iVar6 * 0x18) == local_res8[0]) {
          pFVar8 = (FVulkanRenderPass *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FVulkanRenderPass *)0x0) {
            if ((FVulkanRenderPass *)local_res10.Value != (FVulkanRenderPass *)0x0) {
              FVulkanRenderPass::~FVulkanRenderPass((FVulkanRenderPass *)local_res10.Value);
              ::operator_delete(ppFVar4,0x3c0);
            }
            VVar2 = (pFVar8->Layout).ColorReferences[0];
            ReleaseSRWLockExclusive((PSRWLOCK)this);
            return (FVulkanRenderPass *)VVar2;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_38 = local_res8;
  local_30 = &local_res10.Value;
  TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FVulkanRenderPass_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
              *)&this->RenderPasses,&local_res10,(bool *)&local_38);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return (FVulkanRenderPass *)local_res10.Value;
}

// NotifyDeletedRenderTarget @ 145b6e6c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanRenderPassManager::NotifyDeletedRenderTarget
          (FVulkanRenderPassManager *this,VkImage_T *param_1)

{
  longlong *plVar1;
  FVulkanFramebuffer *this_00;
  code *pcVar2;
  bool bVar3;
  VkImage_T **ppVVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
              *)&this->Framebuffers);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar6 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
              *)&this->Framebuffers;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_68 + 8 + (longlong)(int)uVar6 * 0x18);
      uVar8 = (int)plVar1[1] - 1;
      if (-1 < (int)uVar8) {
        lVar10 = (longlong)(int)uVar8;
        lVar9 = lVar10 * 8;
        do {
          uVar11 = ~uVar8 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar8 < (int)plVar1[1]) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
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
          this_00 = *(FVulkanFramebuffer **)(lVar9 + *plVar1);
          if ((param_1 == (VkImage_T *)0x0) &&
             (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_8450710495500959697>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.h"
                                 ,0x2f,"Image != nullptr"), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = 0;
          if (this_00->NumColorAttachments != 0) {
            ppVVar4 = this_00->ColorRenderTargetImages;
            do {
              if (*ppVVar4 == param_1) goto LAB_145b6e84f;
              uVar5 = uVar5 + 1;
              ppVVar4 = ppVVar4 + 1;
            } while (uVar5 < this_00->NumColorAttachments);
          }
          if (this_00->DepthStencilRenderTargetImage == param_1) {
LAB_145b6e84f:
            uVar5 = 0;
            if ((int)uVar8 < (int)plVar1[1]) {
              uVar5 = uVar11;
            }
            if ((uVar5 == 0) &&
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
            iVar7 = (int)plVar1[1] + ~uVar8;
            if (1 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              memmove((void *)(*plVar1 + lVar10 * 8),
                      (void *)(*plVar1 + (longlong)((int)plVar1[1] - iVar7) * 8),
                      (longlong)iVar7 << 3);
            }
            *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
            FVulkanFramebuffer::Destroy(this_00,this->Device);
            FVulkanFramebuffer::~FVulkanFramebuffer(this_00);
            ::operator_delete(this_00,0xe0);
          }
          lVar10 = lVar10 + -1;
          lVar9 = lVar9 + -8;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      if ((int)plVar1[1] == 0) {
        if (plVar1 != (longlong *)0x0) {
          if ((void *)*plVar1 != (void *)0x0) {
            FMemory::Free((void *)*plVar1);
          }
          ::operator_delete(plVar1,0x10);
        }
        TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uStack_4c);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar6 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      iVar7 = 1;
      uVar8 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (3 < uVar8) {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPassManager::FFramebufferList_*,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

