// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// FCameraDebugClockDrawParams @ 14d58c220

FCameraDebugClockDrawParams * __thiscall
UE::Cameras::FCameraDebugClockDrawParams::FCameraDebugClockDrawParams
          (FCameraDebugClockDrawParams *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  FText::FText(&this->ClockName);
  fVar3 = __real_3b808081;
  fVar5 = GGameplayCamerasDebugBackgroundOpacity * __real_437f0000;
  fVar1 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.B];
  (this->ClockBackgroundColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.R];
  (this->ClockBackgroundColor).field0_0x0._s_0.G = fVar1;
  (this->ClockBackgroundColor).field0_0x0._s_0.B = fVar2;
  (this->ClockBackgroundColor).field0_0x0._s_0.A = (float)((int)fVar5 & 0xff) * fVar3;
  fVar1 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.B];
  uVar4 = (uint)FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.A;
  (this->ClockNameColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.R];
  (this->ClockNameColor).field0_0x0._s_0.G = fVar1;
  (this->ClockNameColor).field0_0x0._s_0.B = fVar2;
  (this->ClockNameColor).field0_0x0._s_0.A = (float)uVar4 * fVar3;
  fVar1 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.B];
  uVar4 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.A;
  (this->ClockFaceColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.R];
  (this->ClockFaceColor).field0_0x0._s_0.G = fVar1;
  (this->ClockFaceColor).field0_0x0._s_0.B = fVar2;
  (this->ClockFaceColor).field0_0x0._s_0.A = (float)uVar4 * fVar3;
  fVar1 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.B];
  uVar4 = (uint)FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.A;
  (this->ClockValueLineColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.R];
  (this->ClockValueLineColor).field0_0x0._s_0.G = fVar1;
  (this->ClockValueLineColor).field0_0x0._s_0.B = fVar2;
  (this->ClockValueLineColor).field0_0x0._s_0.A = (float)uVar4 * fVar3;
  return this;
}

