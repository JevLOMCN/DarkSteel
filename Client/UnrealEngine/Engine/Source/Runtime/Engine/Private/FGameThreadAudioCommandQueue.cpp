// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// ExecuteTick @ 1476731e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::ExecuteTick
          (FGameThreadAudioCommandQueue *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  TStatId TVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_f8 [48];
  TStatId local_c8;
  bool local_b8;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  TStatIdData *local_78;
  char local_68;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  TStatIdData *local_28;
  char local_18;
  
  TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::Dequeue
            (&this->Commands,(TOptional<AudioCommandPrivate::FAudioCommand> *)local_f8);
  if (local_b8 != false) {
    if ((local_b8 == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      TVar4.StatIdPtr = local_c8.StatIdPtr;
      if ((local_b8 == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FAudioCommand::Execute((TUniqueFunction<void___cdecl(void)> *)local_f8,TVar4);
      aVar2 = *(atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *)
               (this->Commands).Tail;
      if (aVar2 == (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)0x0) {
        local_68 = '\0';
      }
      else {
        local_58 = *(longlong *)((longlong)aVar2 + 0x10);
        local_30 = *(longlong **)((longlong)aVar2 + 0x38);
        *(undefined8 *)((longlong)aVar2 + 0x38) = 0;
        local_48 = *(undefined4 *)((longlong)aVar2 + 0x20);
        uStack_44 = *(undefined4 *)((longlong)aVar2 + 0x24);
        uStack_40 = *(undefined4 *)((longlong)aVar2 + 0x28);
        uStack_3c = *(undefined4 *)((longlong)aVar2 + 0x2c);
        local_38 = *(undefined8 *)((longlong)aVar2 + 0x30);
        if (*(longlong *)((longlong)aVar2 + 0x10) != 0) {
          *(undefined8 *)((longlong)aVar2 + 0x10) = 0;
        }
        local_28 = *(TStatIdData **)((longlong)aVar2 + 0x40);
        local_18 = '\x01';
        if (*(longlong *)((longlong)aVar2 + 0x10) != 0) {
          plVar6 = *(longlong **)((longlong)aVar2 + 0x38);
          if (*(longlong **)((longlong)aVar2 + 0x38) == (longlong *)0x0) {
            plVar6 = (longlong *)((longlong)aVar2 + 0x20);
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        (this->Commands).Tail = aVar2;
        if (local_18 != '\0') {
          LOCK();
          paVar1 = &(this->Commands).NumElems;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
        }
        local_68 = local_18;
        if (local_18 != '\0') {
          local_a8 = local_58;
          local_80 = local_30;
          local_30 = (longlong *)0x0;
          local_98 = local_48;
          uStack_94 = uStack_44;
          uStack_90 = uStack_40;
          uStack_8c = uStack_3c;
          local_88 = local_38;
          if (local_58 != 0) {
            local_58 = 0;
          }
          local_78 = local_28;
          if (local_58 != 0) {
            (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))(&local_48);
          }
        }
      }
      if (local_68 == '\0') {
        if (local_b8 != false) {
          if (local_f8._0_8_ != 0) {
            plVar6 = (longlong *)(local_f8 + 0x10);
            if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
              plVar6 = (longlong *)local_f8._40_8_;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
          local_b8 = false;
          goto LAB_1476733f6;
        }
      }
      else {
        if ((local_b8 != false) && (local_f8._0_8_ != 0)) {
          plVar6 = (longlong *)(local_f8 + 0x10);
          if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
            plVar6 = (longlong *)local_f8._40_8_;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        local_f8._20_4_ = uStack_94;
        local_f8._16_4_ = local_98;
        local_f8._28_4_ = uStack_8c;
        local_f8._24_4_ = uStack_90;
        local_f8._0_8_ = local_a8;
        local_f8._40_8_ = local_80;
        local_80 = (longlong *)0x0;
        local_f8._32_8_ = local_88;
        if (local_a8 != 0) {
          local_a8 = 0;
        }
        local_c8.StatIdPtr = local_78;
        local_b8 = true;
LAB_1476733f6:
      }
      if ((local_68 != '\0') && (local_a8 != 0)) {
        plVar6 = (longlong *)&local_98;
        if (local_80 != (longlong *)0x0) {
          plVar6 = local_80;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
    } while (local_b8 != false);
  }
  return;
}

// DiagnosticMessage @ 147673450

FString * __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::DiagnosticMessage
          (FGameThreadAudioCommandQueue *this,FString *__return_storage_ptr__)

{
  FLazyName::ToString(&DiagnosticName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DiagnosticContext @ 147673480

FName __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::DiagnosticContext
          (FGameThreadAudioCommandQueue *this,bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000011;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  FLazyName::Resolve(&DiagnosticName);
  return FVar1;
}

// ~FGameThreadAudioCommandQueue @ 14768a630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::~FGameThreadAudioCommandQueue
          (FGameThreadAudioCommandQueue *this)

{
  TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::
  ~TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>(&this->Commands);
  FTickFunction::~FTickFunction((FTickFunction *)this);
  return;
}

// FlushCommands @ 1476aa0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands(FGameThreadAudioCommandQueue *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar3;
  TStatId TVar4;
  bool bVar5;
  FTSTicker *this_00;
  code **ppcVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [16];
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *local_1c0;
  TStatId local_1b8;
  bool local_1a8;
  code *local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  code *local_178;
  code *local_170;
  TStatIdData *local_168;
  char local_158;
  code *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_128;
  code *local_120;
  TStatIdData *local_118;
  char local_108;
  TWeakPtr<FTSTicker::FElement,1> local_f8;
  code *local_e8;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code **local_c0;
  TStatIdData *local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  TStatIdData *local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::Dequeue
            (&this->Commands,(TOptional<AudioCommandPrivate::FAudioCommand> *)local_1e8);
  do {
    if (local_1a8 == false) {
      return;
    }
    bVar5 = IsInAudioThread();
    if (bVar5) {
      if (local_1a8 == false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((local_1a8 == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_a8 = (code *)local_1e8._0_8_;
      local_80 = (code **)local_1c0;
      local_1c0 = (code *)0x0;
      local_98 = local_1d8;
      pcStack_90 = pcStack_1d0;
      local_88 = local_1c8;
      if ((code *)local_1e8._0_8_ != (code *)0x0) {
        local_1e8._0_8_ = (code *)0x0;
      }
      local_78 = local_1b8.StatIdPtr;
      this_00 = FTSTicker::GetCoreTicker();
      local_e8 = local_a8;
      local_c0 = local_80;
      local_80 = (code **)0x0;
      local_d8 = local_98;
      pcStack_d0 = pcStack_90;
      local_c8 = local_88;
      if (local_a8 != (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      local_b8 = local_78;
      local_68[0] = (code *)0x0;
      local_40 = (code **)0x0;
      local_40 = FMemory::Malloc(0x50,0x10);
      *local_40 = (code *)&
                          ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ___YAXPEB_W__QEAV1_6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
      ;
      ppcVar6 = local_40 + 2;
      *ppcVar6 = local_e8;
      local_40[7] = (code *)local_c0;
      local_c0 = (code **)0x0;
      local_40[4] = local_d8;
      local_40[5] = pcStack_d0;
      local_40[6] = local_c8;
      if (*ppcVar6 != (code *)0x0) {
        local_e8 = (code *)0x0;
      }
      local_40[8] = (code *)local_b8;
      if (ppcVar6 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                      ::Call;
      }
      FTSTicker::AddTicker
                (this_00,&local_f8,L"FAudioThread::RunCommandOnGameThread",0.0,
                 (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_f8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        ppcVar6 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar6 = local_40;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
      if (local_e8 != (code *)0x0) {
        ppcVar6 = &local_d8;
        if (local_c0 != (code **)0x0) {
          ppcVar6 = local_c0;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
      if (local_a8 != (code *)0x0) {
        ppcVar6 = &local_98;
        if (local_80 != (code **)0x0) {
          ppcVar6 = local_80;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
    else {
      if ((local_1a8 == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TVar4.StatIdPtr = local_1b8.StatIdPtr;
      if ((local_1a8 == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FAudioCommand::Execute((TUniqueFunction<void___cdecl(void)> *)local_1e8,TVar4);
    }
    aVar3 = *(atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *)
             (this->Commands).Tail;
    if (aVar3 == (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)0x0) {
      local_158 = '\0';
    }
    else {
      local_148 = *(code **)((longlong)aVar3 + 0x10);
      local_120 = *(code **)((longlong)aVar3 + 0x38);
      *(undefined8 *)((longlong)aVar3 + 0x38) = 0;
      local_138 = *(undefined4 *)((longlong)aVar3 + 0x20);
      uStack_134 = *(undefined4 *)((longlong)aVar3 + 0x24);
      uStack_130 = *(undefined4 *)((longlong)aVar3 + 0x28);
      uStack_12c = *(undefined4 *)((longlong)aVar3 + 0x2c);
      local_128 = *(code **)((longlong)aVar3 + 0x30);
      if (*(code **)((longlong)aVar3 + 0x10) != (code *)0x0) {
        *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      }
      local_118 = *(TStatIdData **)((longlong)aVar3 + 0x40);
      local_108 = '\x01';
      if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
        plVar7 = *(longlong **)((longlong)aVar3 + 0x38);
        if (*(longlong **)((longlong)aVar3 + 0x38) == (longlong *)0x0) {
          plVar7 = (longlong *)((longlong)aVar3 + 0x20);
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      (this->Commands).Tail = aVar3;
      if (local_108 != '\0') {
        LOCK();
        paVar1 = &(this->Commands).NumElems;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
      }
      local_158 = local_108;
      if (local_108 != '\0') {
        local_198 = local_148;
        local_170 = local_120;
        local_120 = (code *)0x0;
        local_188 = local_138;
        uStack_184 = uStack_134;
        uStack_180 = uStack_130;
        uStack_17c = uStack_12c;
        local_178 = local_128;
        if (local_148 != (code *)0x0) {
          local_148 = (code *)0x0;
        }
        local_168 = local_118;
        if (local_148 != (code *)0x0) {
          (**(code **)(CONCAT44(uStack_134,local_138) + 0x10))(&local_138);
        }
      }
    }
    if (local_158 == '\0') {
      if (local_1a8 != false) {
        if ((code *)local_1e8._0_8_ != (code *)0x0) {
          pcVar8 = (code *)(local_1e8 + 0x10);
          if (local_1c0 != (code *)0x0) {
            pcVar8 = local_1c0;
          }
          (**(code **)(*(longlong *)pcVar8 + 0x10))();
        }
        local_1a8 = false;
        goto LAB_1476aa512;
      }
    }
    else {
      if ((local_1a8 != false) && ((code *)local_1e8._0_8_ != (code *)0x0)) {
        pcVar8 = (code *)(local_1e8 + 0x10);
        if (local_1c0 != (code *)0x0) {
          pcVar8 = local_1c0;
        }
        (**(code **)(*(longlong *)pcVar8 + 0x10))();
      }
      local_1e8._0_8_ = local_198;
      local_1c0 = local_170;
      local_170 = (code *)0x0;
      local_1d8 = (code *)CONCAT44(uStack_184,local_188);
      pcStack_1d0 = (code *)CONCAT44(uStack_17c,uStack_180);
      local_1c8 = local_178;
      if (local_198 != (code *)0x0) {
        local_198 = (code *)0x0;
      }
      local_1b8.StatIdPtr = local_168;
      local_1a8 = true;
LAB_1476aa512:
    }
    if ((local_158 != '\0') && (local_198 != (code *)0x0)) {
      pcVar8 = (code *)&local_188;
      if (local_170 != (code *)0x0) {
        pcVar8 = local_170;
      }
      (**(code **)(*(longlong *)pcVar8 + 0x10))();
    }
  } while( true );
}

// OnWorldActorsInitialized @ 1476bdb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::OnWorldActorsInitialized
          (FGameThreadAudioCommandQueue *this,FActorsInitializedParams *param_1)

{
  FTickFunction::UnRegisterTickFunction((FTickFunction *)this);
  if (param_1->World != (UWorld *)0x0) {
    FTickFunction::RegisterTickFunction
              ((FTickFunction *)this,(param_1->World->PersistentLevel).field0_0x0.DebugPtr);
  }
  return;
}

// RunCommandOnGameThread @ 1476c5660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001476c57ed) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001476c57f1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::RunCommandOnGameThread
          (FGameThreadAudioCommandQueue *this,TUniqueFunction<void___cdecl(void)> *param_1,
          TStatId param_2)

{
  TTypeCompatibleBytes<AudioCommandPrivate::FAudioCommand> *pTVar1;
  atomic<int> *paVar2;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  uchar *puVar5;
  bool bVar6;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  TStatIdData *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar6 = IsAudioThreadRunning();
  if (bVar6) {
    bVar6 = IsInAudioThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInAudioThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                           ,0x93,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68 = *(longlong *)param_1;
    local_40 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_78 = *(undefined8 *)&param_1->field_0x20;
    local_70 = 0;
    local_48 = local_78;
    local_38 = param_2.StatIdPtr;
    local_88 = *(longlong *)&param_1->field_0x10;
    uStack_80 = *(undefined8 *)&param_1->field_0x18;
    local_58 = local_88;
    uStack_50 = uStack_80;
    local_98 = local_68;
    if (local_68 != 0) {
      *(undefined8 *)param_1 = 0;
      local_98 = 0;
    }
    aVar7 = (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)
            (this->Commands).First;
    if (aVar7 == (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)
                 (this->Commands).TailCopy) {
      aVar3 = (this->Commands).Tail;
      aVar7 = (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)
              (this->Commands).First;
      (this->Commands).TailCopy = (FNode *)aVar3;
      if (aVar7 == aVar3) {
        aVar7 = (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)
                FMemory::Malloc(0x50,0x10);
        *(longlong *)((longlong)aVar7 + 8) = 0;
        pTVar1 = (TTypeCompatibleBytes<AudioCommandPrivate::FAudioCommand> *)
                 ((longlong)aVar7 + 0x10);
        pTVar1->Pad[0] = '\0';
        pTVar1->Pad[1] = '\0';
        pTVar1->Pad[2] = '\0';
        pTVar1->Pad[3] = '\0';
        pTVar1->Pad[4] = '\0';
        pTVar1->Pad[5] = '\0';
        pTVar1->Pad[6] = '\0';
        pTVar1->Pad[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x18);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x20);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x28);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x30);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x38);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x40);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar5 = (uchar *)((longlong)aVar7 + 0x48);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        *(undefined8 *)aVar7 = 0;
      }
      else {
        (this->Commands).First = *(FNode **)aVar7;
        *(undefined8 *)aVar7 = 0;
      }
    }
    else {
      (this->Commands).First = *(FNode **)aVar7;
      *(undefined8 *)aVar7 = 0;
    }
    *(longlong *)
     ((TTypeCompatibleBytes<AudioCommandPrivate::FAudioCommand> *)((longlong)aVar7 + 0x10))->Pad =
         local_68;
    *(undefined8 *)((longlong)aVar7 + 0x38) = local_40;
    local_40 = 0;
    *(undefined4 *)((longlong)aVar7 + 0x20) = (undefined4)local_58;
    *(undefined4 *)((longlong)aVar7 + 0x24) = local_58._4_4_;
    *(undefined4 *)((longlong)aVar7 + 0x28) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)aVar7 + 0x2c) = uStack_50._4_4_;
    *(undefined8 *)((longlong)aVar7 + 0x30) = local_48;
    if (*(longlong *)
         ((TTypeCompatibleBytes<AudioCommandPrivate::FAudioCommand> *)((longlong)aVar7 + 0x10))->Pad
        != 0) {
      local_68 = 0;
    }
    *(TStatIdData **)((longlong)aVar7 + 0x40) = local_38;
    ((this->Commands).Head)->Next = aVar7;
    (this->Commands).Head = (FNode *)aVar7;
    LOCK();
    paVar2 = &(this->Commands).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    if (local_68 != 0) {
      (**(code **)(local_58 + 0x10))();
    }
  }
  else {
    FAudioCommand::Execute(param_1,param_2);
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

