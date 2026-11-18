// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 17

// WriteArrayStart<FString_&> @ 14ae16e00

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart<FString_&>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
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
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
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

// WriteArrayStart<FString> @ 14ae16fb0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart<FString>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
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
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
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

// WriteEscapedString<char> @ 14ae17160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteEscapedString<char>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<char> *param_1)

{
  ushort uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<char> FVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<char> *local_648;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *local_640;
  char *local_638;
  uint uStack_630;
  undefined4 uStack_62c;
  char *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  ForElementType<char> local_368;
  ForElementType<char> local_2e0;
  int local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_188 [128];
  void *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_e8 [128];
  void *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar10 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar10 == 0) {
      return;
    }
    uVar16 = 0;
    uVar9 = 0;
    uVar12 = uVar16;
    if (0 < iVar10) {
      do {
        uVar9 = (uint)uVar16;
        if (0x7ff < (int)uVar9) break;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
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
          goto switchD_14ae1722b_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < ' ') break;
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar16 = (ulonglong)uVar9;
        uVar12 = uVar12 + 1;
      } while ((int)uVar9 < iVar10);
    }
switchD_14ae1722b_caseD_8:
    puVar2 = (uchar *)param_1->DataPtr;
    uVar14 = param_1->Size;
    if ((int)uVar9 < param_1->Size) {
      uVar14 = uVar9;
    }
    uVar11 = 0;
    if (0 < (int)uVar14) {
      uVar11 = uVar14;
    }
    if (uVar11 != 0) {
      pFVar3 = this->Stream;
      local_568.Data = (FScriptContainerElement *)0x0;
      if (puVar2 == (uchar *)0x0) {
        local_560 = (FScriptContainerElement *)0x0;
        local_558 = 0;
      }
      else {
        iVar10 = 0;
        if ((0 < (int)uVar11) && (iVar10 = 0, puVar2[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar10 = 1;
          uVar11 = uVar11 - 1;
        }
        local_558 = UE::Core::Private::GetConvertedLength((char *)0x0,puVar2,uVar11);
        uVar17 = local_558 + iVar10;
        uVar14 = uVar17;
        if (uVar17 < 0x81) {
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_14ae172af;
          }
        }
        else {
LAB_14ae172af:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_568,0,uVar14,1);
        }
        local_560 = local_5e8;
        if (local_568.Data != (FScriptContainerElement *)0x0) {
          local_560 = local_568.Data;
        }
        pcVar6 = UE::Core::Private::Convert((char *)local_560,uVar17,puVar2,iVar10 + uVar11);
        this = local_640;
        if ((pcVar6 == (char *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_640, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_560,(longlong)local_558);
      if (local_568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data);
      }
    }
    uVar14 = local_648->Size;
    uVar11 = uVar14;
    if ((int)(uVar14 - uVar9) < (int)uVar14) {
      uVar11 = uVar14 - uVar9;
    }
    uVar12 = 0;
    uVar9 = 0;
    uStack_630 = uVar9;
    if (0 < (int)uVar11) {
      uStack_630 = uVar11;
    }
    local_638 = local_648->DataPtr + ((longlong)(int)uVar14 - (longlong)(int)uStack_630);
    local_648->DataPtr = local_638;
    *(ulonglong *)&local_648->Size = CONCAT44(uStack_62c,uStack_630);
    iVar10 = local_648->Size;
    param_1 = local_648;
    uVar16 = uVar12;
    if (0 < iVar10) {
      do {
        lVar13 = 0;
        uVar9 = (uint)uVar12;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar16]) {
        case '\b':
          pFVar3 = this->Stream;
          local_240 = local_2c8;
          bVar5 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__b + lVar8 * 2);
            local_2c8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar13 * 2)) {
                local_2c8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case '\t':
          pFVar3 = this->Stream;
          local_368.SecondaryData = (ForElementType<char>)0x0;
          local_2d8 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_368,0,2,1);
          FVar15 = (ForElementType<char>)&local_368;
          if (local_368.SecondaryData != (ForElementType<char>)0x0) {
            FVar15 = local_368.SecondaryData;
          }
          bVar5 = false;
          lVar8 = lVar13;
          local_2e0 = FVar15;
          do {
            uVar1 = *(ushort *)(&u__t + lVar8 * 2);
            *(char *)(lVar8 + (longlong)FVar15) = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar13 * 2)) {
                *(undefined1 *)(lVar13 + (longlong)FVar15) = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          if ((FVar15 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,(longlong)local_2d8);
          if (local_368.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_368.SecondaryData);
          }
          break;
        case '\n':
          pFVar3 = this->Stream;
          local_380 = local_408;
          bVar5 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__n + lVar8 * 2);
            local_408[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar13 * 2)) {
                local_408[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ('\x1f' < param_1->DataPtr[uVar16]) goto LAB_14ae17a85;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar6 = local_618.Base;
          pFVar3 = this->Stream;
          iVar10 = (int)local_618.CurPos - (int)local_618.Base;
          local_4c8.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_4c0 = (FScriptContainerElement *)0x0;
            local_4b8 = 0;
          }
          else {
            if ((0 < iVar10) && (local_618.Base[(longlong)iVar10 + -1] == '\0')) {
              lVar13 = 1;
              iVar10 = iVar10 + -1;
            }
            local_4b8 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar10);
            uVar11 = local_4b8 + (int)lVar13;
            uVar14 = uVar11;
            if (uVar11 < 0x81) {
              if (local_4c8.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_14ae179b6;
              }
            }
            else {
LAB_14ae179b6:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_4c8,0,uVar14,1);
            }
            local_4c0 = local_548;
            if (local_4c8.Data != (FScriptContainerElement *)0x0) {
              local_4c0 = local_4c8.Data;
            }
            pcVar6 = UE::Core::Private::Convert
                               ((char *)local_4c0,uVar11,(uchar *)pcVar6,(int)lVar13 + iVar10);
            param_1 = local_648;
            if ((pcVar6 == (char *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case '\f':
          pFVar3 = this->Stream;
          local_1a0 = local_228;
          bVar5 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__f + lVar8 * 2);
            local_228[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar13 * 2)) {
                local_228[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case '\r':
          pFVar3 = this->Stream;
          local_100 = local_188;
          bVar5 = false;
          local_108 = (void *)0x0;
          local_f8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__r + lVar8 * 2);
            local_188[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar13 * 2)) {
                local_188[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,2);
          if (local_108 != (void *)0x0) {
            FMemory::Free(local_108);
          }
          break;
        case '\"':
          pFVar3 = this->Stream;
          local_60 = local_e8;
          bVar5 = false;
          local_68 = (void *)0x0;
          local_58 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_e8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_e8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,2);
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          break;
        case '\\':
          pFVar3 = this->Stream;
          local_420 = local_4a8;
          bVar5 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_4a8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_4a8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar12 = (ulonglong)uVar9;
        uVar16 = uVar16 + 1;
      } while ((int)uVar9 < iVar10);
    }
