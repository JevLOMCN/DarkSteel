// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 4

// ~FExrMemStreamOut @ 14ddcadb0

void __thiscall FExrMemStreamOut::~FExrMemStreamOut(FExrMemStreamOut *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Imf_3_3::OStream::~OStream((OStream *)this);
  return;
}

// seekp @ 14de05580

void __thiscall FExrMemStreamOut::seekp(FExrMemStreamOut *this,ulong64 param_1)

{
  this->Pos = param_1;
  return;
}

// tellp @ 14de05590

ulong64 __thiscall FExrMemStreamOut::tellp(FExrMemStreamOut *this)

{
  return this->Pos;
}

// write @ 14de055a0

void __thiscall FExrMemStreamOut::write(FExrMemStreamOut *this,char *param_1,int param_2)

{
  long64 *plVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)param_2;
  plVar1 = &(this->Data).ArrayNum;
  lVar8 = this->Pos + lVar6;
  if (*plVar1 < lVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar8 - *plVar1,&(this->Data).AllocatorInstance,plVar1,&(this->Data).ArrayMax);
  }
  lVar8 = 0;
  if (0 < lVar6) {
    do {
      lVar7 = this->Pos + lVar8;
      FVar2 = *(FScriptContainerElement *)(param_1 + lVar8);
      uVar5 = 0;
      if (lVar7 < *plVar1) {
        uVar5 = (uint)((ulonglong)lVar7 >> 0x3f) ^ 1;
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
      lVar8 = lVar8 + 1;
      (this->Data).AllocatorInstance.Data[lVar7] = FVar2;
    } while (lVar8 < lVar6);
  }
  this->Pos = this->Pos + lVar6;
  return;
}

