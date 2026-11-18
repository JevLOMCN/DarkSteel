// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// GetAudioOutputs @ 14b3ad990

TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::FMonoAudioChannelConfigurationInfo::GetAudioOutputs
          (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar1;
  undefined **local_48 [4];
  TOutputDataVertex<Metasound::FAudioBuffer> local_28;
  
  pTVar1 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_28,&WavePlayerVertexNames::OutputAudioMonoName,
                      &FDataVertexMetadata::EmptyBasic);
  local_48[1] = *(undefined ***)&pTVar1->field_0x8;
  local_48[2] = *(undefined ***)&pTVar1->field_0x10;
  local_48[3]._0_4_ = *(undefined4 *)&pTVar1->field_0x18;
  local_48[0] = &___7FOutputDataVertex_Metasound__6B_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FOutputDataVertex *)local_48,1);
  return __return_storage_ptr__;
}