LAB_14ae17a85:
    iVar10 = param_1->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    iStack_620 = 0;
    if (0 < iVar7) {
      iStack_620 = iVar7;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar10 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 14ae17bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteEscapedString<char8_t>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<char8_t> *param_1)

{
  ushort uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<char> FVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<char8_t> *local_648;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *local_640;
  uchar *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  uchar *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_368 [128];
  void *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_188 [128];
  void *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  ForElementType<char> local_e8;
  ForElementType<char> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar10 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar10 == 0) {
      return;
    }
    uVar16 = 0;
    uVar9 = 0;
    uVar12 = uVar16;
    if (0 < iVar10) {
      do {
        uVar9 = (uint)uVar16;
        if (0x7ff < (int)uVar9) break;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
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
          goto switchD_14ae17cb9_caseD_8;
        }
        if (0x5e < (byte)(param_1->DataPtr[uVar12] - 0x20)) break;
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar16 = (ulonglong)uVar9;
        uVar12 = uVar12 + 1;
      } while ((int)uVar9 < iVar10);
    }
switchD_14ae17cb9_caseD_8:
    puVar2 = param_1->DataPtr;
    uVar14 = param_1->Size;
    if ((int)uVar9 < param_1->Size) {
      uVar14 = uVar9;
    }
    uVar11 = 0;
    if (0 < (int)uVar14) {
      uVar11 = uVar14;
    }
    if (uVar11 != 0) {
      pFVar3 = this->Stream;
      local_568.Data = (FScriptContainerElement *)0x0;
      if (puVar2 == (uchar *)0x0) {
        local_560 = (FScriptContainerElement *)0x0;
        local_558 = 0;
      }
      else {
        iVar10 = 0;
        if ((0 < (int)uVar11) && (iVar10 = 0, puVar2[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar10 = 1;
          uVar11 = uVar11 - 1;
        }
        local_558 = UE::Core::Private::GetConvertedLength((char *)0x0,puVar2,uVar11);
        uVar17 = local_558 + iVar10;
        uVar14 = uVar17;
        if (uVar17 < 0x81) {
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_14ae17d40;
          }
        }
        else {
LAB_14ae17d40:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_568,0,uVar14,1);
        }
        local_560 = local_5e8;
        if (local_568.Data != (FScriptContainerElement *)0x0) {
          local_560 = local_568.Data;
        }
        pcVar6 = UE::Core::Private::Convert((char *)local_560,uVar17,puVar2,iVar10 + uVar11);
        this = local_640;
        if ((pcVar6 == (char *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_640, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_560,(longlong)local_558);
      if (local_568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data);
      }
    }
    iVar10 = local_648->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    uVar12 = 0;
    uVar9 = 0;
    iStack_630 = 0;
    if (0 < iVar7) {
      iStack_630 = iVar7;
    }
    local_638 = local_648->DataPtr + ((longlong)iVar10 - (longlong)iStack_630);
    local_648->DataPtr = local_638;
    *(ulonglong *)&local_648->Size = CONCAT44(uStack_62c,iStack_630);
    iVar10 = local_648->Size;
    param_1 = local_648;
    uVar16 = uVar12;
    if (0 < iVar10) {
      do {
        lVar13 = 0;
        uVar9 = (uint)uVar12;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar16]) {
        case '\b':
          pFVar3 = this->Stream;
          local_240 = local_2c8;
          bVar5 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__b + lVar8 * 2);
            local_2c8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar13 * 2)) {
                local_2c8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case '\t':
          pFVar3 = this->Stream;
          local_2e0 = local_368;
          bVar5 = false;
          local_2e8 = (void *)0x0;
          local_2d8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__t + lVar8 * 2);
            local_368[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar13 * 2)) {
                local_368[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,2);
          if (local_2e8 != (void *)0x0) {
            FMemory::Free(local_2e8);
          }
          break;
        case '\n':
          pFVar3 = this->Stream;
          local_380 = local_408;
          bVar5 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__n + lVar8 * 2);
            local_408[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar13 * 2)) {
                local_408[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ((byte)(param_1->DataPtr[uVar16] - 0x20) < 0x5f) goto LAB_14ae18514;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar6 = local_618.Base;
          pFVar3 = this->Stream;
          iVar10 = (int)local_618.CurPos - (int)local_618.Base;
          local_4c8.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_4c0 = (FScriptContainerElement *)0x0;
            local_4b8 = 0;
          }
          else {
            if ((0 < iVar10) && (local_618.Base[(longlong)iVar10 + -1] == '\0')) {
              lVar13 = 1;
              iVar10 = iVar10 + -1;
            }
            local_4b8 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar10);
            uVar11 = local_4b8 + (int)lVar13;
            uVar14 = uVar11;
            if (uVar11 < 0x81) {
              if (local_4c8.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_14ae18445;
              }
            }
            else {
LAB_14ae18445:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_4c8,0,uVar14,1);
            }
            local_4c0 = local_548;
            if (local_4c8.Data != (FScriptContainerElement *)0x0) {
              local_4c0 = local_4c8.Data;
            }
            pcVar6 = UE::Core::Private::Convert
                               ((char *)local_4c0,uVar11,(uchar *)pcVar6,(int)lVar13 + iVar10);
            param_1 = local_648;
            if ((pcVar6 == (char *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case '\f':
          pFVar3 = this->Stream;
          local_1a0 = local_228;
          bVar5 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__f + lVar8 * 2);
            local_228[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar13 * 2)) {
                local_228[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case '\r':
          pFVar3 = this->Stream;
          local_100 = local_188;
          bVar5 = false;
          local_108 = (void *)0x0;
          local_f8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__r + lVar8 * 2);
            local_188[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar13 * 2)) {
                local_188[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,2);
          if (local_108 != (void *)0x0) {
            FMemory::Free(local_108);
          }
          break;
        case '\"':
          pFVar3 = this->Stream;
          local_e8.SecondaryData = (ForElementType<char>)0x0;
          local_58 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_e8,0,2,1);
          FVar15 = (ForElementType<char>)&local_e8;
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FVar15 = local_e8.SecondaryData;
          }
          bVar5 = false;
          lVar8 = lVar13;
          local_60 = FVar15;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            *(char *)(lVar8 + (longlong)FVar15) = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                *(undefined1 *)(lVar13 + (longlong)FVar15) = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          if ((FVar15 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)local_58);
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_e8.SecondaryData);
          }
          break;
        case '\\':
          pFVar3 = this->Stream;
          local_420 = local_4a8;
          bVar5 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_4a8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_4a8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar12 = (ulonglong)uVar9;
        uVar16 = uVar16 + 1;
      } while ((int)uVar9 < iVar10);
    }
