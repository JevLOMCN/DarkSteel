// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// ExtractSourceLocation @ 145e533c0

bool __thiscall FShaderCompilerError::ExtractSourceLocation(FShaderCompilerError *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  int local_res8 [2];
  int local_res10 [2];
  FString local_38;
  FString local_28;
  
  if (((1 < (this->StrippedErrorMessage).Data.ArrayNum) &&
      ((this->ErrorVirtualFilePath).Data.ArrayNum < 2)) &&
     ((this->ErrorLineString).Data.ArrayNum < 2)) {
    local_res10[0] = 0;
    local_res8[0] = 0;
    bVar2 = ExtractSourceLocationFromCompilerMessage
                      (&this->StrippedErrorMessage,&this->ErrorVirtualFilePath,local_res10,
                       local_res8,L":",L":",L": ");
    if (bVar2) {
      ::FString::PrintfImpl(&local_38,L"%d,%d");
      pFVar4 = &this->ErrorLineString;
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      if (pFVar4 != &local_38) {
        pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar4->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (this->ErrorLineString).Data.ArrayNum = local_38.Data.ArrayNum;
        (this->ErrorLineString).Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar3.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      local_res10[0] = 0;
      local_res8[0] = 0;
      bVar2 = ExtractSourceLocationFromCompilerMessage
                        (&this->StrippedErrorMessage,&this->ErrorVirtualFilePath,local_res10,
                         local_res8,L"(",L",",L") : ");
      if (!bVar2) {
        return false;
      }
      ::FString::PrintfImpl(&local_28,L"%d,%d");
      pFVar4 = &this->ErrorLineString;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      if (pFVar4 != &local_28) {
        pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar4->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        (this->ErrorLineString).Data.ArrayNum = local_28.Data.ArrayNum;
        (this->ErrorLineString).Data.ArrayMax = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar3.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    return true;
  }
  return false;
}

// ExtractSourceLocations @ 145e53a00

void __cdecl
FShaderCompilerError::ExtractSourceLocations
          (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  FShaderCompilerError *this;
  ulonglong uVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar7 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar5 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  uVar8 = uVar7;
  if (0 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = (FShaderCompilerError *)((param_1->AllocatorInstance).Data + uVar8);
      ExtractSourceLocation(this);
      ::FString::FString(&local_28,L",");
      bVar3 = ::FString::Split(&this->ErrorLineString,&local_28,&local_58,&local_68);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (((bVar3) && (bVar3 = ::FString::IsNumeric(&local_58), bVar3)) &&
         (bVar3 = ::FString::IsNumeric(&local_68), bVar3)) {
        if ((((this->HighlightedLine).Data.ArrayNum < 2) ||
            ((this->HighlightedLineMarker).Data.ArrayNum < 2)) && (0 < (int)uVar6)) {
          if (local_38.Data.ArrayNum == local_58.Data.ArrayNum) {
            if (1 < local_38.Data.ArrayNum) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_58.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
              goto LAB_145e53b57;
            }
          }
          else {
            bVar3 = local_38.Data.ArrayNum + local_58.Data.ArrayNum == 1;
LAB_145e53b57:
            if (!bVar3) goto LAB_145e53c20;
          }
          if (local_48.Data.ArrayNum == local_68.Data.ArrayNum) {
            if (1 < local_48.Data.ArrayNum) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_68.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
              goto LAB_145e53b87;
            }
          }
          else {
            bVar3 = local_48.Data.ArrayNum + local_68.Data.ArrayNum == 1;
LAB_145e53b87:
            if (!bVar3) goto LAB_145e53c20;
          }
          uVar4 = 0;
          if ((int)(uVar6 - 1) < param_1->ArrayNum) {
            uVar4 = -uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          if ((1 < *(int *)(pFVar1 + (uVar8 - 0x18))) && (1 < *(int *)(pFVar1 + (uVar8 - 8)))) {
            ::FString::AssignRange
                      (&this->HighlightedLine,*(wchar_t **)(pFVar1 + (uVar8 - 0x20)),
                       *(int *)(pFVar1 + (uVar8 - 0x18)) + -1);
            iVar5 = *(int *)(pFVar1 + (uVar8 - 8)) + -1;
            if (*(int *)(pFVar1 + (uVar8 - 8)) == 0) {
              iVar5 = 0;
            }
            ::FString::AssignRange
                      (&this->HighlightedLineMarker,*(wchar_t **)(pFVar1 + (uVar8 - 0x10)),iVar5);
          }
        }
LAB_145e53c20:
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        local_38.Data.ArrayNum = local_58.Data.ArrayNum;
        local_38.Data.ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.ArrayNum = local_68.Data.ArrayNum;
        local_48.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        ::FString::Reset(&local_38,0);
        ::FString::Reset(&local_48,0);
      }
      iVar5 = param_1->ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x50;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetErrorString @ 145e57fe0

FString * __thiscall
FShaderCompilerError::GetErrorString
          (FShaderCompilerError *this,FString *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = !param_1;
  if (bVar2) {
    pFVar1 = GetErrorStringWithLineMarker(this,&local_28);
  }
  else {
    pFVar1 = GetErrorStringWithSourceLocation(this,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetErrorStringWithLineMarker @ 145e58090

FString * __thiscall
FShaderCompilerError::GetErrorStringWithLineMarker
          (FShaderCompilerError *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((this->HighlightedLine).Data.ArrayNum < 2) ||
     ((this->HighlightedLineMarker).Data.ArrayNum < 2)) {
    GetErrorStringWithSourceLocation(this,__return_storage_ptr__);
  }
  else {
    if (((this->ErrorVirtualFilePath).Data.ArrayNum < 2) ||
       ((this->ErrorLineString).Data.ArrayNum < 2)) {
      local_a8.Data.ArrayNum = (this->StrippedErrorMessage).Data.ArrayNum;
      lVar1 = (longlong)local_a8.Data.ArrayNum;
      _Src = (this->StrippedErrorMessage).Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.Data.ArrayNum == 0) {
        local_a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                   local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax);
        memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
      }
    }
    else {
      ::FString::ConcatFC(&local_78,&this->ErrorVirtualFilePath,L"(");
      ::FString::ConcatFF(&local_88,&local_78,&this->ErrorLineString);
      ::FString::ConcatFC(&local_98,&local_88,L"): ");
      ::FString::ConcatFF(&local_a8,&local_98,&this->StrippedErrorMessage);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    ::FString::ConcatFC(&local_28,&local_a8,L"\r\n");
    ::FString::ConcatFC(&local_38,&local_28,L"\t");
    ::FString::ConcatFF(&local_48,&local_38,&this->HighlightedLine);
    ::FString::ConcatFC(&local_58,&local_48,L"\r\n");
    ::FString::ConcatFC(&local_68,&local_58,L"\t");
    ::FString::ConcatFF(__return_storage_ptr__,&local_68,&this->HighlightedLineMarker);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetErrorStringWithSourceLocation @ 145e582a0

FString * __thiscall
FShaderCompilerError::GetErrorStringWithSourceLocation
          (FShaderCompilerError *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->ErrorVirtualFilePath).Data.ArrayNum < 2) ||
     ((this->ErrorLineString).Data.ArrayNum < 2)) {
    ::FString::FString(__return_storage_ptr__,&this->StrippedErrorMessage);
  }
  else {
    ::FString::ConcatFC(&local_18,&this->ErrorVirtualFilePath,L"(");
    ::FString::ConcatFF(&local_28,&local_18,&this->ErrorLineString);
    ::FString::ConcatFC(&local_38,&local_28,L"): ");
    ::FString::ConcatFF(__return_storage_ptr__,&local_38,&this->StrippedErrorMessage);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetShaderSourceFilePath @ 145e5b670

FString * __thiscall
FShaderCompilerError::GetShaderSourceFilePath
          (FShaderCompilerError *this,FString *__return_storage_ptr__,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  iVar1 = (this->ErrorVirtualFilePath).Data.ArrayNum;
  if (1 < iVar1) {
    if (iVar1 + -1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (*(short *)(this->ErrorVirtualFilePath).Data.AllocatorInstance.Data == 0x2f) {
      ::GetShaderSourceFilePath(__return_storage_ptr__,&this->ErrorVirtualFilePath,param_1);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,&this->ErrorVirtualFilePath);
  return __return_storage_ptr__;
}

