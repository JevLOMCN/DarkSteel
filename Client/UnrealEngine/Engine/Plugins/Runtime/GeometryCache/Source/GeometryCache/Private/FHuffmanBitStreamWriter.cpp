// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// Write @ 14ca30910

void __thiscall
FHuffmanBitStreamWriter::Write(FHuffmanBitStreamWriter *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  if ((this->bFlushed != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFlushed == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x2a,L"You cannot write to a stream that has already been closed"), bVar3)
     ) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)(1 << ((byte)param_2 & 0x1f)) <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bits < (1u << InNumBits)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumBits = this->NumBits + param_2;
  uVar6 = (ulonglong)param_1 << ((byte)this->BitBufferBits & 0x3f) | this->BitBuffer;
  uVar4 = this->BitBufferBits + param_2;
  this->BitBuffer = uVar6;
  this->BitBufferBits = uVar4;
  while( true ) {
    if (uVar4 < 8) {
      return;
    }
    pFVar1 = (this->Bytes).AllocatorInstance.Data;
    local_18[0] = SUB81(uVar6,0);
    if (((pFVar1 <= local_18) && (local_18 < pFVar1 + (this->Bytes).ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar5 = (this->Bytes).ArrayNum;
    if (iVar5 == (this->Bytes).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,(ForAnyElementType *)this,&(this->Bytes).ArrayMax);
    }
    (this->Bytes).ArrayNum = iVar5 + 1;
    (this->Bytes).AllocatorInstance.Data[iVar5] = local_18[0];
    this->BitBuffer = this->BitBuffer >> 8;
    this->BitBufferBits = this->BitBufferBits - 8;
    uVar4 = this->BitBufferBits;
    uVar6 = (ulonglong)(byte)this->BitBuffer;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

