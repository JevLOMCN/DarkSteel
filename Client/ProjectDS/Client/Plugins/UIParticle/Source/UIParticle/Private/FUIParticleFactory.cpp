// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 19

// FUIParticleFactory @ 14ac8f1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUIParticleFactory * __thiscall FUIParticleFactory::FUIParticleFactory(FUIParticleFactory *this)

{
  TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
  *pTVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  FUIParticleFactory *pFVar9;
  undefined1 auStackY_1c8 [32];
  undefined8 local_178 [2];
  undefined1 local_168 [24];
  undefined8 uStack_150;
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  void *local_d8;
  ulonglong local_d0;
  void *local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FUIParticleFactory__6B_;
  pTVar1 = &this->ParticleRefArray;
  piVar2 = &(this->ParticlePoolMapArray).ArrayMax;
  (this->ParticlePoolMapArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlePoolMapArray).ArrayNum = 0;
  *piVar2 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ParticleRefArray).ArrayNum = 0;
  (this->ParticleRefArray).ArrayMax = 0;
  DestructItems<TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>,int>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)0x0,0);
  (this->ParticlePoolMapArray).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->ParticlePoolMapArray).AllocatorInstance,0,piVar2);
  }
  pFVar3 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
  local_130 = 0;
  local_168._16_8_ = 0;
  uStack_150 = 0;
  local_120 = 0;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  if ((pFVar3 <= (FScriptContainerElement *)local_168) &&
     ((FScriptContainerElement *)local_168 < pFVar3 + (longlong)*piVar2 * 0x50)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FUIParticleFactory *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->ParticlePoolMapArray).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ParticlePoolMapArray).AllocatorInstance,piVar2);
  }
  (this->ParticlePoolMapArray).ArrayNum = iVar8 + 1;
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
  ::
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)((this->ParticlePoolMapArray).AllocatorInstance.Data + (longlong)iVar8 * 0x50),
             (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)local_168);
  local_120 = local_120 & 0xffffffff00000000;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  iVar8 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  pFVar3 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
  local_e0 = 0;
  local_118._16_8_ = 0;
  uStack_100 = 0;
  local_d0 = 0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  if ((pFVar3 <= (FScriptContainerElement *)local_118) &&
     ((FScriptContainerElement *)local_118 < pFVar3 + (longlong)*piVar2 * 0x50)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FUIParticleFactory *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->ParticlePoolMapArray).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ParticlePoolMapArray).AllocatorInstance,piVar2);
  }
  (this->ParticlePoolMapArray).ArrayNum = iVar8 + 1;
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
  ::
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)((this->ParticlePoolMapArray).AllocatorInstance.Data + (longlong)iVar8 * 0x50),
             (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)local_118);
  local_d0 = local_d0 & 0xffffffff00000000;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  iVar8 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  pTVar4 = (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
            *)(this->ParticlePoolMapArray).AllocatorInstance.Data;
  local_90 = 0;
  local_b8.AllocatorInstance.InlineData[0] = '\0';
  local_b8.AllocatorInstance.InlineData[1] = '\0';
  local_b8.AllocatorInstance.InlineData[2] = '\0';
  local_b8.AllocatorInstance.InlineData[3] = '\0';
  local_b8.AllocatorInstance.InlineData[4] = '\0';
  local_b8.AllocatorInstance.InlineData[5] = '\0';
  local_b8.AllocatorInstance.InlineData[6] = '\0';
  local_b8.AllocatorInstance.InlineData[7] = '\0';
  local_b8.AllocatorInstance.InlineData[8] = '\0';
  local_b8.AllocatorInstance.InlineData[9] = '\0';
  local_b8.AllocatorInstance.InlineData[10] = '\0';
  local_b8.AllocatorInstance.InlineData[0xb] = '\0';
  local_b8.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.AllocatorInstance.InlineData[0xf] = '\0';
  local_80 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  if ((pTVar4 <= (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                  *)&local_c8) &&
     ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
       *)&local_c8 < pTVar4 + *piVar2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FUIParticleFactory *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->ParticlePoolMapArray).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ParticlePoolMapArray).AllocatorInstance,piVar2);
  }
  (this->ParticlePoolMapArray).ArrayNum = iVar8 + 1;
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
  ::
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)((this->ParticlePoolMapArray).AllocatorInstance.Data + (longlong)iVar8 * 0x50),
             (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)&local_c8);
  local_80 = local_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar6 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&local_c8,0,(int *)((longlong)&local_c0 + 4));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_b8.NumBits = 0;
  if (0x80 < (uint)local_b8.MaxBits) {
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  pFVar3 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
  local_40 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  if ((pFVar3 <= (FScriptContainerElement *)local_78) &&
     ((FScriptContainerElement *)local_78 < pFVar3 + (longlong)*piVar2 * 0x50)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FUIParticleFactory *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->ParticlePoolMapArray).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ParticlePoolMapArray).AllocatorInstance,piVar2);
  }
  (this->ParticlePoolMapArray).ArrayNum = iVar8 + 1;
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
  ::
  TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)((this->ParticlePoolMapArray).AllocatorInstance.Data + (longlong)iVar8 * 0x50),
             (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar8 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (pTVar1 != (TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_> *)
                local_178) {
    DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
              ((TSharedPtr<FEasyParticleRootState,1> *)(pTVar1->AllocatorInstance).Data,
               (this->ParticleRefArray).ArrayNum);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParticleRefArray).ArrayNum = 0;
    (this->ParticleRefArray).ArrayMax = 0;
  }
  DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
            ((TSharedPtr<FEasyParticleRootState,1> *)0x0,0);
  return this;
}

// operator() @ 14ac91850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FUIParticleFactory::OnParallelPaint'::__l19::<lambda_1>::operator()(void *this,int param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FPipe *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FTaskBase *pFVar14;
  undefined8 *puVar15;
  longlong lVar16;
  FTaskBase *this_00;
  uint uVar17;
  ETaskPriority local_res8 [8];
  EExtendedTaskPriority local_res10 [8];
  longlong local_38 [2];
  
  uVar4 = *(undefined8 *)((longlong)this + 0x18);
  plVar5 = *(longlong **)((longlong)this + 0x10);
  lVar6 = *(longlong *)((longlong)this + 8);
  pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,8);
  this_00 = (FTaskBase *)0x0;
  if (pFVar14 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar14,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar14->_padding_ = (longlong)&___7__TGraphTask_VFPaintParticleTask____6B_;
    this_00 = pFVar14;
  }
  lVar16 = plVar5[1];
  uVar7 = *(undefined8 *)((longlong)this + 0x20);
  lVar9 = plVar5[2];
  lVar10 = plVar5[3];
  lVar11 = plVar5[4];
  lVar12 = plVar5[5];
  pFVar3 = (FPipe *)plVar5[6];
  this_00[1]._padding_ = *plVar5;
  this_00[1]._padding_ = lVar16;
  this_00[1]._padding_ = lVar6;
  this_00[1]._padding_ = lVar9;
  this_00[1]._padding_ = lVar10;
  this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar4;
  this_00[1].ExtendedPriority = (char)((ulonglong)uVar4 >> 0x20);
  this_00[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar4 >> 0x28);
  this_00[1]._padding_ = (short)((ulonglong)uVar4 >> 0x30);
  this_00[1]._padding_ = lVar11;
  this_00[1].RefCount = (atomic<unsigned_int>)(int)lVar12;
  this_00[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)lVar12 >> 0x20);
  this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(int)uVar7;
  this_00[1]._padding_ = (int)((ulonglong)uVar7 >> 0x20);
  this_00[1].Pipe = pFVar3;
  *(int *)&this_00[1].TraceId = param_1;
  UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,local_res8,local_res10);
  FBaseGraphTask::Init((FBaseGraphTask *)this_00,L"GraphTask",local_res8[0],local_res10[0],None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
  lVar6 = *(longlong *)this;
  uVar17 = 0;
  if (param_1 < *(int *)(lVar6 + 0x28)) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar16 = *(longlong *)(lVar6 + 0x20);
  if (*(longlong *)(lVar6 + 0x20) == 0) {
    lVar16 = lVar6;
  }
  plVar5 = (longlong *)(lVar16 + (longlong)param_1 * 8);
  if (plVar5 == local_38) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar15 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar14 = (FTaskBase *)*plVar5;
    *plVar5 = (longlong)this_00;
    if (pFVar14 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar14->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar15 = (undefined8 *)pFVar14->_padding_;
    this_00 = pFVar14;
  }
  (*(code *)*puVar15)(this_00,1);
  return;
}

