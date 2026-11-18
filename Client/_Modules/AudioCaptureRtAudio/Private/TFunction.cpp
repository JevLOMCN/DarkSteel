// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 2

// ~TFunction<void___cdecl(float_const_*,int,int,int,double,bool)> @ 14d0c3680

void __thiscall
TFunction<void___cdecl(float_const_*,int,int,int,double,bool)>::
~TFunction<void___cdecl(float_const_*,int,int,int,double,bool)>
          (TFunction<void___cdecl(float_const_*,int,int,int,double,bool)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> @ 14d0c36b0

void __thiscall
TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>::
~TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>
          (TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

