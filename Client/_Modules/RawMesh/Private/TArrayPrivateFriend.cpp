// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 1

// Serialize<FColor,TSizedDefaultAllocator<32>_> @ 14435d930

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FColor,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FColor,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          do {
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
            puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
              }
            }
            else {
              *(uint *)pFVar10 = *puVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while ((int)uVar11 < (int)local_res8[0]);
          return param_1;
        }
        param_2->ArrayNum = local_res8[0];
        uVar14 = uVar12;
        uVar11 = local_res8[0];
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          uVar13 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar13 < (int)uVar11) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FArchive *)(*pcVar5)();
            return pFVar9;
          }
          pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
          puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
            }
          }
          else {
            *(undefined4 *)pFVar10 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          uVar12 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 4;
          uVar11 = param_2->ArrayNum;
        } while ((int)(uVar13 + 1) < param_2->ArrayNum);
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

