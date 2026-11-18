// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SystemMemoryMirrorAllocate @ 148549510

TPimplPtr<FSceneViewStateSystemMemoryMirror,0> __cdecl
FSceneViewStateInterface::SystemMemoryMirrorAllocate(void)

{
  undefined8 *puVar1;
  FSceneViewStateSystemMemoryMirror *in_RCX;
  
  puVar1 = ::operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<FSceneViewStateSystemMemoryMirror>;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined8 **)&in_RCX->TextureMirrors = puVar1 + 2;
    return (TPimplPtr<FSceneViewStateSystemMemoryMirror,0>)in_RCX;
  }
  *(undefined8 *)&in_RCX->TextureMirrors = 0x10;
  return (TPimplPtr<FSceneViewStateSystemMemoryMirror,0>)in_RCX;
}

