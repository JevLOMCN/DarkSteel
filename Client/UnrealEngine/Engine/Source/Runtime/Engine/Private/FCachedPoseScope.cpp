// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCachedPoseScope @ 1474b2c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCachedPoseScope * __thiscall UE::Anim::FCachedPoseScope::FCachedPoseScope(FCachedPoseScope *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTlsAutoCleanup *pFVar5;
  FCachedPoseScope *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackY_11f8 [32];
  undefined1 local_11a8 [8];
  code *local_11a0;
  undefined1 *local_1198;
  undefined1 local_1190 [4360];
  int local_88;
  int local_84;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_80;
  undefined8 uStack_68;
  ForElementType<FSetElementId> local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_11f8;
  local_1198 = local_11a8;
  local_11a0 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_11a0,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = (FTlsAutoCleanup)(pFVar5 + 2);
  memset(local_1190,0,0x1180);
  local_84 = 0x20;
  local_80.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_80.MaxBits = _UNK_150631d74;
  uStack_68 = _UNK_150631d78;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_20 = (ForElementType<FSetElementId>)0x0;
  local_18 = 0;
  FVar7 = pFVar5[0x232];
  if (pFVar5[0x232] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  if (((ulonglong)FVar7 <= local_1190) &&
     (local_1190 <
      (undefined1 *)((longlong)*(int *)&pFVar5[0x233].field_0x4 * 0x1180 + (longlong)FVar7))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCachedPoseScope *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = *(int *)(pFVar5 + 0x233);
  if (iVar4 == *(int *)&pFVar5[0x233].field_0x4) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>_>
                      (0x1180,8,(ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>
                                 *)FVar1,(int *)&pFVar5[0x233].field_0x4);
  }
  *(int *)(pFVar5 + 0x233) = iVar4 + 1;
  FVar7 = pFVar5[0x232];
  if (pFVar5[0x232] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ((TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)((longlong)FVar7 + (longlong)iVar4 * 0x1180),
             (TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)local_1190);
  local_18 = 0;
  if (local_20 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_20);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                     *)local_1190,0,local_88);
  local_88 = 0;
  if (local_84 != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>_>
              (0x88,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_> *
                        )local_1190,0,&local_84);
  }
  iVar4 = local_80.MaxBits;
  uStack_68 = 0xffffffff;
  local_80._16_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x20 < (uint)iVar4) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if ((ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>)local_1190._4352_8_
      != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,8>_>_>)0x0) {
    FMemory::Free((void *)local_1190._4352_8_);
  }
  return this;
}

// ~FCachedPoseScope @ 1474b5020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Anim::FCachedPoseScope::~FCachedPoseScope(FCachedPoseScope *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTlsAutoCleanup *pFVar5;
  FTlsAutoCleanup FVar6;
  void *_Src;
  undefined1 auStackY_11d8 [32];
  undefined1 local_11a8 [8];
  code *local_11a0;
  undefined1 *local_1198;
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  local_1190;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  local_1198 = local_11a8;
  local_11a0 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_11a0,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = (FTlsAutoCleanup)(pFVar5 + 2);
  if (*(int *)(pFVar5 + 0x233) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = pFVar5[0x232];
  if (pFVar5[0x232] == (FTlsAutoCleanup)0x0) {
    FVar6 = FVar1;
  }
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            (&local_1190,
             (TSet<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)((longlong)FVar6 + (longlong)(*(int *)(pFVar5 + 0x233) + -1) * 0x1180));
  iVar4 = *(int *)(pFVar5 + 0x233);
  FVar6 = pFVar5[0x232];
  if (pFVar5[0x232] == (FTlsAutoCleanup)0x0) {
    FVar6 = FVar1;
  }
  _Src = (void *)((longlong)iVar4 * 0x1180 + (longlong)FVar6);
  *(undefined4 *)((longlong)_Src + -8) = 0;
  if (*(void **)((longlong)_Src + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)_Src + -0x10));
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)((longlong)_Src + -0x1180));
  iVar4 = *(int *)(pFVar5 + 0x233) - iVar4;
  if (iVar4 != 0) {
    memmove((void *)((longlong)_Src + -0x1180),_Src,(longlong)iVar4 * 0x1180);
  }
  *(int *)(pFVar5 + 0x233) = *(int *)(pFVar5 + 0x233) + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>_>
            (0x1180,8,(ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>
                       *)FVar1,*(int *)(pFVar5 + 0x233),(int *)&pFVar5[0x233].field_0x4);
  local_1190.HashSize = 0;
  if (local_1190.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1190.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            (&local_1190.Elements);
  return;
}