LAB_14ae18514:
    iVar10 = param_1->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    iStack_620 = 0;
    if (0 < iVar7) {
      iStack_620 = iVar7;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar10 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 14ae18680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<wchar_t> *param_1)

{
  short sVar1;
  wchar_t wVar2;
  ushort uVar3;
  wchar_t *pwVar4;
  FArchive *pFVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<char> FVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<wchar_t> *local_648;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *local_640;
  wchar_t *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  uint local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_368 [128];
  void *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  ForElementType<char> local_188;
  ForElementType<char> local_100;
  int local_f8;
  ForElementType<char> local_e8;
  ForElementType<char> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar15 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar15 == 0) {
      return;
    }
    uVar11 = 0;
    uVar14 = 0;
    uVar17 = uVar11;
    if (0 < iVar15) {
      do {
        uVar14 = (uint)uVar11;
        if (0x7ff < (int)uVar14) break;
        if ((((int)uVar14 < 0) || (iVar15 <= (int)uVar14)) &&
           (local_658 = uVar14, local_650 = iVar15,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        sVar1 = *(short *)(uVar17 + (longlong)param_1->DataPtr);
        switch(sVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_14ae18749_caseD_8;
        }
        if (0x5e < (ushort)(sVar1 - 0x20U)) break;
        iVar15 = param_1->Size;
        uVar14 = uVar14 + 1;
        uVar11 = (ulonglong)uVar14;
        uVar17 = uVar17 + 2;
      } while ((int)uVar14 < iVar15);
    }
switchD_14ae18749_caseD_8:
    pwVar4 = param_1->DataPtr;
    uVar16 = param_1->Size;
    if ((int)uVar14 < param_1->Size) {
      uVar16 = uVar14;
    }
    uVar17 = 0;
    uVar21 = 0;
    uVar9 = 0;
    if (0 < (int)uVar16) {
      uVar9 = uVar16;
    }
    if (uVar9 != 0) {
      pFVar5 = this->Stream;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      if (pwVar4 == (wchar_t *)0x0) {
        local_4c0 = (FScriptContainerElement *)0x0;
        local_4b8 = 0;
      }
      else {
        uVar16 = uVar21;
        if ((0 < (int)uVar9) && (uVar16 = 0, pwVar4[(longlong)(int)uVar9 + -1] == L'\0')) {
          uVar16 = 1;
          uVar9 = uVar9 - 1;
        }
        uVar16 = uVar16 + uVar9;
        local_4b8 = uVar9;
        if (0x80 < uVar16) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4c8,0,uVar16,1);
        }
        lVar20 = (longlong)(int)uVar16;
        FVar13.Data = local_548;
        if (local_4c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_4c8.Data;
        }
        bVar7 = false;
        uVar11 = uVar17;
        local_4c0 = FVar13.Data;
        if (0 < (int)uVar16) {
          do {
            wVar2 = pwVar4[uVar11];
            FVar13.Data[uVar11] = SUB21(wVar2,0);
            uVar11 = uVar11 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < (ushort)wVar2);
          } while ((longlong)uVar11 < lVar20);
          uVar11 = uVar17;
          if (bVar7) {
            do {
              if (0x7f < (ushort)pwVar4[uVar11]) {
                FVar13.Data[uVar11] = (FScriptContainerElement)0x3f;
              }
              uVar11 = uVar11 + 1;
            } while ((longlong)uVar11 < lVar20);
          }
        }
        param_1 = local_648;
        if ((FVar13.Data + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), param_1 = local_648, bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_4c0,(longlong)(int)local_4b8);
      this = local_640;
      if (local_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data);
        this = local_640;
      }
    }
    iVar15 = param_1->Size;
    iVar10 = iVar15;
    if ((int)(iVar15 - uVar14) < iVar15) {
      iVar10 = iVar15 - uVar14;
    }
    lVar20 = 0;
    iStack_630 = 0;
    if (0 < iVar10) {
      iStack_630 = iVar10;
    }
    local_638 = param_1->DataPtr + ((longlong)iVar15 - (longlong)iStack_630);
    param_1->DataPtr = local_638;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_62c,iStack_630);
    iVar15 = param_1->Size;
    if (0 < iVar15) {
      do {
        lVar18 = 0;
        uVar21 = (uint)uVar17;
        if ((((int)uVar21 < 0) || (iVar15 <= (int)uVar21)) &&
           (local_658 = uVar21, local_650 = iVar15,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        switch(param_1->DataPtr[lVar20]) {
        case L'\b':
          pFVar5 = this->Stream;
          local_240 = local_2c8;
          bVar7 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__b + lVar12 * 2);
            local_2c8[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar18 * 2)) {
                local_2c8[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case L'\t':
          pFVar5 = this->Stream;
          local_2e0 = local_368;
          bVar7 = false;
          local_2e8 = (void *)0x0;
          local_2d8 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__t + lVar12 * 2);
            local_368[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar18 * 2)) {
                local_368[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_2e0,2);
          if (local_2e8 != (void *)0x0) {
            FMemory::Free(local_2e8);
          }
          break;
        case L'\n':
          pFVar5 = this->Stream;
          local_380 = local_408;
          bVar7 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__n + lVar12 * 2);
            local_408[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar18 * 2)) {
                local_408[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ((ushort)(param_1->DataPtr[lVar20] + L'￠') < 0x5f) goto LAB_14ae19015;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar8 = local_618.Base;
          pFVar5 = this->Stream;
          iVar15 = (int)local_618.CurPos - (int)local_618.Base;
          local_568.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_560 = (FScriptContainerElement *)0x0;
            local_558 = 0;
          }
          else {
            if ((0 < iVar15) && (local_618.Base[(longlong)iVar15 + -1] == '\0')) {
              lVar18 = 1;
              iVar15 = iVar15 + -1;
            }
            local_558 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar15);
            uVar16 = local_558 + (int)lVar18;
            uVar14 = uVar16;
            if (uVar16 < 0x81) {
              if (local_568.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_14ae18f5e;
              }
            }
            else {
LAB_14ae18f5e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_568,0,uVar14,1);
            }
            local_560 = local_5e8;
            if (local_568.Data != (FScriptContainerElement *)0x0) {
              local_560 = local_568.Data;
            }
            pcVar8 = UE::Core::Private::Convert
                               ((char *)local_560,uVar16,(uchar *)pcVar8,(int)lVar18 + iVar15);
            param_1 = local_648;
            if ((pcVar8 == (char *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_560,(longlong)local_558);
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case L'\f':
          pFVar5 = this->Stream;
          local_1a0 = local_228;
          bVar7 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__f + lVar12 * 2);
            local_228[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar18 * 2)) {
                local_228[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case L'\r':
          pFVar5 = this->Stream;
          local_188.SecondaryData = (ForElementType<char>)0x0;
          local_f8 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_188,0,2,1);
          FVar19 = (ForElementType<char>)&local_188;
          if (local_188.SecondaryData != (ForElementType<char>)0x0) {
            FVar19 = local_188.SecondaryData;
          }
          bVar7 = false;
          lVar12 = lVar18;
          local_100 = FVar19;
          do {
            uVar3 = *(ushort *)(&u__r + lVar12 * 2);
            *(char *)(lVar12 + (longlong)FVar19) = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar18 * 2)) {
                *(undefined1 *)(lVar18 + (longlong)FVar19) = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          if ((FVar19 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_100,(longlong)local_f8);
          if (local_188.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_188.SecondaryData);
          }
          break;
        case L'\"':
          pFVar5 = this->Stream;
          local_e8.SecondaryData = (ForElementType<char>)0x0;
          local_58 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_e8,0,2,1);
          FVar19 = (ForElementType<char>)&local_e8;
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FVar19 = local_e8.SecondaryData;
          }
          bVar7 = false;
          lVar12 = lVar18;
          local_60 = FVar19;
          do {
            uVar3 = *(ushort *)(&u___ + lVar12 * 2);
            *(char *)(lVar12 + (longlong)FVar19) = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar18 * 2)) {
                *(undefined1 *)(lVar18 + (longlong)FVar19) = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          if ((FVar19 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_60,(longlong)local_58);
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_e8.SecondaryData);
          }
          break;
        case L'\\':
          pFVar5 = this->Stream;
          local_420 = local_4a8;
          bVar7 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u___ + lVar12 * 2);
            local_4a8[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar18 * 2)) {
                local_4a8[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar15 = param_1->Size;
        uVar21 = uVar21 + 1;
        uVar17 = (ulonglong)uVar21;
        lVar20 = lVar20 + 1;
      } while ((int)uVar21 < iVar15);
    }
