// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CreatePacket @ 1485e5140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> __thiscall
FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::CreatePacket
          (TBackend<FSkeletalMeshUpdatePacketGPUSkin> *this)

{
  undefined8 *puVar1;
  FSkeletalMeshUpdatePacket *in_RDX;
  
  puVar1 = ::operator_new(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x33) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x53) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5b) = 0;
    *(undefined8 *)((longlong)puVar1 + 99) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x73) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x7f) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
    *puVar1 = &___7FSkeletalMeshUpdatePacketGPUSkin__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 1;
    FGPUBaseSkinVertexFactory::FUpdateScope::FUpdateScope((FUpdateScope *)(puVar1 + 4));
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>)in_RDX;
}

// Replay @ 1485e5200

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
FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Replay
          (TBackend<FSkeletalMeshUpdatePacketGPUSkin> *this,FRHICommandList *param_1,
          FSkeletalMeshUpdateChannel *param_2,FSkeletalMeshUpdatePacket *param_3)

{
  Replay<FSkeletalMeshUpdatePacketGPUSkin>
            (param_2,param_1,(FSkeletalMeshUpdatePacketGPUSkin *)param_3);
  return;
}

// CreatePacket @ 1486762d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> __thiscall
FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::CreatePacket
          (TBackend<FSkeletalMeshUpdatePacketNanite> *this)

{
  undefined8 *puVar1;
  FSkeletalMeshUpdatePacket *in_RDX;
  
  puVar1 = ::operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    in_RDX->_padding_ = (longlong)puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = &___7FSkeletalMeshUpdatePacketNanite__6B_;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    return (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>)in_RDX;
}

// Replay @ 148676350

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
FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Replay
          (TBackend<FSkeletalMeshUpdatePacketNanite> *this,FRHICommandList *param_1,
          FSkeletalMeshUpdateChannel *param_2,FSkeletalMeshUpdatePacket *param_3)

{
  Replay<FSkeletalMeshUpdatePacketNanite>
            (param_2,param_1,(FSkeletalMeshUpdatePacketNanite *)param_3);
  return;
}

