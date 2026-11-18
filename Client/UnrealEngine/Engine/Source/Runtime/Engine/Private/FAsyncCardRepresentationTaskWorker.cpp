// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoWork @ 147fc59d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147fc5a86) */
/* WARNING: Removing unreachable block (ram,0x000147fc5a75) */
/* WARNING: Removing unreachable block (ram,0x000147fc5a8a) */
/* WARNING: Removing unreachable block (ram,0x000147fc5ac7) */
/* WARNING: Removing unreachable block (ram,0x000147fc5aa4) */
/* WARNING: Removing unreachable block (ram,0x000147fc5abd) */
/* WARNING: Removing unreachable block (ram,0x000147fc5ac2) */
/* WARNING: Removing unreachable block (ram,0x000147fc5acf) */
/* WARNING: Removing unreachable block (ram,0x000147fc5aff) */
/* WARNING: Removing unreachable block (ram,0x000147fc5b08) */
/* WARNING: Removing unreachable block (ram,0x000147fc5b32) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x000147fc5b36 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncCardRepresentationTaskWorker::DoWork(FAsyncCardRepresentationTaskWorker *this)

{
  undefined4 uVar1;
  undefined1 auStackY_108 [32];
  FQueuedThreadPool local_a8 [2];
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FQueuedThreadPool::FQueuedThreadPool(local_a8);
  uVar1 = uStack_7c;
  uStack_40 = uStack_80;
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_88 = 0x5185cfc0;
  uStack_84 = 1;
  uStack_80 = 0x8ff;
  uStack_7c = uStack_3c;
  local_58 = 0;
  uStack_50 = uStack_90;
  uStack_3c = uVar1;
  uStack_30 = 0;
  LOCK();
  local_64._0_1_ = 1;
  local_64._1_1_ = 0;
  UNLOCK();
  local_64._1_1_ = 0;
  local_64._0_1_ = 1;
  uStack_30 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0x8ff;
  uStack_84 = 1;
  local_88 = 0x5185cfc0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FQueuedThreadPoolTaskGraphWrapper::FQueuedThreadPoolTaskGraphWrapper'::__l2::<lambda_1>,enum_ENamedThreads::Type,enum_EQueuedWorkPriority>
             ::Call;
  local_a8[0] = (FQueuedThreadPool)&___7FQueuedThreadPoolTaskGraphWrapper__6B_;
  (*(code *)PTR_Destroy_15185cfd0)();
  FQueuedThreadPool::~FQueuedThreadPool(local_a8);
  return;
}

