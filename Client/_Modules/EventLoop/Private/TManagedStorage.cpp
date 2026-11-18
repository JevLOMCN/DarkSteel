// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 2

// Update @ 143144840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014314522d) */
/* WARNING: Removing unreachable block (ram,0x000143144a84) */
/* WARNING: Removing unreachable block (ram,0x000143144ec9) */
/* WARNING: Removing unreachable block (ram,0x00014314561d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::EventLoop::
TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
::Update(TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
         *this,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *param_1,
        TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
        *param_2)

{
  undefined8 *puVar1;
  TAtomic<unsigned_int> TVar2;
  int iVar3;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar4;
  longlong lVar5;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
  FVar6;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  code *pcVar17;
  bool bVar18;
  TAtomic<unsigned_int> TVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  TStatId TVar23;
  undefined8 uVar24;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
  FVar25;
  longlong *plVar26;
  FName *pFVar27;
  longlong *plVar28;
  uint uVar29;
  undefined1 *puVar30;
  undefined1 auStackY_568 [32];
  uint local_508;
  uint local_504;
  undefined8 local_500;
  int iStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  FName local_4e0;
  byte local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0 [8];
  TResourceHandle<UE::EventLoop::FIORequestHandleTraits> local_4b8;
  TResourceHandle<UE::EventLoop::FIORequestHandleTraits> local_4b0;
  FSparseArrayAllocationInfo local_4a8;
  FSparseArrayAllocationInfo local_498;
  undefined8 local_488;
  undefined8 local_478;
  undefined4 local_470;
  longlong local_468;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  longlong *local_440;
  char local_438;
  undefined8 local_428;
  undefined8 local_418;
  undefined4 local_410;
  longlong local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  longlong *local_3e0;
  char local_3d8;
  int *local_3c8;
  code *local_3b8;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  longlong *local_390;
  char local_388;
  ulong64 local_378;
  code *local_368;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  longlong *local_340;
  char local_338;
  FSourceLocation local_328;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  char local_2b8;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined4 local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  longlong *plStack_260;
  char local_258;
  undefined8 *local_248;
  FSparseArrayAllocationInfo *local_240;
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  undefined8 *local_228;
  FSparseArrayAllocationInfo *local_220;
  int *local_218;
  code *local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  char local_1d8;
  ulong64 local_1c8;
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *plStack_190;
  char local_188;
  FName local_178 [2];
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  longlong *plStack_120;
  int *local_118;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  ulong64 local_88;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  uVar20 = 0;
  local_508 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TManagedStorage_Update = 0;
    pFVar27 = ::FName::FName(local_178,"STAT_EventLoop_TManagedStorage_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TManagedStorage_Update,*pFVar27,
               L"STAT_EventLoop_TManagedStorage_Update","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar23 = FThreadSafeStaticStatInner<`UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update'::__l2::FStat_STAT_EventLoop_TManagedStorage_Update,1>
           ::GetStatId(&`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                        ::__l2::StatPtr_STAT_EventLoop_TManagedStorage_Update);
  local_328.Impl._Line = 0xf3;
  local_328.Impl._Function =
       "unsigned int __cdecl UE::EventLoop::TManagedStorage<struct UE::EventLoop::FIORequestBSDSocket,struct UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::Update(class TArray<struct UE::EventLoop::TManagedStorage<struct UE::EventLoop::FIORequestBSDSocket,struct UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<struct UE::EventLoop::TResourceHandle<struct UE::EventLoop::FIORequestHandleTraits> >,class TSizedInlineAllocator<32,32,class TSizedDefaultAllocator<32> > > *,class TArray<struct UE::EventLoop::TManagedStorage<struct UE::EventLoop::FIORequestBSDSocket,struct UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<struct UE::EventLoop::TResourceHandle<struct UE::EventLoop::FIORequestHandleTraits> >,class TSizedInlineAllocator<32,32,class TSizedDefaultAllocator<32> > > *)"
  ;
  local_328.Impl._Column = 3;
  local_328.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_4e0,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_328);
  TVar2 = this->ManagerThreadId;
  TVar19 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  if ((TVar2 != TVar19) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsManagerThread(ManagerThreadId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                          ,0x2b,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    uVar20 = (*pcVar9)();
    return uVar20;
  }
  if (param_1 ==
      (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    local_d8 = 0;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0;
    local_b8 = 0;
    plStack_90 = (longlong *)0x0;
    while (aVar4 = ((this->AddRequests).Tail)->Next,
          aVar4 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                    )0x0) {
      local_428 = *(undefined8 *)((longlong)aVar4 + 0x10);
      local_418 = *(undefined8 *)((longlong)aVar4 + 0x20);
      local_410 = *(undefined4 *)((longlong)aVar4 + 0x28);
      local_408 = *(longlong *)((longlong)aVar4 + 0x30);
      local_3e0 = *(longlong **)((longlong)aVar4 + 0x58);
      *(undefined8 *)((longlong)aVar4 + 0x58) = 0;
      local_3f8 = *(undefined4 *)((longlong)aVar4 + 0x40);
      uStack_3f4 = *(undefined4 *)((longlong)aVar4 + 0x44);
      uStack_3f0 = *(undefined4 *)((longlong)aVar4 + 0x48);
      uStack_3ec = *(undefined4 *)((longlong)aVar4 + 0x4c);
      local_3e8 = *(undefined8 *)((longlong)aVar4 + 0x50);
      if (local_408 != 0) {
        *(undefined8 *)((longlong)aVar4 + 0x30) = 0;
      }
      local_3d8 = '\x01';
      if (*(longlong *)((longlong)aVar4 + 0x30) != 0) {
        plVar28 = *(longlong **)((longlong)aVar4 + 0x58);
        if (*(longlong **)((longlong)aVar4 + 0x58) == (longlong *)0x0) {
          plVar28 = (longlong *)((longlong)aVar4 + 0x40);
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      FMemory::Free((this->AddRequests).Tail);
      plVar26 = plStack_90;
      uVar16 = uStack_9c;
      uVar15 = uStack_a0;
      uVar14 = uStack_a4;
      uVar13 = local_a8;
      uVar24 = uStack_b0;
      lVar12 = local_b8;
      plVar28 = local_3e0;
      lVar5 = local_408;
      (this->AddRequests).Tail = (FNode *)aVar4;
      local_258 = local_3d8;
      if (local_3d8 == '\0') goto LAB_1431450d2;
      local_2a8 = local_428;
      local_298 = local_418;
      local_290 = local_410;
      local_288 = local_408;
      plStack_260 = local_3e0;
      local_3e0 = (longlong *)0x0;
      local_278 = local_3f8;
      uStack_274 = uStack_3f4;
      uStack_270 = uStack_3f0;
      uStack_26c = uStack_3ec;
      local_268 = local_3e8;
      if (local_408 != 0) {
        local_408 = 0;
      }
      if (local_3d8 == '\0') goto LAB_1431450d2;
      uVar10 = CONCAT44(uStack_94,local_98);
      local_b8 = lVar5;
      uStack_b0 = uStack_280;
      local_268._0_4_ = (undefined4)local_3e8;
      local_268._4_4_ = (undefined4)((ulonglong)local_3e8 >> 0x20);
      local_98 = (undefined4)local_268;
      uStack_94 = local_268._4_4_;
      plStack_90 = plVar28;
      local_d8 = local_428;
      local_c8 = local_418;
      local_c0 = local_410;
      local_a8 = local_3f8;
      uStack_a4 = uStack_3f4;
      uStack_a0 = uStack_3f0;
      uStack_9c = uStack_3ec;
      local_288 = lVar12;
      uStack_280 = uVar24;
      local_278 = uVar13;
      uStack_274 = uVar14;
      uStack_270 = uVar15;
      uStack_26c = uVar16;
      local_268 = uVar10;
      plStack_260 = plVar26;
      if (lVar12 != 0) {
        plVar28 = (longlong *)&local_278;
        if (plVar26 != (longlong *)0x0) {
          plVar28 = plVar26;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      iVar22 = *(int *)&(this->Storage).field_0x34;
      local_4c8 = local_d8;
      if (iVar22 == 0) {
        iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Storage).field_0x8,
                            (int *)&(this->Storage).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Storage).field_0x10,false);
      }
      else {
        iVar21 = *(int *)&(this->Storage).field_0x30;
        iVar22 = iVar22 + -1;
        lVar5 = *(longlong *)&this->Storage;
        iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar21 * 0x50);
        *(int *)&(this->Storage).field_0x30 = iVar3;
        *(int *)&(this->Storage).field_0x34 = iVar22;
        if (iVar22 != 0) {
          *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
        }
      }
      TSparseArrayBase<80,16,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<80,16,FDefaultSparseArrayAllocator> *)this,&local_498,iVar21);
      local_238 = local_4c8;
      iStack_230 = local_498.Index;
      if (local_498.Pointer != (undefined8 *)0x0) {
        *(undefined8 *)local_498.Pointer = local_4c8;
        *(ulonglong *)((longlong)local_498.Pointer + 8) = CONCAT44(uStack_22c,local_498.Index);
        *(undefined8 *)((longlong)local_498.Pointer + 0x10) = local_c8;
        *(undefined4 *)((longlong)local_498.Pointer + 0x18) = local_c0;
        *(longlong *)((longlong)local_498.Pointer + 0x20) = local_b8;
        *(longlong **)((longlong)local_498.Pointer + 0x48) = plStack_90;
        plStack_90 = (longlong *)0x0;
        *(ulonglong *)((longlong)local_498.Pointer + 0x30) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)((longlong)local_498.Pointer + 0x38) = CONCAT44(uStack_9c,uStack_a0);
        *(ulonglong *)((longlong)local_498.Pointer + 0x40) = CONCAT44(uStack_94,local_98);
        if (*(longlong *)((longlong)local_498.Pointer + 0x20) != 0) {
          local_b8 = 0;
        }
      }
      local_228 = &local_4c8;
      local_220 = &local_498;
      TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_const_&,int_const_&>_>
                ((TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>,FDefaultSetAllocator>
                  *)&this->StorageHandleIndex,
                 (TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_const_&,int_const_&>
                  *)(local_4c0 + 4),(bool *)&local_228);
      uVar20 = uVar20 + 1;
    }
    local_258 = '\0';
LAB_1431450d2:
    if (local_b8 != 0) {
      plVar28 = (longlong *)&local_a8;
      plVar26 = plStack_90;
      goto LAB_1431450e9;
    }
  }
  else {
    local_168 = 0;
    local_158 = 0xffffffffffffffff;
    local_150 = 0;
    local_148 = 0;
    plStack_120 = (longlong *)0x0;
    while (aVar4 = ((this->AddRequests).Tail)->Next,
          aVar4 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                    )0x0) {
      local_488 = *(undefined8 *)((longlong)aVar4 + 0x10);
      local_478 = *(undefined8 *)((longlong)aVar4 + 0x20);
      local_470 = *(undefined4 *)((longlong)aVar4 + 0x28);
      local_468 = *(longlong *)((longlong)aVar4 + 0x30);
      local_440 = *(longlong **)((longlong)aVar4 + 0x58);
      *(undefined8 *)((longlong)aVar4 + 0x58) = 0;
      local_458 = *(undefined4 *)((longlong)aVar4 + 0x40);
      uStack_454 = *(undefined4 *)((longlong)aVar4 + 0x44);
      uStack_450 = *(undefined4 *)((longlong)aVar4 + 0x48);
      uStack_44c = *(undefined4 *)((longlong)aVar4 + 0x4c);
      local_448 = *(undefined8 *)((longlong)aVar4 + 0x50);
      if (local_468 != 0) {
        *(undefined8 *)((longlong)aVar4 + 0x30) = 0;
      }
      local_438 = '\x01';
      if (*(longlong *)((longlong)aVar4 + 0x30) != 0) {
        plVar28 = *(longlong **)((longlong)aVar4 + 0x58);
        if (*(longlong **)((longlong)aVar4 + 0x58) == (longlong *)0x0) {
          plVar28 = (longlong *)((longlong)aVar4 + 0x40);
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      FMemory::Free((this->AddRequests).Tail);
      plVar26 = plStack_120;
      uVar16 = uStack_12c;
      uVar15 = uStack_130;
      uVar14 = uStack_134;
      uVar13 = local_138;
      uVar24 = uStack_140;
      lVar12 = local_148;
      plVar28 = local_440;
      lVar5 = local_468;
      (this->AddRequests).Tail = (FNode *)aVar4;
      local_2b8 = local_438;
      if (local_438 == '\0') goto LAB_143144d67;
      local_308 = local_488;
      local_2f8 = local_478;
      local_2f0 = local_470;
      local_2e8 = local_468;
      plStack_2c0 = local_440;
      local_440 = (longlong *)0x0;
      local_2d8 = local_458;
      uStack_2d4 = uStack_454;
      uStack_2d0 = uStack_450;
      uStack_2cc = uStack_44c;
      local_2c8 = local_448;
      if (local_468 != 0) {
        local_468 = 0;
      }
      if (local_438 == '\0') goto LAB_143144d67;
      uVar10 = CONCAT44(uStack_124,local_128);
      local_148 = lVar5;
      uStack_140 = uStack_2e0;
      local_2c8._0_4_ = (undefined4)local_448;
      local_2c8._4_4_ = (undefined4)((ulonglong)local_448 >> 0x20);
      local_128 = (undefined4)local_2c8;
      uStack_124 = local_2c8._4_4_;
      plStack_120 = plVar28;
      local_168 = local_488;
      local_158 = local_478;
      local_150 = local_470;
      local_138 = local_458;
      uStack_134 = uStack_454;
      uStack_130 = uStack_450;
      uStack_12c = uStack_44c;
      local_2e8 = lVar12;
      uStack_2e0 = uVar24;
      local_2d8 = uVar13;
      uStack_2d4 = uVar14;
      uStack_2d0 = uVar15;
      uStack_2cc = uVar16;
      local_2c8 = uVar10;
      plStack_2c0 = plVar26;
      if (lVar12 != 0) {
        plVar28 = (longlong *)&local_2d8;
        if (plVar26 != (longlong *)0x0) {
          plVar28 = plVar26;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      iVar22 = *(int *)&(this->Storage).field_0x34;
      local_4d0 = local_168;
      if (iVar22 == 0) {
        iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Storage).field_0x8,
                            (int *)&(this->Storage).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Storage).field_0x10,false);
      }
      else {
        iVar21 = *(int *)&(this->Storage).field_0x30;
        iVar22 = iVar22 + -1;
        lVar5 = *(longlong *)&this->Storage;
        iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar21 * 0x50);
        *(int *)&(this->Storage).field_0x30 = iVar3;
        *(int *)&(this->Storage).field_0x34 = iVar22;
        if (iVar22 != 0) {
          *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
        }
      }
      TSparseArrayBase<80,16,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<80,16,FDefaultSparseArrayAllocator> *)this,&local_4a8,iVar21);
      local_500 = local_4d0;
      iStack_4f8 = local_4a8.Index;
      if (local_4a8.Pointer != (undefined8 *)0x0) {
        *(undefined8 *)local_4a8.Pointer = local_4d0;
        *(ulonglong *)((longlong)local_4a8.Pointer + 8) = CONCAT44(uStack_4f4,local_4a8.Index);
        *(undefined8 *)((longlong)local_4a8.Pointer + 0x10) = local_158;
        *(undefined4 *)((longlong)local_4a8.Pointer + 0x18) = local_150;
        *(longlong *)((longlong)local_4a8.Pointer + 0x20) = local_148;
        *(longlong **)((longlong)local_4a8.Pointer + 0x48) = plStack_120;
        plStack_120 = (longlong *)0x0;
        *(ulonglong *)((longlong)local_4a8.Pointer + 0x30) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)((longlong)local_4a8.Pointer + 0x38) = CONCAT44(uStack_12c,uStack_130);
        *(ulonglong *)((longlong)local_4a8.Pointer + 0x40) = CONCAT44(uStack_124,local_128);
        if (*(longlong *)((longlong)local_4a8.Pointer + 0x20) != 0) {
          local_148 = 0;
        }
      }
      local_248 = &local_4d0;
      local_240 = &local_4a8;
      TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_const_&,int_const_&>_>
                ((TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>,FDefaultSetAllocator>
                  *)&this->StorageHandleIndex,
                 (TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_const_&,int_const_&>
                  *)local_4c0,(bool *)&local_248);
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                )param_1;
      if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                    )0x0) {
        FVar25 = FVar6;
      }
      if ((ulonglong)FVar25 <= &local_500) {
        FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                  )param_1;
        if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                      )0x0) {
          FVar25 = FVar6;
        }
        if ((&local_500 < (undefined8 *)((longlong)param_1->ArrayMax * 0x10 + (longlong)FVar25)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar20 = (*pcVar9)();
          return uVar20;
        }
      }
      iVar22 = param_1->ArrayNum;
      if (iVar22 == param_1->ArrayMax) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar22 + 1;
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                )param_1;
      if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                    )0x0) {
        FVar25 = FVar6;
      }
      uVar20 = uVar20 + 1;
      puVar1 = (undefined8 *)((longlong)FVar25 + (longlong)iVar22 * 0x10);
      *puVar1 = local_500;
      puVar1[1] = CONCAT44(uStack_4f4,iStack_4f8);
    }
    local_2b8 = '\0';
LAB_143144d67:
    if (local_148 != 0) {
      plVar28 = (longlong *)&local_138;
      plVar26 = plStack_120;
LAB_1431450e9:
      if (plVar26 != (longlong *)0x0) {
        plVar28 = plVar26;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
  }
  if (param_2 ==
      (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    local_88 = 0;
    local_78 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    while (aVar7 = ((this->RemoveRequests).Tail)->Next,
          aVar7 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                    )0x0) {
      local_378 = *(ulong64 *)((longlong)aVar7 + 0x10);
      local_368 = *(code **)((longlong)aVar7 + 0x20);
      local_340 = *(longlong **)((longlong)aVar7 + 0x48);
      *(undefined8 *)((longlong)aVar7 + 0x48) = 0;
      local_358 = *(undefined4 *)((longlong)aVar7 + 0x30);
      uStack_354 = *(undefined4 *)((longlong)aVar7 + 0x34);
      uStack_350 = *(undefined4 *)((longlong)aVar7 + 0x38);
      uStack_34c = *(undefined4 *)((longlong)aVar7 + 0x3c);
      local_348 = *(undefined8 *)((longlong)aVar7 + 0x40);
      if (local_368 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar7 + 0x20) = 0;
      }
      local_338 = '\x01';
      if (*(longlong *)((longlong)aVar7 + 0x20) != 0) {
        plVar28 = *(longlong **)((longlong)aVar7 + 0x48);
        if (*(longlong **)((longlong)aVar7 + 0x48) == (longlong *)0x0) {
          plVar28 = (longlong *)((longlong)aVar7 + 0x30);
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      FMemory::Free((this->RemoveRequests).Tail);
      plVar26 = plStack_50;
      uVar16 = uStack_5c;
      uVar15 = uStack_60;
      uVar14 = uStack_64;
      uVar13 = local_68;
      uVar24 = uStack_70;
      pcVar17 = local_78;
      plVar28 = local_340;
      pcVar9 = local_368;
      (this->RemoveRequests).Tail = (FNode *)aVar7;
      local_188 = local_338;
      if (local_338 == '\0') break;
      local_1c8 = local_378;
      local_1b8 = local_368;
      plStack_190 = local_340;
      local_340 = (longlong *)0x0;
      local_1a8 = local_358;
      uStack_1a4 = uStack_354;
      uStack_1a0 = uStack_350;
      uStack_19c = uStack_34c;
      local_198 = local_348;
      if (local_368 != (code *)0x0) {
        local_368 = (code *)0x0;
      }
      if (local_338 == '\0') break;
      uVar10 = CONCAT44(uStack_54,local_58);
      local_78 = pcVar9;
      uStack_70 = uStack_1b0;
      local_198._0_4_ = (undefined4)local_348;
      local_198._4_4_ = (undefined4)((ulonglong)local_348 >> 0x20);
      local_58 = (undefined4)local_198;
      uStack_54 = local_198._4_4_;
      plStack_50 = plVar28;
      local_88 = local_378;
      local_68 = local_358;
      uStack_64 = uStack_354;
      uStack_60 = uStack_350;
      uStack_5c = uStack_34c;
      local_1b8 = pcVar17;
      uStack_1b0 = uVar24;
      local_1a8 = uVar13;
      uStack_1a4 = uVar14;
      uStack_1a0 = uVar15;
      uStack_19c = uVar16;
      local_198 = uVar10;
      plStack_190 = plVar26;
      if (pcVar17 != (code *)0x0) {
        plVar28 = (longlong *)&local_1a8;
        if (plVar26 != (longlong *)0x0) {
          plVar28 = plVar26;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      local_508 = 0xffffffff;
      local_4b0.ID = local_88;
      bVar18 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
               ::RemoveAndCopyValue(&this->StorageHandleIndex,&local_4b0,(int *)&local_508);
      uVar11 = local_508;
      if (((bVar18) && (-1 < (int)local_508)) &&
         ((int)local_508 < *(int *)&(this->Storage).field_0x28)) {
        if ((*(int *)&(this->Storage).field_0x28 <= (int)local_508) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar20 = (*pcVar9)();
          return uVar20;
        }
        puVar8 = *(undefined1 **)&(this->Storage).field_0x20;
        puVar30 = &(this->Storage).field_0x10;
        if (puVar8 != (undefined1 *)0x0) {
          puVar30 = puVar8;
        }
        uVar29 = uVar11;
        if ((int)uVar11 < 0) {
          uVar29 = uVar11 + 0x1f;
        }
        if ((*(uint *)(puVar30 + (longlong)((int)uVar29 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
          TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          ::RemoveAt(&this->Storage,uVar11,1);
        }
      }
      if (local_78 != (code *)0x0) {
        Core::Private::Function::CheckCallable(local_78);
        pcVar9 = local_78;
        plVar28 = (longlong *)&local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar28 = plStack_50;
        }
        uVar24 = (**(code **)(*plVar28 + 8))();
        (*pcVar9)(uVar24);
      }
      uVar20 = uVar20 + 1;
    }
    if (local_78 == (code *)0x0) goto LAB_1431457d2;
    plVar28 = (longlong *)&local_68;
    plVar26 = plStack_50;
  }
  else {
    local_118 = (int *)0x0;
    local_108 = (code *)0x0;
    plStack_e0 = (longlong *)0x0;
    while (aVar7 = ((this->RemoveRequests).Tail)->Next,
          aVar7 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                    )0x0) {
      local_3c8 = *(int **)((longlong)aVar7 + 0x10);
      local_3b8 = *(code **)((longlong)aVar7 + 0x20);
      local_390 = *(longlong **)((longlong)aVar7 + 0x48);
      *(undefined8 *)((longlong)aVar7 + 0x48) = 0;
      local_3a8 = *(undefined4 *)((longlong)aVar7 + 0x30);
      uStack_3a4 = *(undefined4 *)((longlong)aVar7 + 0x34);
      uStack_3a0 = *(undefined4 *)((longlong)aVar7 + 0x38);
      uStack_39c = *(undefined4 *)((longlong)aVar7 + 0x3c);
      local_398 = *(undefined8 *)((longlong)aVar7 + 0x40);
      if (local_3b8 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar7 + 0x20) = 0;
      }
      local_388 = '\x01';
      if (*(longlong *)((longlong)aVar7 + 0x20) != 0) {
        plVar28 = *(longlong **)((longlong)aVar7 + 0x48);
        if (*(longlong **)((longlong)aVar7 + 0x48) == (longlong *)0x0) {
          plVar28 = (longlong *)((longlong)aVar7 + 0x30);
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      FMemory::Free((this->RemoveRequests).Tail);
      plVar26 = plStack_e0;
      uVar16 = uStack_ec;
      uVar15 = uStack_f0;
      uVar14 = uStack_f4;
      uVar13 = local_f8;
      uVar24 = uStack_100;
      pcVar17 = local_108;
      plVar28 = local_390;
      pcVar9 = local_3b8;
      (this->RemoveRequests).Tail = (FNode *)aVar7;
      local_1d8 = local_388;
      if (local_388 == '\0') break;
      local_218 = local_3c8;
      local_208 = local_3b8;
      plStack_1e0 = local_390;
      local_390 = (longlong *)0x0;
      local_1f8 = local_3a8;
      uStack_1f4 = uStack_3a4;
      uStack_1f0 = uStack_3a0;
      uStack_1ec = uStack_39c;
      local_1e8 = local_398;
      if (local_3b8 != (code *)0x0) {
        local_3b8 = (code *)0x0;
      }
      if (local_388 == '\0') break;
      uVar10 = CONCAT44(uStack_e4,local_e8);
      local_108 = pcVar9;
      uStack_100 = uStack_200;
      local_1e8._0_4_ = (undefined4)local_398;
      local_1e8._4_4_ = (undefined4)((ulonglong)local_398 >> 0x20);
      local_e8 = (undefined4)local_1e8;
      uStack_e4 = local_1e8._4_4_;
      plStack_e0 = plVar28;
      local_118 = local_3c8;
      local_f8 = local_3a8;
      uStack_f4 = uStack_3a4;
      uStack_f0 = uStack_3a0;
      uStack_ec = uStack_39c;
      local_208 = pcVar17;
      uStack_200 = uVar24;
      local_1f8 = uVar13;
      uStack_1f4 = uVar14;
      uStack_1f0 = uVar15;
      uStack_1ec = uVar16;
      local_1e8 = uVar10;
      plStack_1e0 = plVar26;
      if (pcVar17 != (code *)0x0) {
        plVar28 = (longlong *)&local_1f8;
        if (plVar26 != (longlong *)0x0) {
          plVar28 = plVar26;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
      local_504 = 0xffffffff;
      local_4f0 = 0;
      uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xffffffff);
      local_4b8.ID = (ulong64)local_118;
      bVar18 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
               ::RemoveAndCopyValue(&this->StorageHandleIndex,&local_4b8,(int *)&local_504);
      uVar11 = local_504;
      if (((bVar18) && (-1 < (int)local_504)) &&
         ((int)local_504 < *(int *)&(this->Storage).field_0x28)) {
        if ((*(int *)&(this->Storage).field_0x28 <= (int)local_504) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar20 = (*pcVar9)();
          return uVar20;
        }
        puVar8 = *(undefined1 **)&(this->Storage).field_0x20;
        puVar30 = &(this->Storage).field_0x10;
        if (puVar8 != (undefined1 *)0x0) {
          puVar30 = puVar8;
        }
        uVar29 = uVar11;
        if ((int)uVar11 < 0) {
          uVar29 = uVar11 + 0x1f;
        }
        if ((*(uint *)(puVar30 + (longlong)((int)uVar29 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
          puVar1 = (undefined8 *)(*(longlong *)&this->Storage + (longlong)(int)uVar11 * 0x50);
          local_4f0 = *puVar1;
          uStack_4e8 = puVar1[1];
          TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          ::RemoveAt(&this->Storage,uVar11,1);
        }
      }
      if (local_108 != (code *)0x0) {
        Core::Private::Function::CheckCallable(local_108);
        pcVar9 = local_108;
        plVar28 = (longlong *)&local_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar28 = plStack_e0;
        }
        uVar24 = (**(code **)(*plVar28 + 8))();
        (*pcVar9)(uVar24);
      }
      FVar6 = (param_2->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                )param_2;
      if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                    )0x0) {
        FVar25 = FVar6;
      }
      if ((ulonglong)FVar25 <= &local_4f0) {
        FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                  )param_2;
        if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                      )0x0) {
          FVar25 = FVar6;
        }
        if ((&local_4f0 < (undefined8 *)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar25)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar20 = (*pcVar9)();
          return uVar20;
        }
      }
      iVar22 = param_2->ArrayNum;
      if (iVar22 == param_2->ArrayMax) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>
                           (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar22 + 1;
      FVar6 = (param_2->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                )param_2;
      if (FVar6 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>
                    )0x0) {
        FVar25 = FVar6;
      }
      uVar20 = uVar20 + 1;
      puVar1 = (undefined8 *)((longlong)FVar25 + (longlong)iVar22 * 0x10);
      *puVar1 = local_4f0;
      puVar1[1] = uStack_4e8;
    }
    if (local_108 == (code *)0x0) goto LAB_1431457d2;
    plVar28 = (longlong *)&local_f8;
    plVar26 = plStack_e0;
  }
  if (plVar26 != (longlong *)0x0) {
    plVar28 = plVar26;
  }
  (**(code **)(*plVar28 + 0x10))();
LAB_1431457d2:
  if ((local_4d8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4d8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4d8 & 4) != 0) {
    FThreadStats::AddMessage(local_4e0,CycleScopeEnd);
  }
  return uVar20;
}

// end @ 1431458e0

TBaseRangeForIterator<0> * __thiscall
UE::EventLoop::
TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
::end(TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
      *this,TBaseRangeForIterator<0> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  TBaseRangeForIterator<0> *pTVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 local_64;
  undefined4 uStack_34;
  
  uVar13 = *(uint *)&(this->Storage).field_0x28;
  bVar11 = (byte)uVar13 & 0x1f;
  iVar15 = (int)uVar13 >> 5;
  uVar19 = 1 << bVar11;
  uVar16 = -1 << bVar11;
  puVar1 = &(this->Storage).field_0x10;
  uVar17 = uVar13 & 0xffffffe0;
  if (((int)uVar13 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TBaseRangeForIterator<0> *)(*pcVar7)();
    return pTVar10;
  }
  uVar4 = *(uint *)&(this->Storage).field_0x28;
  if (uVar13 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Storage).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar13 = uVar16 & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1431459cd;
      uVar16 = 0xffffffff;
      uVar13 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar19 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar19 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1431459cd:
  iVar5 = *(int *)&(this->Storage).field_0x8;
  iVar6 = *(int *)&(this->Storage).field_0x34;
  (__return_storage_ptr__->StorageIterator)._padding_ = (longlong)this;
  (__return_storage_ptr__->StorageIterator)._padding_ = CONCAT44(uVar19,iVar15);
  (__return_storage_ptr__->StorageIterator)._padding_ = (longlong)puVar1;
  (__return_storage_ptr__->StorageIterator)._padding_ = CONCAT44(uVar13,uVar16);
  (__return_storage_ptr__->StorageIterator)._padding_ = CONCAT44(local_64,uVar17);
  *(ulonglong *)&(__return_storage_ptr__->StorageIterator).InitialNum =
       CONCAT44(uStack_34,iVar5 - iVar6);
  (__return_storage_ptr__->ElementAccess).bIsSet = false;
  iVar15 = *(int *)((longlong)&(__return_storage_ptr__->StorageIterator)._padding_ + 4);
  if (iVar15 < *(int *)((__return_storage_ptr__->StorageIterator)._padding_ + 0x18)) {
    lVar14 = (longlong)iVar15 * 0x50;
    lVar12 = *(longlong *)(__return_storage_ptr__->StorageIterator)._padding_;
    puVar2 = (undefined8 *)(lVar14 + lVar12);
    uVar8 = puVar2[1];
    *(undefined8 *)&(__return_storage_ptr__->ElementAccess).TypedValue = *puVar2;
    *(undefined8 *)&(__return_storage_ptr__->ElementAccess).TypedValue.field_0x8 = uVar8;
    *(longlong *)&(__return_storage_ptr__->ElementAccess).TypedValue.field_0x10 =
         lVar12 + 0x10 + lVar14;
    (__return_storage_ptr__->ElementAccess).bIsSet = true;
  }
  return __return_storage_ptr__;
}

