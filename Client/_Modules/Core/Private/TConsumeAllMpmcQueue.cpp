// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ProduceItem<UE::Private::FOutputDeviceItem> @ 1418b61c0

EConsumeAllMpmcQueueResult __thiscall
UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::
ProduceItem<UE::Private::FOutputDeviceItem>
          (TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
           *this,FOutputDeviceItem *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  EConsumeAllMpmcQueueResult EVar4;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar5;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar6;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar7;
  
  aVar5 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
           )TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(0x68,8);
  *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
    *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
               )0x0;
  bVar1 = (param_1->Value).TypeIndex;
  *(byte *)((longlong)aVar5 + 0x60) = bVar1;
  if ((2 < bVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])
            ((atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
              *)((longlong)aVar5 + 8),param_1);
  aVar6 = this->Head;
  do {
    aVar7 = aVar6;
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)aVar5 = aVar7;
    LOCK();
    aVar6 = this->Head;
    bVar3 = aVar7 == aVar6;
    if (bVar3) {
      this->Head = aVar5;
      aVar6 = aVar7;
    }
    UNLOCK();
  } while (!bVar3);
  return (EConsumeAllMpmcQueueResult)
         (aVar7 == (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                    )0x0);
}

// ~TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator> @ 1418bdcd0

void __thiscall
UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::
~TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
          (TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
           *this)

{
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar1;
  byte bVar2;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->Head !=
      (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
       )0x0) {
    LOCK();
    aVar1 = this->Head;
    this->Head = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                  )0x0;
    UNLOCK();
    while (aVar1 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                     )0x0) {
      aVar3 = *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                *)aVar1;
      bVar2 = *(byte *)((longlong)aVar1 + 0x60);
      if ((2 < (ulonglong)bVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])((undefined8 *)((longlong)aVar1 + 8));
      TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Free((void *)aVar1);
      aVar1 = aVar3;
    }
  }
  return;
}