// operator() @ 14ac91a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FUIParticleFactory::ParallelTick'::__l19::<lambda_1>::operator()(void *this,int param_1)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  atomic<unsigned_int> aVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  FTaskBase *pFVar18;
  undefined8 *puVar19;
  longlong lVar20;
  FTaskBase *this_00;
  uint uVar21;
  ETaskPriority local_res8 [8];
  EExtendedTaskPriority local_res10 [8];
  longlong local_28 [2];
  
  puVar19 = *(undefined8 **)((longlong)this + 0x10);
  pFVar18 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,8);
  this_00 = (FTaskBase *)0x0;
  if (pFVar18 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar18,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar18->_padding_ = (longlong)&___7__TGraphTask_VFTickParticleTask____6B_;
    this_00 = pFVar18;
  }
  fVar3 = *(float *)((longlong)this + 0x24);
  uVar8 = *(undefined8 *)((longlong)this + 0x18);
  uVar7 = *(undefined4 *)((longlong)this + 8);
  fVar4 = *(float *)((longlong)this + 0x20);
  uVar11 = *puVar19;
  uVar12 = puVar19[1];
  uVar6 = puVar19[6];
  uVar13 = puVar19[2];
  uVar14 = puVar19[3];
  uVar15 = puVar19[4];
  uVar16 = puVar19[5];
  this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar8;
  this_00[1].ExtendedPriority = (char)((ulonglong)uVar8 >> 0x20);
  this_00[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar8 >> 0x28);
  this_00[1]._padding_ = (short)((ulonglong)uVar8 >> 0x30);
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar11;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar12;
  *(undefined4 *)&this_00[1]._padding_ = uVar7;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar13;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar14;
  this_00[1].ExecutingThreadId = (atomic<unsigned_int>)param_1;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar15;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = uVar16;
  *(undefined8 *)&this_00[1].NumLocks = uVar6;
  this_00[1]._padding_ = (int)(float)(int)fVar4;
  *(float *)&this_00[1].TraceId = (float)(int)fVar3;
  UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,local_res8,local_res10);
  FBaseGraphTask::Init((FBaseGraphTask *)this_00,L"GraphTask",local_res8[0],local_res10[0],None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
  lVar9 = *(longlong *)this;
  uVar21 = 0;
  if (param_1 < *(int *)(lVar9 + 0x28)) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar20 = *(longlong *)(lVar9 + 0x20);
  if (*(longlong *)(lVar9 + 0x20) == 0) {
    lVar20 = lVar9;
  }
  plVar2 = (longlong *)(lVar20 + (longlong)param_1 * 8);
  if (plVar2 == local_28) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar19 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar18 = (FTaskBase *)*plVar2;
    *plVar2 = (longlong)this_00;
    if (pFVar18 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar18->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar19 = (undefined8 *)pFVar18->_padding_;
    this_00 = pFVar18;
  }
  (*(code *)*puVar19)(this_00,1);
  return;
}

// AddReferencedMaterialInstances @ 14ac92490

