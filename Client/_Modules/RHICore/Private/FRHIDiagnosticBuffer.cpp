// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// GetShaderDiagnosticMessages @ 1446deac0

FString * __thiscall
FRHIDiagnosticBuffer::GetShaderDiagnosticMessages
          (FRHIDiagnosticBuffer *this,FString *__return_storage_ptr__,uint param_1,uint param_2,
          wchar_t *param_3)

{
  FQueue *pFVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar9;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  ulonglong uVar8;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"\r\n\r\n\tDevice: %d, Queue %s:");
  uVar5 = 0;
  bVar2 = false;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  uVar8 = uVar5;
  do {
    pFVar1 = this->Data;
    ::FString::PrintfImpl(&local_b0,L"\r\n\t\tLane %02d: ");
    iVar6 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_c0,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar6);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (*(int *)((longlong)&pFVar1->Lanes[0].Counter + uVar5) == 0) {
      ::FString::AppendChars(&local_c0,L"OK",2);
    }
    else {
      iVar6 = *(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5 + 4);
      bVar2 = true;
      EnterCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      for (FVar3 = GShaderDiagnosticDatas.AllocatorInstance;
          FVar3.Data !=
          GShaderDiagnosticDatas.AllocatorInstance.Data +
          (longlong)GShaderDiagnosticDatas.ArrayNum * 0x18; FVar3.Data = FVar3.Data + 0x18) {
        if (*(int *)FVar3.Data == iVar6) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
          pFVar9 = FVar3.Data + 8;
          goto LAB_1446debc4;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      pFVar9 = (FScriptContainerElement *)0x0;
LAB_1446debc4:
      iVar6 = *(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5 + 8);
      EnterCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      for (FVar3 = GShaderDiagnosticDatas.AllocatorInstance;
          FVar3.Data !=
          GShaderDiagnosticDatas.AllocatorInstance.Data +
          (longlong)GShaderDiagnosticDatas.ArrayNum * 0x18; FVar3.Data = FVar3.Data + 0x18) {
        if (*(int *)FVar3.Data == iVar6) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
          pFVar4 = FVar3.Data + 8;
          goto LAB_1446dec0e;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      pFVar4 = (FScriptContainerElement *)0x0;
LAB_1446dec0e:
      if ((pFVar9 == (FScriptContainerElement *)0x0) || (pFVar4 == (FScriptContainerElement *)0x0))
      {
        ::FString::PrintfImpl(&local_90,L"Shader assertion failed - ID: 0x%08X (%d)");
        iVar6 = local_90.Data.ArrayNum + -1;
        if (local_90.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_c0,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar6);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if ((((*(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5) < 0) ||
             (*(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5 + 4) < 0)) ||
            (*(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5 + 8) < 0)) ||
           (*(int *)((longlong)&pFVar1->Lanes[0].Payload + uVar5 + 0xc) < 0)) {
          ::FString::PrintfImpl(&local_80,L"\r\n\t\t\tPayload [ int32]: %d %d %d %d");
          iVar6 = local_80.Data.ArrayNum + -1;
          if (local_80.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          ::FString::AppendChars(&local_c0,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar6);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        ::FString::PrintfImpl(&local_70,L"\r\n\t\t\tPayload [uint32]: %u %u %u %u");
        iVar6 = local_70.Data.ArrayNum + -1;
        if (local_70.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_c0,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar6);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_60,L"\r\n\t\t\tPayload [   hex]: 0x%08X 0x%08X 0x%08X 0x%08X");
        iVar6 = local_60.Data.ArrayNum + -1;
        if (local_60.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_c0,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar6);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_50,L"\r\n\t\t\tPayload [ float]: %f %f %f %f");
        iVar6 = local_50.Data.ArrayNum + -1;
        if (local_50.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_c0,(wchar_t *)local_50.Data.AllocatorInstance.Data,iVar6);
        FVar3.Data = local_50.Data.AllocatorInstance.Data;
      }
      else {
        ::FString::PrintfImpl(&local_a0,L"Shader assertion failed - %s:%d - %s");
        iVar6 = local_a0.Data.ArrayNum + -1;
        if (local_a0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_c0,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar6);
        FVar3.Data = local_a0.Data.AllocatorInstance.Data;
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    uVar5 = uVar5 + 0x18;
    if (0x3f < uVar7) {
      if (bVar2) {
        FVar3.Data = local_c0.Data.AllocatorInstance.Data;
        iVar6 = local_c0.Data.ArrayNum + -1;
        if (local_c0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
      }
      else {
        FVar3.Data = (FScriptContainerElement *)
                     L"\r\n\t\tNo shader diagnostics found for this queue.";
        iVar6 = 0x2f;
      }
      ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar3.Data,iVar6);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

