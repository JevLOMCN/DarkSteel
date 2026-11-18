// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// GetAudioOutputs @ 14b3ada40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::FQuadAudioChannelConfigurationInfo::GetAudioOutputs
          (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar1;
  undefined1 auStackY_158 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> local_118;
  TOutputDataVertex<Metasound::FAudioBuffer> local_f8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_d8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  undefined **local_98 [4];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pTVar1 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_118,&WavePlayerVertexNames::OutputAudioFrontLeftName,
                      &FDataVertexMetadata::EmptyBasic);
  local_98[1] = *(undefined ***)&pTVar1->field_0x8;
  local_98[2] = *(undefined ***)&pTVar1->field_0x10;
  local_98[3]._0_4_ = *(undefined4 *)&pTVar1->field_0x18;
  local_98[0] = &___7FOutputDataVertex_Metasound__6B_;
  pTVar1 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_f8,&WavePlayerVertexNames::OutputAudioFrontRightName,
                      &FDataVertexMetadata::EmptyBasic);
  local_70 = *(undefined8 *)&pTVar1->field_0x8;
  local_68 = *(undefined8 *)&pTVar1->field_0x10;
  local_60 = *(undefined4 *)&pTVar1->field_0x18;
  local_78 = &___7FOutputDataVertex_Metasound__6B_;
  pTVar1 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_d8,&WavePlayerVertexNames::OutputAudioSideLeftName,
                      &FDataVertexMetadata::EmptyBasic);
  local_50 = *(undefined8 *)&pTVar1->field_0x8;
  local_48 = *(undefined8 *)&pTVar1->field_0x10;
  local_40 = *(undefined4 *)&pTVar1->field_0x18;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  pTVar1 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&WavePlayerVertexNames::OutputAudioSideRightName,
                      &FDataVertexMetadata::EmptyBasic);
  local_30 = *(undefined8 *)&pTVar1->field_0x8;
  local_28 = *(undefined8 *)&pTVar1->field_0x10;
  local_20 = *(undefined4 *)&pTVar1->field_0x18;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_38 = &___7FOutputDataVertex_Metasound__6B_;
  __return_storage_ptr__->ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,0,&__return_storage_ptr__->AllocatorInstance,4,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FOutputDataVertex *)local_98,4);
  return __return_storage_ptr__;
}

