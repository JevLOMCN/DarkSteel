// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// Serialize<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_> @ 14eb05000

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulong64 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  uVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
                ((FOnnxAdditionalDataDescriptor *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar14 = uVar11;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar12 = (uint)uVar11;
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar10) {
                uVar8 = ~uVar12 >> 0x1f;
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
              pFVar13 = (param_2->AllocatorInstance).Data + uVar14;
              ::operator<<(param_1,(FString *)pFVar13);
              pFVar2 = pFVar13 + 0x10;
              puVar4 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
              if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar2);
                }
              }
              else {
                *(ulong64 *)&pFVar2->field_0x0 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              pFVar13 = pFVar13 + 0x18;
              puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
              if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar13);
                }
              }
              else {
                *(ulong64 *)pFVar13 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              uVar11 = (ulonglong)(uVar12 + 1);
              uVar14 = uVar14 + 0x20;
              uVar10 = param_2->ArrayNum;
            } while ((int)(uVar12 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
              DefaultConstructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
                        (pFVar13,1);
              ::operator<<(param_1,(FString *)pFVar13);
              pFVar2 = pFVar13 + 0x10;
              puVar4 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
              if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar2);
                }
              }
              else {
                *(ulong64 *)&pFVar2->field_0x0 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              pFVar13 = pFVar13 + 0x18;
              puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
              if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar13);
                }
              }
              else {
                *(ulong64 *)pFVar13 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while ((int)uVar10 < (int)local_res8[0]);
            return param_1;
          }
        }
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

