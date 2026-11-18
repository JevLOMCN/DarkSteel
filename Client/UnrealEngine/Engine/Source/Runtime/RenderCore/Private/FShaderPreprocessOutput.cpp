// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// FShaderPreprocessOutput @ 145e42be0

FShaderPreprocessOutput * __thiscall
FShaderPreprocessOutput::FShaderPreprocessOutput(FShaderPreprocessOutput *this)

{
  FShaderSource::FShaderSource(&this->PreprocessedSource);
  FShaderSource::FShaderSource(&this->OriginalPreprocessedSource);
  (this->WideSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WideSource).Data.ArrayNum = 0;
  (this->WideSource).Data.ArrayMax = 0;
  (this->WideSourceUnstripped).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WideSourceUnstripped).Data.ArrayNum = 0;
  (this->WideSourceUnstripped).Data.ArrayMax = 0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  (this->PragmaDirectives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PragmaDirectives).ArrayNum = 0;
  (this->PragmaDirectives).ArrayMax = 0;
  (this->Remapper).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Remapper).Blocks.ArrayNum = 0;
  (this->Remapper).Blocks.ArrayMax = 0;
  (this->Remapper).StrippedLineOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Remapper).StrippedLineOffsets.ArrayNum = 0;
  (this->Remapper).StrippedLineOffsets.ArrayMax = 0;
  this->PreprocessTime = 0.0;
  this->bSucceeded = false;
  this->bIsSecondary = false;
  (this->ShaderDiagnosticDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderDiagnosticDatas).ArrayNum = 0;
  (this->ShaderDiagnosticDatas).ArrayMax = 0;
  return this;
}

// ~FShaderPreprocessOutput @ 145e446c0

void __thiscall FShaderPreprocessOutput::~FShaderPreprocessOutput(FShaderPreprocessOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FShaderDiagnosticData,int>
            ((FShaderDiagnosticData *)(this->ShaderDiagnosticDatas).AllocatorInstance.Data,
             (this->ShaderDiagnosticDatas).ArrayNum);
  pFVar1 = (this->ShaderDiagnosticDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Remapper).StrippedLineOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FShaderDiagnosticRemapper::FSourceBlock,int>
            ((FSourceBlock *)(this->Remapper).Blocks.AllocatorInstance.Data,
             (this->Remapper).Blocks.ArrayNum);
  pFVar1 = (this->Remapper).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PragmaDirectives).AllocatorInstance.Data,
             (this->PragmaDirectives).ArrayNum);
  pFVar1 = (this->PragmaDirectives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FShaderCompilerError,int>
            ((FShaderCompilerError *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WideSourceUnstripped).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WideSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginalPreprocessedSource).SourceCompressed.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginalPreprocessedSource).Source.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreprocessedSource).SourceCompressed.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreprocessedSource).Source.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetUnstrippedSourceView @ 145e5bfe0

