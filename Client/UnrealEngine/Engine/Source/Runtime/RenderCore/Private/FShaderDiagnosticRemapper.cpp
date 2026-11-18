// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// AddSourceBlock @ 145e8bee0

/* WARNING: Removing unreachable block (ram,0x000145e8c3af) */

void __thiscall
FShaderDiagnosticRemapper::AddSourceBlock
          (FShaderDiagnosticRemapper *this,int param_1,int param_2,FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType local_78;
  int local_70;
  int iStack_6c;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  int local_38;
  int local_34;
  FScriptContainerElement *local_30;
  undefined8 local_28;
  
  iVar9 = (this->Blocks).ArrayNum;
  uVar8 = 0;
  if (iVar9 != 0) {
    uVar14 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar14 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->Blocks).ArrayNum;
    if (*(int *)((this->Blocks).AllocatorInstance.Data + ((longlong)iVar9 + -1) * 0x18) == param_2)
    {
      uVar14 = 0;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar14 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)((this->Blocks).AllocatorInstance.Data +
              (longlong)(this->Blocks).ArrayNum * 0x18 + -0x14) = param_1;
      iVar9 = (param_3->Data).ArrayNum;
      if (iVar9 < 2) {
        iVar9 = (this->Blocks).ArrayNum;
        uVar13 = iVar9 - 1;
        uVar14 = uVar8;
        if ((int)uVar13 < iVar9) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (FScriptContainerElement *)
                  ::FString::FString(&local_48,
                                     (FString *)
                                     ((this->Blocks).AllocatorInstance.Data +
                                     ((longlong)((this->Blocks).ArrayNum + -1) * 3 + 1) * 8));
        bVar6 = true;
        bVar5 = false;
      }
      else {
        local_68 = (param_3->Data).AllocatorInstance.Data;
        pFVar10 = (FScriptContainerElement *)&local_68;
        (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c = (param_3->Data).ArrayMax;
        (param_3->Data).ArrayNum = 0;
        (param_3->Data).ArrayMax = 0;
        bVar6 = false;
        bVar5 = true;
        local_60 = iVar9;
      }
      iVar9 = (this->Blocks).ArrayNum;
      uVar14 = iVar9 - 1;
      if ((int)uVar14 < iVar9) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data +
               (longlong)(this->Blocks).ArrayNum * 0x18 + -0x10;
      if (pFVar2 != pFVar10) {
        pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x0)->
                 AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x0)->AllocatorInstance).
        Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->field_0x0)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar2[8].field_0x0 = *(int *)&pFVar10[8].field_0x0;
        *(int *)&pFVar2[0xc].field_0x0 = *(int *)&pFVar10[0xc].field_0x0;
        *(undefined8 *)&pFVar10[8].field_0x0 = 0;
      }
      if ((bVar5) && (local_68 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68);
      }
      goto joined_r0x000145e8c3cf;
    }
    if (iVar9 != 0) {
      uVar14 = uVar8;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar14 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_2 <=
           *(int *)((this->Blocks).AllocatorInstance.Data +
                   (longlong)(this->Blocks).ArrayNum * 0x18 + -0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks.Num() == 0 || Blocks.Last().StrippedLineNum < StrippedLineNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                             ,0xae,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar9 = (param_3->Data).ArrayNum;
  if ((iVar9 < 2) && ((this->Blocks).ArrayNum < 1)) {
    return;
  }
  local_38 = param_2;
  local_34 = param_1;
  if (iVar9 < 2) {
    iVar9 = (this->Blocks).ArrayNum;
    uVar14 = iVar9 - 1;
    if ((int)uVar14 < iVar9) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar11 = (longlong)(this->Blocks).ArrayNum;
    local_78.Data = (FScriptContainerElement *)0x0;
    pFVar10 = (this->Blocks).AllocatorInstance.Data;
    iVar9 = *(int *)(pFVar10 + lVar11 * 0x18 + -8);
    _Src = *(void **)(pFVar10 + lVar11 * 0x18 + -0x10);
    local_70 = iVar9;
    if (iVar9 == 0) {
      iStack_6c = 0;
      pFVar12 = &local_78;
      bVar6 = true;
      bVar5 = false;
      local_30 = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_78,iVar9,&iStack_6c);
      memcpy(local_78.Data,_Src,(longlong)iVar9 * 2);
      pFVar12 = &local_78;
      bVar6 = true;
      bVar5 = false;
      local_30 = local_78.Data;
    }
  }
  else {
    local_30 = (param_3->Data).AllocatorInstance.Data;
    pFVar12 = &local_58;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50 = iVar9;
    local_4c = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    bVar6 = false;
    bVar5 = true;
  }
  pFVar10 = (this->Blocks).AllocatorInstance.Data;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  local_28 = (FScriptContainerElement *)CONCAT44(local_28._4_4_,*(undefined4 *)&pFVar12[1].Data);
  local_28 = pFVar12[1].Data;
  pFVar12[1].Data = (FScriptContainerElement *)0x0;
  if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar10 + (longlong)(this->Blocks).ArrayMax * 0x18))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar9 + 1;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
  *(int *)pFVar10 = local_38;
  *(int *)(pFVar10 + 4) = local_34;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(FScriptContainerElement **)(pFVar10 + 8) = local_30;
  *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(pFVar10 + 0x14) = local_28._4_4_;
  local_28 = (FScriptContainerElement *)0x0;
  local_30 = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = local_78.Data;
  if ((bVar5) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data);
    local_48.Data.AllocatorInstance.Data = local_78.Data;
  }
