// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// DestroyBuffer @ 143a0cd20

void __thiscall Chaos::Private::FScratchBuffer::DestroyBuffer(FScratchBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((longlong *)this->BufferEnd != (longlong *)0x0) &&
     (*(longlong *)this->BufferEnd != -0x5e4d3c2b5e4d3c2c)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Sentinel() == SentinelValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ScratchBuffer.h"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->BufferBegin != (uchar *)0x0) {
    operator_delete__(this->BufferBegin);
  }
  this->BufferBegin = (uchar *)0x0;
  this->BufferEnd = (uchar *)0x0;
  this->BufferNext = (uchar *)0x0;
  return;
}