TStringView<wchar_t> * __thiscall
FShaderPreprocessOutput::GetUnstrippedSourceView
          (FShaderPreprocessOutput *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TStringView<wchar_t> *pTVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((this->OriginalPreprocessedSource).DecompressedCharCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsCompressed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                       ,0x74,L"Len should not be called on compressed FShaderSource.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TStringView<wchar_t> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  iVar8 = 0;
  if ((this->OriginalPreprocessedSource).Source.ArrayNum == 0xf) {
    if ((this->WideSource).Data.ArrayNum < 2) {
      if ((this->PreprocessedSource).DecompressedCharCount != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsCompressed()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                           ,0x5d,
                           L"FShaderSource is compressed; must decompress prior to calling GetView")
        ;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TStringView<wchar_t> *)(*pcVar2)();
          return pTVar4;
        }
      }
      pFVar1 = (this->PreprocessedSource).Source.AllocatorInstance.Data;
      if ((this->PreprocessedSource).DecompressedCharCount != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsCompressed()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                           ,0x74,L"Len should not be called on compressed FShaderSource.");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TStringView<wchar_t> *)(*pcVar2)();
          return pTVar4;
        }
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_58,(char *)pFVar1,(this->PreprocessedSource).Source.ArrayNum + -0xf
                         );
      iVar9 = iVar8;
      if (&local_48 != pFVar5) {
        pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = (pFVar5->Data).ArrayNum;
        iVar9 = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pFVar5 = &this->WideSource;
      if (pFVar5 != &local_48) {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar5->Data).AllocatorInstance.Data = pFVar6;
        (this->WideSource).Data.ArrayNum = iVar7;
        (this->WideSource).Data.ArrayMax = iVar9;
        __return_storage_ptr__->DataPtr = (wchar_t *)(this->WideSource).Data.AllocatorInstance.Data;
        iVar7 = (this->WideSource).Data.ArrayNum;
        goto LAB_145e5c234;
      }
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
    }
    __return_storage_ptr__->DataPtr = (wchar_t *)(this->WideSource).Data.AllocatorInstance.Data;
    iVar7 = (this->WideSource).Data.ArrayNum;
  }
  else {
    if ((this->WideSourceUnstripped).Data.ArrayNum < 2) {
      if ((this->OriginalPreprocessedSource).DecompressedCharCount != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsCompressed()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                           ,0x5d,
                           L"FShaderSource is compressed; must decompress prior to calling GetView")
        ;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TStringView<wchar_t> *)(*pcVar2)();
          return pTVar4;
        }
      }
      pFVar1 = (this->OriginalPreprocessedSource).Source.AllocatorInstance.Data;
      if ((this->OriginalPreprocessedSource).DecompressedCharCount != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsCompressed()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                           ,0x74,L"Len should not be called on compressed FShaderSource.");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TStringView<wchar_t> *)(*pcVar2)();
          return pTVar4;
        }
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_38,(char *)pFVar1,
                          (this->OriginalPreprocessedSource).Source.ArrayNum + -0xf);
      iVar7 = iVar8;
      iVar9 = iVar8;
      if (&local_28 != pFVar5) {
        pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = (pFVar5->Data).ArrayNum;
        iVar9 = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar5 = &this->WideSourceUnstripped;
      if (pFVar5 == &local_28) {
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
      else {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar5->Data).AllocatorInstance.Data = pFVar6;
        (this->WideSourceUnstripped).Data.ArrayNum = iVar7;
        (this->WideSourceUnstripped).Data.ArrayMax = iVar9;
      }
    }
    __return_storage_ptr__->DataPtr =
         (wchar_t *)(this->WideSourceUnstripped).Data.AllocatorInstance.Data;
    iVar7 = (this->WideSourceUnstripped).Data.ArrayNum;
  }
LAB_145e5c234:
  iVar9 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar9 = iVar8;
  }
  __return_storage_ptr__->Size = iVar9;
  return __return_storage_ptr__;
}

// RemapErrors @ 145eaf5c0

void __thiscall
FShaderPreprocessOutput::RemapErrors(FShaderPreprocessOutput *this,FShaderCompilerOutput *param_1)

