// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// PushBlendableDataPtr @ 147f062d0

FBlendableEntry * __thiscall
FBlendableManager::PushBlendableDataPtr
          (FBlendableManager *this,float param_1,FName param_2,uchar *param_3,uint param_4,
          uint param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBlendableEntry *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 <= 0.0) || (__real_3f800000 < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWeight > 0.0f && InWeight <= 1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BlendableManager.h"
                       ,0x99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBlendableEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_3 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BlendableManager.h"
                       ,0x9a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBlendableEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BlendableManager.h"
                       ,0x9b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBlendableEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  piVar1 = &(this->Scratch).ArrayNum;
  uVar7 = param_5 - (int)((longlong)
                          ((this->Scratch).AllocatorInstance.Data + (longlong)*piVar1 + 0x14) %
                         (longlong)(ulonglong)param_5);
  if (uVar7 == param_5) {
    uVar7 = 0;
  }
  uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_4 + 0x14 + uVar7,(ForAnyElementType *)this,piVar1,
                     &(this->Scratch).ArrayMax);
  uVar6 = 0;
  if ((int)uVar4 < *piVar1) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBlendableEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FBlendableEntry *)((this->Scratch).AllocatorInstance.Data + (int)uVar4);
  pFVar5->Weight = param_1;
  pFVar5->BlendableType = param_2;
  pFVar5->DataSize = param_4;
  pFVar5->PrePadding = uVar7;
  if (pFVar5 == (FBlendableEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BlendableManager.h"
                       ,0x16,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBlendableEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  memcpy((void *)((longlong)&pFVar5[1].Weight + (ulonglong)pFVar5->PrePadding),param_3,
         (ulonglong)param_4);
  return pFVar5;
}

