// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FTessellationTable @ 145037500

FTessellationTable * __thiscall
Nanite::FTessellationTable::FTessellationTable(FTessellationTable *this)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  ForAnyElementType FVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  (this->OffsetTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffsetTable).ArrayNum = 0;
  (this->OffsetTable).ArrayMax = 0;
  (this->VertsAndIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertsAndIndexes).ArrayNum = 0;
  (this->VertsAndIndexes).ArrayMax = 0;
  (this->Verts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Verts).ArrayNum = 0;
  (this->Verts).ArrayMax = 0;
  (this->Indexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indexes).ArrayNum = 0;
  (this->Indexes).ArrayMax = 0;
  pTVar1 = &FPaths::EngineContentDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar1,0x20 - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_28,L"Renderer/TessellationTable.bin",0x1e);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.ArrayNum != 0) {
    FVar4.Data = local_28.AllocatorInstance.Data;
  }
  pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,FVar4.Data,0);
  TArrayPrivateFriend::Serialize<UE::Math::TIntVector2<unsigned_int>,TSizedDefaultAllocator<32>_>
            (pFVar3,&this->OffsetTable);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (pFVar3,&this->VertsAndIndexes);
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return this;
}

// GetBarycentrics @ 145061d50

TIntVector3<int> * __thiscall
Nanite::FTessellationTable::GetBarycentrics
          (FTessellationTable *this,TIntVector3<int> *__return_storage_ptr__,uint param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 & 0xffff;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = param_1 >> 0x10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (0x8000 - (param_1 >> 0x10)) - (param_1 & 0xffff);
  return __return_storage_ptr__;
}

// GetPattern @ 145063e00

int __thiscall
Nanite::FTessellationTable::GetPattern(FTessellationTable *this,TIntVector3<int> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (param_1->field0_0x0)._s_0.X;
  iVar1 = (param_1->field0_0x0)._s_0.Y;
  iVar3 = iVar2;
  if (iVar2 < iVar1) {
    (param_1->field0_0x0)._s_0.X = iVar1;
    (param_1->field0_0x0)._s_0.Y = iVar2;
    iVar3 = iVar1;
    iVar1 = iVar2;
  }
  iVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar4 = iVar3;
  if (iVar3 < iVar2) {
    iVar4 = iVar2;
    iVar2 = iVar3;
  }
  iVar3 = iVar1;
  if (iVar1 < iVar2) {
    iVar3 = iVar2;
    iVar2 = iVar1;
  }
  return (iVar2 * 0x10 + iVar3) * 0x10 + -0x111 + iVar4;
}