joined_r0x000145e8c3cf:
  if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// AddStrippedLine @ 145e8c410

void __thiscall
FShaderDiagnosticRemapper::AddStrippedLine(FShaderDiagnosticRemapper *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res18 [4];
  
  local_res18[0] = param_2;
  if ((this->StrippedLineOffsets).ArrayNum != param_1 + -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StrippedLineOffsets.Num() == (StrippedLineNum - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                       ,0xbd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->StrippedLineOffsets).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->StrippedLineOffsets).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->StrippedLineOffsets).ArrayNum;
  piVar1 = &(this->StrippedLineOffsets).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->StrippedLineOffsets).AllocatorInstance,piVar1);
  }
  (this->StrippedLineOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this->StrippedLineOffsets).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_res18[0];
  return;
}

// GetRemapData @ 145e9ea60

FRemapData * __thiscall
FShaderDiagnosticRemapper::GetRemapData
          (FShaderDiagnosticRemapper *this,FRemapData *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRemapData *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_1 < 1) || ((this->StrippedLineOffsets).ArrayNum < param_1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FShaderDiagnosticRemapper::GetRemapData'::__l23::
             _dynamic_atexit_destructor_for__InvalidPath__);
      _Init_thread_footer(&::_TSS0);
    }
    __return_storage_ptr__->LineNumber = -1;
    __return_storage_ptr__->Filename = &InvalidPath;
    return __return_storage_ptr__;
  }
  uVar7 = (this->Blocks).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      iVar1 = (uVar7 >> 1) + iVar8;
      if (*(int *)((this->Blocks).AllocatorInstance.Data + (longlong)iVar1 * 0x18) <= param_1) {
        iVar8 = iVar1 + (uVar7 & 1);
      }
      uVar6 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar6 != 0);
  }
  uVar7 = iVar8 - 1;
  if (((int)uVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRemapData *)(*pcVar3)();
    return pFVar5;
  }
  uVar6 = 0;
  if ((int)uVar7 < (this->Blocks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRemapData *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = (this->Blocks).AllocatorInstance.Data;
  if ((*(int *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 0x10) < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FoundBlock.OriginalPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                         ,0xd9,L"Unexpected compile error/warning found in system-generated code"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRemapData *)(*pcVar3)();
    return pFVar5;
  }
  iVar8 = (this->StrippedLineOffsets).ArrayNum;
  __return_storage_ptr__->Filename = (FString *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 8);
  uVar6 = 0;
  if ((int)(param_1 - 1U) < iVar8) {
    uVar6 = ~(param_1 - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRemapData *)(*pcVar3)();
    return pFVar5;
  }
  __return_storage_ptr__->LineNumber =
       *(int *)((this->StrippedLineOffsets).AllocatorInstance.Data + (longlong)param_1 * 4 + -4) +
       *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 4);
  return __return_storage_ptr__;
}

