// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// Update @ 143189280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143189982) */
/* WARNING: Removing unreachable block (ram,0x00014318a0e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::EventLoop::
TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>
::Update(TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>
         *this,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *param_1,
        TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
        *param_2)

{
  uchar *puVar1;
  undefined8 *puVar2;
  TAtomic<unsigned_int> TVar3;
  int iVar4;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar5;
  longlong lVar6;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar7;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFVar18;
  uchar auVar19 [8];
  uchar auVar20 [8];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  uchar auVar30 [8];
  uchar auVar31 [8];
  bool bVar32;
  TAtomic<unsigned_int> TVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  FName *pFVar37;
  TStatId TVar38;
  undefined8 uVar39;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar40;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFVar41;
  longlong *plVar42;
  longlong *plVar43;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar44;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFVar45;
  uint uVar46;
  undefined1 *puVar47;
  undefined1 auStackY_628 [32];
  uint local_5c8;
  uint local_5c4;
  uchar local_5c0 [8];
  int iStack_5b8;
  undefined4 uStack_5b4;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_5b0;
  undefined8 uStack_5a8;
  FName local_5a0;
  byte local_598;
  uchar local_590 [8];
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_588;
  undefined1 local_580 [8];
  TResourceHandle<UE::EventLoop::FTimerHandleTraits> local_578;
  TResourceHandle<UE::EventLoop::FTimerHandleTraits> local_570;
  FSparseArrayAllocationInfo local_568;
  FSparseArrayAllocationInfo local_558;
  int *local_548;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_538;
  undefined4 local_528;
  undefined4 uStack_524;
  int iStack_520;
  int iStack_51c;
  undefined8 local_518;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_510;
  char local_508;
  ulong64 local_4f8;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_4e8;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_4c0;
  char local_4b8;
  FSourceLocation local_4a8;
  uchar *local_488;
  FSparseArrayAllocationInfo *local_480;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  **local_468;
  FSparseArrayAllocationInfo *local_460;
  int *local_458;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_448;
  uchar auStack_440 [8];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  local_438 [2];
  undefined8 local_428;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFStack_420;
  char local_418;
  ulong64 local_408;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_3f8;
  uchar auStack_3f0 [8];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  local_3e8;
  uchar auStack_3e0 [8];
  undefined8 local_3d8;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFStack_3d0;
  char local_3c8;
  uchar local_3b8 [16];
  undefined1 local_3a8 [48];
  FTimespan local_378;
  bool local_370;
  FTimespan local_368;
  FTimespan local_360;
  ETimerStatus local_358;
  byte local_357;
  uchar local_348;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_338;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_328 [2];
  undefined1 local_318 [32];
  FTimespan local_2f8;
  bool local_2f0;
  FTimespan local_2e8;
  FTimespan local_2e0;
  ETimerStatus local_2d8;
  byte local_2d7;
  uchar local_2c8;
  FName local_2b8;
  FName local_2b0;
  uchar local_2a8 [16];
  undefined1 local_298 [96];
  uchar local_238;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_228;
  undefined1 local_218 [96];
  uchar local_1b8;
  uchar local_1a8 [16];
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188 [3];
  longlong *plStack_170;
  long64 local_168;
  uchar local_160;
  long64 local_158;
  long64 lStack_150;
  ETimerStatus local_148;
  byte local_147;
  int *local_138;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_128;
  uchar auStack_120 [8];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFStack_100;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_f8;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [32];
  long64 local_b8;
  uchar local_b0;
  long64 local_a8;
  long64 lStack_a0;
  ETimerStatus local_98;
  byte local_97;
  ulong64 local_88;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *local_78;
  uchar auStack_70 [8];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  local_68;
  uchar auStack_60 [8];
  uchar local_58 [4];
  uchar auStack_54 [4];
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  *pFStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_628;
  uVar34 = 0;
  local_5c8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TManagedStorage_Update = (TStatIdData *)0x0;
    pFVar37 = ::FName::FName(&local_2b8,"STAT_EventLoop_TManagedStorage_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TManagedStorage_Update,*pFVar37,
               L"STAT_EventLoop_TManagedStorage_Update","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar38.StatIdPtr = _StatPtr_STAT_EventLoop_TManagedStorage_Update;
  if (_StatPtr_STAT_EventLoop_TManagedStorage_Update == (TStatIdData *)0x0) {
    pFVar37 = ::FName::FName(&local_2b0,"STAT_EventLoop_TManagedStorage_Update");
    TVar38.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_unsigned_int___cdecl_UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64,TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>*___ptr64)___ptr64'
                     ::__l2::StatPtr_STAT_EventLoop_TManagedStorage_Update,*pFVar37,
                    L"STAT_EventLoop_TManagedStorage_Update","STATGROUP_Quick","STATCAT_Advanced",
                    L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_4a8.Impl._Line = 0xf3;
  local_4a8.Impl._Function =
       "unsigned int __cdecl UE::EventLoop::TManagedStorage<struct UE::EventLoop::FTimerData,struct UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::Update(class TArray<struct UE::EventLoop::TManagedStorage<struct UE::EventLoop::FTimerData,struct UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<struct UE::EventLoop::TResourceHandle<struct UE::EventLoop::FTimerHandleTraits> >,class TSizedInlineAllocator<32,32,class TSizedDefaultAllocator<32> > > *,class TArray<struct UE::EventLoop::TManagedStorage<struct UE::EventLoop::FTimerData,struct UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<struct UE::EventLoop::TResourceHandle<struct UE::EventLoop::FTimerHandleTraits> >,class TSizedInlineAllocator<32,32,class TSizedDefaultAllocator<32> > > *)"
  ;
  local_4a8.Impl._Column = 3;
  local_4a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_5a0,TVar38,CycleStat|ClearEveryFrame,false,&local_4a8);
  TVar3 = this->ManagerThreadId;
  TVar33 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  if ((TVar3 != TVar33) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsManagerThread(ManagerThreadId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                          ,0x2b,L""), bVar32)) {
    pcVar10 = (code *)swi(3);
    uVar34 = (*pcVar10)();
    return uVar34;
  }
  if (param_1 ==
      (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    local_f8 = param_1;
    local_e8 = param_1;
    local_d8._24_8_ = param_1;
    local_b0 = '\0';
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = Pending;
    while (aVar5 = ((this->AddRequests).Tail)->Next,
          aVar5 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                    )0x0) {
      local_228 = *(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                    **)((longlong)aVar5 + 0x10);
      FTimerData::FTimerData((FTimerData *)local_218,(FTimerData *)((longlong)aVar5 + 0x20));
      local_1b8 = '\x01';
      if (*(longlong *)((longlong)aVar5 + 0x20) != 0) {
        plVar43 = *(longlong **)((longlong)aVar5 + 0x48);
        if (plVar43 == (longlong *)0x0) {
          plVar43 = (longlong *)((longlong)aVar5 + 0x30);
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      FMemory::Free((this->AddRequests).Tail);
      (this->AddRequests).Tail = (FNode *)aVar5;
      local_2c8 = local_1b8;
      if (local_1b8 == '\0') goto LAB_143189f95;
      local_338 = local_228;
      FTimerData::FTimerData((FTimerData *)local_328,(FTimerData *)local_218);
      if ((local_1b8 != '\0') && (local_218._0_8_ != 0)) {
        plVar43 = (longlong *)(local_218 + 0x10);
        if ((longlong *)local_218._40_8_ != (longlong *)0x0) {
          plVar43 = (longlong *)local_218._40_8_;
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      uVar11 = local_d8._24_8_;
      uVar17 = local_d8._12_4_;
      uVar16 = local_d8._8_4_;
      uVar15 = local_d8._4_4_;
      uVar14 = local_d8._0_4_;
      uVar39 = uStack_e0;
      pTVar44 = local_e8;
      if (local_2c8 == '\0') goto LAB_143189f95;
      uVar26 = local_d8[0x14];
      uVar27 = local_d8[0x15];
      uVar28 = local_d8[0x16];
      uVar29 = local_d8[0x17];
      uVar22 = local_d8[0x10];
      uVar23 = local_d8[0x11];
      uVar24 = local_d8[0x12];
      uVar25 = local_d8[0x13];
      local_e8 = local_328[0];
      uStack_e0 = local_328[1];
      local_d8._16_4_ = local_318._16_4_;
      local_d8._20_4_ = local_318._20_4_;
      local_d8._24_8_ = local_318._24_8_;
      local_f8 = local_338;
      local_d8._0_4_ = local_318._0_4_;
      local_d8._4_4_ = local_318._4_4_;
      local_d8._8_4_ = local_318._8_4_;
      local_d8._12_4_ = local_318._12_4_;
      local_328[0] = pTVar44;
      local_328[1] = (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)uVar39;
      local_318._0_4_ = uVar14;
      local_318._4_4_ = uVar15;
      local_318._8_4_ = uVar16;
      local_318._12_4_ = uVar17;
      local_318[0x10] = uVar22;
      local_318[0x11] = uVar23;
      local_318[0x12] = uVar24;
      local_318[0x13] = uVar25;
      local_318[0x14] = uVar26;
      local_318[0x15] = uVar27;
      local_318[0x16] = uVar28;
      local_318[0x17] = uVar29;
      local_318._24_8_ = uVar11;
      if (local_2f0 == false) {
        if (local_b0 != '\0') {
          local_b0 = '\0';
        }
      }
      else {
        local_b8 = local_2f8.Ticks;
        local_b0 = '\x01';
      }
      local_a8 = local_2e8.Ticks;
      lStack_a0 = local_2e0.Ticks;
      local_98 = local_2d8;
      local_97 = local_97 ^ (local_2d7 ^ local_97) & 1;
      if (pTVar44 !=
          (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        pTVar44 = (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *)local_318;
        if ((TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
             *)uVar11 !=
            (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar44 = (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *)uVar11;
        }
        (**(code **)(*(longlong *)(pTVar44->AllocatorInstance).InlineData + 0x10))();
      }
      iVar36 = *(int *)&(this->Storage).field_0x34;
      local_588 = local_f8;
      if (iVar36 == 0) {
        iVar35 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x70,0x10,1,(ForAnyElementType *)this,(int *)&(this->Storage).field_0x8,
                            (int *)&(this->Storage).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Storage).field_0x10,false);
      }
      else {
        iVar35 = *(int *)&(this->Storage).field_0x30;
        iVar36 = iVar36 + -1;
        lVar6 = *(longlong *)&this->Storage;
        iVar4 = *(int *)((longlong)iVar35 * 0x70 + 4 + lVar6);
        *(int *)&(this->Storage).field_0x30 = iVar4;
        *(int *)&(this->Storage).field_0x34 = iVar36;
        if (iVar36 != 0) {
          *(undefined4 *)((longlong)iVar4 * 0x70 + lVar6) = 0xffffffff;
        }
      }
      TSparseArrayBase<112,16,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<112,16,FDefaultSparseArrayAllocator> *)this,&local_558,iVar35);
      local_478 = local_588;
      iStack_470 = local_558.Index;
      if (local_558.Pointer != (undefined8 *)0x0) {
        *(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          **)local_558.Pointer = local_588;
        *(ulonglong *)((longlong)local_558.Pointer + 8) = CONCAT44(uStack_46c,local_558.Index);
        *(TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          **)((longlong)local_558.Pointer + 0x10) = local_e8;
        *(undefined8 *)((longlong)local_558.Pointer + 0x38) = local_d8._24_8_;
        *(ulonglong *)((longlong)local_558.Pointer + 0x20) = CONCAT44(local_d8._4_4_,local_d8._0_4_)
        ;
        *(ulonglong *)((longlong)local_558.Pointer + 0x28) =
             CONCAT44(local_d8._12_4_,local_d8._8_4_);
        *(ulonglong *)((longlong)local_558.Pointer + 0x30) =
             CONCAT44(local_d8._20_4_,local_d8._16_4_);
        if (*(longlong *)((longlong)local_558.Pointer + 0x10) != 0) {
          local_e8 = param_1;
        }
        *(undefined1 *)((longlong)local_558.Pointer + 0x48) = 0;
        *(uchar *)((longlong)local_558.Pointer + 0x48) = local_b0;
        if (local_b0 != '\0') {
          *(long64 *)((longlong)local_558.Pointer + 0x40) = local_b8;
        }
        *(long64 *)((longlong)local_558.Pointer + 0x50) = local_a8;
        *(long64 *)((longlong)local_558.Pointer + 0x58) = lStack_a0;
        *(ETimerStatus *)((longlong)local_558.Pointer + 0x60) = local_98;
        *(byte *)((longlong)local_558.Pointer + 0x61) =
             *(byte *)((longlong)local_558.Pointer + 0x61) & 0xfe | local_97 & 1;
        local_d8._24_8_ = param_1;
      }
      local_468 = &local_588;
      local_460 = &local_558;
      TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_const_&,int_const_&>_>
                ((TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>,FDefaultSetAllocator>
                  *)&this->StorageHandleIndex,
                 (TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_const_&,int_const_&>
                  *)(local_580 + 4),(bool *)&local_468);
      uVar34 = uVar34 + 1;
    }
    local_2c8 = '\0';
LAB_143189f95:
    if (local_e8 !=
        (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pTVar44 = (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)local_d8;
      if ((TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *)local_d8._24_8_ !=
          (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        pTVar44 = (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *)local_d8._24_8_;
      }
      (**(code **)(*(longlong *)(pTVar44->AllocatorInstance).InlineData + 0x10))();
    }
  }
  else {
    local_1a8[0] = '\0';
    local_1a8[1] = '\0';
    local_1a8[2] = '\0';
    local_1a8[3] = '\0';
    local_1a8[4] = '\0';
    local_1a8[5] = '\0';
    local_1a8[6] = '\0';
    local_1a8[7] = '\0';
    local_198 = 0;
    plStack_170 = (longlong *)0x0;
    local_160 = '\0';
    local_158 = 0;
    lStack_150 = 0;
    local_148 = Pending;
    while (aVar5 = ((this->AddRequests).Tail)->Next,
          aVar5 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                    )0x0) {
      local_2a8._0_8_ = *(undefined8 *)((longlong)aVar5 + 0x10);
      FTimerData::FTimerData((FTimerData *)local_298,(FTimerData *)((longlong)aVar5 + 0x20));
      local_238 = '\x01';
      if (*(longlong *)((longlong)aVar5 + 0x20) != 0) {
        plVar43 = *(longlong **)((longlong)aVar5 + 0x48);
        if (plVar43 == (longlong *)0x0) {
          plVar43 = (longlong *)((longlong)aVar5 + 0x30);
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      FMemory::Free((this->AddRequests).Tail);
      (this->AddRequests).Tail = (FNode *)aVar5;
      local_348 = local_238;
      if (local_238 == '\0') goto LAB_143189852;
      local_3b8[0] = local_2a8[0];
      local_3b8[1] = local_2a8[1];
      local_3b8[2] = local_2a8[2];
      local_3b8[3] = local_2a8[3];
      local_3b8[4] = local_2a8[4];
      local_3b8[5] = local_2a8[5];
      local_3b8[6] = local_2a8[6];
      local_3b8[7] = local_2a8[7];
      FTimerData::FTimerData((FTimerData *)local_3a8,(FTimerData *)local_298);
      if ((local_238 != '\0') && (local_298._0_8_ != 0)) {
        plVar43 = (longlong *)(local_298 + 0x10);
        if ((longlong *)local_298._40_8_ != (longlong *)0x0) {
          plVar43 = (longlong *)local_298._40_8_;
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      plVar43 = plStack_170;
      uVar17 = local_188[1]._4_4_;
      uVar16 = (undefined4)local_188[1];
      uVar15 = local_188[0]._4_4_;
      uVar14 = (undefined4)local_188[0];
      uVar39 = uStack_190;
      lVar6 = local_198;
      if (local_348 == '\0') goto LAB_143189852;
      uVar11._4_4_ = local_188[2]._4_4_;
      uVar11._0_4_ = (undefined4)local_188[2];
      local_198 = local_3a8._0_8_;
      uStack_190 = local_3a8._8_8_;
      local_188[2]._0_4_ = local_3a8._32_4_;
      local_188[2]._4_4_ = local_3a8._36_4_;
      plStack_170 = (longlong *)local_3a8._40_8_;
      local_1a8[0] = local_3b8[0];
      local_1a8[1] = local_3b8[1];
      local_1a8[2] = local_3b8[2];
      local_1a8[3] = local_3b8[3];
      local_1a8[4] = local_3b8[4];
      local_1a8[5] = local_3b8[5];
      local_1a8[6] = local_3b8[6];
      local_1a8[7] = local_3b8[7];
      local_188[0]._0_4_ = local_3a8._16_4_;
      local_188[0]._4_4_ = local_3a8._20_4_;
      local_188[1]._0_4_ = local_3a8._24_4_;
      local_188[1]._4_4_ = local_3a8._28_4_;
      local_3a8._0_8_ = lVar6;
      local_3a8._8_8_ = uVar39;
      local_3a8._16_4_ = uVar14;
      local_3a8._20_4_ = uVar15;
      local_3a8._24_4_ = uVar16;
      local_3a8._28_4_ = uVar17;
      local_3a8._32_8_ = uVar11;
      local_3a8._40_8_ = plVar43;
      if (local_370 == false) {
        if (local_160 != '\0') {
          local_160 = '\0';
        }
      }
      else {
        local_168 = local_378.Ticks;
        local_160 = '\x01';
      }
      local_158 = local_368.Ticks;
      lStack_150 = local_360.Ticks;
      local_148 = local_358;
      local_147 = local_147 ^ (local_357 ^ local_147) & 1;
      if (lVar6 != 0) {
        plVar42 = (longlong *)(local_3a8 + 0x10);
        if (plVar43 != (longlong *)0x0) {
          plVar42 = plVar43;
        }
        (**(code **)(*plVar42 + 0x10))();
      }
      iVar36 = *(int *)&(this->Storage).field_0x34;
      local_590 = (uchar  [8])local_1a8._0_8_;
      if (iVar36 == 0) {
        iVar35 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x70,0x10,1,(ForAnyElementType *)this,(int *)&(this->Storage).field_0x8,
                            (int *)&(this->Storage).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Storage).field_0x10,false);
      }
      else {
        iVar35 = *(int *)&(this->Storage).field_0x30;
        iVar36 = iVar36 + -1;
        lVar6 = *(longlong *)&this->Storage;
        iVar4 = *(int *)((longlong)iVar35 * 0x70 + 4 + lVar6);
        *(int *)&(this->Storage).field_0x30 = iVar4;
        *(int *)&(this->Storage).field_0x34 = iVar36;
        if (iVar36 != 0) {
          *(undefined4 *)((longlong)iVar4 * 0x70 + lVar6) = 0xffffffff;
        }
      }
      TSparseArrayBase<112,16,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<112,16,FDefaultSparseArrayAllocator> *)this,&local_568,iVar35);
      local_5c0[0] = local_590[0];
      local_5c0[1] = local_590[1];
      local_5c0[2] = local_590[2];
      local_5c0[3] = local_590[3];
      local_5c0[4] = local_590[4];
      local_5c0[5] = local_590[5];
      local_5c0[6] = local_590[6];
      local_5c0[7] = local_590[7];
      iStack_5b8 = local_568.Index;
      if (local_568.Pointer != (uchar *)0x0) {
        *(uchar (*) [8])local_568.Pointer = local_590;
        *(ulonglong *)((longlong)local_568.Pointer + 8) = CONCAT44(uStack_5b4,local_568.Index);
        *(longlong *)((longlong)local_568.Pointer + 0x10) = local_198;
        *(longlong **)((longlong)local_568.Pointer + 0x38) = plStack_170;
        plStack_170 = (longlong *)0x0;
        *(ulonglong *)((longlong)local_568.Pointer + 0x20) =
             CONCAT44(local_188[0]._4_4_,(undefined4)local_188[0]);
        *(ulonglong *)((longlong)local_568.Pointer + 0x28) =
             CONCAT44(local_188[1]._4_4_,(undefined4)local_188[1]);
        *(ulonglong *)((longlong)local_568.Pointer + 0x30) =
             CONCAT44(local_188[2]._4_4_,(undefined4)local_188[2]);
        if (*(longlong *)((longlong)local_568.Pointer + 0x10) != 0) {
          local_198 = 0;
        }
        *(uchar *)((longlong)local_568.Pointer + 0x48) = '\0';
        *(uchar *)((longlong)local_568.Pointer + 0x48) = local_160;
        if (local_160 != '\0') {
          *(long64 *)((longlong)local_568.Pointer + 0x40) = local_168;
        }
        *(long64 *)((longlong)local_568.Pointer + 0x50) = local_158;
        *(long64 *)((longlong)local_568.Pointer + 0x58) = lStack_150;
        *(ETimerStatus *)((longlong)local_568.Pointer + 0x60) = local_148;
        *(byte *)((longlong)local_568.Pointer + 0x61) =
             local_147 & 1 | *(byte *)((longlong)local_568.Pointer + 0x61) & 0xfe;
      }
      local_488 = local_590;
      local_480 = &local_568;
      TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_const_&,int_const_&>_>
                ((TSet<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>,FDefaultSetAllocator>
                  *)&this->StorageHandleIndex,
                 (TPairInitializer<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_const_&,int_const_&>
                  *)local_580,(bool *)&local_488);
      FVar7 = (param_1->AllocatorInstance).SecondaryData;
      FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )param_1;
      if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    )0x0) {
        FVar40 = FVar7;
      }
      if ((ulonglong)FVar40 <= local_5c0) {
        FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )param_1;
        if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                      )0x0) {
          FVar40 = FVar7;
        }
        if ((local_5c0 < (uchar *)((longlong)param_1->ArrayMax * 0x10 + (longlong)FVar40)) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar32)) {
          pcVar10 = (code *)swi(3);
          uVar34 = (*pcVar10)();
          return uVar34;
        }
      }
      iVar36 = param_1->ArrayNum;
      if (iVar36 == param_1->ArrayMax) {
        iVar36 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar36 + 1;
      FVar7 = (param_1->AllocatorInstance).SecondaryData;
      FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )param_1;
      if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    )0x0) {
        FVar40 = FVar7;
      }
      uVar34 = uVar34 + 1;
      puVar1 = (uchar *)((longlong)FVar40 + (longlong)iVar36 * 0x10);
      *(uchar (*) [8])puVar1 = local_5c0;
      *(ulonglong *)(puVar1 + 8) = CONCAT44(uStack_5b4,iStack_5b8);
    }
    local_348 = '\0';
LAB_143189852:
    if (local_198 != 0) {
      plVar43 = local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar43 = plStack_170;
      }
      (**(code **)(*plVar43 + 0x10))();
    }
  }
  if (param_2 ==
      (TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    local_88 = 0;
    local_78 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                *)0x0;
    pFStack_50 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  *)0x0;
    while( true ) {
      pFVar41 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                 *)0x0;
      aVar8 = ((this->RemoveRequests).Tail)->Next;
      pFVar45 = local_4c0;
      if (aVar8 == (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                    )0x0) break;
      local_4f8 = *(ulong64 *)((longlong)aVar8 + 0x10);
      local_4e8 = *(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    **)((longlong)aVar8 + 0x20);
      local_4c0 = *(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    **)((longlong)aVar8 + 0x48);
      *(undefined8 *)((longlong)aVar8 + 0x48) = 0;
      local_4d8 = *(undefined4 *)((longlong)aVar8 + 0x30);
      uStack_4d4 = *(undefined4 *)((longlong)aVar8 + 0x34);
      uStack_4d0 = *(undefined4 *)((longlong)aVar8 + 0x38);
      uStack_4cc = *(undefined4 *)((longlong)aVar8 + 0x3c);
      local_4c8 = *(undefined8 *)((longlong)aVar8 + 0x40);
      if (local_4e8 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        *(undefined8 *)((longlong)aVar8 + 0x20) = 0;
      }
      local_4b8 = '\x01';
      if (*(longlong *)((longlong)aVar8 + 0x20) != 0) {
        plVar43 = *(longlong **)((longlong)aVar8 + 0x48);
        if (*(longlong **)((longlong)aVar8 + 0x48) == (longlong *)0x0) {
          plVar43 = (longlong *)((longlong)aVar8 + 0x30);
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      FMemory::Free((this->RemoveRequests).Tail);
      pFVar21 = pFStack_50;
      auVar20 = auStack_60;
      FVar7 = local_68;
      auVar19 = auStack_70;
      pFVar18 = local_78;
      pFVar13 = local_4e8;
      (this->RemoveRequests).Tail = (FNode *)aVar8;
      local_3c8 = local_4b8;
      pFVar45 = local_4c0;
      if (local_4b8 == '\0') break;
      local_3e8._4_4_ = uStack_4d4;
      local_3e8._0_4_ = local_4d8;
      local_408 = local_4f8;
      local_3f8 = local_4e8;
      pFStack_3d0 = local_4c0;
      auStack_3e0[0] = (undefined1)uStack_4d0;
      auStack_3e0[1] = uStack_4d0._1_1_;
      auStack_3e0[2] = uStack_4d0._2_1_;
      auStack_3e0[3] = uStack_4d0._3_1_;
      auStack_3e0[4] = (undefined1)uStack_4cc;
      auStack_3e0[5] = uStack_4cc._1_1_;
      auStack_3e0[6] = uStack_4cc._2_1_;
      auStack_3e0[7] = uStack_4cc._3_1_;
      local_3d8 = local_4c8;
      if (local_4e8 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        local_4e8 = pFVar41;
      }
      pFVar45 = pFVar41;
      if (local_4b8 == '\0') break;
      uVar39 = CONCAT44(auStack_54,local_58);
      local_78 = pFVar13;
      auStack_70[0] = auStack_3f0[0];
      auStack_70[1] = auStack_3f0[1];
      auStack_70[2] = auStack_3f0[2];
      auStack_70[3] = auStack_3f0[3];
      auStack_70[4] = auStack_3f0[4];
      auStack_70[5] = auStack_3f0[5];
      auStack_70[6] = auStack_3f0[6];
      auStack_70[7] = auStack_3f0[7];
      auVar30 = auStack_70;
      local_3d8._0_4_ = (undefined4)local_4c8;
      local_3d8._4_4_ = (undefined4)((ulonglong)local_4c8 >> 0x20);
      local_58[0] = (uchar)local_3d8;
      local_58[1] = local_3d8._1_1_;
      local_58[2] = local_3d8._2_1_;
      local_58[3] = local_3d8._3_1_;
      auStack_54[0] = local_3d8._4_1_;
      auStack_54[1] = local_3d8._5_1_;
      auStack_54[2] = local_3d8._6_1_;
      auStack_54[3] = local_3d8._7_1_;
      pFStack_50 = local_4c0;
      local_88 = local_4f8;
      local_68 = local_3e8;
      auStack_60[0] = (undefined1)uStack_4d0;
      auStack_60[1] = uStack_4d0._1_1_;
      auStack_60[2] = uStack_4d0._2_1_;
      auStack_60[3] = uStack_4d0._3_1_;
      auStack_60[4] = (undefined1)uStack_4cc;
      auStack_60[5] = uStack_4cc._1_1_;
      auStack_60[6] = uStack_4cc._2_1_;
      auStack_60[7] = uStack_4cc._3_1_;
      auVar31 = auStack_60;
      local_3f8 = pFVar18;
      auStack_70[0] = auVar19[0];
      auStack_70[1] = auVar19[1];
      auStack_70[2] = auVar19[2];
      auStack_70[3] = auVar19[3];
      auStack_70[4] = auVar19[4];
      auStack_70[5] = auVar19[5];
      auStack_70[6] = auVar19[6];
      auStack_70[7] = auVar19[7];
      auStack_3f0[0] = auStack_70[0];
      auStack_3f0[1] = auStack_70[1];
      auStack_3f0[2] = auStack_70[2];
      auStack_3f0[3] = auStack_70[3];
      auStack_3f0[4] = auStack_70[4];
      auStack_3f0[5] = auStack_70[5];
      auStack_3f0[6] = auStack_70[6];
      auStack_3f0[7] = auStack_70[7];
      local_3e8 = FVar7;
      auStack_60[0] = auVar20[0];
      auStack_60[1] = auVar20[1];
      auStack_60[2] = auVar20[2];
      auStack_60[3] = auVar20[3];
      auStack_60[4] = auVar20[4];
      auStack_60[5] = auVar20[5];
      auStack_60[6] = auVar20[6];
      auStack_60[7] = auVar20[7];
      auStack_3e0[0] = auStack_60[0];
      auStack_3e0[1] = auStack_60[1];
      auStack_3e0[2] = auStack_60[2];
      auStack_3e0[3] = auStack_60[3];
      auStack_3e0[4] = auStack_60[4];
      auStack_3e0[5] = auStack_60[5];
      auStack_3e0[6] = auStack_60[6];
      auStack_3e0[7] = auStack_60[7];
      local_3d8 = uVar39;
      pFStack_3d0 = pFVar21;
      local_4c0 = pFVar41;
      auStack_70 = auVar30;
      auStack_60 = auVar31;
      if (pFVar18 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        pFVar45 = &local_3e8;
        if (pFVar21 !=
            (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
             *)0x0) {
          pFVar45 = pFVar21;
        }
        (**(code **)((longlong)*pFVar45 + 0x10))();
      }
      local_5c8 = 0xffffffff;
      local_570.ID = local_88;
      bVar32 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>_>
               ::RemoveAndCopyValue(&this->StorageHandleIndex,&local_570,(int *)&local_5c8);
      uVar12 = local_5c8;
      if (((bVar32) && (-1 < (int)local_5c8)) &&
         ((int)local_5c8 < *(int *)&(this->Storage).field_0x28)) {
        if ((*(int *)&(this->Storage).field_0x28 <= (int)local_5c8) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar32)) {
          pcVar10 = (code *)swi(3);
          uVar34 = (*pcVar10)();
          return uVar34;
        }
        puVar9 = *(undefined1 **)&(this->Storage).field_0x20;
        puVar47 = &(this->Storage).field_0x10;
        if (puVar9 != (undefined1 *)0x0) {
          puVar47 = puVar9;
        }
        uVar46 = uVar12;
        if ((int)uVar12 < 0) {
          uVar46 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar47 + (longlong)((int)uVar46 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
          TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          ::RemoveAt(&this->Storage,uVar12,1);
        }
      }
      if (local_78 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        Core::Private::Function::CheckCallable(local_78);
        pFVar45 = local_78;
        pFVar41 = &local_68;
        if (pFStack_50 !=
            (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
             *)0x0) {
          pFVar41 = pFStack_50;
        }
        uVar39 = (**(code **)((longlong)*pFVar41 + 8))();
        (*(code *)pFVar45)(uVar39);
      }
      uVar34 = uVar34 + 1;
    }
    local_4c0 = pFVar45;
    if (local_78 ==
        (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
         *)0x0) goto LAB_14318a299;
    pFVar45 = &local_68;
    pFVar41 = pFStack_50;
  }
  else {
    local_138 = (int *)0x0;
    local_128 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                 *)0x0;
    pFStack_100 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                   *)0x0;
    while( true ) {
      pFVar41 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                 *)0x0;
      aVar8 = ((this->RemoveRequests).Tail)->Next;
      pFVar45 = local_510;
      if (aVar8 == (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                    )0x0) break;
      local_548 = *(int **)((longlong)aVar8 + 0x10);
      local_538 = *(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    **)((longlong)aVar8 + 0x20);
      local_510 = *(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    **)((longlong)aVar8 + 0x48);
      *(undefined8 *)((longlong)aVar8 + 0x48) = 0;
      local_528 = *(undefined4 *)((longlong)aVar8 + 0x30);
      uStack_524 = *(undefined4 *)((longlong)aVar8 + 0x34);
      iStack_520 = *(int *)((longlong)aVar8 + 0x38);
      iStack_51c = *(int *)((longlong)aVar8 + 0x3c);
      local_518 = *(undefined8 *)((longlong)aVar8 + 0x40);
      if (local_538 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        *(undefined8 *)((longlong)aVar8 + 0x20) = 0;
      }
      local_508 = '\x01';
      if (*(longlong *)((longlong)aVar8 + 0x20) != 0) {
        plVar43 = *(longlong **)((longlong)aVar8 + 0x48);
        if (*(longlong **)((longlong)aVar8 + 0x48) == (longlong *)0x0) {
          plVar43 = (longlong *)((longlong)aVar8 + 0x30);
        }
        (**(code **)(*plVar43 + 0x10))();
      }
      FMemory::Free((this->RemoveRequests).Tail);
      pFVar21 = pFStack_100;
      FVar40 = local_118[1];
      FVar7 = local_118[0];
      auVar19 = auStack_120;
      pFVar18 = local_128;
      pFVar13 = local_538;
      (this->RemoveRequests).Tail = (FNode *)aVar8;
      local_418 = local_508;
      pFVar45 = local_510;
      if (local_508 == '\0') break;
      local_438[0]._4_4_ = uStack_524;
      local_438[0]._0_4_ = local_528;
      local_438[1]._4_4_ = iStack_51c;
      local_438[1]._0_4_ = iStack_520;
      local_458 = local_548;
      local_448 = local_538;
      pFStack_420 = local_510;
      local_428 = local_518;
      if (local_538 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        local_538 = pFVar41;
      }
      pFVar45 = pFVar41;
      if (local_508 == '\0') break;
      uVar39 = CONCAT44(uStack_104,local_108);
      local_128 = pFVar13;
      auStack_120[0] = auStack_440[0];
      auStack_120[1] = auStack_440[1];
      auStack_120[2] = auStack_440[2];
      auStack_120[3] = auStack_440[3];
      auStack_120[4] = auStack_440[4];
      auStack_120[5] = auStack_440[5];
      auStack_120[6] = auStack_440[6];
      auStack_120[7] = auStack_440[7];
      auVar20 = auStack_120;
      local_428._0_4_ = (undefined4)local_518;
      local_428._4_4_ = (undefined4)((ulonglong)local_518 >> 0x20);
      local_108 = (undefined4)local_428;
      uStack_104 = local_428._4_4_;
      pFStack_100 = local_510;
      local_138 = local_548;
      local_118[0] = local_438[0];
      local_118[1] = local_438[1];
      local_448 = pFVar18;
      auStack_120[0] = auVar19[0];
      auStack_120[1] = auVar19[1];
      auStack_120[2] = auVar19[2];
      auStack_120[3] = auVar19[3];
      auStack_120[4] = auVar19[4];
      auStack_120[5] = auVar19[5];
      auStack_120[6] = auVar19[6];
      auStack_120[7] = auVar19[7];
      auStack_440[0] = auStack_120[0];
      auStack_440[1] = auStack_120[1];
      auStack_440[2] = auStack_120[2];
      auStack_440[3] = auStack_120[3];
      auStack_440[4] = auStack_120[4];
      auStack_440[5] = auStack_120[5];
      auStack_440[6] = auStack_120[6];
      auStack_440[7] = auStack_120[7];
      local_438[0] = FVar7;
      local_438[1] = FVar40;
      local_428 = uVar39;
      pFStack_420 = pFVar21;
      local_510 = pFVar41;
      auStack_120 = auVar20;
      if (pFVar18 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        pFVar45 = local_438;
        if (pFVar21 !=
            (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
             *)0x0) {
          pFVar45 = pFVar21;
        }
        (**(code **)((longlong)*pFVar45 + 0x10))();
      }
      local_5c4 = 0xffffffff;
      uStack_5a8 = CONCAT44(uStack_5a8._4_4_,0xffffffff);
      local_5b0 = pFVar41;
      local_578.ID = (ulong64)local_138;
      bVar32 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>_>
               ::RemoveAndCopyValue(&this->StorageHandleIndex,&local_578,(int *)&local_5c4);
      uVar12 = local_5c4;
      if (((bVar32) && (-1 < (int)local_5c4)) &&
         ((int)local_5c4 < *(int *)&(this->Storage).field_0x28)) {
        if ((*(int *)&(this->Storage).field_0x28 <= (int)local_5c4) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar32)) {
          pcVar10 = (code *)swi(3);
          uVar34 = (*pcVar10)();
          return uVar34;
        }
        puVar9 = *(undefined1 **)&(this->Storage).field_0x20;
        puVar47 = &(this->Storage).field_0x10;
        if (puVar9 != (undefined1 *)0x0) {
          puVar47 = puVar9;
        }
        uVar46 = uVar12;
        if ((int)uVar12 < 0) {
          uVar46 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar47 + (longlong)((int)uVar46 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
          puVar2 = (undefined8 *)((longlong)(int)uVar12 * 0x70 + *(longlong *)&this->Storage);
          local_5b0 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       *)*puVar2;
          uStack_5a8 = puVar2[1];
          TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          ::RemoveAt(&this->Storage,uVar12,1);
        }
      }
      if (local_128 !=
          (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
           *)0x0) {
        Core::Private::Function::CheckCallable(local_128);
        pFVar45 = local_128;
        pFVar41 = local_118;
        if (pFStack_100 !=
            (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
             *)0x0) {
          pFVar41 = pFStack_100;
        }
        uVar39 = (**(code **)((longlong)*pFVar41 + 8))();
        (*(code *)pFVar45)(uVar39);
      }
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )param_2;
      if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    )0x0) {
        FVar40 = FVar7;
      }
      if ((ulonglong)FVar40 <= &local_5b0) {
        FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )param_2;
        if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                      )0x0) {
          FVar40 = FVar7;
        }
        if ((&local_5b0 <
             (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              **)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar40)) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar32)) {
          pcVar10 = (code *)swi(3);
          uVar34 = (*pcVar10)();
          return uVar34;
        }
      }
      iVar36 = param_2->ArrayNum;
      if (iVar36 == param_2->ArrayMax) {
        iVar36 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
                           (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar36 + 1;
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )param_2;
      if (FVar7 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    )0x0) {
        FVar40 = FVar7;
      }
      uVar34 = uVar34 + 1;
      puVar2 = (undefined8 *)((longlong)FVar40 + (longlong)iVar36 * 0x10);
      *puVar2 = local_5b0;
      puVar2[1] = uStack_5a8;
    }
    local_510 = pFVar45;
    if (local_128 ==
        (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
         *)0x0) goto LAB_14318a299;
    pFVar45 = local_118;
    pFVar41 = pFStack_100;
  }
  if (pFVar41 !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
       *)0x0) {
    pFVar45 = pFVar41;
  }
  (**(code **)((longlong)*pFVar45 + 0x10))();
LAB_14318a299:
  if ((local_598 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_598 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_598 & 4) != 0) {
    FThreadStats::AddMessage(local_5a0,CycleScopeEnd);
  }
  return uVar34;
}

