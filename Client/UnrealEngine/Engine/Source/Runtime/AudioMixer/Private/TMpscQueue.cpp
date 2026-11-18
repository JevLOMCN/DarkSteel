// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// ~TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory> @ 1464db280

void __thiscall
TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::
~TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>
          (TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory> *this)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
              *)aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)(pFVar2->Value).Pad != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x28);
      puVar4 = (pFVar2->Value).Pad + 0x10;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

// ~TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory> @ 1464db300

void __thiscall
TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::
~TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>
          (TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory> *this)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while( true ) {
    if (aVar1 == (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
                  )0x0) {
      return;
    }
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
              *)aVar1;
    pFVar2 = this->Tail;
    uVar5 = (ulonglong)(pFVar2->Value).Pad[0x18];
    if ((1 < uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&pFVar2->Value);
    FMemory::Free(this->Tail);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~TMpscQueue<TFunction<void___cdecl(void)>,FMemory> @ 1464db3c0

void __thiscall
TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::
~TMpscQueue<TFunction<void___cdecl(void)>,FMemory>
          (TMpscQueue<TFunction<void___cdecl(void)>,FMemory> *this)

{
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)(pFVar2->Value).Pad != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x28);
      puVar4 = (pFVar2->Value).Pad + 0x10;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

// Dequeue @ 1464f9630

TOptional<Audio::FMixerSourceManager::FAudioMixerThreadCommand> * __thiscall
TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::Dequeue
          (TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory> *this,
          TOptional<Audio::FMixerSourceManager::FAudioMixerThreadCommand> *__return_storage_ptr__)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  bool local_38;
  char *local_30;
  ulong64 local_28;
  bool local_18;
  
  aVar1 = this->Tail->Next;
  if (aVar1 == (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
                )0x0) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    lVar3 = *(longlong *)((longlong)aVar1 + 0x10);
    local_40 = *(undefined8 *)((longlong)aVar1 + 0x38);
    *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
    local_58 = *(undefined4 *)((longlong)aVar1 + 0x20);
    uStack_54 = *(undefined4 *)((longlong)aVar1 + 0x24);
    uStack_50 = *(undefined4 *)((longlong)aVar1 + 0x28);
    uStack_4c = *(undefined4 *)((longlong)aVar1 + 0x2c);
    local_48 = *(undefined8 *)((longlong)aVar1 + 0x30);
    if (lVar3 != 0) {
      *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
    }
    local_38 = *(bool *)((longlong)aVar1 + 0x40);
    local_30 = *(char **)((longlong)aVar1 + 0x48);
    local_28 = *(ulong64 *)((longlong)aVar1 + 0x50);
    local_18 = true;
    if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
      plVar2 = (longlong *)((longlong)aVar1 + 0x20);
      if (*(longlong **)((longlong)aVar1 + 0x38) != (longlong *)0x0) {
        plVar2 = *(longlong **)((longlong)aVar1 + 0x38);
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FMemory::Free(this->Tail);
    this->Tail = (FNode *)aVar1;
    __return_storage_ptr__->bIsSet = local_18;
    if (local_18 != false) {
      *(longlong *)&(__return_storage_ptr__->TypedValue).Function = lVar3;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).Function.field_0x28 = local_40;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x10 = local_58;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x14 = uStack_54;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x18 = uStack_50;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x1c = uStack_4c;
      local_40 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).Function.field_0x20 = local_48;
      if (*(longlong *)&(__return_storage_ptr__->TypedValue).Function != 0) {
        lVar3 = 0;
      }
      (__return_storage_ptr__->TypedValue).bDeferExecution = local_38;
      (__return_storage_ptr__->TypedValue).DebugString = local_30;
      (__return_storage_ptr__->TypedValue).StartExecuteTimeInCycles = local_28;
      if (lVar3 != 0) {
        (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))(&local_58);
      }
    }
  }
  return __return_storage_ptr__;
}

// Dequeue @ 1464f9780

TOptional<TFunction<void___cdecl(void)>_> * __thiscall
TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::Dequeue
          (TMpscQueue<TFunction<void___cdecl(void)>,FMemory> *this,
          TOptional<TFunction<void___cdecl(void)>_> *__return_storage_ptr__)

{
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  bool local_18;
  
  aVar1 = this->Tail->Next;
  if (aVar1 == (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  lVar3 = *(longlong *)((longlong)aVar1 + 0x10);
  local_20 = *(undefined8 *)((longlong)aVar1 + 0x38);
  *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
  local_38 = *(undefined4 *)((longlong)aVar1 + 0x20);
  uStack_34 = *(undefined4 *)((longlong)aVar1 + 0x24);
  uStack_30 = *(undefined4 *)((longlong)aVar1 + 0x28);
  uStack_2c = *(undefined4 *)((longlong)aVar1 + 0x2c);
  local_28 = *(undefined8 *)((longlong)aVar1 + 0x30);
  if (lVar3 != 0) {
    *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
  }
  local_18 = true;
  if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
    plVar2 = (longlong *)((longlong)aVar1 + 0x20);
    if (*(longlong **)((longlong)aVar1 + 0x38) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)aVar1 + 0x38);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FMemory::Free(this->Tail);
  this->Tail = (FNode *)aVar1;
  __return_storage_ptr__->bIsSet = local_18;
  if (local_18 != false) {
    *(longlong *)&__return_storage_ptr__->TypedValue = lVar3;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).field_0x28 = local_20;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x10 = local_38;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x14 = uStack_34;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x18 = uStack_30;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x1c = uStack_2c;
    local_20 = 0;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).field_0x20 = local_28;
    if (*(longlong *)&__return_storage_ptr__->TypedValue != 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  return __return_storage_ptr__;
}

