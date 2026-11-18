// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147577f80

void __thiscall
FStreamableAnimPlatformData::Serialize
          (FStreamableAnimPlatformData *this,FArchive *param_1,UAnimStreamable *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  FAnimStreamableChunk *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  
  local_res8[0] = (this->Chunks).ArrayNum;
  piVar1 = &(this->Chunks).ArrayNum;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar9 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    pFVar4 = (FAnimStreamableChunk *)(this->Chunks).AllocatorInstance.Data;
    piVar2 = &(this->Chunks).ArrayMax;
    if ((this->Chunks).ArrayMax < (int)local_res8[0]) {
      DestructItems<FAnimStreamableChunk,int>(pFVar4,*piVar1);
      *piVar1 = 0;
      if (*piVar2 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,uVar9,(ForAnyElementType *)this,0,piVar2);
      }
    }
    else {
      DestructItems<FAnimStreamableChunk,int>(pFVar4,*piVar1);
      *piVar1 = 0;
    }
    uVar9 = local_res8[0];
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,local_res8[0],(ForAnyElementType *)this,piVar1,piVar2);
    DefaultConstructItems<FAnimStreamableChunk,int>
              ((this->Chunks).AllocatorInstance.Data + (longlong)iVar7 * 0x40,uVar9);
  }
  uVar9 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FAnimStreamableChunk::Serialize
                ((FAnimStreamableChunk *)
                 ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x40),param_1,
                 param_2,uVar9);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)local_res8[0]);
  }
  return;
}

