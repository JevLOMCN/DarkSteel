// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FLODTracker @ 14abbc640

FLODTracker * __thiscall
`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker::FLODTracker
          (void *this,FLODTracker *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
            (this,(TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                   *)param_1);
  *(bool *)((longlong)this + 0x50) = param_1->bInitialized;
  *(undefined8 *)
   &((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
      *)((longlong)this + 0x58))->Elements = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined4 *)((longlong)this + 0x80) = 0;
  *(undefined4 *)((longlong)this + 0x84) = 0x80;
  *(undefined4 *)((longlong)this + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x8c) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)((longlong)this + 0x58),
             (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)&param_1->RequestedLODPerComponent);
  return this;
}

