// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 1

// Serialize<unsigned_char,TSizedDefaultAllocator<64>_> @ 1436e7240

FArchive * __cdecl
TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2)

{
  long64 *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ulong64 local_res8;
  
  plVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,param_2->ArrayNum,*plVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8 = param_2->ArrayNum;
  }
  else {
    local_res8 = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res8);
    }
  }
  else {
    local_res8 = *(ulong64 *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  if (local_res8 == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *plVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,plVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (longlong)local_res8)) {
      if ((-1 < (char)param_1->field_0x2b) || ((longlong)local_res8 < 0x1000001)) {
        param_2->ArrayNum = local_res8;
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,local_res8,*plVar1,&param_2->AllocatorInstance,local_res8,plVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