{
  int iVar1;
  FShaderCompilerError *pFVar2;
  FShaderCompilerError *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Errors).ArrayNum;
  pFVar2 = (FShaderCompilerError *)(param_1->Errors).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((param_1->Errors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FShaderCompilerError,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    FShaderDiagnosticRemapper::Remap(&this->Remapper,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// StripCode @ 145eb7640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FShaderPreprocessOutput::StripCode(FShaderPreprocessOutput *this,bool param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  int iVar9;
  FPreprocessConstants *pFVar10;
  FScriptContainerElement FVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int local_res8;
  int local_a8 [2];
  FString local_a0;
  FString local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  
  if (((this->PreprocessedSource).DecompressedCharCount != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsCompressed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                         ,0x74,L"Len should not be called on compressed FShaderSource."), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar14 = (this->PreprocessedSource).Source.ArrayNum;
  pFVar10 = GetPreprocessConstants();
  iVar18 = 0;
  local_78 = *(undefined4 *)&(pFVar10->StrippedCodeHeader).DataPtr;
  uStack_74 = *(undefined4 *)((longlong)&(pFVar10->StrippedCodeHeader).DataPtr + 4);
  iVar9 = (pFVar10->StrippedCodeHeader).Size;
  uStack_6c = *(undefined4 *)&(pFVar10->StrippedCodeHeader).field_0xc;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iStack_5c = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  _local_50 = 0;
  iVar14 = iVar14 + iVar9;
  local_48 = 0;
  iStack_70 = iVar9;
  TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<char,TSizedDefaultAllocator<32>_> *)&stack0xffffffffffffff98,iVar14,Default);
  pFVar12 = local_68.Data + (iVar14 + -0xf);
  *(undefined8 *)pFVar12 = 0;
  *(undefined4 *)(pFVar12 + 8) = 0;
  *(undefined2 *)(pFVar12 + 0xc) = 0;
  pFVar12[0xe] = (FScriptContainerElement)0x0;
  uVar5 = _local_50 >> 0x20;
  _local_50 = _local_50 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&stack0xffffffffffffffa8,0,&stack0xffffffffffffffb4);
  }
  local_48 = 0;
  memcpy(local_68.Data,(void *)CONCAT44(uStack_74,local_78),(longlong)iVar9);
  if ((local_48 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsCompressed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                         ,0x66,
                         L"FShaderSource is compressed; must decompress prior to calling GetData"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar6.Data = local_68.Data;
  pFVar10 = GetPreprocessConstants();
  pFVar12 = FVar6.Data + (pFVar10->StrippedCodeHeader).Size;
  if (((this->PreprocessedSource).DecompressedCharCount != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsCompressed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                         ,0x66,
                         L"FShaderSource is compressed; must decompress prior to calling GetData"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar15 = (this->PreprocessedSource).Source.AllocatorInstance.Data;
  if (((this->PreprocessedSource).DecompressedCharCount != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsCompressed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                         ,0x74,L"Len should not be called on compressed FShaderSource."), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8 = 1;
  pFVar17 = pFVar15 + ((this->PreprocessedSource).Source.ArrayNum + -0xf);
  iVar14 = 1;
  iVar9 = iVar18;
joined_r0x000145eb77dd:
  do {
    if ((pFVar17 <= pFVar15) || (FVar8 = *pFVar15, FVar8 == (FScriptContainerElement)0x0)) {
LAB_145eb7b59:
      if ((local_48 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsCompressed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                             ,0x74,L"Len should not be called on compressed FShaderSource."), bVar7)
         ) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((FVar6.Data + (local_60 + -0xf) < pFVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutStripped <= OutStrippedData + PreprocessedSourceStripped.Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                             ,0x176,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = (int)pFVar12 - (int)FVar6.Data;
      if ((local_48 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsCompressed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                             ,0x74,L"Len should not be called on compressed FShaderSource."), bVar7)
         ) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_60 + -0xf < iVar14) {
        if ((local_48 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsCompressed()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                               ,0x74,L"Len should not be called on compressed FShaderSource."),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                           ,0x4f,
                           L"Trying to shrink to %d characters but existing allocation is smaller (%d characters)"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                ((TArray<char,TSizedDefaultAllocator<32>_> *)&stack0xffffffffffffff98,iVar14 + 0xf,
                 Default);
      pFVar12 = local_68.Data + iVar14;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar12 + 8) = 0;
      *(undefined2 *)(pFVar12 + 0xc) = 0;
      pFVar12[0xe] = (FScriptContainerElement)0x0;
      uVar5 = _local_50 >> 0x20;
      _local_50 = _local_50 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&stack0xffffffffffffffa8,0,&stack0xffffffffffffffb4);
      }
      iVar14 = (this->Remapper).Blocks.ArrayNum;
      piVar1 = &(this->Remapper).Blocks.ArrayMax;
      local_48 = 0;
      if (*piVar1 != iVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar14,(ForAnyElementType *)&this->Remapper,iVar14,piVar1);
      }
      iVar14 = (this->Remapper).StrippedLineOffsets.ArrayNum;
      piVar1 = &(this->Remapper).StrippedLineOffsets.ArrayMax;
      if (*piVar1 != iVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar14,&(this->Remapper).StrippedLineOffsets.AllocatorInstance,iVar14,piVar1)
        ;
      }
      if (param_1) {
        FShaderSource::operator=(&this->OriginalPreprocessedSource,&this->PreprocessedSource);
      }
      if (this != (FShaderPreprocessOutput *)&stack0xffffffffffffff98) {
        pFVar12 = (this->PreprocessedSource).Source.AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (this->PreprocessedSource).Source.AllocatorInstance.Data = local_68.Data;
        (this->PreprocessedSource).Source.ArrayNum = local_60;
        (this->PreprocessedSource).Source.ArrayMax = iStack_5c;
        local_60 = 0;
        iStack_5c = 0;
        local_68.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &(this->PreprocessedSource).SourceCompressed;
      if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&stack0xffffffffffffffa8) {
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pTVar2->AllocatorInstance).Data = local_58.Data;
        (this->PreprocessedSource).SourceCompressed.ArrayNum = local_50;
        (this->PreprocessedSource).SourceCompressed.ArrayMax = iStack_4c;
        _local_50 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
      }
      (this->PreprocessedSource).DecompressedCharCount = local_48;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      return;
    }
    while ((0x2f < (byte)FVar8 || ((0x800800002401U >> ((longlong)(char)FVar8 & 0x3fU) & 1) == 0)))
    {
      FVar8 = *pFVar15;
      pFVar15 = pFVar15 + 1;
      *pFVar12 = FVar8;
      pFVar12 = pFVar12 + 1;
      FVar8 = *pFVar15;
    }
    FVar8 = *pFVar15;
    if ((FVar8 != (FScriptContainerElement)0xd) && (FVar8 != (FScriptContainerElement)0xa)) {
      if (FVar8 == (FScriptContainerElement)0x2f) {
        FVar8 = (FScriptContainerElement)0x2f;
        iVar14 = local_res8;
        if (pFVar15[1] == (FScriptContainerElement)0x2f) {
          while ((FVar8 != (FScriptContainerElement)0xd && (FVar8 != (FScriptContainerElement)0xa)))
          {
            if (pFVar17 <= pFVar15) goto LAB_145eb7b59;
            pFVar16 = pFVar15 + 1;
            pFVar15 = pFVar15 + 1;
            FVar8 = *pFVar16;
          }
        }
        else if (pFVar15[1] == (FScriptContainerElement)0x2a) {
          pFVar16 = pFVar15 + 2;
          do {
            pFVar15 = pFVar16;
            if (pFVar17 <= pFVar15) break;
            pFVar16 = pFVar15 + 1;
          } while ((*pFVar15 != (FScriptContainerElement)0x2a) ||
                  (*pFVar16 != (FScriptContainerElement)0x2f));
          pFVar15 = pFVar15 + 2;
        }
        else {
          pFVar15 = pFVar15 + 1;
          *pFVar12 = (FScriptContainerElement)0x2f;
          pFVar12 = pFVar12 + 1;
        }
      }
      else if (FVar8 == (FScriptContainerElement)0x23) {
        pFVar16 = pFVar15 + 4;
        if ((((pFVar16 < pFVar17) && (pFVar15[1] == (FScriptContainerElement)0x6c)) &&
            (pFVar15[2] == (FScriptContainerElement)0x69)) &&
           ((pFVar15[3] == (FScriptContainerElement)0x6e &&
            (*pFVar16 == (FScriptContainerElement)0x65)))) {
          iVar14 = iswdigit(0x65);
          for (; (iVar14 == 0 && (pFVar16 < pFVar17)); pFVar16 = pFVar16 + 1) {
            iVar14 = iswdigit((short)(char)pFVar16[1]);
          }
          iVar9 = iswdigit((short)(char)*pFVar16);
          iVar14 = iVar18;
          while ((iVar9 != 0 && (pFVar16 < pFVar17))) {
            FVar8 = *pFVar16;
            pFVar16 = pFVar16 + 1;
            iVar14 = (int)(char)FVar8 + iVar14 * 10 + -0x30;
            iVar9 = iswdigit((short)(char)*pFVar16);
          }
          FVar8 = *pFVar16;
          pFVar15 = pFVar16;
          while (FVar8 != (FScriptContainerElement)0x22) {
            if (((pFVar17 <= pFVar15) || (FVar8 == (FScriptContainerElement)0xd)) ||
               (FVar8 == (FScriptContainerElement)0xa)) {
              if (*pFVar15 != (FScriptContainerElement)0x22) {
                local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_a0.Data.ArrayNum = 0;
                local_a0.Data.ArrayMax = 0;
                FShaderDiagnosticRemapper::AddSourceBlock
                          (&this->Remapper,iVar14,local_res8,&local_a0);
                FVar13.Data = local_a0.Data.AllocatorInstance.Data;
                goto LAB_145eb79d8;
              }
              break;
            }
            pFVar16 = pFVar15 + 1;
            pFVar15 = pFVar15 + 1;
            FVar8 = *pFVar16;
          }
          pFVar16 = pFVar15 + 1;
          FVar8 = *pFVar16;
          iVar9 = 0;
          pFVar15 = pFVar16;
          while ((FVar8 != (FScriptContainerElement)0x22 && (pFVar15 < pFVar17))) {
            pFVar15 = pFVar15 + 1;
            iVar9 = iVar9 + 1;
            FVar8 = *pFVar15;
          }
          ::FString::ConstructFromPtrSize(&local_90,(char *)pFVar16,iVar9);
          for (; ((*pFVar15 != (FScriptContainerElement)0xd &&
                  (*pFVar15 != (FScriptContainerElement)0xa)) && (pFVar15 < pFVar17));
              pFVar15 = pFVar15 + 1) {
          }
          FShaderDiagnosticRemapper::AddSourceBlock(&this->Remapper,iVar14,local_res8,&local_90);
          FVar13.Data = local_90.Data.AllocatorInstance.Data;
LAB_145eb79d8:
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
          if (pFVar15 < pFVar17) {
            FVar8 = *pFVar15;
          }
          else {
            FVar8 = (FScriptContainerElement)0x0;
          }
          if (pFVar15 + 1 < pFVar17) {
            FVar11 = pFVar15[1];
            iVar9 = iVar18;
          }
          else {
            FVar11 = (FScriptContainerElement)0x0;
            iVar9 = 0;
          }
          goto LAB_145eb7b28;
        }
        pFVar15 = pFVar15 + 1;
        *pFVar12 = (FScriptContainerElement)0x23;
        pFVar12 = pFVar12 + 1;
      }
      goto joined_r0x000145eb77dd;
    }
    if ((pFVar12[-1] != (FScriptContainerElement)0xd) &&
       (pFVar12[-1] != (FScriptContainerElement)0xa)) {
      local_a8[0] = iVar9;
      if (((this->Remapper).StrippedLineOffsets.ArrayNum != iVar14 + -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StrippedLineOffsets.Num() == (StrippedLineNum - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                             ,0xbd,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = &(this->Remapper).StrippedLineOffsets;
      pFVar16 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 <
           pFVar16 + (longlong)(this->Remapper).StrippedLineOffsets.ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = (this->Remapper).StrippedLineOffsets.ArrayNum;
      piVar1 = &(this->Remapper).StrippedLineOffsets.ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->Remapper).StrippedLineOffsets.ArrayNum = iVar14 + 1;
      *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_a8[0];
      *pFVar12 = (FScriptContainerElement)0xa;
      pFVar12 = pFVar12 + 1;
      local_res8 = local_res8 + 1;
    }
    iVar9 = iVar9 + 1;
    if (pFVar15 < pFVar17) {
      FVar8 = *pFVar15;
    }
    else {
      FVar8 = (FScriptContainerElement)0x0;
    }
    if (pFVar15 + 1 < pFVar17) {
      FVar11 = pFVar15[1];
    }
    else {
      FVar11 = (FScriptContainerElement)0x0;
    }
LAB_145eb7b28:
    pFVar15 = pFVar15 + (ulonglong)((int)(char)FVar11 + (int)(char)FVar8 == 0x17) + 1;
    iVar14 = local_res8;
  } while( true );
}

