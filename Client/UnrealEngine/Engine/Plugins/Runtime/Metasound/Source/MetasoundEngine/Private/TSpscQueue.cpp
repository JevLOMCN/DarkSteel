// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// ~TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory> @ 14b34f7e0

void __thiscall
TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::
~TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>
          (TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory> *this)

{
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar2;
  undefined8 *puVar3;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
          )this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
              *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
                   )0x0) {
    aVar1 = *(atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
              *)aVar2;
    puVar3 = *(undefined8 **)((longlong)aVar2 + 0x20);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

// ~TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> @ 14b34f870

void __thiscall
TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::
~TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>
          (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *this)

{
  byte bVar1;
  atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*> aVar5;
  bool bVar6;
  
  aVar2 = this->Tail;
  aVar5 = (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
           )this->First;
  do {
    aVar3 = *(atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
              *)aVar5;
    FMemory::Free((void *)aVar5);
    bVar6 = aVar5 != aVar2;
    aVar5 = aVar3;
  } while (bVar6);
  while( true ) {
    if (aVar3 == (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
                  )0x0) {
      return;
    }
    aVar2 = *(atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
              *)aVar3;
    bVar1 = *(uchar *)((longlong)aVar3 + 0x20);
    if ((0xc < (ulonglong)bVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])((uchar *)((longlong)aVar3 + 0x10));
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