void __thiscall
FUIParticleFactory::AddReferencedMaterialInstances
          (FUIParticleFactory *this,FEasyParticleState *param_1,FReferenceCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50;
  int local_4c;
  FScriptContainerElement local_48;
  int local_44;
  int local_40;
  
  if (param_1 != (FEasyParticleState *)0x0) {
    if ((param_1->ParticleResource).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->ParticleResource,pUVar6);
      if ((bVar5) && ((param_1->ParticleResource).field0_0x0.DebugPtr != (UObject *)0x0)) {
        (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1->ParticleResource,0);
      }
    }
    uVar2 = (param_1->ChildrenParticleArray).ArrayNum;
    uVar7 = (ulonglong)(int)uVar2;
    pFVar12 = (param_1->ChildrenParticleArray).AllocatorInstance.Data;
    pFVar11 = pFVar12 + 0x28;
    pFVar8 = pFVar12 + uVar7 * 0x50;
    while( true ) {
      if ((param_1->ChildrenParticleArray).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FEasyParticleChildEmitterArray,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar8) break;
      local_70 = *(int *)(pFVar11 + -0x10);
      lVar9 = (longlong)local_70;
      pvVar3 = *(void **)(pFVar11 + -0x18);
      local_78.Data = (FScriptContainerElement *)0x0;
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_70,0,&local_78,local_70,&local_6c);
        memcpy(local_78.Data,pvVar3,lVar9 << 3);
      }
      local_60 = *(int *)pFVar11;
      lVar9 = (longlong)local_60;
      pvVar3 = *(void **)(pFVar11 + -8);
      local_68.Data = (FScriptContainerElement *)0x0;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_60,0,&local_68,local_60,&local_5c);
        memcpy(local_68.Data,pvVar3,lVar9 << 2);
      }
      iVar4 = local_70;
      local_58 = *(int *)(pFVar11 + 8);
      local_54 = *(int *)(pFVar11 + 0xc);
      local_50 = pFVar11[0x10];
      local_4c = *(int *)(pFVar11 + 0x14);
      pFVar1 = local_78.Data + (longlong)local_70 * 8;
      local_48 = pFVar11[0x18];
      local_44 = *(int *)(pFVar11 + 0x1c);
      local_40 = *(int *)(pFVar11 + 0x20);
      FVar10.Data = local_78.Data;
      while( true ) {
        if (local_70 != iVar4) {
          `TCheckedPointerIterator<FEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (FVar10.Data == pFVar1) break;
        AddReferencedMaterialInstances(this,*(FEasyParticleState **)FVar10.Data,param_2);
        FVar10.Data = FVar10.Data + 8;
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      pFVar12 = pFVar12 + 0x50;
      pFVar11 = pFVar11 + 0x50;
      uVar7 = (ulonglong)uVar2;
    }
  }
  return;
}

// AddReferencedObjects @ 14ac926e0

void __thiscall
FUIParticleFactory::AddReferencedObjects(FUIParticleFactory *this,FReferenceCollector *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  uVar10 = (this->ParticleRefArray).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar7 = (longlong)(int)uVar10 << 4;
    do {
      uVar8 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->ParticleRefArray).AllocatorInstance.Data + lVar7) == 0) {
LAB_14ac92a5f:
        uVar5 = 0;
        if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->ParticleRefArray).AllocatorInstance.Data + lVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
        iVar6 = ~uVar10 + (this->ParticleRefArray).ArrayNum;
        if (iVar6 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar6 << 4);
        }
        piVar1 = &(this->ParticleRefArray).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->ParticleRefArray).AllocatorInstance,
                   (this->ParticleRefArray).ArrayNum,&(this->ParticleRefArray).ArrayMax);
      }
      else {
        uVar5 = 0;
        if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((this->ParticleRefArray).AllocatorInstance.Data + lVar7 + 8);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 1)) goto LAB_14ac92a5f;
        uVar5 = 0;
        if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->ParticleRefArray).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar9 + lVar7) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(*(longlong *)(pFVar9 + lVar7) + 0x3c8) != 0) {
          uVar5 = 0;
          if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (this->ParticleRefArray).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar9 + lVar7) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(param_1->_padding_ + 0x88))
                    (param_1,*(longlong *)(pFVar9 + lVar7) + 0x3c8,0,0);
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->ParticleRefArray).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar9 + lVar7) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(*(longlong *)(pFVar9 + lVar7) + 0x3d0) != 0) {
          uVar5 = 0;
          if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (this->ParticleRefArray).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar9 + lVar7) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(param_1->_padding_ + 0x88))(param_1,*(longlong *)(pFVar9 + lVar7) + 0x3d0,0);
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->ParticleRefArray).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        AddReferencedMaterialInstances
                  (this,*(FEasyParticleState **)
                         ((this->ParticleRefArray).AllocatorInstance.Data + lVar7),param_1);
      }
      lVar7 = lVar7 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// ClearChildren @ 14ac93990

void __thiscall
FUIParticleFactory::ClearChildren(FUIParticleFactory *this,FEasyParticleRootState *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FEasyParticleRootState *local_res20;
  
  uVar14 = 0;
  if (0 < (this->ParticlePoolMapArray).ArrayNum) {
    uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar16 = uVar14;
    do {
      puVar12 = (undefined8 *)0x0;
      uVar13 = (uint)uVar14;
      uVar6 = 0;
      if ((int)uVar13 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
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
      pFVar15 = (this->ParticlePoolMapArray).AllocatorInstance.Data + uVar16;
      if (*(int *)(pFVar15 + 8) != *(int *)(pFVar15 + 0x34)) {
        pFVar10 = pFVar15 + 0x38;
        if (*(FScriptContainerElement **)(pFVar15 + 0x40) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x40);
        }
        iVar7 = *(int *)(pFVar10 + (ulonglong)(*(int *)(pFVar15 + 0x48) - 1U & uVar8) * 4);
        if (iVar7 != -1) {
          do {
            lVar1 = *(longlong *)pFVar15 + (longlong)iVar7 * 0x18;
            if (*(FEasyParticleRootState **)(*(longlong *)pFVar15 + (longlong)iVar7 * 0x18) ==
                param_1) {
              puVar9 = (undefined8 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar9 = puVar12;
              }
              if (puVar9 != (undefined8 *)0x0) {
                plVar2 = (longlong *)*puVar9;
                uVar6 = 0;
                if ((int)uVar13 < (this->ParticlePoolMapArray).ArrayNum) {
                  uVar6 = ~uVar13 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this_00 = (TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                           *)((this->ParticlePoolMapArray).AllocatorInstance.Data + uVar16);
                local_res20 = param_1;
                if (*(int *)&(this_00->Elements).field_0x8 !=
                    *(int *)&(this_00->Elements).field_0x34) {
                  TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FEasyParticleRootState_const_*>(this_00,uVar8,&local_res20);
                }
                if (plVar2 != (longlong *)0x0) {
                  iVar7 = (int)plVar2[1];
                  puVar9 = puVar12;
                  if (0 < iVar7) {
                    do {
                      uVar11 = (uint)puVar12;
                      uVar6 = 0;
                      if ((int)uVar11 < iVar7) {
                        uVar6 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      plVar3 = *(longlong **)((longlong)puVar9 + *plVar2);
                      if (plVar3 != (longlong *)0x0) {
                        puVar12 = (undefined8 *)*plVar3;
                        if (puVar12 != (undefined8 *)0x0) {
                          if (puVar12[-2] == 0) {
                            operator_delete__(puVar12 + -2,0x10);
                          }
                          else {
                            (**(code **)*puVar12)(puVar12,3);
                          }
                        }
                        ::operator_delete(plVar3,0x10);
                      }
                      iVar7 = (int)plVar2[1];
                      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
                      puVar9 = puVar9 + 1;
                    } while ((int)(uVar11 + 1) < iVar7);
                  }
                  if ((void *)*plVar2 != (void *)0x0) {
                    FMemory::Free((void *)*plVar2);
                  }
                  ::operator_delete(plVar2,0x20);
                }
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x10);
          } while (iVar7 != -1);
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x50;
    } while ((int)(uVar13 + 1) < (this->ParticlePoolMapArray).ArrayNum);
  }
  return;
}

// CreateParticle @ 14ac95720

FEasyParticleState * __thiscall
FUIParticleFactory::CreateParticle
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEasyParticleState *pFVar4;
  FEasyParticleStatePool **ppFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  FEasyParticleRootState *local_res10 [3];
  undefined8 *local_48;
  FEasyParticleRootState **local_40;
  undefined8 **local_38;
  
  if (param_1 != (FEasyParticleRootState *)0x0) {
    puVar7 = (undefined8 *)0x0;
    uVar8 = (uint)~param_2 >> 0x1f;
    uVar3 = 0;
    if (param_2 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar3 = uVar8;
    }
    local_res10[0] = param_1;
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEasyParticleState *)(*pcVar1)();
      return pFVar4;
    }
    lVar9 = (longlong)param_2 * 0x50;
    ppFVar5 = TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              ::Find((TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                      *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar9),local_res10[0]
                    );
    if (ppFVar5 == (FEasyParticleStatePool **)0x0) {
      puVar6 = ::operator_new(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0xffffffff;
        *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
        puVar7 = puVar6;
      }
      uVar3 = 0;
      if (param_2 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar3 = uVar8;
      }
      local_48 = puVar7;
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEasyParticleState *)(*pcVar1)();
        return pFVar4;
      }
      local_40 = local_res10;
      local_38 = &local_48;
      TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FEasyParticleRootState_*_const_&,FEasyParticleStatePool_*_const_&>_>
                ((TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                  *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar9),
                 (TPairInitializer<FEasyParticleRootState_*_const_&,FEasyParticleStatePool_*_const_&>
                  *)(local_res10 + 2),(bool *)&local_40);
      uVar3 = 0;
      if (param_2 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar3 = uVar8;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEasyParticleState *)(*pcVar1)();
        return pFVar4;
      }
      ppFVar5 = TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                ::Find((TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                        *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar9),
                       local_res10[0]);
      if (ppFVar5 == (FEasyParticleStatePool **)0x0) {
        return (FEasyParticleState *)0x0;
      }
    }
    if (*ppFVar5 != (FEasyParticleStatePool *)0x0) {
      pFVar4 = FEasyParticleStatePool::GetFree(*ppFVar5);
      return pFVar4;
    }
  }
  return (FEasyParticleState *)0x0;
}

// CreatePool @ 14ac95a90

void __thiscall
FUIParticleFactory::CreatePool
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEasyParticleStatePool **ppFVar4;
  FEasyParticleStatePool **ppFVar5;
  uint uVar6;
  longlong lVar7;
  FEasyParticleRootState *local_res10;
  TPairInitializer<FEasyParticleRootState_*_const_&,FEasyParticleStatePool_*_const_&> local_48;
  FEasyParticleRootState **local_38;
  FEasyParticleStatePool ***local_30;
  
  if (param_1 != (FEasyParticleRootState *)0x0) {
    ppFVar5 = (FEasyParticleStatePool **)0x0;
    uVar6 = (uint)~param_3 >> 0x1f;
    uVar3 = 0;
    if (param_3 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar3 = uVar6;
    }
    local_res10 = param_1;
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar7 = (longlong)param_3 * 0x50;
    ppFVar4 = TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              ::Find((TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                      *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar7),local_res10);
    if (ppFVar4 == (FEasyParticleStatePool **)0x0) {
      ppFVar4 = ::operator_new(0x20);
      if (ppFVar4 != (FEasyParticleStatePool **)0x0) {
        *ppFVar4 = (FEasyParticleStatePool *)0x0;
        ppFVar4[1] = (FEasyParticleStatePool *)0x0;
        *(undefined4 *)(ppFVar4 + 2) = 0xffffffff;
        *(undefined8 *)((longlong)ppFVar4 + 0x14) = 0;
        ppFVar5 = ppFVar4;
      }
      uVar3 = 0;
      if (param_3 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar3 = uVar6;
      }
      local_48.Value = ppFVar5;
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_38 = &local_res10;
      local_30 = &local_48.Value;
      TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FEasyParticleRootState_*_const_&,FEasyParticleStatePool_*_const_&>_>
                ((TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                  *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar7),&local_48,
                 (bool *)&local_38);
      uVar3 = 0;
      if (param_3 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ppFVar4 = TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                ::Find((TMapBase<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
                        *)((this->ParticlePoolMapArray).AllocatorInstance.Data + lVar7),local_res10)
      ;
      if (ppFVar4 == (FEasyParticleStatePool **)0x0) {
        return;
      }
    }
    if (*ppFVar4 != (FEasyParticleStatePool *)0x0) {
      FEasyParticleStatePool::CreatePool(*ppFVar4,param_2);
    }
  }
  return;
}

// GetChildrenCount @ 14ac97e30

int __thiscall
FUIParticleFactory::GetChildrenCount(FUIParticleFactory *this,FEasyParticleRootState *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar12 = (longlong *)0x0;
  iVar5 = 0;
  if (0 < (this->ParticlePoolMapArray).ArrayNum) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar7 = plVar12;
    plVar10 = plVar12;
    plVar13 = plVar12;
    do {
      uVar9 = (uint)plVar7;
      uVar4 = 0;
      if ((int)uVar9 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar11 = (this->ParticlePoolMapArray).AllocatorInstance.Data + (longlong)plVar13;
      if (*(int *)(pFVar11 + 8) != *(int *)(pFVar11 + 0x34)) {
        pFVar8 = pFVar11 + 0x38;
        if (*(FScriptContainerElement **)(pFVar11 + 0x40) != (FScriptContainerElement *)0x0) {
          pFVar8 = *(FScriptContainerElement **)(pFVar11 + 0x40);
        }
        iVar5 = *(int *)(pFVar8 + (ulonglong)
                                  (*(int *)(pFVar11 + 0x48) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *(longlong *)pFVar11 + (longlong)iVar5 * 0x18;
            if (*(FEasyParticleRootState **)(*(longlong *)pFVar11 + (longlong)iVar5 * 0x18) ==
                param_1) {
              plVar7 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar7 = plVar12;
              }
              if ((plVar7 != (longlong *)0x0) && (lVar1 = *plVar7, lVar1 != 0)) {
                plVar10 = (longlong *)
                          (ulonglong)
                          (uint)((int)plVar10 + (*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x14)));
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10);
          } while (iVar5 != -1);
        }
      }
      iVar5 = (int)plVar10;
      plVar7 = (longlong *)(ulonglong)(uVar9 + 1);
      plVar13 = plVar13 + 10;
    } while ((int)(uVar9 + 1) < (this->ParticlePoolMapArray).ArrayNum);
  }
  return iVar5;
}

// GetReferencerName @ 14ac98cb0

FString * __thiscall
FUIParticleFactory::GetReferencerName(FUIParticleFactory *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FUIParticleFactory");
  return __return_storage_ptr__;
}

// Instance @ 14ac9aff0

FUIParticleFactory * __cdecl FUIParticleFactory::Instance(void)

{
  FUIParticleFactory *this;
  
  if (m_Instance == (FUIParticleFactory *)0x0) {
    this = ::operator_new(0x30);
    if (this != (FUIParticleFactory *)0x0) {
      m_Instance = FUIParticleFactory(this);
      return m_Instance;
    }
    m_Instance = (FUIParticleFactory *)0x0;
  }
  return m_Instance;
}

// OnPaint @ 14ac9bf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleFactory::OnPaint
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,FPaintArgs *param_2,
          FGeometry *param_3,FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,
          FWidgetStyle *param_7,bool param_8)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FEasyParticleState *this_00;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  int iVar16;
  uint local_54;
  longlong local_50;
  longlong *plVar11;
  
  if (param_1 != (FEasyParticleRootState *)0x0) {
    FEasyParticleState::CaculatePaintParams((FEasyParticleState *)param_1,param_2,param_3,param_7);
    local_54 = 0;
    if (0 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      local_50 = 0;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      do {
        uVar10 = 0;
        if ((int)local_54 < (this->ParticlePoolMapArray).ArrayNum) {
          uVar10 = ~local_54 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar11 = (longlong *)0x0;
        pFVar14 = (this->ParticlePoolMapArray).AllocatorInstance.Data + local_50;
        if (*(int *)(pFVar14 + 8) != *(int *)(pFVar14 + 0x34)) {
          pFVar6 = pFVar14 + 0x38;
          if (*(FScriptContainerElement **)(pFVar14 + 0x40) != (FScriptContainerElement *)0x0) {
            pFVar6 = *(FScriptContainerElement **)(pFVar14 + 0x40);
          }
          iVar16 = *(int *)(pFVar6 + (ulonglong)
                                     (*(int *)(pFVar14 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar16 != -1) {
            do {
              lVar1 = *(longlong *)pFVar14 + (longlong)iVar16 * 0x18;
              if (*(FEasyParticleRootState **)(*(longlong *)pFVar14 + (longlong)iVar16 * 0x18) ==
                  param_1) {
                plVar15 = (longlong *)(lVar1 + 8);
                if (lVar1 == 0) {
                  plVar15 = plVar11;
                }
                if (((plVar15 != (longlong *)0x0) &&
                    (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) &&
                   (iVar16 = (int)plVar15[3] - *(int *)((longlong)plVar15 + 0x14), 0 < iVar16)) {
                  do {
                    uVar8 = 0;
                    iVar9 = (int)plVar11;
                    if ((iVar9 < (int)plVar15[3] - *(int *)((longlong)plVar15 + 0x14)) &&
                       (iVar13 = (int)plVar15[1], uVar12 = uVar8, 0 < iVar13)) {
                      do {
                        uVar7 = (uint)uVar8;
                        uVar10 = 0;
                        if ((int)uVar7 < iVar13) {
                          uVar10 = ~uVar7 >> 0x1f;
                        }
                        if ((uVar10 == 0) &&
                           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar4)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        plVar2 = *(longlong **)(uVar12 + *plVar15);
                        if (plVar2 != (longlong *)0x0) {
                          iVar13 = (int)plVar11;
                          if (iVar13 < (int)plVar2[1]) {
                            if (-1 < iVar13) {
                              this_00 = (FEasyParticleState *)((longlong)iVar13 * 0x410 + *plVar2);
                              goto LAB_14ac9c186;
                            }
                            break;
                          }
                          plVar11 = (longlong *)(ulonglong)(uint)(iVar13 - (int)plVar2[1]);
                        }
                        iVar13 = (int)plVar15[1];
                        uVar8 = (ulonglong)(uVar7 + 1);
                        uVar12 = uVar12 + 8;
                      } while ((int)(uVar7 + 1) < iVar13);
                    }
                    this_00 = (FEasyParticleState *)0x0;
LAB_14ac9c186:
                    FEasyParticleState::CaculatePaintParams(this_00,param_2,param_3,param_7);
                    uVar10 = iVar9 + 1;
                    plVar11 = (longlong *)(ulonglong)uVar10;
                  } while ((int)uVar10 < iVar16);
                }
                break;
              }
              iVar16 = *(int *)(lVar1 + 0x10);
            } while (iVar16 != -1);
          }
        }
        local_54 = local_54 + 1;
        local_50 = local_50 + 0x50;
      } while ((int)local_54 < (this->ParticlePoolMapArray).ArrayNum);
    }
  }
  return;
}

// OnParallelPaint @ 14ac9c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FUIParticleFactory::OnParallelPaint
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,FPaintArgs *param_2,
          FGeometry *param_3,FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,
          FWidgetStyle *param_7,bool param_8)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  FWidgetStyle *pFVar5;
  FPaintArgs *pFVar6;
  bool bVar7;
  FEasyParticleState *pFVar8;
  FTaskBase *this_00;
  FTaskGraphInterface *pFVar9;
  uint uVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  FScriptContainerElement *pFVar12;
  <lambda_1> <Var13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStackY_188 [32];
  <lambda_1> local_148;
  ETaskPriority local_147 [3];
  uint local_144;
  FWidgetStyle *local_140;
  uint local_138;
  FGeometry *local_130;
  FEasyParticleRootState *local_128;
  FUIParticleFactory *local_120;
  longlong local_118;
  FPaintArgs *local_110;
  TRefCountPtr<FBaseGraphTask> local_108;
  TArrayView<std::nullptr_t,int> local_100;
  code *local_f0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  **local_e8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_e0;
  FPaintArgs *local_d8;
  FGeometry *local_d0;
  FWidgetStyle *local_c8;
  longlong *local_c0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  undefined1 local_88 [32];
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = param_7;
  if (param_1 != (FEasyParticleRootState *)0x0) {
    local_130 = param_3;
    local_128 = param_1;
    local_120 = this;
    local_110 = param_2;
    FEasyParticleState::CaculatePaintParams((FEasyParticleState *)param_1,param_2,param_3,param_7);
    local_138 = 0;
    if (0 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      local_118 = 0;
      local_144 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      local_144 = local_144 >> 0x10 ^ local_144;
      <Var13 = local_148;
      do {
        lVar23 = local_118;
        uVar10 = 0;
        if ((int)local_138 < (local_120->ParticlePoolMapArray).ArrayNum) {
          uVar10 = ~local_138 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = local_110;
        plVar18 = (longlong *)0x0;
        pFVar17 = (local_120->ParticlePoolMapArray).AllocatorInstance.Data + lVar23;
        if (*(int *)(pFVar17 + 8) != *(int *)(pFVar17 + 0x34)) {
          pFVar12 = pFVar17 + 0x38;
          if (*(FScriptContainerElement **)(pFVar17 + 0x40) != (FScriptContainerElement *)0x0) {
            pFVar12 = *(FScriptContainerElement **)(pFVar17 + 0x40);
          }
          iVar20 = *(int *)(pFVar12 + (ulonglong)(*(int *)(pFVar17 + 0x48) - 1U & local_144) * 4);
          if (iVar20 != -1) {
            do {
              lVar23 = *(longlong *)pFVar17 + (longlong)iVar20 * 0x18;
              if (*(FEasyParticleRootState **)(*(longlong *)pFVar17 + (longlong)iVar20 * 0x18) ==
                  param_1) {
                plVar14 = (longlong *)(lVar23 + 8);
                if (lVar23 == 0) {
                  plVar14 = plVar18;
                }
                if ((plVar14 != (longlong *)0x0) &&
                   (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)) {
                  iVar20 = (int)plVar14[3] - *(int *)((longlong)plVar14 + 0x14);
                  if (iVar20 < 0x3e9) {
                    param_7 = local_140;
                    if (0 < iVar20) {
                      do {
                        uVar16 = 0;
                        iVar19 = (int)plVar18;
                        if ((iVar19 < (int)plVar14[3] - *(int *)((longlong)plVar14 + 0x14)) &&
                           (iVar21 = (int)plVar14[1], uVar22 = uVar16, 0 < iVar21)) {
                          do {
                            uVar15 = (uint)uVar16;
                            uVar10 = 0;
                            if ((int)uVar15 < iVar21) {
                              uVar10 = ~uVar15 >> 0x1f;
                            }
                            if ((uVar10 == 0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar7)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            pFVar8 = (FEasyParticleState *)0x0;
                            plVar3 = *(longlong **)(uVar22 + *plVar14);
                            param_3 = local_130;
                            if (plVar3 != (longlong *)0x0) {
                              iVar21 = (int)plVar18;
                              if (iVar21 < (int)plVar3[1]) {
                                if (-1 < iVar21) {
                                  pFVar8 = (FEasyParticleState *)
                                           ((longlong)iVar21 * 0x410 + *plVar3);
                                }
                                goto LAB_14ac9c928;
                              }
                              plVar18 = (longlong *)(ulonglong)(uint)(iVar21 - (int)plVar3[1]);
                            }
                            iVar21 = (int)plVar14[1];
                            uVar16 = (ulonglong)(uVar15 + 1);
                            uVar22 = uVar22 + 8;
                          } while ((int)(uVar15 + 1) < iVar21);
                        }
                        pFVar8 = (FEasyParticleState *)0x0;
LAB_14ac9c928:
                        FEasyParticleState::CaculatePaintParams(pFVar8,pFVar6,param_3,local_140);
                        uVar10 = iVar19 + 1;
                        plVar18 = (longlong *)(ulonglong)uVar10;
                        param_1 = local_128;
                        param_7 = local_140;
                        <Var13 = local_148;
                      } while ((int)uVar10 < iVar20);
                    }
                  }
                  else {
                    local_b8.AllocatorInstance.SecondaryData =
                         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
                    local_b8.ArrayNum = 0;
                    local_b8.ArrayMax = 4;
                    iVar21 = (iVar20 + -1000) / 500;
                    iVar19 = iVar21 + 1;
                    if (iVar20 <= (iVar21 + 2) * 500) {
                      iVar19 = iVar21;
                    }
                    iVar20 = UE::Core::Private::
                             ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                       (8,8,iVar19,&local_b8.AllocatorInstance,&local_b8.ArrayNum,
                                        &local_b8.ArrayMax);
                    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
                    if (local_b8.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar11 = local_b8.AllocatorInstance.SecondaryData;
                    }
                    memset((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar11 + (longlong)iVar20 * 8)
                           ,0,(longlong)iVar19 << 3);
                    pFVar6 = local_110;
                    local_e0 = &local_b8;
                    local_e8 = &local_e0;
                    iVar20 = 0;
                    local_d8 = local_110;
                    local_100.DataPtr = (void **)0x0;
                    local_100.ArrayNum = 0;
                    local_f0 = UE::Core::Private::Function::
                               TFunctionRefCaller<`FUIParticleFactory::OnParallelPaint'::__l19::<lambda_1>,void,int>
                               ::Call;
                    local_d0 = param_3;
                    local_c8 = param_7;
                    local_c0 = plVar14;
                    ParallelForImpl::
                    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                              (L"ParallelFor Task",iVar19,1,
                               (TFunctionRef<void___cdecl(int)> *)&local_f0,<Var13,None,&local_100);
                    pFVar5 = local_140;
                    do {
                      if (iVar20 < (int)plVar14[3] - *(int *)((longlong)plVar14 + 0x14)) {
                        iVar19 = (int)plVar14[1];
                        uVar10 = 0;
                        if (0 < iVar19) {
                          lVar23 = 0;
                          iVar21 = iVar20;
                          do {
                            uVar15 = 0;
                            if ((int)uVar10 < iVar19) {
                              uVar15 = ~uVar10 >> 0x1f;
                            }
                            if ((uVar15 == 0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar7)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            plVar18 = *(longlong **)(lVar23 + *plVar14);
                            param_3 = local_130;
                            if (plVar18 != (longlong *)0x0) {
                              if (iVar21 < (int)plVar18[1]) {
                                if (iVar21 < 0) {
                                  pFVar8 = (FEasyParticleState *)0x0;
                                }
                                else {
                                  pFVar8 = (FEasyParticleState *)
                                           ((longlong)iVar21 * 0x410 + *plVar18);
                                }
                                goto LAB_14ac9caf3;
                              }
                              iVar21 = iVar21 - (int)plVar18[1];
                            }
                            iVar19 = (int)plVar14[1];
                            uVar10 = uVar10 + 1;
                            lVar23 = lVar23 + 8;
                          } while ((int)uVar10 < iVar19);
                        }
                      }
                      pFVar8 = (FEasyParticleState *)0x0;
LAB_14ac9caf3:
                      FEasyParticleState::CaculatePaintParams(pFVar8,pFVar6,param_3,pFVar5);
                      iVar20 = iVar20 + 1;
                    } while (iVar20 < 1000);
                    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
                    if (this_00 == (FTaskBase *)0x0) {
                      this_00 = (FTaskBase *)0x0;
                    }
                    else {
                      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_b8);
                      this_00->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
                    }
                    this_00[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
                    *(undefined4 *)&this_00[1]._padding_ = 0xff;
                    UE::Tasks::Private::TranslatePriority
                              (AnyNormalThreadNormalTask,local_147,
                               (EExtendedTaskPriority *)&local_148);
                    FBaseGraphTask::Init
                              ((FBaseGraphTask *)this_00,L"GraphTask",local_147[0],
                               (EExtendedTaskPriority)local_148,None);
                    LOCK();
                    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                    UNLOCK();
                    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xe8);
                    pFVar9 = FTaskGraphInterface::Get();
                    pcVar4 = *(code **)((longlong)*pFVar9 + 0x60);
                    LOCK();
                    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                    UNLOCK();
                    local_68 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
                    local_60 = 1;
                    local_108.Reference = (FBaseGraphTask *)this_00;
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                              (8,8,1,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_88,1,
                               &local_5c);
                    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_88;
                    if (local_68 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar11 = local_68;
                    }
                    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                              ((void *)FVar11,&local_108,1);
                    (*pcVar4)(pFVar9,local_88,0x101);
                    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_88;
                    if (local_68 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar11 = local_68;
                    }
                    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                              ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_60);
                    <Var13 = local_148;
                    if (local_68 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FMemory::Free((void *)local_68);
                    }
                    if ((FTaskBase *)local_108.Reference != (FTaskBase *)0x0) {
                      LOCK();
                      paVar1 = (atomic<unsigned_int> *)&(local_108.Reference)->field_0x30;
                      aVar2 = *paVar1;
                      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                      UNLOCK();
                      if (aVar2 == (atomic<unsigned_int>)0x1) {
                        (*(code *)**(undefined8 **)local_108.Reference)(local_108.Reference,1);
                      }
                    }
                    LOCK();
                    paVar1 = &this_00->RefCount;
                    aVar2 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar2 == (atomic<unsigned_int>)0x1) {
                      (**(code **)this_00->_padding_)(this_00,1);
                    }
                    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
                    if (local_b8.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar11 = local_b8.AllocatorInstance.SecondaryData;
                    }
                    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                              ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_b8.ArrayNum);
                    param_1 = local_128;
                    param_7 = local_140;
                    if (local_b8.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
                      param_1 = local_128;
                      param_7 = local_140;
                    }
                  }
                }
                break;
              }
              iVar20 = *(int *)(lVar23 + 0x10);
            } while (iVar20 != -1);
          }
        }
        local_118 = local_118 + 0x50;
        local_138 = local_138 + 1;
      } while ((int)local_138 < (local_120->ParticlePoolMapArray).ArrayNum);
    }
  }
  return;
}

