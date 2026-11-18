// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// PumpCommandQueue @ 14656a180

void __thiscall
Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>::PumpCommandQueue
          (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *this,IListenerBase *param_1)

{
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar1;
  undefined8 *puVar2;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar3;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar4;
  
  aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
           )0x0;
  LOCK();
  aVar1 = (this->Queue).Head;
  (this->Queue).Head =
       (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
        )0x0;
  UNLOCK();
  if (aVar1 != (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                )0x0) {
    do {
      aVar3 = aVar1;
      LOCK();
      aVar1 = *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                *)aVar3;
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
        *)aVar3 = aVar4;
      UNLOCK();
      aVar4 = aVar3;
    } while (aVar1 != (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                       )0x0);
    while (aVar3 != (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                     )0x0) {
      aVar1 = *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                *)aVar3;
      puVar2 = *(undefined8 **)((longlong)aVar3 + 8);
      *(longlong *)((longlong)aVar3 + 8) = 0;
      (**(code **)((longlong)*param_1 + 8))(param_1,puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = *(undefined8 **)((longlong)aVar3 + 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      FMemory::Free((void *)aVar3);
      aVar3 = aVar1;
    }
  }
  return;
}