LAB_14ae19015:
    iVar15 = param_1->Size;
    iVar10 = iVar15;
    if ((int)(iVar15 - uVar21) < iVar15) {
      iVar10 = iVar15 - uVar21;
    }
    iStack_620 = 0;
    if (0 < iVar10) {
      iStack_620 = iVar10;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar15 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar15 = param_1->Size;
  } while( true );
}

// WriteObjectStart<FString_&> @ 14ae19180

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString_&>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

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
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x81,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// ~TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> @ 14ae1cda0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::~TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TPrettyJsonPrintPolicy_D____6B_;
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

// CanWriteValueWithoutIdentifier @ 14ae261d0

bool __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

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

// Close @ 14ae26df0

bool __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::Close
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// WriteObjectEnd @ 14ae48040

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectEnd
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

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
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
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
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
  this->IndentLevel = this->IndentLevel + -1;
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_res10[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
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

// WriteStringValue @ 14ae495c0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 14ae49640

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 14ae496c0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<char> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 14ae49730

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<char8_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 14ae497a0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,TStringView<wchar_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteValueOnly @ 14ae49810

EJsonToken __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,float param_1)

{
  FArchive *pFVar1;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_28,L"%g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  TJsonPrintPolicy<char>::WriteString(pFVar1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return Number;
}

// WriteValueOnly @ 14ae49890

EJsonToken __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,double param_1)

{
  FArchive *pFVar1;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_28,L"%.17g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  TJsonPrintPolicy<char>::WriteString(pFVar1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return Number;
}