// OnRootDestroy @ 14ac9cd50

void __thiscall
FUIParticleFactory::OnRootDestroy(FUIParticleFactory *this,FEasyParticleRootState *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FEasyParticleRootState *pFStackX_20;
  
  uVar14 = 0;
  if (0 < (this->ParticlePoolMapArray).ArrayNum) {
    uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar16 = uVar14;
    do {
      puVar12 = (undefined8 *)0x0;
      uVar13 = (uint)uVar14;
      uVar6 = 0;
      if ((int)uVar13 < (this->ParticlePoolMapArray).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
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
      pFVar15 = (this->ParticlePoolMapArray).AllocatorInstance.Data + uVar16;
      if (*(int *)(pFVar15 + 8) != *(int *)(pFVar15 + 0x34)) {
        pFVar10 = pFVar15 + 0x38;
        if (*(FScriptContainerElement **)(pFVar15 + 0x40) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x40);
        }
        iVar7 = *(int *)(pFVar10 + (ulonglong)(*(int *)(pFVar15 + 0x48) - 1U & uVar8) * 4);
        if (iVar7 != -1) {
          do {
            lVar1 = *(longlong *)pFVar15 + (longlong)iVar7 * 0x18;
            if (*(FEasyParticleRootState **)(*(longlong *)pFVar15 + (longlong)iVar7 * 0x18) ==
                param_1) {
              puVar9 = (undefined8 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar9 = puVar12;
              }
              if (puVar9 != (undefined8 *)0x0) {
                plVar2 = (longlong *)*puVar9;
                uVar6 = 0;
                if ((int)uVar13 < (this->ParticlePoolMapArray).ArrayNum) {
                  uVar6 = ~uVar13 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this_00 = (TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                           *)((this->ParticlePoolMapArray).AllocatorInstance.Data + uVar16);
                pFStackX_20 = param_1;
                if (*(int *)&(this_00->Elements).field_0x8 !=
                    *(int *)&(this_00->Elements).field_0x34) {
                  TSet<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FEasyParticleRootState_const_*>(this_00,uVar8,&pFStackX_20);
                }
                if (plVar2 != (longlong *)0x0) {
                  iVar7 = (int)plVar2[1];
                  puVar9 = puVar12;
                  if (0 < iVar7) {
                    do {
                      uVar11 = (uint)puVar12;
                      uVar6 = 0;
                      if ((int)uVar11 < iVar7) {
                        uVar6 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      plVar3 = *(longlong **)((longlong)puVar9 + *plVar2);
                      if (plVar3 != (longlong *)0x0) {
                        puVar12 = (undefined8 *)*plVar3;
                        if (puVar12 != (undefined8 *)0x0) {
                          if (puVar12[-2] == 0) {
                            operator_delete__(puVar12 + -2,0x10);
                          }
                          else {
                            (**(code **)*puVar12)(puVar12,3);
                          }
                        }
                        ::operator_delete(plVar3,0x10);
                      }
                      iVar7 = (int)plVar2[1];
                      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
                      puVar9 = puVar9 + 1;
                    } while ((int)(uVar11 + 1) < iVar7);
                  }
                  if ((void *)*plVar2 != (void *)0x0) {
                    FMemory::Free((void *)*plVar2);
                  }
                  ::operator_delete(plVar2,0x20);
                }
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x10);
          } while (iVar7 != -1);
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x50;
    } while ((int)(uVar13 + 1) < (this->ParticlePoolMapArray).ArrayNum);
  }
  return;
}

// OnRootPaint @ 14ac9cd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleFactory::OnRootPaint
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,FPaintArgs *param_2,
          FGeometry *param_3,FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,
          FWidgetStyle *param_7,bool param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_UIParticleOnPaintTime> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_UIParticleOnPaintTime;
  if (StatPtr_STAT_UIParticleOnPaintTime ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleOnPaintTime>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_70,"STAT_UIParticleOnPaintTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UIParticleOnPaintTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleOnPaintTime,*pFVar5,
                       L"UIParticle OnPaint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                       ,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.s.LowPart = FVar8.Value;
        local_78.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_78.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Utility\\UIParticleUtility.cpp"
                   ,0x1a9);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar8.Value;
      local_78.s.HighPart = uVar7;
      local_60 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_60.ComparisonIndex.Value;
      goto LAB_14ac9ceb2;
    }
  }
  bVar3 = false;
  FVar9 = local_60;
LAB_14ac9ceb2:
  if (UUIParticleUtility::Multi_Thread == false) {
    OnPaint(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    OnParallelPaint(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FEasyParticleState::OnPaint
            ((FEasyParticleState *)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_70.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ParallelTick @ 14ac9d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FUIParticleFactory::ParallelTick
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,float param_2,FGeometry *param_3
          )

{
  atomic<unsigned_int> *paVar1;
  longlong lVar2;
  atomic<unsigned_int> aVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  FGeometry *pFVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  bool bVar11;
  FEasyParticleState *pFVar12;
  FTaskBase *pFVar13;
  FTaskGraphInterface *pFVar14;
  uint uVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  FScriptContainerElement *pFVar17;
  <lambda_1> <Var18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1f8;
  ETaskPriority local_1f7 [7];
  undefined8 local_1f0;
  uint local_1e8;
  FEasyParticleRootState *local_1e0;
  uint local_1d8;
  FUIParticleFactory *local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  FGeometry *local_1b0;
  TRefCountPtr<FBaseGraphTask> local_1a8;
  double dStack_1a0;
  TVector2<double>_u_0 local_198;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  **local_170;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_168;
  float local_160;
  FGeometry *local_158;
  longlong *local_150;
  float local_148;
  float local_144;
  TVector2<double>_u_0 local_138;
  TVector2<double>_u_0 local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  TVector2<float>_u_0 local_108;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_100;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_d0;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  
  if (param_1 != (FEasyParticleRootState *)0x0) {
    local_a0 = __security_cookie.value ^ (ulonglong)auStackY_238;
    local_1c8 = param_3->Size;
    local_1c0 = (float)local_1c8 * __real_3f000000;
    fStack_1bc = local_1c8._4_4_ * __real_3f000000;
    local_108 = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    local_118 = (param_3->AccumulatedRenderTransform).M.M[0][0];
    fStack_114 = (param_3->AccumulatedRenderTransform).M.M[0][1];
    fStack_110 = (param_3->AccumulatedRenderTransform).M.M[1][0];
    fStack_10c = (param_3->AccumulatedRenderTransform).M.M[1][1];
    fVar29 = fStack_1bc * (param_3->AccumulatedRenderTransform).M.M[1][0] +
             local_1c0 * (param_3->AccumulatedRenderTransform).M.M[0][0] +
             (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fVar30 = local_1c0 * (param_3->AccumulatedRenderTransform).M.M[0][1] +
             fStack_1bc * (param_3->AccumulatedRenderTransform).M.M[1][1] +
             (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_1f0 = CONCAT44(fVar30,fVar29);
    local_1b8 = local_1f0;
    pFVar13 = (FTaskBase *)(double)fVar29;
    dVar8 = (double)fVar30;
    local_1e0 = param_1;
    local_1d0 = this;
    local_1b0 = param_3;
    local_1a8.Reference = (FBaseGraphTask *)pFVar13;
    dStack_1a0 = dVar8;
    fVar28 = FGenericPlatformMath::Atan2(fStack_114,local_118);
    local_198._0_8_ = pFVar13;
    local_198._s_0.Y = dVar8;
    FEasyParticleState::TickSelf
              ((FEasyParticleState *)param_1,param_2,param_3,(TVector2<double> *)&local_198._s_0,
               fVar28,__real_3f800000,0.0);
    dVar8 = dStack_1a0;
    TVar10.Reference = local_1a8.Reference;
    fVar29 = *(float *)&param_1->field_0x78;
    fVar30 = *(float *)&param_1->field_0x74;
    local_1d8 = 0;
    if (0 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar15 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      local_1f0 = 0;
      local_1e8 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      local_1e8 = local_1e8 >> 0x10 ^ local_1e8;
      <Var18 = local_1f8;
      do {
        lVar27 = local_1f0;
        uVar15 = 0;
        if ((int)local_1d8 < (local_1d0->ParticlePoolMapArray).ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar9 = local_1b0;
        plVar22 = (longlong *)0x0;
        pFVar4 = (local_1d0->ParticlePoolMapArray).AllocatorInstance.Data;
        if (*(int *)(pFVar4 + lVar27 + 8) != *(int *)(pFVar4 + lVar27 + 0x34)) {
          pFVar5 = *(FScriptContainerElement **)(pFVar4 + lVar27 + 0x38 + 8);
          pFVar17 = pFVar4 + lVar27 + 0x38;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            pFVar17 = pFVar5;
          }
          iVar24 = *(int *)(pFVar17 +
                           (ulonglong)(*(int *)(pFVar4 + lVar27 + 0x48) - 1U & local_1e8) * 4);
          if (iVar24 != -1) {
            do {
              lVar2 = *(longlong *)(pFVar4 + lVar27) + (longlong)iVar24 * 0x18;
              if (*(FEasyParticleRootState **)
                   (*(longlong *)(pFVar4 + lVar27) + (longlong)iVar24 * 0x18) == param_1) {
                plVar19 = (longlong *)(lVar2 + 8);
                if (lVar2 == 0) {
                  plVar19 = plVar22;
                }
                param_1 = local_1e0;
                if ((plVar19 != (longlong *)0x0) &&
                   (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)) {
                  iVar24 = (int)plVar19[3] - *(int *)((longlong)plVar19 + 0x14);
                  if (iVar24 < 0xc9) {
                    if (0 < iVar24) {
                      do {
                        uVar21 = 0;
                        iVar23 = (int)plVar22;
                        if ((iVar23 < (int)plVar19[3] - *(int *)((longlong)plVar19 + 0x14)) &&
                           (iVar25 = (int)plVar19[1], uVar26 = uVar21, 0 < iVar25)) {
                          do {
                            uVar20 = (uint)uVar21;
                            uVar15 = 0;
                            if ((int)uVar20 < iVar25) {
                              uVar15 = ~uVar20 >> 0x1f;
                            }
                            if ((uVar15 == 0) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            plVar6 = *(longlong **)(uVar26 + *plVar19);
                            if (plVar6 != (longlong *)0x0) {
                              iVar25 = (int)plVar22;
                              if (iVar25 < (int)plVar6[1]) {
                                if (-1 < iVar25) {
                                  pFVar12 = (FEasyParticleState *)
                                            ((longlong)iVar25 * 0x410 + *plVar6);
                                  goto LAB_14ac9d3f3;
                                }
                                break;
                              }
                              plVar22 = (longlong *)(ulonglong)(uint)(iVar25 - (int)plVar6[1]);
                            }
                            iVar25 = (int)plVar19[1];
                            uVar21 = (ulonglong)(uVar20 + 1);
                            uVar26 = uVar26 + 8;
                          } while ((int)(uVar20 + 1) < iVar25);
                        }
                        pFVar12 = (FEasyParticleState *)0x0;
LAB_14ac9d3f3:
                        local_138._s_0.X = (double)TVar10.Reference;
                        local_138._s_0.Y = dVar8;
                        FEasyParticleState::TickSelf
                                  (pFVar12,param_2,pFVar9,(TVector2<double> *)&local_138._s_0,fVar28
                                   ,fVar29,fVar30);
                        uVar15 = iVar23 + 1;
                        plVar22 = (longlong *)(ulonglong)uVar15;
                        param_1 = local_1e0;
                        lVar27 = local_1f0;
                        <Var18 = local_1f8;
                      } while ((int)uVar15 < iVar24);
                    }
                  }
                  else {
                    local_100.AllocatorInstance.SecondaryData =
                         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
                    local_100.ArrayNum = 0;
                    local_100.ArrayMax = 4;
                    iVar25 = (iVar24 + -200) / 100;
                    iVar23 = iVar25 + 1;
                    if (iVar24 <= (iVar25 + 2) * 100) {
                      iVar23 = iVar25;
                    }
                    iVar24 = UE::Core::Private::
                             ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                       (8,8,iVar23,&local_100.AllocatorInstance,&local_100.ArrayNum,
                                        &local_100.ArrayMax);
                    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_100;
                    if (local_100.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar16 = local_100.AllocatorInstance.SecondaryData;
                    }
                    memset((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + (longlong)iVar24 * 8)
                           ,0,(longlong)iVar23 << 3);
                    pFVar9 = local_1b0;
                    local_168 = &local_100;
                    local_170 = &local_168;
                    local_158 = local_1b0;
                    local_188.DataPtr = (void **)0x0;
                    local_188.ArrayNum = 0;
                    local_178 = UE::Core::Private::Function::
                                TFunctionRefCaller<`FUIParticleFactory::ParallelTick'::__l19::<lambda_1>,void,int>
                                ::Call;
                    local_160 = param_2;
                    local_150 = plVar19;
                    local_148 = fVar29;
                    local_144 = fVar30;
                    ParallelForImpl::
                    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                              (L"ParallelFor Task",iVar23,1,
                               (TFunctionRef<void___cdecl(int)> *)&local_178,<Var18,None,&local_188)
                    ;
                    iVar24 = 0;
                    do {
                      if (iVar24 < (int)plVar19[3] - *(int *)((longlong)plVar19 + 0x14)) {
                        iVar23 = (int)plVar19[1];
                        uVar15 = 0;
                        if (0 < iVar23) {
                          lVar27 = 0;
                          iVar25 = iVar24;
                          do {
                            uVar20 = 0;
                            if ((int)uVar15 < iVar23) {
                              uVar20 = ~uVar15 >> 0x1f;
                            }
                            if ((uVar20 == 0) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            plVar22 = *(longlong **)(lVar27 + *plVar19);
                            if (plVar22 != (longlong *)0x0) {
                              if (iVar25 < (int)plVar22[1]) {
                                if (-1 < iVar25) {
                                  pFVar12 = (FEasyParticleState *)
                                            ((longlong)iVar25 * 0x410 + *plVar22);
                                  goto LAB_14ac9d5d2;
                                }
                                break;
                              }
                              iVar25 = iVar25 - (int)plVar22[1];
                            }
                            iVar23 = (int)plVar19[1];
                            uVar15 = uVar15 + 1;
                            lVar27 = lVar27 + 8;
                          } while ((int)uVar15 < iVar23);
                        }
                      }
                      pFVar12 = (FEasyParticleState *)0x0;
LAB_14ac9d5d2:
                      local_128._s_0.X = (double)TVar10.Reference;
                      local_128._s_0.Y = dVar8;
                      FEasyParticleState::TickSelf
                                (pFVar12,param_2,pFVar9,(TVector2<double> *)&local_128._s_0,fVar28,
                                 fVar29,fVar30);
                      iVar24 = iVar24 + 1;
                    } while (iVar24 < 200);
                    pFVar13 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
                    if (pFVar13 == (FTaskBase *)0x0) {
                      pFVar13 = (FTaskBase *)0x0;
                    }
                    else {
                      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar13,&local_100);
                      pFVar13->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
                    }
                    pFVar13[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
                    *(undefined4 *)&pFVar13[1]._padding_ = 0xff;
                    UE::Tasks::Private::TranslatePriority
                              (AnyNormalThreadNormalTask,local_1f7,
                               (EExtendedTaskPriority *)&local_1f8);
                    FBaseGraphTask::Init
                              ((FBaseGraphTask *)pFVar13,L"GraphTask",local_1f7[0],
                               (EExtendedTaskPriority)local_1f8,None);
                    LOCK();
                    pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
                    UNLOCK();
                    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar13,0xe8);
                    pFVar14 = FTaskGraphInterface::Get();
                    pcVar7 = *(code **)((longlong)*pFVar14 + 0x60);
                    LOCK();
                    pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
                    UNLOCK();
                    local_d0.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
                    local_a8 = 1;
                    local_1a8.Reference = (FBaseGraphTask *)pFVar13;
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                              (8,8,1,0,&local_d0,1,&local_a4);
                    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d0;
                    if (local_d0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
                       ) {
                      FVar16 = local_d0.SecondaryData;
                    }
                    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                              ((void *)FVar16,&local_1a8,1);
                    (*pcVar7)(pFVar14,&local_d0,0x101);
                    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d0;
                    if (local_d0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
                       ) {
                      FVar16 = local_d0.SecondaryData;
                    }
                    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                              ((TRefCountPtr<FBaseGraphTask> *)FVar16,local_a8);
                    if (local_d0.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
                       ) {
                      FMemory::Free((void *)local_d0.SecondaryData);
                    }
                    if ((FTaskBase *)local_1a8.Reference != (FTaskBase *)0x0) {
                      LOCK();
                      paVar1 = (atomic<unsigned_int> *)&(local_1a8.Reference)->field_0x30;
                      aVar3 = *paVar1;
                      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                      UNLOCK();
                      if (aVar3 == (atomic<unsigned_int>)0x1) {
                        (*(code *)**(undefined8 **)local_1a8.Reference)(local_1a8.Reference,1);
                      }
                    }
                    LOCK();
                    paVar1 = &pFVar13->RefCount;
                    aVar3 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar3 == (atomic<unsigned_int>)0x1) {
                      (**(code **)pFVar13->_padding_)(pFVar13,1);
                    }
                    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_100;
                    if (local_100.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar16 = local_100.AllocatorInstance.SecondaryData;
                    }
                    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                              ((TRefCountPtr<FBaseGraphTask> *)FVar16,local_100.ArrayNum);
                    param_1 = local_1e0;
                    lVar27 = local_1f0;
                    if (local_100.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
                      param_1 = local_1e0;
                      lVar27 = local_1f0;
                    }
                  }
                }
                break;
              }
              iVar24 = *(int *)(lVar2 + 0x10);
            } while (iVar24 != -1);
          }
        }
        local_1f0 = lVar27 + 0x50;
        local_1d8 = local_1d8 + 1;
      } while ((int)local_1d8 < (local_1d0->ParticlePoolMapArray).ArrayNum);
    }
  }
  return;
}

// RefRoot @ 14ac9ea60

void __thiscall
FUIParticleFactory::RefRoot(FUIParticleFactory *this,TSharedPtr<FEasyParticleRootState,1> *param_1)

{
  if (param_1->Object != (FEasyParticleRootState *)0x0) {
    TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>(&this->ParticleRefArray,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 14aca0a70

void __thiscall
FUIParticleFactory::Tick
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,float param_2,FGeometry *param_3
          )

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  FEasyParticleState *this_00;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  float fVar26;
  float local_110;
  float fStack_10c;
  TVector2<double>_u_0 local_e8;
  FEasyParticleRootState *local_d8;
  FUIParticleFactory *local_d0;
  TVector2<double>_u_0 local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  TVector2<float>_u_0 local_a8;
  longlong *plVar19;
  
  if (param_1 != (FEasyParticleRootState *)0x0) {
    local_110 = SUB84(param_3->Size,0);
    fStack_10c = SUB84(param_3->Size,4);
    local_a8 = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    local_b8 = (param_3->AccumulatedRenderTransform).M.M[0][0];
    fStack_b4 = (param_3->AccumulatedRenderTransform).M.M[0][1];
    fStack_b0 = (param_3->AccumulatedRenderTransform).M.M[1][0];
    fStack_ac = (param_3->AccumulatedRenderTransform).M.M[1][1];
    dVar8 = (double)(fStack_10c * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[1][0]
                     + local_110 * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[0][0]
                    + (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
    dVar9 = (double)(local_110 * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[0][1] +
                     fStack_10c * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[1][1]
                    + (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
    local_e8._s_0.X = dVar8;
    local_e8._s_0.Y = dVar9;
    local_d8 = param_1;
    local_d0 = this;
    fVar26 = FGenericPlatformMath::Atan2(fStack_b4,local_b8);
    local_c8._s_0.X = dVar8;
    local_c8._s_0.Y = dVar9;
    FEasyParticleState::TickSelf
              ((FEasyParticleState *)param_1,param_2,param_3,(TVector2<double> *)&local_c8._s_0,
               fVar26,__real_3f800000,0.0);
    uVar11 = local_e8._s_0.Y;
    uVar10 = local_e8._s_0.X;
    fVar2 = *(float *)&param_1->field_0x78;
    uVar22 = 0;
    fVar3 = *(float *)&param_1->field_0x74;
    if (0 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar16 = uVar22;
      do {
        uVar23 = (uint)uVar16;
        uVar18 = 0;
        if ((int)uVar23 < (this->ParticlePoolMapArray).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar19 = (longlong *)0x0;
        pFVar4 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
        if (*(int *)(pFVar4 + uVar22 + 8) != *(int *)(pFVar4 + uVar22 + 0x34)) {
          pFVar5 = *(FScriptContainerElement **)(pFVar4 + uVar22 + 0x38 + 8);
          pFVar14 = pFVar4 + uVar22 + 0x38;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            pFVar14 = pFVar5;
          }
          iVar25 = *(int *)(pFVar14 +
                           (ulonglong)
                           (*(int *)(pFVar4 + uVar22 + 0x48) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar25 != -1) {
            do {
              lVar1 = *(longlong *)(pFVar4 + uVar22) + (longlong)iVar25 * 0x18;
              if (*(FEasyParticleRootState **)
                   (*(longlong *)(pFVar4 + uVar22) + (longlong)iVar25 * 0x18) == param_1) {
                plVar24 = (longlong *)(lVar1 + 8);
                if (lVar1 == 0) {
                  plVar24 = plVar19;
                }
                if (((plVar24 != (longlong *)0x0) &&
                    (plVar24 = (longlong *)*plVar24, plVar24 != (longlong *)0x0)) &&
                   (iVar25 = (int)plVar24[3] - *(int *)((longlong)plVar24 + 0x14), 0 < iVar25)) {
                  do {
                    uVar16 = 0;
                    iVar17 = (int)plVar19;
                    if ((iVar17 < (int)plVar24[3] - *(int *)((longlong)plVar24 + 0x14)) &&
                       (iVar21 = (int)plVar24[1], uVar20 = uVar16, 0 < iVar21)) {
                      do {
                        uVar15 = (uint)uVar16;
                        uVar18 = 0;
                        if ((int)uVar15 < iVar21) {
                          uVar18 = ~uVar15 >> 0x1f;
                        }
                        if ((uVar18 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        this_00 = (FEasyParticleState *)0x0;
                        plVar6 = *(longlong **)(uVar20 + *plVar24);
                        if (plVar6 != (longlong *)0x0) {
                          iVar21 = (int)plVar19;
                          if (iVar21 < (int)plVar6[1]) {
                            if (-1 < iVar21) {
                              this_00 = (FEasyParticleState *)((longlong)iVar21 * 0x410 + *plVar6);
                            }
                            goto LAB_14aca0dfb;
                          }
                          plVar19 = (longlong *)(ulonglong)(uint)(iVar21 - (int)plVar6[1]);
                        }
                        iVar21 = (int)plVar24[1];
                        uVar16 = (ulonglong)(uVar15 + 1);
                        uVar20 = uVar20 + 8;
                      } while ((int)(uVar15 + 1) < iVar21);
                    }
                    this_00 = (FEasyParticleState *)0x0;
LAB_14aca0dfb:
                    local_e8._s_0.X = (double)uVar10;
                    local_e8._s_0.Y = (double)uVar11;
                    FEasyParticleState::TickSelf
                              (this_00,param_2,param_3,(TVector2<double> *)&local_e8._s_0,fVar26,
                               fVar2,fVar3);
                    uVar18 = iVar17 + 1;
                    plVar19 = (longlong *)(ulonglong)uVar18;
                    param_1 = local_d8;
                    this = local_d0;
                  } while ((int)uVar18 < iVar25);
                }
                break;
              }
              iVar25 = *(int *)(lVar1 + 0x10);
            } while (iVar25 != -1);
          }
        }
        uVar16 = (ulonglong)(uVar23 + 1);
        uVar22 = uVar22 + 0x50;
      } while ((int)(uVar23 + 1) < (this->ParticlePoolMapArray).ArrayNum);
    }
  }
  return;
}

// TickRoot @ 14aca1950

void __thiscall
FUIParticleFactory::TickRoot
          (FUIParticleFactory *this,FEasyParticleRootState *param_1,float param_2,FGeometry *param_3
          )

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  FEasyParticleState *this_00;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  float fVar26;
  float fStack_110;
  float fStack_10c;
  TVector2<double>_u_0 TStack_e8;
  FEasyParticleRootState *pFStack_d8;
  FUIParticleFactory *pFStack_d0;
  TVector2<double>_u_0 TStack_c8;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  TVector2<float>_u_0 TStack_a8;
  longlong *plVar19;
  
  if (UUIParticleUtility::Multi_Thread) {
    ParallelTick(this,param_1,param_2,param_3);
    return;
  }
  if (param_1 != (FEasyParticleRootState *)0x0) {
    fStack_110 = SUB84(param_3->Size,0);
    fStack_10c = SUB84(param_3->Size,4);
    TStack_a8 = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    fStack_b8 = (param_3->AccumulatedRenderTransform).M.M[0][0];
    fStack_b4 = (param_3->AccumulatedRenderTransform).M.M[0][1];
    fStack_b0 = (param_3->AccumulatedRenderTransform).M.M[1][0];
    fStack_ac = (param_3->AccumulatedRenderTransform).M.M[1][1];
    dVar8 = (double)(fStack_10c * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[1][0]
                     + fStack_110 * __real_3f000000 *
                       (param_3->AccumulatedRenderTransform).M.M[0][0] +
                    (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
    dVar9 = (double)(fStack_110 * __real_3f000000 * (param_3->AccumulatedRenderTransform).M.M[0][1]
                     + fStack_10c * __real_3f000000 *
                       (param_3->AccumulatedRenderTransform).M.M[1][1] +
                    (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
    TStack_e8._s_0.X = dVar8;
    TStack_e8._s_0.Y = dVar9;
    pFStack_d8 = param_1;
    pFStack_d0 = this;
    fVar26 = FGenericPlatformMath::Atan2(fStack_b4,fStack_b8);
    TStack_c8._s_0.X = dVar8;
    TStack_c8._s_0.Y = dVar9;
    FEasyParticleState::TickSelf
              ((FEasyParticleState *)param_1,param_2,param_3,(TVector2<double> *)&TStack_c8._s_0,
               fVar26,__real_3f800000,0.0);
    uVar11 = TStack_e8._s_0.Y;
    uVar10 = TStack_e8._s_0.X;
    fVar2 = *(float *)&param_1->field_0x78;
    uVar22 = 0;
    fVar3 = *(float *)&param_1->field_0x74;
    if (0 < (this->ParticlePoolMapArray).ArrayNum) {
      uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar16 = uVar22;
      do {
        uVar23 = (uint)uVar16;
        uVar18 = 0;
        if ((int)uVar23 < (this->ParticlePoolMapArray).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar19 = (longlong *)0x0;
        pFVar4 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
        if (*(int *)(pFVar4 + uVar22 + 8) != *(int *)(pFVar4 + uVar22 + 0x34)) {
          pFVar5 = *(FScriptContainerElement **)(pFVar4 + uVar22 + 0x38 + 8);
          pFVar14 = pFVar4 + uVar22 + 0x38;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            pFVar14 = pFVar5;
          }
          iVar25 = *(int *)(pFVar14 +
                           (ulonglong)
                           (*(int *)(pFVar4 + uVar22 + 0x48) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar25 != -1) {
            do {
              lVar1 = *(longlong *)(pFVar4 + uVar22) + (longlong)iVar25 * 0x18;
              if (*(FEasyParticleRootState **)
                   (*(longlong *)(pFVar4 + uVar22) + (longlong)iVar25 * 0x18) == param_1) {
                plVar24 = (longlong *)(lVar1 + 8);
                if (lVar1 == 0) {
                  plVar24 = plVar19;
                }
                if (((plVar24 != (longlong *)0x0) &&
                    (plVar24 = (longlong *)*plVar24, plVar24 != (longlong *)0x0)) &&
                   (iVar25 = (int)plVar24[3] - *(int *)((longlong)plVar24 + 0x14), 0 < iVar25)) {
                  do {
                    uVar16 = 0;
                    iVar17 = (int)plVar19;
                    if ((iVar17 < (int)plVar24[3] - *(int *)((longlong)plVar24 + 0x14)) &&
                       (iVar21 = (int)plVar24[1], uVar20 = uVar16, 0 < iVar21)) {
                      do {
                        uVar15 = (uint)uVar16;
                        uVar18 = 0;
                        if ((int)uVar15 < iVar21) {
                          uVar18 = ~uVar15 >> 0x1f;
                        }
                        if ((uVar18 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        this_00 = (FEasyParticleState *)0x0;
                        plVar6 = *(longlong **)(uVar20 + *plVar24);
                        if (plVar6 != (longlong *)0x0) {
                          iVar21 = (int)plVar19;
                          if (iVar21 < (int)plVar6[1]) {
                            if (-1 < iVar21) {
                              this_00 = (FEasyParticleState *)((longlong)iVar21 * 0x410 + *plVar6);
                            }
                            goto LAB_14aca0dfb;
                          }
                          plVar19 = (longlong *)(ulonglong)(uint)(iVar21 - (int)plVar6[1]);
                        }
                        iVar21 = (int)plVar24[1];
                        uVar16 = (ulonglong)(uVar15 + 1);
                        uVar20 = uVar20 + 8;
                      } while ((int)(uVar15 + 1) < iVar21);
                    }
                    this_00 = (FEasyParticleState *)0x0;
LAB_14aca0dfb:
                    TStack_e8._s_0.X = (double)uVar10;
                    TStack_e8._s_0.Y = (double)uVar11;
                    FEasyParticleState::TickSelf
                              (this_00,param_2,param_3,(TVector2<double> *)&TStack_e8._s_0,fVar26,
                               fVar2,fVar3);
                    uVar18 = iVar17 + 1;
                    plVar19 = (longlong *)(ulonglong)uVar18;
                    param_1 = pFStack_d8;
                    this = pFStack_d0;
                  } while ((int)uVar18 < iVar25);
                }
                break;
              }
              iVar25 = *(int *)(lVar1 + 0x10);
            } while (iVar25 != -1);
          }
        }
        uVar16 = (ulonglong)(uVar23 + 1);
        uVar22 = uVar22 + 0x50;
      } while ((int)(uVar23 + 1) < (this->ParticlePoolMapArray).ArrayNum);
    }
  }
  return;
}

