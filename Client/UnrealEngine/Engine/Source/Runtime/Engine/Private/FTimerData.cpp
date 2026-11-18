// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FTimerData @ 1488af6d0

FTimerData * __thiscall FTimerData::FTimerData(FTimerData *this)

{
  this->bLoop = '\0';
  this->bRequiresDelegate = '\0';
  this->bMaxOncePerFrame = '\0';
  this->Rate = 0.0;
  this->ExpireTime = 0.0;
  this->Status = Active;
  this->LevelCollection = DynamicSourceLevels;
  *(undefined8 *)&(this->TimerDelegate).VariantDelegate = 0;
  (this->TimerDelegate).VariantDelegate.TypeIndex = '\0';
  (this->Handle).Handle = 0;
  this->TimerIndicesByObjectKey = (void *)0x0;
  return this;
}

