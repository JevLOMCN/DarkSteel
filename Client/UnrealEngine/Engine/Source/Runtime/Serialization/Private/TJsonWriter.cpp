// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 25

// WriteArrayStart<FString_&> @ 148b96980

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart<FString_&>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<FString> @ 148b96b40

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart<FString>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteEscapedString<char> @ 148b96d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteEscapedString<char>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<char> *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char> *local_2e8;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *local_2e0;
  char *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_148b96dcb_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < ' ') break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_148b96dcb_caseD_8:
    puVar1 = (uchar *)param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((ushort *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_148b96e58;
          }
        }
        else {
LAB_148b96e58:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        puVar6 = UE::Core::Private::Convert((ushort *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((puVar6 == (ushort *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if ('\x1f' < param_1->DataPtr[uVar12]) goto LAB_148b97215;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((ushort *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_148b9713f;
              }
            }
            else {
LAB_148b9713f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            puVar6 = UE::Core::Private::Convert
                               ((ushort *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((puVar6 == (ushort *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_148b97215:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 148b97380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteEscapedString<char8_t>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char8_t> *local_2e8;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *local_2e0;
  uchar *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  uchar *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_148b97449_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < 0x20) break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_148b97449_caseD_8:
    puVar1 = param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((ushort *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_148b974d6;
          }
        }
        else {
LAB_148b974d6:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        puVar6 = UE::Core::Private::Convert((ushort *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((puVar6 == (ushort *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < param_1->DataPtr[uVar12]) goto LAB_148b97892;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((ushort *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_148b977bc;
              }
            }
            else {
LAB_148b977bc:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            puVar6 = UE::Core::Private::Convert
                               ((ushort *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((puVar6 == (ushort *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_148b97892:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 148b97a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<wchar_t> *param_1)

{
  ushort uVar1;
  uint uVar2;
  wchar_t *_Str;
  FArchive *pFVar3;
  char *pcVar4;
  bool bVar5;
  size_t sVar6;
  ushort *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  code *pcVar16;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  int local_1d0;
  TStringView<wchar_t> *local_1c8;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *local_1c0;
  wchar_t *local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TStringBuilderBase<char> local_198;
  uchar local_178 [8];
  char local_170 [8];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar11 = param_1->Size;
  local_1c0 = this;
  local_1c8 = param_1;
  do {
    if (iVar11 == 0) {
      return;
    }
    uVar15 = 0;
    uVar10 = 0;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar15;
        if (0x7ff < (int)uVar10) break;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)(uVar13 + (longlong)param_1->DataPtr);
        switch(uVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_148b97ac9_caseD_8;
        }
        if (uVar1 < 0x20) break;
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = (ulonglong)uVar10;
        uVar13 = uVar13 + 2;
      } while ((int)uVar10 < iVar11);
    }
switchD_148b97ac9_caseD_8:
    uVar2 = param_1->Size;
    _Str = param_1->DataPtr;
    uVar14 = uVar2;
    if ((int)uVar10 < (int)uVar2) {
      uVar14 = uVar10;
    }
    uVar9 = 0;
    if (0 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if (uVar9 != 0) {
      pFVar3 = this->Stream;
      if (_Str == (wchar_t *)0x0) {
        pwVar8 = (wchar_t *)0x0;
        uVar9 = 0;
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
      }
      else {
        if ((0 < (int)uVar9) && (_Str[(longlong)(int)uVar9 + -1] == L'\0')) {
          uVar9 = uVar9 - 1;
        }
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
        pwVar8 = _Str;
        if (uVar9 == 0xffffffff) {
          sVar6 = wcslen(_Str);
          uVar9 = (uint)sVar6;
        }
      }
      (*pcVar16)(pFVar3,pwVar8,(longlong)(int)uVar9 * 2);
      param_1 = local_1c8;
      this = local_1c0;
    }
    uVar14 = uVar2;
    if ((int)(uVar2 - uVar10) < (int)uVar2) {
      uVar14 = uVar2 - uVar10;
    }
    uStack_1b0 = 0;
    if (0 < (int)uVar14) {
      uStack_1b0 = uVar14;
    }
    local_1b8 = _Str + ((longlong)(int)uVar2 - (longlong)(int)uStack_1b0);
    uVar15 = 0;
    uVar10 = 0;
    param_1->DataPtr = local_1b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_1ac,uStack_1b0);
    iVar11 = param_1->Size;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar13;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)((longlong)param_1->DataPtr + uVar15);
        switch(uVar1) {
        case 8:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case 9:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case 10:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < uVar1) goto LAB_148b97e5b;
          local_198.Base = (char *)local_178;
          local_198.bIsDynamic = false;
          local_198.bIsExternal = false;
          local_198.CurPos = (char *)local_178;
          local_198.End = local_170;
          TStringBuilderBase<char>::AppendfImpl(&local_198,"\\u%04x");
          pcVar4 = local_198.Base;
          pFVar3 = this->Stream;
          iVar11 = (int)local_198.CurPos - (int)local_198.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar12 = 0;
          if ((uchar *)local_198.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar11) && (local_198.Base[(longlong)iVar11 + -1] == '\0')) {
              iVar12 = 1;
              iVar11 = iVar11 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((ushort *)0x0,(uchar *)local_198.Base,iVar11);
            uVar2 = local_58 + iVar12;
            uVar14 = uVar2;
            if (uVar2 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_148b97d87;
              }
            }
            else {
LAB_148b97d87:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar14,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            puVar7 = UE::Core::Private::Convert
                               ((ushort *)local_60,uVar2,(uchar *)pcVar4,iVar12 + iVar11);
            param_1 = local_1c8;
            if ((puVar7 == (ushort *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_1c8, bVar5)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_198);
          this = local_1c0;
          break;
        case 0xc:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case 0xd:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case 0x22:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case 0x5c:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = uVar15 + 2;
        uVar13 = (ulonglong)uVar10;
      } while ((int)uVar10 < iVar11);
    }
LAB_148b97e5b:
    iVar11 = param_1->Size;
    iVar12 = iVar11;
    if ((int)(iVar11 - uVar10) < iVar11) {
      iVar12 = iVar11 - uVar10;
    }
    iStack_1a0 = 0;
    if (0 < iVar12) {
      iStack_1a0 = iVar12;
    }
    local_1a8 = param_1->DataPtr + ((longlong)iVar11 - (longlong)iStack_1a0);
    param_1->DataPtr = local_1a8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_19c,iStack_1a0);
    iVar11 = param_1->Size;
  } while( true );
}

// WriteObjectStart<FString_&> @ 148b97fc0

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart<FString_&>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  int *piVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  WriteIdentifier(this,param_1);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<FString> @ 148b981c0

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart<FString>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  int *piVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  WriteIdentifier(this,param_1);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// ~TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> @ 148ba0100

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
~TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_GU__TPrettyJsonPrintPolicy_G____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CanWriteValueWithoutIdentifier @ 148ba2a10

bool __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// Close @ 148ba2e60

bool __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::Close
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// WriteArrayEnd @ 148bb6110

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayEnd
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar2) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       5) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Array",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0xb9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->IndentLevel = this->IndentLevel + -1;
  if (this->PreviousTokenWritten != SquareOpen) {
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
    pFVar3 = this->Stream;
    if (0 < this->IndentLevel) {
      uVar8 = (ulonglong)(uint)this->IndentLevel;
      do {
        local_res8[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  local_res10[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  if (((this->Stack).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
  iVar2 = ~uVar6 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = SquareClose;
  return;
}

// WriteArrayStart @ 148bb62e0

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  bVar6 = CanWriteValueWithoutIdentifier(this);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x9b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_148bb63d5;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_148bb63d5:
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 5;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteIdentifier @ 148bb64e0

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  FArchive *pFVar3;
  ulonglong uVar4;
  undefined2 local_res8 [4];
  FScriptContainerElement *local_28;
  int iStack_20;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar4 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  local_28 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_20 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_20 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectEnd @ 148bb6780

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectEnd
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar2) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x8e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  this->IndentLevel = this->IndentLevel + -1;
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_res10[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  if (((this->Stack).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
  iVar2 = ~uVar6 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectStart @ 148bb6950

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  iVar8 = (this->Stack).ArrayNum;
  if (0 < iVar8) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_148bb6aba;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_148bb6aba:
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar8 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteStringValue @ 148bb9860

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteStringValue
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 148bb98f0

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteStringValue
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 148bb9980

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteStringValue
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<char> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 148bb9a00

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteStringValue
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<char8_t> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 148bb9a80

void __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteStringValue
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,
          TStringView<wchar_t> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteValueOnly @ 148bb9b00

EJsonToken __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,float param_1)

{
  FArchive *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  FString local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_18,L"%g");
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar4.Data = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar3) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar3 * 2 + -2) == 0)) {
      iVar3 = iVar3 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar3 == -1) {
      sVar2 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar3 = (int)sVar2;
    }
  }
  (*pcVar5)(pFVar1,FVar4.Data,(longlong)iVar3 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return Number;
}

// WriteValueOnly @ 148bb9bc0

EJsonToken __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,double param_1)

{
  FArchive *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  FString local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_18,L"%.17g");
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar4.Data = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar3) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar3 * 2 + -2) == 0)) {
      iVar3 = iVar3 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar3 == -1) {
      sVar2 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar3 = (int)sVar2;
    }
  }
  (*pcVar5)(pFVar1,FVar4.Data,(longlong)iVar3 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return Number;
}

// WriteValueOnly @ 148bb9c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,long64 param_1)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  pwVar2 = local_78.Base;
  pFVar1 = this->Stream;
  iVar4 = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  if (local_78.Base == (wchar_t *)0x0) {
    iVar4 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar4) && (local_78.Base[(longlong)iVar4 + -1] == L'\0')) {
      iVar4 = iVar4 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar4 == -1) {
      sVar3 = wcslen(local_78.Base);
      iVar4 = (int)sVar3;
    }
  }
  (*pcVar5)(pFVar1,pwVar2,(longlong)iVar4 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 148bb9d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,ulong64 param_1
          )

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%llu");
  pwVar2 = local_78.Base;
  pFVar1 = this->Stream;
  iVar4 = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  if (local_78.Base == (wchar_t *)0x0) {
    iVar4 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar4) && (local_78.Base[(longlong)iVar4 + -1] == L'\0')) {
      iVar4 = iVar4 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar4 == -1) {
      sVar3 = wcslen(local_78.Base);
      iVar4 = (int)sVar3;
    }
  }
  (*pcVar5)(pFVar1,pwVar2,(longlong)iVar4 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 148bb9e80

EJsonToken __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,bool param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  
  pFVar1 = this->Stream;
  if (param_1) {
    _Str = L"true";
    iVar4 = 4;
  }
  else {
    _Str = L"false";
    iVar4 = 5;
  }
  if (_Str[(longlong)iVar4 + -1] == L'\0') {
    iVar4 = iVar4 + -1;
  }
  pcVar2 = *(code **)(*(longlong *)pFVar1 + 0x188);
  if (iVar4 == -1) {
    sVar3 = wcslen(_Str);
    iVar4 = (int)sVar3;
  }
  (*pcVar2)(pFVar1,_Str,(longlong)iVar4 * 2);
  return (param_1 ^ 1) + True;
}

