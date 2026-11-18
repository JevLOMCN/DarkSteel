// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CalculateLineRangesFromString @ 1415aef30

void __cdecl
FTextRange::CalculateLineRangesFromString
          (FString *param_1,TArray<FTextRange,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  
  iVar7 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
    pFVar10 = (FScriptContainerElement *)pwVar9;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    pFVar10 = (FScriptContainerElement *)pwVar9;
    if ((FScriptContainerElement *)pwVar9 == (FScriptContainerElement *)0x0) goto LAB_1415af09b;
  }
  do {
    uVar1 = *pwVar9;
    if (uVar1 == 0) break;
    if ((uVar1 == 0xd) && (*(ushort *)((longlong)pwVar9 + 2) == 10)) {
      bVar3 = true;
LAB_1415aeff0:
      iVar8 = (int)((longlong)pwVar9 - (longlong)pFVar10 >> 1);
      if ((iVar8 < iVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LineEndIndex >= LineBeginIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp"
                             ,0x1f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           CONCAT44(iVar8,iVar7);
      pFVar6 = (FScriptContainerElement *)((longlong)pwVar9 + 2);
      if (!bVar3) {
        pFVar6 = (FScriptContainerElement *)pwVar9;
      }
      iVar7 = (int)((longlong)pFVar6 - (longlong)pFVar10 >> 1) + 1;
      pwVar9 = (wchar_t *)pFVar6;
    }
    else {
      bVar3 = false;
      if ((uVar1 == 0x2028 || (uVar1 - 10 < 4 || uVar1 == 0x2029)) || uVar1 == 0x85)
      goto LAB_1415aeff0;
    }
    pwVar9 = (wchar_t *)((longlong)pwVar9 + 2);
  } while ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0);
LAB_1415af09b:
  iVar5 = (param_1->Data).ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (iVar7 <= iVar8) {
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = CONCAT44(iVar8,iVar7);
  }
  return;
}

