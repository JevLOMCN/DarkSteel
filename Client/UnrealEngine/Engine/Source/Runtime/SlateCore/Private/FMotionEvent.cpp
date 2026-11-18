// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// StaticStruct @ 1424c6bd0

UScriptStruct * __cdecl FMotionEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FMotionEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionEvent,(UObject *)pUVar1,L"MotionEvent");
  }
  return Z_Registration_Info_UScriptStruct_FMotionEvent.OuterSingleton;
}

// FMotionEvent @ 1424e9de0

FMotionEvent * __thiscall FMotionEvent::FMotionEvent(FMotionEvent *this)

{
  LARGE_INTEGER local_res8;
  
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfe00;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = (longlong)local_res8;
  this->_padding_ = (longlong)&___7FMotionEvent__6B_;
  (this->Tilt).field0_0x0._s_0.X = 0.0;
  (this->Tilt).field0_0x0._s_0.Y = 0.0;
  (this->Tilt).field0_0x0._s_0.Z = 0.0;
  (this->RotationRate).field0_0x0._s_0.X = 0.0;
  (this->RotationRate).field0_0x0._s_0.Y = 0.0;
  (this->RotationRate).field0_0x0._s_0.Z = 0.0;
  (this->Gravity).field0_0x0._s_0.X = 0.0;
  (this->Gravity).field0_0x0._s_0.Y = 0.0;
  (this->Gravity).field0_0x0._s_0.Z = 0.0;
  (this->Acceleration).field0_0x0._s_0.X = 0.0;
  (this->Acceleration).field0_0x0._s_0.Y = 0.0;
  (this->Acceleration).field0_0x0._s_0.Z = 0.0;
  return this;
}

