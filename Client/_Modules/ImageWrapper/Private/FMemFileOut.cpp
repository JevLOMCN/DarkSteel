// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 4

// ~FMemFileOut @ 14266a2b0

void __thiscall FMemFileOut::~FMemFileOut(FMemFileOut *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Imf_3_3::OStream::~OStream((OStream *)this);
  return;
}

// seekp @ 142692580

void __thiscall FMemFileOut::seekp(FMemFileOut *this,ulong64 param_1)

{
  this->Pos = param_1;
  return;
}

// tellp @ 1426925b0

ulong64 __thiscall FMemFileOut::tellp(FMemFileOut *this)

{
  return this->Pos;
}

// write @ 142692c20

void __thiscall FMemFileOut::write(FMemFileOut *this,char *param_1,int param_2)

{
  long64 *plVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)param_2;
  plVar1 = &(this->Data).ArrayNum;
  lVar6 = *plVar1;
  lVar8 = this->Pos + lVar7;
  if (lVar6 < lVar8) {
    if (lVar8 < lVar6 * 2) {
      lVar8 = lVar6 * 2;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar8 - lVar6,&(this->Data).AllocatorInstance,plVar1,&(this->Data).ArrayMax);
  }
  lVar6 = 0;
  if (0 < lVar7) {
    do {
      lVar8 = this->Pos + lVar6;
      FVar2 = *(FScriptContainerElement *)(param_1 + lVar6);
      uVar5 = 0;
      if (lVar8 < *plVar1) {
        uVar5 = (uint)((ulonglong)lVar8 >> 0x3f) ^ 1;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar6 = lVar6 + 1;
      (this->Data).AllocatorInstance.Data[lVar8] = FVar2;
    } while (lVar6 < lVar7);
  }
  this->Pos = this->Pos + lVar7;
  return;
}

