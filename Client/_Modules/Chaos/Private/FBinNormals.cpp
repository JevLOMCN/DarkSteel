// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FBinNormals @ 144066e20

FBinNormals * __thiscall UE::GeometryCollectionInternal::FBinNormals::FBinNormals(FBinNormals *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  ForElementType<UE::Math::TVector<float>_> *pFVar4;
  TTypeCompatibleBytes<UE::Math::TVector<float>_> *pTVar5;
  uint uVar6;
  bool bVar7;
  FBinNormals *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  piVar1 = &(this->Bins).ArrayMax;
  piVar2 = &(this->Bins).ArrayNum;
  *piVar2 = 0;
  *piVar1 = 0x14;
  Core::Private::ReallocGrow<0,TFixedAllocator<20>::ForElementType<UE::Math::TVector<float>_>_>
            (0xc,4,0x14,(ForElementType<UE::Math::TVector<float>_> *)this,piVar2,piVar1);
  if (*piVar2 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  builtin_memcpy((this->Bins).AllocatorInstance.InlineData[0].Pad,"ߦ/>",4);
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[0].Pad[4] = 0xe8;
  pFVar4->InlineData[0].Pad[5] = '0';
  pFVar4->InlineData[0].Pad[6] = 'K';
  pFVar4->InlineData[0].Pad[7] = 0xbf;
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[0].Pad[8] = 'z';
  pFVar4->InlineData[0].Pad[9] = 'n';
  pFVar4->InlineData[0].Pad[10] = '\x15';
  pFVar4->InlineData[0].Pad[0xb] = '?';
  if (*piVar2 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[1].Pad[0] = '/';
  pFVar4->InlineData[1].Pad[1] = 0x88;
  pFVar4->InlineData[1].Pad[2] = ' ';
  pFVar4->InlineData[1].Pad[3] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[1].Pad[4] = 0x82;
  pTVar5[1].Pad[5] = '<';
  pTVar5[1].Pad[6] = 'G';
  pTVar5[1].Pad[7] = 0xbf;
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[1].Pad[8] = '\n';
  pTVar5[1].Pad[9] = 'i';
  pTVar5[1].Pad[10] = '\r';
  pTVar5[1].Pad[0xb] = '=';
  if (*piVar2 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[2].Pad[0] = 'G';
  pFVar4->InlineData[2].Pad[1] = 0x93;
  pFVar4->InlineData[2].Pad[2] = 0xfb;
  pFVar4->InlineData[2].Pad[3] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[2].Pad[4] = 0xfa;
  pTVar5[2].Pad[5] = 'b';
  pTVar5[2].Pad[6] = 'O';
  pTVar5[2].Pad[7] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[2].Pad[8] = '%';
  pTVar5[2].Pad[9] = 0xc9;
  pTVar5[2].Pad[10] = 0xa3;
  pTVar5[2].Pad[0xb] = 0xbe;
  if (*piVar2 < 4) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[3].Pad[0] = 0xa7;
  pFVar4->InlineData[3].Pad[1] = '\x1f';
  pFVar4->InlineData[3].Pad[2] = 0xe4;
  pFVar4->InlineData[3].Pad[3] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[3].Pad[4] = 0x96;
  pTVar5[3].Pad[5] = '\x06';
  pTVar5[3].Pad[6] = 'N';
  pTVar5[3].Pad[7] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[3].Pad[8] = 'F';
  pTVar5[3].Pad[9] = 0xd0;
  pTVar5[3].Pad[10] = 200;
  pTVar5[3].Pad[0xb] = '>';
  if (*piVar2 < 5) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[4].Pad[0] = 0xc5;
  pFVar4->InlineData[4].Pad[1] = 0x8d;
  pFVar4->InlineData[4].Pad[2] = '{';
  pFVar4->InlineData[4].Pad[3] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[4].Pad[4] = '\t';
  pTVar5[4].Pad[5] = 0xfd;
  pTVar5[4].Pad[6] = 'H';
  pTVar5[4].Pad[7] = 0xbf;
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[4].Pad[8] = 'K';
  pTVar5[4].Pad[9] = 0x94;
  pTVar5[4].Pad[10] = '\x11';
  pTVar5[4].Pad[0xb] = 0xbf;
  if (*piVar2 < 6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[5].Pad[0] = '\x18';
  pFVar4->InlineData[5].Pad[1] = '!';
  pFVar4->InlineData[5].Pad[2] = '|';
  pFVar4->InlineData[5].Pad[3] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[5].Pad[4] = 'n';
  pTVar5[5].Pad[5] = 'N';
  pTVar5[5].Pad[6] = '%';
  pTVar5[5].Pad[7] = 0xbe;
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[5].Pad[8] = 0xb5;
  pTVar5[5].Pad[9] = 0x8a;
  pTVar5[5].Pad[10] = '~';
  pTVar5[5].Pad[0xb] = '=';
  if (*piVar2 < 7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[6].Pad[0] = '\x0f';
  pFVar4->InlineData[6].Pad[1] = 0xd0;
  pFVar4->InlineData[6].Pad[2] = '}';
  pFVar4->InlineData[6].Pad[3] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[6].Pad[4] = '2';
  pTVar5[6].Pad[5] = 0xe6;
  pTVar5[6].Pad[6] = '>';
  pTVar5[6].Pad[7] = 0xbe;
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[6].Pad[8] = 0x99;
  pTVar5[6].Pad[9] = 'a';
  pTVar5[6].Pad[10] = 's';
  pTVar5[6].Pad[0xb] = '?';
  if (*piVar2 < 8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[7].Pad[0] = 0x82;
  pFVar4->InlineData[7].Pad[1] = '\x1d';
  pFVar4->InlineData[7].Pad[2] = 'S';
  pFVar4->InlineData[7].Pad[3] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[7].Pad[4] = 'x';
  pTVar5[7].Pad[5] = '\r';
  pTVar5[7].Pad[6] = 'Z';
  pTVar5[7].Pad[7] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[7].Pad[8] = ':';
  pTVar5[7].Pad[9] = '#';
  pTVar5[7].Pad[10] = '\x06';
  pTVar5[7].Pad[0xb] = 0xbf;
  if (*piVar2 < 9) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[8].Pad[0] = 200;
  pFVar4->InlineData[8].Pad[1] = '#';
  pFVar4->InlineData[8].Pad[2] = '@';
  pFVar4->InlineData[8].Pad[3] = '?';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[8].Pad[4] = '>';
  pTVar5[8].Pad[5] = '>';
  pTVar5[8].Pad[6] = 'Q';
  pTVar5[8].Pad[7] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[8].Pad[8] = 0x8b;
  pTVar5[8].Pad[9] = 0xdf;
  pTVar5[8].Pad[10] = ' ';
  pTVar5[8].Pad[0xb] = '?';
  if (*piVar2 < 10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar4 = &(this->Bins).AllocatorInstance;
  pFVar4->InlineData[9].Pad[0] = '\x1a';
  pFVar4->InlineData[9].Pad[1] = 'O';
  pFVar4->InlineData[9].Pad[2] = 0xbc;
  pFVar4->InlineData[9].Pad[3] = '>';
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[9].Pad[4] = '\'';
  pTVar5[9].Pad[5] = 0xa5;
  pTVar5[9].Pad[6] = '0';
  pTVar5[9].Pad[7] = 0xbe;
  pTVar5 = (this->Bins).AllocatorInstance.InlineData;
  pTVar5[9].Pad[8] = 0xf2;
  pTVar5[9].Pad[9] = 0xed;
  pTVar5[9].Pad[10] = 'i';
  pTVar5[9].Pad[0xb] = 0xbf;
  if (*piVar2 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar6 = __xmm_80000000800000008000000080000000;
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[0].Pad ^
          __xmm_80000000800000008000000080000000;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[0].Pad + 4) ^
           __xmm_80000000800000008000000080000000;
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[0].Pad + 8) ^
           __xmm_80000000800000008000000080000000;
  if (*piVar2 < 0xb) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[10].Pad = uVar9;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[10].Pad + 4) = uVar10;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[10].Pad + 8) = uVar11;
  if (*piVar2 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[1].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[1].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[1].Pad + 8);
  if (*piVar2 < 0xc) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0xb].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xb].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xb].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[2].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[2].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[2].Pad + 8);
  if (*piVar2 < 0xd) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0xc].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xc].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xc].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 4) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[3].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[3].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[3].Pad + 8);
  if (*piVar2 < 0xe) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0xd].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xd].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xd].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 5) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[4].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[4].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[4].Pad + 8);
  if (*piVar2 < 0xf) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0xe].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xe].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xe].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[5].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[5].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[5].Pad + 8);
  if (*piVar2 < 0x10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0xf].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xf].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0xf].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[6].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[6].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[6].Pad + 8);
  if (*piVar2 < 0x11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0x10].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x10].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x10].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[7].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[7].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[7].Pad + 8);
  if (*piVar2 < 0x12) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0x11].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x11].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x11].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 9) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[8].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[8].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[8].Pad + 8);
  if (*piVar2 < 0x13) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0x12].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x12].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x12].Pad + 8) = uVar11 ^ uVar6;
  if (*piVar2 < 10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar9 = *(uint *)(this->Bins).AllocatorInstance.InlineData[9].Pad;
  uVar10 = *(uint *)((this->Bins).AllocatorInstance.InlineData[9].Pad + 4);
  uVar11 = *(uint *)((this->Bins).AllocatorInstance.InlineData[9].Pad + 8);
  if (*piVar2 < 0x14) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBinNormals *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(uint *)(this->Bins).AllocatorInstance.InlineData[0x13].Pad = uVar9 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x13].Pad + 4) = uVar10 ^ uVar6;
  *(uint *)((this->Bins).AllocatorInstance.InlineData[0x13].Pad + 8) = uVar11 ^ uVar6;
  return this;
}

