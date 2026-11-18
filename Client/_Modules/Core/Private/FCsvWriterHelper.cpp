// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Flush @ 14193f290

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvWriterHelper::Flush(FCsvWriterHelper *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  
  iVar2 = this->BytesInBuffer;
  if (0 < iVar2) {
    iVar3 = (this->GZipBuffer).ArrayNum;
    piVar1 = &(this->GZipBuffer).ArrayNum;
    if (iVar3 < 1) {
      pFVar9 = (this->OutputFile).Object;
      pFVar10 = (this->Buffer).AllocatorInstance.Data;
    }
    else {
      pFVar10 = (this->Buffer).AllocatorInstance.Data;
      pFVar4 = (this->GZipBuffer).AllocatorInstance.Data;
      local_res8[0] = iVar3;
      FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
      uStackX_1c = 0;
      local_res18 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      FVar5.Number = 0;
      FVar5.ComparisonIndex.Value = local_res18;
      bVar7 = FCompression::CompressMemory
                        (FVar5,pFVar4,local_res8,pFVar10,iVar2,COMPRESS_BiasSpeed,0);
      iVar2 = local_res8[0];
      while (local_res8[0] = iVar2, !bVar7) {
        iVar3 = (this->GZipBuffer).ArrayNum;
        if (iVar2 <= iVar3) {
          if (1 < (byte)LogCsvProfiler._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_void___cdecl_FCsvWriterHelper::Flush(void)___ptr64'::__l20::
                        LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
          goto LAB_14193f413;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2 - iVar3,&(this->GZipBuffer).AllocatorInstance,piVar1,
                   &(this->GZipBuffer).ArrayMax);
        local_res8[0] = *piVar1;
        iVar2 = this->BytesInBuffer;
        pFVar10 = (this->Buffer).AllocatorInstance.Data;
        pFVar4 = (this->GZipBuffer).AllocatorInstance.Data;
        FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
        uStackX_1c = 0;
        local_res18 = *(uint *)CONCAT44(extraout_var_00,FVar8.Value);
        FVar6.Number = 0;
        FVar6.ComparisonIndex.Value = local_res18;
        bVar7 = FCompression::CompressMemory
                          (FVar6,pFVar4,local_res8,pFVar10,iVar2,COMPRESS_BiasSpeed,0);
        iVar2 = local_res8[0];
      }
      pFVar9 = (this->OutputFile).Object;
      pFVar10 = (this->GZipBuffer).AllocatorInstance.Data;
    }
    (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,pFVar10,(longlong)iVar2);
LAB_14193f413:
    this->BytesInBuffer = 0;
  }
  return;
}

// SerializeInternal @ 141969d90

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvWriterHelper::SerializeInternal(FCsvWriterHelper *this,void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FArchive *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  uint uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res8 [2];
  undefined1 local_res20 [8];
  
  uVar17 = (ulonglong)param_2;
  if ((this->Buffer).ArrayNum == 0) {
    pFVar4 = (this->OutputFile).Object;
                    /* WARNING: Could not recover jumptable at 0x000141969dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,param_1,uVar17);
    return;
  }
  do {
    if (param_2 == 0) {
      return;
    }
    iVar2 = (this->Buffer).ArrayNum;
    iVar16 = (int)uVar17;
    uVar3 = this->BytesInBuffer;
    lVar14 = (longlong)(int)uVar3;
    iVar10 = iVar2 - uVar3;
    iVar15 = iVar16;
    if (iVar10 < iVar16) {
      iVar15 = iVar10;
    }
    if (iVar15 == 0) {
      if (0 < (int)uVar3) {
        iVar2 = (this->GZipBuffer).ArrayNum;
        piVar1 = &(this->GZipBuffer).ArrayNum;
        if (iVar2 < 1) {
          pFVar13 = (this->Buffer).AllocatorInstance.Data;
        }
        else {
          pFVar13 = (this->Buffer).AllocatorInstance.Data;
          pFVar5 = (this->GZipBuffer).AllocatorInstance.Data;
          local_res8[0] = iVar2;
          FVar11 = FNameEntryId::FromValidEName((EName)local_res20);
          FVar7.Number = 0;
          FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
          bVar9 = FCompression::CompressMemory
                            (FVar7,pFVar5,local_res8,pFVar13,uVar3,COMPRESS_BiasSpeed,0);
          while (!bVar9) {
            iVar2 = (this->GZipBuffer).ArrayNum;
            if (local_res8[0] <= iVar2) {
              if (1 < (byte)LogCsvProfiler._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&`private:_void___cdecl_FCsvWriterHelper::Flush(void)___ptr64'::__l20::
                            LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
              }
              this->BytesInBuffer = 0;
              goto LAB_141969fcc;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_res8[0] - iVar2,&(this->GZipBuffer).AllocatorInstance,piVar1,
                       &(this->GZipBuffer).ArrayMax);
            local_res8[0] = *piVar1;
            iVar2 = this->BytesInBuffer;
            pFVar13 = (this->Buffer).AllocatorInstance.Data;
            pFVar5 = (this->GZipBuffer).AllocatorInstance.Data;
            FVar11 = FNameEntryId::FromValidEName((EName)local_res20);
            FVar8.Number = 0;
            FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
            bVar9 = FCompression::CompressMemory
                              (FVar8,pFVar5,local_res8,pFVar13,iVar2,COMPRESS_BiasSpeed,0);
          }
          lVar14 = (longlong)local_res8[0];
          pFVar13 = (this->GZipBuffer).AllocatorInstance.Data;
        }
        pFVar4 = (this->OutputFile).Object;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar13,lVar14);
        this->BytesInBuffer = 0;
      }
    }
    else {
      uVar12 = 0;
      if ((int)uVar3 < iVar2) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      memcpy((this->Buffer).AllocatorInstance.Data + lVar14,param_1,(longlong)iVar15);
      this->BytesInBuffer = this->BytesInBuffer + iVar15;
      param_1 = (void *)((longlong)param_1 + (longlong)iVar15);
      uVar17 = (ulonglong)(uint)(iVar16 - iVar15);
    }
LAB_141969fcc:
    param_2 = (int)uVar17;
  } while( true );
}

// WriteMetadataEntry @ 14197ca00

void __thiscall
FCsvWriterHelper::WriteMetadataEntry(FCsvWriterHelper *this,FString *param_1,FString *param_2)

{
  ForAnyElementType FVar1;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_28,L"[%s]");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,(wchar_t *)FVar1.Data);
  if (this->bIsLineStart == false) {
    local_res8[0] = 0x2c;
    SerializeInternal(this,local_res8,1);
  }
  this->bIsLineStart = false;
  WriteStringInternal(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (this->bIsLineStart == false) {
    local_res8[0] = 0x2c;
    SerializeInternal(this,local_res8,1);
  }
  this->bIsLineStart = false;
  WriteStringInternal(this,param_2);
  return;
}

// WriteSemicolonSeparatedStringList @ 14197caf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCsvWriterHelper::WriteSemicolonSeparatedStringList
          (FCsvWriterHelper *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  FString local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this->bIsLineStart == false) {
    local_108[0] = 0x2c;
    SerializeInternal(this,local_108,1);
  }
  uVar10 = 0;
  this->bIsLineStart = false;
  iVar6 = param_1->ArrayNum;
  uVar11 = uVar10;
  if (0 < iVar6) {
    do {
      uVar9 = (uint)uVar10;
      uVar12 = 0;
      if ((int)uVar9 < iVar6) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = *(int *)(pFVar1 + uVar11 + 8);
      lVar7 = (longlong)local_f8.Data.ArrayNum;
      _Src = *(void **)(pFVar1 + uVar11);
      if (local_f8.Data.ArrayNum == 0) {
        local_f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,
                   local_f8.Data.ArrayNum,&local_f8.Data.ArrayMax);
        memcpy(local_f8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      ::FString::ReplaceInline(&local_f8,L";",L".",IgnoreCase);
      ::FString::ReplaceInline(&local_f8,L",",L".",IgnoreCase);
      if (0 < (int)uVar9) {
        local_100[0] = 0x3b;
        SerializeInternal(this,local_100,1);
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      if (local_f8.Data.ArrayNum == 0) {
        _Str = L"";
LAB_14197cc9b:
        sVar4 = wcslen(_Str);
        local_58 = (int)sVar4;
        uVar12 = local_58 + 1;
        FVar8.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar12) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,1)
          ;
          FVar8.Data = local_68.Data;
        }
        local_60 = local_e8;
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          local_60 = FVar8.Data;
        }
        pcVar5 = FGenericPlatformString::Convert<wchar_t,char>((char *)local_60,uVar12,_Str,uVar12);
        if ((pcVar5 == (char *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        _Str = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14197cc9b;
        local_60 = (FScriptContainerElement *)0x0;
        local_58 = 0;
      }
      SerializeInternal(this,local_60,local_58);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      iVar6 = param_1->ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar9 + 1) < iVar6);
  }
  return;
}

// WriteStringInternal @ 14197cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCsvWriterHelper::WriteStringInternal(FCsvWriterHelper *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  char *pcVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_48.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
      goto LAB_14197ce78;
    }
  }
  sVar3 = wcslen(_Str);
  local_38 = (int)sVar3;
  uVar6 = local_38 + 1;
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (0x80 < uVar6) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar6,1);
    FVar5.Data = local_48.Data;
  }
  local_40 = local_c8;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    local_40 = FVar5.Data;
  }
  pcVar4 = FGenericPlatformString::Convert<wchar_t,char>((char *)local_40,uVar6,_Str,uVar6);
  if (pcVar4 == (char *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_14197ce78:
  SerializeInternal(this,local_40,local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