// Remap @ 145eaee60

void __thiscall
FShaderDiagnosticRemapper::Remap(FShaderDiagnosticRemapper *this,FShaderCompilerError *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FString *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FRemapData local_58;
  FRemapData local_48;
  
  uVar14 = 0;
  iVar8 = 0;
  if ((1 < (param_1->ErrorLineString).Data.ArrayNum) &&
     (1 < (param_1->ErrorVirtualFilePath).Data.ArrayNum)) {
    GetPreprocessConstants();
    if ((param_1->ErrorVirtualFilePath).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_1->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar13,"__UE_FILENAME_SENTINEL");
    if (iVar7 == 0) {
      iVar7 = (param_1->ErrorLineString).Data.ArrayNum;
      iVar16 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar16 = 0;
      }
      if ((iVar16 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = iswdigit(*(wint_t *)(param_1->ErrorLineString).Data.AllocatorInstance.Data);
      uVar17 = uVar14;
      uVar18 = uVar14;
      if ((iVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FChar::IsDigit(ErrorLineStr[0])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                             ,0x5b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      while( true ) {
        iVar7 = (param_1->ErrorLineString).Data.ArrayNum;
        iVar16 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar16 = iVar8;
        }
        iVar9 = (int)uVar14;
        if (iVar16 <= iVar9) break;
        if ((((iVar9 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = iswdigit(*(wint_t *)
                          ((param_1->ErrorLineString).Data.AllocatorInstance.Data + uVar18));
        if (iVar7 == 0) break;
        if (iVar9 < 0) {
code_r0x000145eaeff5:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          iVar7 = (param_1->ErrorLineString).Data.ArrayNum;
          iVar16 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar16 = iVar8;
          }
          if (iVar16 <= iVar9) goto code_r0x000145eaeff5;
        }
        uVar14 = (ulonglong)(iVar9 + 1);
        uVar17 = (ulonglong)
                 ((uint)*(ushort *)((param_1->ErrorLineString).Data.AllocatorInstance.Data + uVar18)
                 + ((int)uVar17 * 5 + -0x18) * 2);
        uVar18 = uVar18 + 2;
      }
      GetRemapData(this,&local_58,(int)uVar17);
      if (local_58.LineNumber != -1) {
        iVar7 = (param_1->ErrorLineString).Data.ArrayNum;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        iVar16 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar16 = iVar8;
        }
        ::FString::Reserve(&local_88,iVar16);
        ::FString::AppendInt(&local_88,local_58.LineNumber);
        iVar7 = (param_1->ErrorLineString).Data.ArrayNum;
        iVar16 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar16 = iVar8;
        }
        ::FString::AppendChars
                  (&local_88,
                   (wchar_t *)
                   ((param_1->ErrorLineString).Data.AllocatorInstance.Data + (longlong)iVar9 * 2),
                   iVar16 - iVar9);
        pFVar1 = &param_1->ErrorLineString;
        if (pFVar1 != &local_88) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          (param_1->ErrorLineString).Data.ArrayNum = local_88.Data.ArrayNum;
          (param_1->ErrorLineString).Data.ArrayMax = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        ::FString::operator=(&param_1->ErrorVirtualFilePath,local_58.Filename);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar1 = &param_1->StrippedErrorMessage;
  GetPreprocessConstants();
  ::FString::FString(&local_78,"__UE_FILENAME_SENTINEL");
  iVar7 = local_78.Data.ArrayNum + -1;
  FVar4.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar7 = iVar8;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  iVar8 = ::FString::Find(pFVar1,(wchar_t *)FVar4.Data,iVar7,IgnoreCase,FromStart,-1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  do {
    if (iVar8 < 0) {
      return;
    }
    iVar7 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FPreprocessConstants::FPreprocessConstants(&PreprocessConstants);
      atexit(`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar16 = iVar8 + 0x16;
    lVar15 = (longlong)iVar16 * 2;
    while( true ) {
      iVar9 = (param_1->StrippedErrorMessage).Data.ArrayNum;
      iVar11 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar11 = 0;
      }
      if (iVar11 <= iVar16) break;
      if ((((iVar9 == 0) || (iVar16 < 0)) || (iVar9 + -1 <= iVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = iswdigit(*(wint_t *)((pFVar1->Data).AllocatorInstance.Data + lVar15));
      if (iVar9 != 0) break;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 2;
    }
    lVar15 = (longlong)iVar16 * 2;
    iVar9 = iVar16;
    while( true ) {
      iVar11 = (param_1->StrippedErrorMessage).Data.ArrayNum;
      iVar10 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar10 = 0;
      }
      if (iVar10 <= iVar9) break;
      if ((((iVar9 < 0) || (iVar11 == 0)) || (iVar11 + -1 <= iVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = iswdigit(*(wint_t *)((pFVar1->Data).AllocatorInstance.Data + lVar15));
      if (iVar11 == 0) break;
      if (iVar9 < 0) {
code_r0x000145eaf2e0:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        iVar10 = (param_1->StrippedErrorMessage).Data.ArrayNum;
        iVar11 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar11 = 0;
        }
        if (iVar11 <= iVar9) goto code_r0x000145eaf2e0;
      }
      iVar9 = iVar9 + 1;
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data + lVar15;
      lVar15 = lVar15 + 2;
      iVar7 = (uint)*(ushort *)pFVar2 + (iVar7 * 5 + -0x18) * 2;
    }
    GetRemapData(this,&local_48,iVar7);
    iVar7 = local_48.LineNumber;
    if (local_48.LineNumber == -1) {
      return;
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar15 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FPreprocessConstants::FPreprocessConstants(&PreprocessConstants);
      atexit(`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar5 = local_48.Filename;
    iVar10 = (param_1->StrippedErrorMessage).Data.ArrayNum;
    iVar12 = ((local_48.Filename)->Data).ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    iVar11 = iVar12 + -0x17;
    if (iVar12 == 0) {
      iVar11 = -0x16;
    }
    iVar12 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar12 = 0;
    }
    ::FString::Reserve(&local_98,iVar11 + iVar12);
    ::FString::AppendChars(&local_98,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar8);
    iVar10 = (pFVar5->Data).ArrayNum;
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_98,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar11);
    if ((*(int *)(lVar15 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FPreprocessConstants::FPreprocessConstants(&PreprocessConstants);
      atexit(`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__);
      _Init_thread_footer(&::_TSS0);
    }
    ::FString::AppendChars
              (&local_98,
               (wchar_t *)((pFVar1->Data).AllocatorInstance.Data + (longlong)(iVar8 + 0x16) * 2),
               iVar16 - (iVar8 + 0x16));
    ::FString::AppendInt(&local_98,iVar7);
    iVar7 = (param_1->StrippedErrorMessage).Data.ArrayNum;
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars
              (&local_98,(wchar_t *)((pFVar1->Data).AllocatorInstance.Data + (longlong)iVar9 * 2),
               iVar8 - iVar9);
    if (pFVar1 != &local_98) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (param_1->StrippedErrorMessage).Data.ArrayNum = local_98.Data.ArrayNum;
      (param_1->StrippedErrorMessage).Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if ((*(int *)(lVar15 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FPreprocessConstants::FPreprocessConstants(&PreprocessConstants);
      atexit(`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__);
      _Init_thread_footer(&::_TSS0);
    }
    ::FString::FString(&local_68,"__UE_FILENAME_SENTINEL");
    iVar8 = local_68.Data.ArrayNum + -1;
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    iVar8 = ::FString::Find(pFVar1,(wchar_t *)FVar4.Data,iVar8,IgnoreCase,FromStart,-1);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// Shrink @ 145eb63b0

void __thiscall FShaderDiagnosticRemapper::Shrink(FShaderDiagnosticRemapper *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,(ForAnyElementType *)this,iVar2,piVar1);
  }
  iVar2 = (this->StrippedLineOffsets).ArrayNum;
  if ((this->StrippedLineOffsets).ArrayMax != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,&(this->StrippedLineOffsets).AllocatorInstance,iVar2,
               &(this->StrippedLineOffsets).ArrayMax);
  }
  return;
}

