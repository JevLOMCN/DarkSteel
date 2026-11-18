// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Reset @ 148053e10

void __thiscall FNetConnectionPacketAnalytics::Reset(FNetConnectionPacketAnalytics *this)

{
  this->bSawPacketLossBurstThisFrame = false;
  this->NumberOfAcksThisFrame = 0;
  this->NumberOfNaksThisFrame = 0;
  this->NumberOfMissingPacketsThisFrame = 0;
  this->NumberOfPacketsThisFrame = 0;
  this->CurrentRunOfDroppedOutPackets = 0;
  this->LongestRunOfDroppedOutPackets = 0;
  this->LongestRunOfDroppedInPackets = 0;
  this->NumberOfFramesWithBurstsOfPacketLoss = 0;
  this->NumberOfFramesWithNoPackets = 0;
  this->NumberOfTrackedFrames = 0;
  return;
}

// Tick @ 148065f80

void __thiscall FNetConnectionPacketAnalytics::Tick(FNetConnectionPacketAnalytics *this)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  this->NumberOfTrackedFrames = this->NumberOfTrackedFrames + 1;
  iVar3 = this->NumberOfAcksThisFrame + this->NumberOfNaksThisFrame;
  iVar4 = this->NumberOfPacketsThisFrame + this->NumberOfMissingPacketsThisFrame;
  if ((iVar4 == 0) && (iVar3 == 0)) {
    this->NumberOfFramesWithNoPackets = this->NumberOfFramesWithNoPackets + 1;
    return;
  }
  bVar1 = *(byte *)this;
  if ((!((byte *)this)->bSawPacketLossBurstThisFrame) &&
     (0 < NetAnalyticsCVars::MinimumNumberOfPacketsForBurstTracking)) {
    fVar5 = 0.0;
    if (0.0 < NetAnalyticsCVars::PercentOfDroppedPacketsToConsiderBurst) {
      fVar6 = 0.0;
      if (0 < iVar4) {
        fVar6 = (float)this->NumberOfMissingPacketsThisFrame / (float)iVar4;
      }
      if (0 < iVar3) {
        fVar5 = (float)this->NumberOfNaksThisFrame / (float)iVar3;
      }
      if ((NetAnalyticsCVars::PercentOfDroppedPacketsToConsiderBurst <= fVar6) ||
         (NetAnalyticsCVars::PercentOfDroppedPacketsToConsiderBurst <= fVar5)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      bVar1 = bVar1 & 0xfe | bVar2;
    }
  }
  if ((bVar1 & 1) != 0) {
    this->NumberOfFramesWithBurstsOfPacketLoss = this->NumberOfFramesWithBurstsOfPacketLoss + 1;
  }
  *(byte *)this = bVar1 & 0xfe;
  this->NumberOfAcksThisFrame = 0;
  this->NumberOfNaksThisFrame = 0;
  this->NumberOfMissingPacketsThisFrame = 0;
  this->NumberOfPacketsThisFrame = 0;
  return;
}

// TrackAck @ 1480677c0

void __thiscall
FNetConnectionPacketAnalytics::TrackAck(FNetConnectionPacketAnalytics *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  this->NumberOfAcksThisFrame = this->NumberOfAcksThisFrame + 1;
  uVar1 = this->CurrentRunOfDroppedOutPackets;
  if (uVar1 != 0) {
    if (0 < NetAnalyticsCVars::NumberOfConsecutiveDroppedPacketsToConsiderBurst) {
      *(byte *)this =
           ((uint)NetAnalyticsCVars::NumberOfConsecutiveDroppedPacketsToConsiderBurst <= uVar1 |
           ((undefined1 *)this)->bSawPacketLossBurstThisFrame) ^ *(undefined1 *)this & 0xfe;
    }
    this->CurrentRunOfDroppedOutPackets = 0;
    uVar2 = this->LongestRunOfDroppedOutPackets;
    if (this->LongestRunOfDroppedOutPackets < uVar1) {
      uVar2 = uVar1;
    }
    this->LongestRunOfDroppedOutPackets = uVar2;
  }
  return;
}

// TrackInPacket @ 148068040

void __thiscall
FNetConnectionPacketAnalytics::TrackInPacket
          (FNetConnectionPacketAnalytics *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  this->NumberOfPacketsThisFrame = this->NumberOfPacketsThisFrame + 1;
  if (param_2 != 0) {
    if (0 < NetAnalyticsCVars::NumberOfConsecutiveDroppedPacketsToConsiderBurst) {
      *(byte *)this =
           ((uint)NetAnalyticsCVars::NumberOfConsecutiveDroppedPacketsToConsiderBurst <= param_2 |
           ((undefined1 *)this)->bSawPacketLossBurstThisFrame) ^ *(undefined1 *)this & 0xfe;
    }
    uVar2 = this->NumberOfMissingPacketsThisFrame + param_2;
    uVar1 = this->LongestRunOfDroppedInPackets;
    if (this->LongestRunOfDroppedInPackets < uVar2) {
      uVar1 = uVar2;
    }
    this->LongestRunOfDroppedInPackets = uVar1;
  }
  return;
}

// TrackNak @ 148068200

void __thiscall
FNetConnectionPacketAnalytics::TrackNak(FNetConnectionPacketAnalytics *this,int param_1)

{
  this->NumberOfNaksThisFrame = this->NumberOfNaksThisFrame + 1;
  this->CurrentRunOfDroppedOutPackets = this->CurrentRunOfDroppedOutPackets + 1;
  return;
}

