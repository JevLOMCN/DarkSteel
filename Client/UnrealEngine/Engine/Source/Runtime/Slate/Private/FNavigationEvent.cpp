// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FNavigationEvent @ 1426a8680

FNavigationEvent * __thiscall
FNavigationEvent::FNavigationEvent
          (FNavigationEvent *this,FModifierKeysState *param_1,int param_2,EUINavigation param_3,
          ENavigationGenesis param_4)

{
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(FModifierKeysState *)&this->_padding_ = *param_1;
  *(int *)&this->_padding_ = param_2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = (longlong)local_res8;
  this->_padding_ = (longlong)&___7FNavigationEvent__6B_;
  this->NavigationGenesis = param_4;
  this->NavigationType = param_3;
  return this;
}

