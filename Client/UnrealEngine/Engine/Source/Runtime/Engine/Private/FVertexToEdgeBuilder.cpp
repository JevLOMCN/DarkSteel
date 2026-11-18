// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Add @ 14844ded0

void __thiscall
_anon_14BEF342::FVertexToEdgeBuilder::Add(FVertexToEdgeBuilder *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar6 = (ulonglong)param_1;
  uVar4 = 0;
  if (param_1 < (this->VertexToEdgeItems).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)((this->VertexToEdgeItems).AllocatorInstance.Data + uVar6 * 8) == -1) {
    uVar4 = 0;
    if (param_1 < (this->VertexToEdgeItems).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->VertexToEdgeItems).AllocatorInstance.Data + uVar6 * 8) = param_2;
    return;
  }
  while( true ) {
    uVar5 = (uint)uVar6;
    uVar7 = ~uVar5 >> 0x1f;
    uVar4 = 0;
    if ((int)uVar5 < (this->VertexToEdgeItems).ArrayNum) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = (this->VertexToEdgeItems).ArrayNum;
    lVar8 = (longlong)(int)uVar5;
    if (*(int *)((this->VertexToEdgeItems).AllocatorInstance.Data + lVar8 * 8 + 4) == -1) break;
    uVar3 = 0;
    if ((int)uVar5 < (int)uVar4) {
      uVar3 = uVar7;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = (ulonglong)*(uint *)((this->VertexToEdgeItems).AllocatorInstance.Data + lVar8 * 8 + 4);
  }
  if (uVar4 == (this->VertexToEdgeItems).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,&(this->VertexToEdgeItems).ArrayMax);
  }
  (this->VertexToEdgeItems).ArrayNum = uVar4 + 1;
  DefaultConstructItems<_anonymous_namespace_::FVertexToEdgeBuilder::FVertexToEdgeItem,int>
            ((this->VertexToEdgeItems).AllocatorInstance.Data + (longlong)(int)uVar4 * 8,1);
  uVar3 = 0;
  if ((int)uVar5 < (this->VertexToEdgeItems).ArrayNum) {
    uVar3 = uVar7;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(uint *)((this->VertexToEdgeItems).AllocatorInstance.Data + lVar8 * 8 + 4) = uVar4;
  uVar5 = 0;
  if ((int)uVar4 < (this->VertexToEdgeItems).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)((this->VertexToEdgeItems).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = param_2;
  return;
}

// Get @ 148468de0

void __thiscall
_anon_14BEF342::FVertexToEdgeBuilder::Get
          (FVertexToEdgeBuilder *this,int param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  ForElementType<int> FVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<int> FVar7;
  
  while( true ) {
    if (param_1 == 0xffffffff) {
      return;
    }
    uVar5 = 0;
    if (param_1 < (this->VertexToEdgeItems).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar1 = (ForElementType<int>)
            ((longlong)(this->VertexToEdgeItems).AllocatorInstance.Data + (longlong)param_1 * 8);
    FVar7 = (ForElementType<int>)param_2;
    if (FVar2 != (ForElementType<int>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar1) {
      FVar7 = (ForElementType<int>)param_2;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar7 = FVar2;
      }
      if (((ulonglong)FVar1 < (ulonglong)((longlong)FVar7 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<int>)param_2;
    if (FVar2 != (ForElementType<int>)0x0) {
      FVar7 = FVar2;
    }
    *(undefined4 *)((longlong)FVar7 + (longlong)iVar6 * 4) = *(undefined4 *)FVar1;
    uVar5 = 0;
    if (param_1 < (this->VertexToEdgeItems).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
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
    param_1 = *(int *)((this->VertexToEdgeItems).AllocatorInstance.Data + (longlong)param_1 * 8 + 4)
    ;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

