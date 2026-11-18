// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Size @ 141660450

long64 __thiscall IFileHandle::Size(IFileHandle *this)

{
  undefined8 uVar1;
  long64 lVar2;
  
  uVar1 = (**(code **)((longlong)*this + 8))();
  (**(code **)((longlong)*this + 0x18))(this,0);
  lVar2 = (**(code **)((longlong)*this + 8))(this);
  (**(code **)((longlong)*this + 0x10))(this,uVar1);
  return lVar2;
}

// ~IFileHandle @ 14167c590

void __thiscall IFileHandle::~IFileHandle(IFileHandle *this)

{
  *this = (IFileHandle)&___7IFileHandle__6B_;
  return;
}

// ShrinkBuffers @ 1416c15d0

void __thiscall IFileHandle::ShrinkBuffers(IFileHandle *this)

{
  return;
}

