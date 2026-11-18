// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ToString @ 14361cc40

FString * __thiscall
UE::Geometry::FSparseDynamicOctree3::FStatistics::ToString
          (FStatistics *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString local_38 [2];
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"Levels %2d   SpillCount %5d \r\n");
  uVar5 = 0;
  if (0 < this->Levels) {
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar5 < (this->LevelBoxCounts).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      uVar3 = 0;
      if ((int)uVar5 < (this->LevelObjCounts).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      uVar3 = 0;
      if ((int)uVar5 < (this->LevelObjCounts).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      uVar3 = 0;
      if ((int)uVar5 < (this->LevelBoxCounts).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      ::FString::PrintfImpl(local_38,L"  Level %2d:  Cells %8d  Tris %8d  Avg %5.3f\r\n");
      iVar7 = (int)local_38[0].Data._8_8_ + -1;
      if ((int)local_38[0].Data._8_8_ == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar7);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < this->Levels);
  }
  return __return_storage_ptr__;
}

