// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FParsedHandshakeData @ 14808a520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

FParsedHandshakeData * __thiscall
StatelessConnectHandlerComponent::FParsedHandshakeData::FParsedHandshakeData
          (FParsedHandshakeData *this)

{
  this->RemoteMinVersion = Latest;
  this->RemoteCurVersion = Latest;
  this->RemoteNetworkVersion = 0;
  this->RemoteNetworkFeatures = None;
  this->HandshakePacketType = InitialPacket;
  this->RemoteSentHandshakePacketCount = '\0';
  this->bRestartHandshake = false;
  this->SecretId = '\0';
  this->Timestamp = 0.0;
  this->Cookie[0] = '\0';
  this->Cookie[1] = '\0';
  this->Cookie[2] = '\0';
  this->Cookie[3] = '\0';
  this->Cookie[4] = '\0';
  this->Cookie[5] = '\0';
  this->Cookie[6] = '\0';
  this->Cookie[7] = '\0';
  this->Cookie[8] = '\0';
  this->Cookie[9] = '\0';
  this->Cookie[10] = '\0';
  this->Cookie[0xb] = '\0';
  this->Cookie[0xc] = '\0';
  this->Cookie[0xd] = '\0';
  this->Cookie[0xe] = '\0';
  this->Cookie[0xf] = '\0';
  this->Cookie[0x10] = '\0';
  this->Cookie[0x11] = '\0';
  this->Cookie[0x12] = '\0';
  this->Cookie[0x13] = '\0';
  this->OrigCookie[0] = '\0';
  this->OrigCookie[1] = '\0';
  this->OrigCookie[2] = '\0';
  this->OrigCookie[3] = '\0';
  this->OrigCookie[4] = '\0';
  this->OrigCookie[5] = '\0';
  this->OrigCookie[6] = '\0';
  this->OrigCookie[7] = '\0';
  this->OrigCookie[8] = '\0';
  this->OrigCookie[9] = '\0';
  this->OrigCookie[10] = '\0';
  this->OrigCookie[0xb] = '\0';
  this->OrigCookie[0xc] = '\0';
  this->OrigCookie[0xd] = '\0';
  this->OrigCookie[0xe] = '\0';
  this->OrigCookie[0xf] = '\0';
  this->OrigCookie[0x10] = '\0';
  this->OrigCookie[0x11] = '\0';
  this->OrigCookie[0x12] = '\0';
  this->OrigCookie[0x13] = '\0';
  return this;
}

