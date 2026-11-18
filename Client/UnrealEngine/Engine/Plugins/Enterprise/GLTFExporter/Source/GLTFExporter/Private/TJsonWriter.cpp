// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 35

// WriteArrayStart<FString_&> @ 14e5cb8b0

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayStart<FString_&>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

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

// WriteEscapedString<char> @ 14e5cba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteEscapedString<char>
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,TStringView<char> *param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  char local_e8 [8];
  char local_e0 [8];
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *local_d8;
  TStringView<char> *local_d0;
  char *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringBuilderBase<char> local_a8;
  char local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar5 = param_1->Size;
  local_d0 = param_1;
  do {
    if (iVar5 == 0) {
      return;
    }
    iVar8 = 0;
    lVar13 = 0;
    local_d8 = this;
    if (0 < iVar5) {
      do {
        if (0x7ff < iVar8) break;
        if (((iVar8 < 0) || (iVar5 <= iVar8)) &&
           (local_f8 = iVar8, local_f0 = iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        switch(param_1->DataPtr[lVar13]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_14e5cbb2d_caseD_8;
        }
        if (param_1->DataPtr[lVar13] < ' ') break;
        iVar5 = param_1->Size;
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 1;
      } while (iVar8 < iVar5);
    }
switchD_14e5cbb2d_caseD_8:
    iVar5 = param_1->Size;
    pcVar10 = param_1->DataPtr;
    iVar11 = iVar5;
    if (iVar8 < iVar5) {
      iVar11 = iVar8;
    }
    iVar16 = 0;
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    if (iVar16 != 0) {
      pFVar1 = this->Stream;
      iVar11 = 0;
      this = local_d8;
      pcVar14 = pcVar10;
      if (0 < iVar16) {
        do {
          local_e8[0] = *pcVar14;
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_e8,1);
          iVar11 = iVar11 + 1;
          this = local_d8;
          pcVar14 = pcVar14 + 1;
        } while (iVar11 < iVar16);
      }
    }
    param_1 = local_d0;
    iVar11 = iVar5;
    if (iVar5 - iVar8 < iVar5) {
      iVar11 = iVar5 - iVar8;
    }
    iStack_c0 = 0;
    if (0 < iVar11) {
      iStack_c0 = iVar11;
    }
    iVar8 = 0;
    local_c8 = pcVar10 + ((longlong)iVar5 - (longlong)iStack_c0);
    lVar13 = 0;
    local_d0->DataPtr = local_c8;
    *(ulonglong *)&local_d0->Size = CONCAT44(uStack_bc,iStack_c0);
    iVar5 = local_d0->Size;
    if (0 < iVar5) {
      do {
        if (((iVar8 < 0) || (iVar5 <= iVar8)) &&
           (local_f8 = iVar8, local_f0 = iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        switch(param_1->DataPtr[lVar13]) {
        case '\b':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__b;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_68 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cbf29:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_68 + 1;
LAB_14e5cbf2d:
              local_68 = CONCAT71(local_68._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cbf29;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_68 + 3;
                goto LAB_14e5cbf2d;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_68,(longlong)(iVar5 - (int)&local_68));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\t':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__t;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_70 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cbe69:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_70 + 1;
LAB_14e5cbe6d:
              local_70 = CONCAT71(local_70._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cbe69;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_70 + 3;
                goto LAB_14e5cbe6d;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_70,(longlong)(iVar5 - (int)&local_70));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\n':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__n;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_78 = 0;
            if ((((uVar7 == 0xfffe) || (uVar7 == 0xffff)) || (uVar7 - 0xd800 < 0x400)) ||
               (uVar7 - 0xdc00 < 0x400)) {
              uVar7 = 0x3f;
LAB_14e5cbda9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_78 + 1;
LAB_14e5cbdad:
              local_78 = CONCAT71(local_78._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cbda9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_78 + 3;
                goto LAB_14e5cbdad;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_78,(longlong)(iVar5 - (int)&local_78));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        default:
          if ('\x1f' < param_1->DataPtr[lVar13]) goto LAB_14e5cc22c;
          local_a8.Base = local_88;
          local_a8.bIsDynamic = false;
          local_a8.bIsExternal = false;
          local_a8.CurPos = local_88;
          local_a8.End = (char *)&local_80;
          TStringBuilderBase<char>::AppendfImpl(&local_a8,"\\u%04x");
          pFVar1 = this->Stream;
          if (0 < (int)local_a8.CurPos - (int)local_a8.Base) {
            uVar15 = (ulonglong)(uint)((int)local_a8.CurPos - (int)local_a8.Base);
            pcVar10 = local_a8.Base;
            do {
              local_e0[0] = *pcVar10;
              (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_e0,1);
              pcVar10 = pcVar10 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a8);
          break;
        case '\f':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__f;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_60 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cbfe9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_60 + 1;
LAB_14e5cbfed:
              local_60 = CONCAT71(local_60._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cbfe9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_60 + 3;
                goto LAB_14e5cbfed;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_60,(longlong)(iVar5 - (int)&local_60));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\r':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__r;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_58 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc0a9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_58 + 1;
LAB_14e5cc0ad:
              local_58 = CONCAT71(local_58._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc0a9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_58 + 3;
                goto LAB_14e5cc0ad;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_58,(longlong)(iVar5 - (int)&local_58));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\"':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u___;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            if ((((uVar7 == 0xfffe) || (uVar7 == 0xffff)) || (uVar7 - 0xd800 < 0x400)) ||
               (uVar7 - 0xdc00 < 0x400)) {
              uVar7 = 0x3f;
LAB_14e5cc16c:
              local_50 = (ulonglong)(byte)uVar7;
              iVar5 = (int)&local_50 + 1;
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc16c;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (uVar7 < 0x800) {
                local_50 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
                iVar5 = (int)&local_50 + 2;
              }
              else {
                local_50 = (ulonglong)CONCAT12((char)uVar7,CONCAT11(uVar4,(byte)(uVar7 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar5 = (int)&local_50 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_50,(longlong)(iVar5 - (int)&local_50));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\\':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u___;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_80 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cbce9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_80 + 1;
LAB_14e5cbced:
              local_80 = CONCAT71(local_80._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cbce9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_80 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_80 + 3;
                goto LAB_14e5cbced;
              }
              local_80 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_80 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_80,(longlong)(iVar5 - (int)&local_80));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        iVar5 = param_1->Size;
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 1;
        this = local_d8;
      } while (iVar8 < iVar5);
    }
LAB_14e5cc22c:
    iVar5 = param_1->Size;
    iVar11 = iVar5;
    if (iVar5 - iVar8 < iVar5) {
      iVar11 = iVar5 - iVar8;
    }
    iStack_b0 = 0;
    if (0 < iVar11) {
      iStack_b0 = iVar11;
    }
    local_b8 = param_1->DataPtr + ((longlong)iVar5 - (longlong)iStack_b0);
    param_1->DataPtr = local_b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_ac,iStack_b0);
    iVar5 = param_1->Size;
    this = local_d8;
  } while( true );
}

// WriteEscapedString<char> @ 14e5cc3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteEscapedString<char>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<char> *param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  char local_e8 [8];
  char local_e0 [8];
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *local_d8;
  TStringView<char> *local_d0;
  char *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringBuilderBase<char> local_a8;
  char local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar5 = param_1->Size;
  local_d0 = param_1;
  do {
    if (iVar5 == 0) {
      return;
    }
    iVar8 = 0;
    lVar13 = 0;
    local_d8 = this;
    if (0 < iVar5) {
      do {
        if (0x7ff < iVar8) break;
        if (((iVar8 < 0) || (iVar5 <= iVar8)) &&
           (local_f8 = iVar8, local_f0 = iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        switch(param_1->DataPtr[lVar13]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_14e5cc46d_caseD_8;
        }
        if (param_1->DataPtr[lVar13] < ' ') break;
        iVar5 = param_1->Size;
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 1;
      } while (iVar8 < iVar5);
    }
switchD_14e5cc46d_caseD_8:
    iVar5 = param_1->Size;
    pcVar10 = param_1->DataPtr;
    iVar11 = iVar5;
    if (iVar8 < iVar5) {
      iVar11 = iVar8;
    }
    iVar16 = 0;
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    if (iVar16 != 0) {
      pFVar1 = this->Stream;
      iVar11 = 0;
      this = local_d8;
      pcVar14 = pcVar10;
      if (0 < iVar16) {
        do {
          local_e8[0] = *pcVar14;
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_e8,1);
          iVar11 = iVar11 + 1;
          this = local_d8;
          pcVar14 = pcVar14 + 1;
        } while (iVar11 < iVar16);
      }
    }
    param_1 = local_d0;
    iVar11 = iVar5;
    if (iVar5 - iVar8 < iVar5) {
      iVar11 = iVar5 - iVar8;
    }
    iStack_c0 = 0;
    if (0 < iVar11) {
      iStack_c0 = iVar11;
    }
    iVar8 = 0;
    local_c8 = pcVar10 + ((longlong)iVar5 - (longlong)iStack_c0);
    lVar13 = 0;
    local_d0->DataPtr = local_c8;
    *(ulonglong *)&local_d0->Size = CONCAT44(uStack_bc,iStack_c0);
    iVar5 = local_d0->Size;
    if (0 < iVar5) {
      do {
        if (((iVar8 < 0) || (iVar5 <= iVar8)) &&
           (local_f8 = iVar8, local_f0 = iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        switch(param_1->DataPtr[lVar13]) {
        case '\b':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__b;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_68 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc869:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_68 + 1;
LAB_14e5cc86d:
              local_68 = CONCAT71(local_68._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc869;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_68 + 3;
                goto LAB_14e5cc86d;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_68,(longlong)(iVar5 - (int)&local_68));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\t':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__t;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_70 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc7a9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_70 + 1;
LAB_14e5cc7ad:
              local_70 = CONCAT71(local_70._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc7a9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_70 + 3;
                goto LAB_14e5cc7ad;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_70,(longlong)(iVar5 - (int)&local_70));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\n':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__n;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_78 = 0;
            if ((((uVar7 == 0xfffe) || (uVar7 == 0xffff)) || (uVar7 - 0xd800 < 0x400)) ||
               (uVar7 - 0xdc00 < 0x400)) {
              uVar7 = 0x3f;
LAB_14e5cc6e9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_78 + 1;
LAB_14e5cc6ed:
              local_78 = CONCAT71(local_78._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc6e9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_78 + 3;
                goto LAB_14e5cc6ed;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_78,(longlong)(iVar5 - (int)&local_78));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        default:
          if ('\x1f' < param_1->DataPtr[lVar13]) goto LAB_14e5ccb6c;
          local_a8.Base = local_88;
          local_a8.bIsDynamic = false;
          local_a8.bIsExternal = false;
          local_a8.CurPos = local_88;
          local_a8.End = (char *)&local_80;
          TStringBuilderBase<char>::AppendfImpl(&local_a8,"\\u%04x");
          pFVar1 = this->Stream;
          if (0 < (int)local_a8.CurPos - (int)local_a8.Base) {
            uVar15 = (ulonglong)(uint)((int)local_a8.CurPos - (int)local_a8.Base);
            pcVar10 = local_a8.Base;
            do {
              local_e0[0] = *pcVar10;
              (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_e0,1);
              pcVar10 = pcVar10 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a8);
          break;
        case '\f':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__f;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_60 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc929:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_60 + 1;
LAB_14e5cc92d:
              local_60 = CONCAT71(local_60._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc929;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_60 + 3;
                goto LAB_14e5cc92d;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_60,(longlong)(iVar5 - (int)&local_60));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\r':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u__r;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_58 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc9e9:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_58 + 1;
LAB_14e5cc9ed:
              local_58 = CONCAT71(local_58._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc9e9;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_58 + 3;
                goto LAB_14e5cc9ed;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_58,(longlong)(iVar5 - (int)&local_58));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\"':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u___;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            if ((((uVar7 == 0xfffe) || (uVar7 == 0xffff)) || (uVar7 - 0xd800 < 0x400)) ||
               (uVar7 - 0xdc00 < 0x400)) {
              uVar7 = 0x3f;
LAB_14e5ccaac:
              local_50 = (ulonglong)(byte)uVar7;
              iVar5 = (int)&local_50 + 1;
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5ccaac;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (uVar7 < 0x800) {
                local_50 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
                iVar5 = (int)&local_50 + 2;
              }
              else {
                local_50 = (ulonglong)CONCAT12((char)uVar7,CONCAT11(uVar4,(byte)(uVar7 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar5 = (int)&local_50 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_50,(longlong)(iVar5 - (int)&local_50));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          break;
        case '\\':
          pFVar1 = this->Stream;
          puVar9 = (ushort *)&u___;
          lVar12 = 2;
          do {
            uVar7 = *puVar9;
            local_80 = 0;
            if (((uVar7 == 0xfffe) || (uVar7 == 0xffff)) ||
               ((uVar7 - 0xd800 < 0x400 || (uVar7 - 0xdc00 < 0x400)))) {
              uVar7 = 0x3f;
LAB_14e5cc629:
              bVar6 = (byte)uVar7;
              iVar5 = (int)&local_80 + 1;
LAB_14e5cc62d:
              local_80 = CONCAT71(local_80._1_7_,bVar6);
            }
            else {
              if (uVar7 < 0x80) goto LAB_14e5cc629;
              uVar4 = (undefined1)(uVar7 >> 6);
              if (0x7ff < uVar7) {
                bVar6 = (byte)(uVar7 >> 0xc) | 0xe0;
                local_80 = ((ulonglong)(CONCAT11((char)uVar7,uVar4) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar5 = (int)&local_80 + 3;
                goto LAB_14e5cc62d;
              }
              local_80 = (ulonglong)CONCAT11((char)uVar7,uVar4) & 0xffffffffffff3fff | 0x80c0;
              iVar5 = (int)&local_80 + 2;
            }
            (**(code **)(*(longlong *)pFVar1 + 0x188))
                      (pFVar1,&local_80,(longlong)(iVar5 - (int)&local_80));
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        iVar5 = param_1->Size;
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 1;
        this = local_d8;
      } while (iVar8 < iVar5);
    }
LAB_14e5ccb6c:
    iVar5 = param_1->Size;
    iVar11 = iVar5;
    if (iVar5 - iVar8 < iVar5) {
      iVar11 = iVar5 - iVar8;
    }
    iStack_b0 = 0;
    if (0 < iVar11) {
      iStack_b0 = iVar11;
    }
    local_b8 = param_1->DataPtr + ((longlong)iVar5 - (longlong)iStack_b0);
    param_1->DataPtr = local_b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_ac,iStack_b0);
    iVar5 = param_1->Size;
    this = local_d8;
  } while( true );
}

// WriteEscapedString<char8_t> @ 14e5ccce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteEscapedString<char8_t>
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,
          TStringView<char8_t> *param_1)

{
  uint uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uchar *puVar19;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  uchar local_d8 [8];
  char local_d0 [8];
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *local_c8;
  uchar *local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  uchar *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TStringBuilderBase<char> local_a0;
  char local_80 [8];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar8 = param_1->Size;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c8 = this;
    if (0 < iVar8) {
      do {
        if (0x7ff < (int)uVar13) break;
        if ((((int)uVar13 < 0) || (iVar8 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar8,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[lVar18]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_14e5ccdab_caseD_8;
        }
        if (param_1->DataPtr[lVar18] < 0x20) break;
        iVar8 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
      } while ((int)uVar13 < iVar8);
    }
switchD_14e5ccdab_caseD_8:
    uVar1 = param_1->Size;
    puVar2 = param_1->DataPtr;
    uVar9 = uVar1;
    if ((int)uVar13 < (int)uVar1) {
      uVar9 = uVar13;
    }
    uVar12 = 0;
    if (0 < (int)uVar9) {
      uVar12 = uVar9;
    }
    if ((uVar12 != 0) && (pFVar3 = this->Stream, 0 < (int)uVar12)) {
      uVar16 = (ulonglong)uVar12;
      puVar19 = puVar2;
      do {
        local_d8[0] = *puVar19;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_d8,1);
        puVar19 = puVar19 + 1;
        uVar16 = uVar16 - 1;
        this = local_c8;
      } while (uVar16 != 0);
    }
    uVar9 = uVar1;
    if ((int)(uVar1 - uVar13) < (int)uVar1) {
      uVar9 = uVar1 - uVar13;
    }
    uStack_b8 = 0;
    if (0 < (int)uVar9) {
      uStack_b8 = uVar9;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c0 = puVar2 + ((longlong)(int)uVar1 - (longlong)(int)uStack_b8);
    param_1->DataPtr = local_c0;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_b4,uStack_b8);
    iVar8 = param_1->Size;
    if (0 < iVar8) {
      do {
        if ((((int)uVar13 < 0) || (iVar8 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar8,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[lVar18]) {
        case '\b':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__b;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_60 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cd199:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_60 + 1;
LAB_14e5cd19d:
              local_60 = CONCAT71(local_60._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd199;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_60 + 3;
                goto LAB_14e5cd19d;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_60,(longlong)(iVar8 - (int)&local_60));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\t':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__t;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_68 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cd0d9:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_68 + 1;
LAB_14e5cd0dd:
              local_68 = CONCAT71(local_68._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd0d9;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_68 + 3;
                goto LAB_14e5cd0dd;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_68,(longlong)(iVar8 - (int)&local_68));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\n':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__n;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_70 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cd019:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_70 + 1;
LAB_14e5cd01d:
              local_70 = CONCAT71(local_70._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd019;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_70 + 3;
                goto LAB_14e5cd01d;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_70,(longlong)(iVar8 - (int)&local_70));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        default:
          if (0x1f < param_1->DataPtr[lVar18]) goto LAB_14e5cd4a6;
          local_a0.Base = local_80;
          local_a0.bIsDynamic = false;
          local_a0.bIsExternal = false;
          local_a0.CurPos = local_80;
          local_a0.End = (char *)&local_78;
          TStringBuilderBase<char>::AppendfImpl(&local_a0,"\\u%04x");
          pFVar3 = this->Stream;
          if (0 < (int)local_a0.CurPos - (int)local_a0.Base) {
            uVar16 = (ulonglong)(uint)((int)local_a0.CurPos - (int)local_a0.Base);
            pcVar15 = local_a0.Base;
            do {
              local_d0[0] = *pcVar15;
              (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_d0,1);
              pcVar15 = pcVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a0);
          break;
        case '\f':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__f;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_58 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cd259:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_58 + 1;
LAB_14e5cd25d:
              local_58 = CONCAT71(local_58._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd259;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_58 + 3;
                goto LAB_14e5cd25d;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_58,(longlong)(iVar8 - (int)&local_58));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\r':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__r;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_50 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cd319:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_50 + 1;
LAB_14e5cd31d:
              local_50 = CONCAT71(local_50._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd319;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_50 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_50 + 3;
                goto LAB_14e5cd31d;
              }
              local_50 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_50 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_50,(longlong)(iVar8 - (int)&local_50));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\"':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cd3dc:
              local_48 = (ulonglong)(byte)uVar11;
              iVar8 = (int)&local_48 + 1;
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd3dc;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (uVar11 < 0x800) {
                local_48 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
                iVar8 = (int)&local_48 + 2;
              }
              else {
                local_48 = (ulonglong)CONCAT12((char)uVar11,CONCAT11(uVar7,(byte)(uVar11 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar8 = (int)&local_48 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_48,(longlong)(iVar8 - (int)&local_48));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\\':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_78 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5ccf59:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_78 + 1;
LAB_14e5ccf5d:
              local_78 = CONCAT71(local_78._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ccf59;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_78 + 3;
                goto LAB_14e5ccf5d;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_78,(longlong)(iVar8 - (int)&local_78));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar8 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        this = local_c8;
      } while ((int)uVar13 < iVar8);
    }
LAB_14e5cd4a6:
    iVar8 = param_1->Size;
    iVar5 = iVar8;
    if ((int)(iVar8 - uVar13) < iVar8) {
      iVar5 = iVar8 - uVar13;
    }
    iStack_a8 = 0;
    if (0 < iVar5) {
      iStack_a8 = iVar5;
    }
    local_b0 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_a8);
    param_1->DataPtr = local_b0;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_a4,iStack_a8);
    iVar8 = param_1->Size;
    this = local_c8;
  } while( true );
}

// WriteEscapedString<char8_t> @ 14e5cd610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteEscapedString<char8_t>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<char8_t> *param_1)

{
  uint uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uchar *puVar19;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  uchar local_d8 [8];
  char local_d0 [8];
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *local_c8;
  uchar *local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  uchar *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TStringBuilderBase<char> local_a0;
  char local_80 [8];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar8 = param_1->Size;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c8 = this;
    if (0 < iVar8) {
      do {
        if (0x7ff < (int)uVar13) break;
        if ((((int)uVar13 < 0) || (iVar8 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar8,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[lVar18]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_14e5cd6db_caseD_8;
        }
        if (param_1->DataPtr[lVar18] < 0x20) break;
        iVar8 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
      } while ((int)uVar13 < iVar8);
    }
switchD_14e5cd6db_caseD_8:
    uVar1 = param_1->Size;
    puVar2 = param_1->DataPtr;
    uVar9 = uVar1;
    if ((int)uVar13 < (int)uVar1) {
      uVar9 = uVar13;
    }
    uVar12 = 0;
    if (0 < (int)uVar9) {
      uVar12 = uVar9;
    }
    if ((uVar12 != 0) && (pFVar3 = this->Stream, 0 < (int)uVar12)) {
      uVar16 = (ulonglong)uVar12;
      puVar19 = puVar2;
      do {
        local_d8[0] = *puVar19;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_d8,1);
        puVar19 = puVar19 + 1;
        uVar16 = uVar16 - 1;
        this = local_c8;
      } while (uVar16 != 0);
    }
    uVar9 = uVar1;
    if ((int)(uVar1 - uVar13) < (int)uVar1) {
      uVar9 = uVar1 - uVar13;
    }
    uStack_b8 = 0;
    if (0 < (int)uVar9) {
      uStack_b8 = uVar9;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c0 = puVar2 + ((longlong)(int)uVar1 - (longlong)(int)uStack_b8);
    param_1->DataPtr = local_c0;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_b4,uStack_b8);
    iVar8 = param_1->Size;
    if (0 < iVar8) {
      do {
        if ((((int)uVar13 < 0) || (iVar8 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar8,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[lVar18]) {
        case '\b':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__b;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_60 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cdac9:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_60 + 1;
LAB_14e5cdacd:
              local_60 = CONCAT71(local_60._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cdac9;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_60 + 3;
                goto LAB_14e5cdacd;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_60,(longlong)(iVar8 - (int)&local_60));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\t':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__t;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_68 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cda09:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_68 + 1;
LAB_14e5cda0d:
              local_68 = CONCAT71(local_68._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cda09;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_68 + 3;
                goto LAB_14e5cda0d;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_68,(longlong)(iVar8 - (int)&local_68));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\n':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__n;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_70 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cd949:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_70 + 1;
LAB_14e5cd94d:
              local_70 = CONCAT71(local_70._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd949;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_70 + 3;
                goto LAB_14e5cd94d;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_70,(longlong)(iVar8 - (int)&local_70));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        default:
          if (0x1f < param_1->DataPtr[lVar18]) goto LAB_14e5cddd6;
          local_a0.Base = local_80;
          local_a0.bIsDynamic = false;
          local_a0.bIsExternal = false;
          local_a0.CurPos = local_80;
          local_a0.End = (char *)&local_78;
          TStringBuilderBase<char>::AppendfImpl(&local_a0,"\\u%04x");
          pFVar3 = this->Stream;
          if (0 < (int)local_a0.CurPos - (int)local_a0.Base) {
            uVar16 = (ulonglong)(uint)((int)local_a0.CurPos - (int)local_a0.Base);
            pcVar15 = local_a0.Base;
            do {
              local_d0[0] = *pcVar15;
              (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_d0,1);
              pcVar15 = pcVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a0);
          break;
        case '\f':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__f;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_58 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cdb89:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_58 + 1;
LAB_14e5cdb8d:
              local_58 = CONCAT71(local_58._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cdb89;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_58 + 3;
                goto LAB_14e5cdb8d;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_58,(longlong)(iVar8 - (int)&local_58));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\r':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u__r;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_50 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cdc49:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_50 + 1;
LAB_14e5cdc4d:
              local_50 = CONCAT71(local_50._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cdc49;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_50 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_50 + 3;
                goto LAB_14e5cdc4d;
              }
              local_50 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_50 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_50,(longlong)(iVar8 - (int)&local_50));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\"':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cdd0c:
              local_48 = (ulonglong)(byte)uVar11;
              iVar8 = (int)&local_48 + 1;
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cdd0c;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (uVar11 < 0x800) {
                local_48 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
                iVar8 = (int)&local_48 + 2;
              }
              else {
                local_48 = (ulonglong)CONCAT12((char)uVar11,CONCAT11(uVar7,(byte)(uVar11 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar8 = (int)&local_48 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_48,(longlong)(iVar8 - (int)&local_48));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case '\\':
          pFVar3 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_78 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cd889:
              bVar10 = (byte)uVar11;
              iVar8 = (int)&local_78 + 1;
LAB_14e5cd88d:
              local_78 = CONCAT71(local_78._1_7_,bVar10);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cd889;
              uVar7 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar10 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar11,uVar7) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar8 = (int)&local_78 + 3;
                goto LAB_14e5cd88d;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar11,uVar7) & 0xffffffffffff3fff | 0x80c0;
              iVar8 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar3 + 0x188))
                      (pFVar3,&local_78,(longlong)(iVar8 - (int)&local_78));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar8 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        this = local_c8;
      } while ((int)uVar13 < iVar8);
    }
LAB_14e5cddd6:
    iVar8 = param_1->Size;
    iVar5 = iVar8;
    if ((int)(iVar8 - uVar13) < iVar8) {
      iVar5 = iVar8 - uVar13;
    }
    iStack_a8 = 0;
    if (0 < iVar5) {
      iStack_a8 = iVar5;
    }
    local_b0 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_a8);
    param_1->DataPtr = local_b0;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_a4,iStack_a8);
    iVar8 = param_1->Size;
    this = local_c8;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 14e5cdf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteEscapedString<wchar_t>
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,
          TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  FArchive *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  wchar_t wVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  uint uVar20;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  char local_d8 [8];
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *local_d0;
  wchar_t *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringBuilderBase<char> local_a8;
  char local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar7 = param_1->Size;
  do {
    if (iVar7 == 0) {
      return;
    }
    uVar13 = 0;
    local_d0 = this;
    if (0 < iVar7) {
      lVar18 = 0;
      do {
        if (0x7ff < (int)uVar13) break;
        if ((((int)uVar13 < 0) || (iVar7 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar7,
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
        uVar11 = *(ushort *)(lVar18 + (longlong)param_1->DataPtr);
        switch(uVar11) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_14e5ce00b_caseD_8;
        }
        if (uVar11 < 0x20) break;
        iVar7 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 2;
      } while ((int)uVar13 < iVar7);
    }
switchD_14e5ce00b_caseD_8:
    uVar20 = param_1->Size;
    pwVar1 = param_1->DataPtr;
    uVar8 = uVar20;
    if ((int)uVar13 < (int)uVar20) {
      uVar8 = uVar13;
    }
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = uVar8;
    }
    if ((uVar12 != 0) && (pFVar2 = this->Stream, 0 < (int)uVar12)) {
      uVar16 = (ulonglong)uVar12;
      pwVar19 = pwVar1;
      do {
        wVar10 = *pwVar19;
        local_80 = 0;
        if (((wVar10 == L'\xfffe') || (wVar10 == L'\xffff')) ||
           (((ushort)wVar10 - 0xd800 < 0x400 || ((ushort)wVar10 - 0xdc00 < 0x400)))) {
          wVar10 = L'?';
LAB_14e5ce0cc:
          bVar9 = (byte)wVar10;
          iVar7 = (int)&local_80 + 1;
LAB_14e5ce0d0:
          local_80 = CONCAT71(local_80._1_7_,bVar9);
        }
        else {
          if ((ushort)wVar10 < 0x80) goto LAB_14e5ce0cc;
          uVar6 = (undefined1)((ushort)wVar10 >> 6);
          if (0x7ff < (ushort)wVar10) {
            bVar9 = (byte)((ushort)wVar10 >> 0xc) | 0xe0;
            local_80 = ((ulonglong)(CONCAT11((char)wVar10,uVar6) & 0xff3f | 0x80) & 0xffffffffff3fff
                       ) << 8 | 0x800000;
            iVar7 = (int)&local_80 + 3;
            goto LAB_14e5ce0d0;
          }
          local_80 = (ulonglong)CONCAT11((char)wVar10,uVar6) & 0xffffffffffff3fff | 0x80c0;
          iVar7 = (int)&local_80 + 2;
        }
        (**(code **)(*(longlong *)pFVar2 + 0x188))
                  (pFVar2,&local_80,(longlong)(iVar7 - (int)&local_80));
        pwVar19 = pwVar19 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      uVar20 = param_1->Size;
      this = local_d0;
    }
    uVar8 = uVar20;
    if ((int)(uVar20 - uVar13) < (int)uVar20) {
      uVar8 = uVar20 - uVar13;
    }
    uStack_c0 = 0;
    if (0 < (int)uVar8) {
      uStack_c0 = uVar8;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c8 = pwVar1 + ((longlong)(int)uVar20 - (longlong)(int)uStack_c0);
    param_1->DataPtr = local_c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_bc,uStack_c0);
    iVar7 = param_1->Size;
    if (0 < iVar7) {
      do {
        if ((((int)uVar13 < 0) || (iVar7 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar7,
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
        switch(param_1->DataPtr[lVar18]) {
        case L'\b':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__b;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_60 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ce479:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_60 + 1;
LAB_14e5ce47d:
              local_60 = CONCAT71(local_60._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce479;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_60 + 3;
                goto LAB_14e5ce47d;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_60,(longlong)(iVar7 - (int)&local_60));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\t':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__t;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_68 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5ce3b9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_68 + 1;
LAB_14e5ce3bd:
              local_68 = CONCAT71(local_68._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce3b9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_68 + 3;
                goto LAB_14e5ce3bd;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_68,(longlong)(iVar7 - (int)&local_68));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\n':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__n;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_70 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ce2f9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_70 + 1;
LAB_14e5ce2fd:
              local_70 = CONCAT71(local_70._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce2f9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_70 + 3;
                goto LAB_14e5ce2fd;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_70,(longlong)(iVar7 - (int)&local_70));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        default:
          if (0x1f < (ushort)param_1->DataPtr[lVar18]) goto LAB_14e5ce786;
          local_a8.Base = local_88;
          local_a8.bIsDynamic = false;
          local_a8.bIsExternal = false;
          local_a8.CurPos = local_88;
          local_a8.End = (char *)&local_80;
          TStringBuilderBase<char>::AppendfImpl(&local_a8,"\\u%04x");
          pFVar2 = this->Stream;
          if (0 < (int)local_a8.CurPos - (int)local_a8.Base) {
            uVar16 = (ulonglong)(uint)((int)local_a8.CurPos - (int)local_a8.Base);
            pcVar15 = local_a8.Base;
            do {
              local_d8[0] = *pcVar15;
              (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_d8,1);
              pcVar15 = pcVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a8);
          break;
        case L'\f':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__f;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_58 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ce539:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_58 + 1;
LAB_14e5ce53d:
              local_58 = CONCAT71(local_58._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce539;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_58 + 3;
                goto LAB_14e5ce53d;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_58,(longlong)(iVar7 - (int)&local_58));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\r':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__r;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_50 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5ce5f9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_50 + 1;
LAB_14e5ce5fd:
              local_50 = CONCAT71(local_50._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce5f9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_50 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_50 + 3;
                goto LAB_14e5ce5fd;
              }
              local_50 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_50 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_50,(longlong)(iVar7 - (int)&local_50));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\"':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ce6bc:
              local_48 = (ulonglong)(byte)uVar11;
              iVar7 = (int)&local_48 + 1;
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce6bc;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (uVar11 < 0x800) {
                local_48 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
                iVar7 = (int)&local_48 + 2;
              }
              else {
                local_48 = (ulonglong)CONCAT12((char)uVar11,CONCAT11(uVar6,(byte)(uVar11 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar7 = (int)&local_48 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_48,(longlong)(iVar7 - (int)&local_48));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\\':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_78 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ce23c:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_78 + 1;
LAB_14e5ce240:
              local_78 = CONCAT71(local_78._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ce23c;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_78 + 3;
                goto LAB_14e5ce240;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_78,(longlong)(iVar7 - (int)&local_78));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar7 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        this = local_d0;
      } while ((int)uVar13 < iVar7);
    }
LAB_14e5ce786:
    iVar7 = param_1->Size;
    iVar4 = iVar7;
    if ((int)(iVar7 - uVar13) < iVar7) {
      iVar4 = iVar7 - uVar13;
    }
    iStack_b0 = 0;
    if (0 < iVar4) {
      iStack_b0 = iVar4;
    }
    local_b8 = param_1->DataPtr + ((longlong)iVar7 - (longlong)iStack_b0);
    param_1->DataPtr = local_b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_ac,iStack_b0);
    iVar7 = param_1->Size;
    this = local_d0;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 14e5ce900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteEscapedString<wchar_t>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  FArchive *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  wchar_t wVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  uint uVar20;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  char local_d8 [8];
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *local_d0;
  wchar_t *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringBuilderBase<char> local_a8;
  char local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar7 = param_1->Size;
  do {
    if (iVar7 == 0) {
      return;
    }
    uVar13 = 0;
    local_d0 = this;
    if (0 < iVar7) {
      lVar18 = 0;
      do {
        if (0x7ff < (int)uVar13) break;
        if ((((int)uVar13 < 0) || (iVar7 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar7,
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
        uVar11 = *(ushort *)(lVar18 + (longlong)param_1->DataPtr);
        switch(uVar11) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_14e5ce9cb_caseD_8;
        }
        if (uVar11 < 0x20) break;
        iVar7 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 2;
      } while ((int)uVar13 < iVar7);
    }
switchD_14e5ce9cb_caseD_8:
    uVar20 = param_1->Size;
    pwVar1 = param_1->DataPtr;
    uVar8 = uVar20;
    if ((int)uVar13 < (int)uVar20) {
      uVar8 = uVar13;
    }
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = uVar8;
    }
    if ((uVar12 != 0) && (pFVar2 = this->Stream, 0 < (int)uVar12)) {
      uVar16 = (ulonglong)uVar12;
      pwVar19 = pwVar1;
      do {
        wVar10 = *pwVar19;
        local_80 = 0;
        if (((wVar10 == L'\xfffe') || (wVar10 == L'\xffff')) ||
           (((ushort)wVar10 - 0xd800 < 0x400 || ((ushort)wVar10 - 0xdc00 < 0x400)))) {
          wVar10 = L'?';
LAB_14e5cea8c:
          bVar9 = (byte)wVar10;
          iVar7 = (int)&local_80 + 1;
LAB_14e5cea90:
          local_80 = CONCAT71(local_80._1_7_,bVar9);
        }
        else {
          if ((ushort)wVar10 < 0x80) goto LAB_14e5cea8c;
          uVar6 = (undefined1)((ushort)wVar10 >> 6);
          if (0x7ff < (ushort)wVar10) {
            bVar9 = (byte)((ushort)wVar10 >> 0xc) | 0xe0;
            local_80 = ((ulonglong)(CONCAT11((char)wVar10,uVar6) & 0xff3f | 0x80) & 0xffffffffff3fff
                       ) << 8 | 0x800000;
            iVar7 = (int)&local_80 + 3;
            goto LAB_14e5cea90;
          }
          local_80 = (ulonglong)CONCAT11((char)wVar10,uVar6) & 0xffffffffffff3fff | 0x80c0;
          iVar7 = (int)&local_80 + 2;
        }
        (**(code **)(*(longlong *)pFVar2 + 0x188))
                  (pFVar2,&local_80,(longlong)(iVar7 - (int)&local_80));
        pwVar19 = pwVar19 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      uVar20 = param_1->Size;
      this = local_d0;
    }
    uVar8 = uVar20;
    if ((int)(uVar20 - uVar13) < (int)uVar20) {
      uVar8 = uVar20 - uVar13;
    }
    uStack_c0 = 0;
    if (0 < (int)uVar8) {
      uStack_c0 = uVar8;
    }
    uVar13 = 0;
    lVar18 = 0;
    local_c8 = pwVar1 + ((longlong)(int)uVar20 - (longlong)(int)uStack_c0);
    param_1->DataPtr = local_c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_bc,uStack_c0);
    iVar7 = param_1->Size;
    if (0 < iVar7) {
      do {
        if ((((int)uVar13 < 0) || (iVar7 <= (int)uVar13)) &&
           (local_e8 = uVar13, local_e0 = iVar7,
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
        switch(param_1->DataPtr[lVar18]) {
        case L'\b':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__b;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_60 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cee39:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_60 + 1;
LAB_14e5cee3d:
              local_60 = CONCAT71(local_60._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cee39;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_60 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_60 + 3;
                goto LAB_14e5cee3d;
              }
              local_60 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_60 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_60,(longlong)(iVar7 - (int)&local_60));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\t':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__t;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_68 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5ced79:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_68 + 1;
LAB_14e5ced7d:
              local_68 = CONCAT71(local_68._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ced79;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_68 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_68 + 3;
                goto LAB_14e5ced7d;
              }
              local_68 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_68 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_68,(longlong)(iVar7 - (int)&local_68));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\n':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__n;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_70 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cecb9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_70 + 1;
LAB_14e5cecbd:
              local_70 = CONCAT71(local_70._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cecb9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_70 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_70 + 3;
                goto LAB_14e5cecbd;
              }
              local_70 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_70 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_70,(longlong)(iVar7 - (int)&local_70));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        default:
          if (0x1f < (ushort)param_1->DataPtr[lVar18]) goto LAB_14e5cf146;
          local_a8.Base = local_88;
          local_a8.bIsDynamic = false;
          local_a8.bIsExternal = false;
          local_a8.CurPos = local_88;
          local_a8.End = (char *)&local_80;
          TStringBuilderBase<char>::AppendfImpl(&local_a8,"\\u%04x");
          pFVar2 = this->Stream;
          if (0 < (int)local_a8.CurPos - (int)local_a8.Base) {
            uVar16 = (ulonglong)(uint)((int)local_a8.CurPos - (int)local_a8.Base);
            pcVar15 = local_a8.Base;
            do {
              local_d8[0] = *pcVar15;
              (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_d8,1);
              pcVar15 = pcVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a8);
          break;
        case L'\f':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__f;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_58 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5ceef9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_58 + 1;
LAB_14e5ceefd:
              local_58 = CONCAT71(local_58._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5ceef9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_58 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_58 + 3;
                goto LAB_14e5ceefd;
              }
              local_58 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_58 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_58,(longlong)(iVar7 - (int)&local_58));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\r':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u__r;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_50 = 0;
            if ((((uVar11 == 0xfffe) || (uVar11 == 0xffff)) || (uVar11 - 0xd800 < 0x400)) ||
               (uVar11 - 0xdc00 < 0x400)) {
              uVar11 = 0x3f;
LAB_14e5cefb9:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_50 + 1;
LAB_14e5cefbd:
              local_50 = CONCAT71(local_50._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cefb9;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_50 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_50 + 3;
                goto LAB_14e5cefbd;
              }
              local_50 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_50 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_50,(longlong)(iVar7 - (int)&local_50));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\"':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cf07c:
              local_48 = (ulonglong)(byte)uVar11;
              iVar7 = (int)&local_48 + 1;
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cf07c;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (uVar11 < 0x800) {
                local_48 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
                iVar7 = (int)&local_48 + 2;
              }
              else {
                local_48 = (ulonglong)CONCAT12((char)uVar11,CONCAT11(uVar6,(byte)(uVar11 >> 0xc))) &
                           0xffffffffff3f3fff | 0x8080e0;
                iVar7 = (int)&local_48 + 3;
              }
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_48,(longlong)(iVar7 - (int)&local_48));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          break;
        case L'\\':
          pFVar2 = this->Stream;
          puVar14 = (ushort *)&u___;
          lVar17 = 2;
          do {
            uVar11 = *puVar14;
            local_78 = 0;
            if (((uVar11 == 0xfffe) || (uVar11 == 0xffff)) ||
               ((uVar11 - 0xd800 < 0x400 || (uVar11 - 0xdc00 < 0x400)))) {
              uVar11 = 0x3f;
LAB_14e5cebfc:
              bVar9 = (byte)uVar11;
              iVar7 = (int)&local_78 + 1;
LAB_14e5cec00:
              local_78 = CONCAT71(local_78._1_7_,bVar9);
            }
            else {
              if (uVar11 < 0x80) goto LAB_14e5cebfc;
              uVar6 = (undefined1)(uVar11 >> 6);
              if (0x7ff < uVar11) {
                bVar9 = (byte)(uVar11 >> 0xc) | 0xe0;
                local_78 = ((ulonglong)(CONCAT11((char)uVar11,uVar6) & 0xff3f | 0x80) &
                           0xffffffffff3fff) << 8 | 0x800000;
                iVar7 = (int)&local_78 + 3;
                goto LAB_14e5cec00;
              }
              local_78 = (ulonglong)CONCAT11((char)uVar11,uVar6) & 0xffffffffffff3fff | 0x80c0;
              iVar7 = (int)&local_78 + 2;
            }
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&local_78,(longlong)(iVar7 - (int)&local_78));
            puVar14 = puVar14 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar7 = param_1->Size;
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        this = local_d0;
      } while ((int)uVar13 < iVar7);
    }
LAB_14e5cf146:
    iVar7 = param_1->Size;
    iVar4 = iVar7;
    if ((int)(iVar7 - uVar13) < iVar7) {
      iVar4 = iVar7 - uVar13;
    }
    iStack_b0 = 0;
    if (0 < iVar4) {
      iStack_b0 = iVar4;
    }
    local_b8 = param_1->DataPtr + ((longlong)iVar7 - (longlong)iStack_b0);
    param_1->DataPtr = local_b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_ac,iStack_b0);
    iVar7 = param_1->Size;
    this = local_d0;
  } while( true );
}

// WriteObjectStart<FString_&> @ 14e5cf2c0

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectStart<FString_&>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

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
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_28 [4];
  
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
  local_res8[0] = 10;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res18[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res20[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res20,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// ~TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> @ 14e5d4760

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::
~TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFCondensedJsonPrintPolicyUTF8____6B_;
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

// ~TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> @ 14e5d4780

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::
~TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
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

// CanWriteValueWithoutIdentifier @ 14e5e3770

bool __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

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

// CanWriteValueWithoutIdentifier @ 14e5e3800

bool __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

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

// Close @ 14e5e39e0

bool __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Close
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Close @ 14e5e3a10

bool __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Close
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// WriteArrayEnd @ 14e618ac0

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteArrayEnd
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
      5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
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

// WriteArrayEnd @ 14e618c20

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayEnd
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

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
  undefined1 local_res18 [8];
  
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
    local_res8[0] = 10;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    pFVar3 = this->Stream;
    if (0 < this->IndentLevel) {
      uVar8 = (ulonglong)(uint)this->IndentLevel;
      do {
        local_res10[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  local_res18[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
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

// WriteArrayStart @ 14e618de0

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayStart
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
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
    if (EVar2 == None) goto LAB_14e618ecd;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_res10[0] = 10;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res18[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_14e618ecd:
  local_res20[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res20,1);
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

// WriteIdentifier @ 14e619850

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_18;
  int iStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_10 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_10 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifier @ 14e619910

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  FArchive *pFVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_18;
  int iStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_res8[0] = 10;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar4 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_10 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_10 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectEnd @ 14e61f160

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteObjectEnd
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x8e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
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

// WriteObjectEnd @ 14e61f2c0

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectEnd
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

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
  undefined1 local_res18 [8];
  
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
  local_res8[0] = 10;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->IndentLevel = this->IndentLevel + -1;
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_res18[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
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

// WriteObjectStart @ 14e61f480

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteObjectStart
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<EJson,TSizedDefaultAllocator<32>_> *pTVar8;
  EJsonToken *pEVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  if (0 < iVar7) {
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
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
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar9 = &this->PreviousTokenWritten;
  pTVar8 = &this->Stack;
  EVar2 = *pEVar9;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    *pEVar9 = Comma;
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
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
                      (0x404,&pTVar8->AllocatorInstance,piVar1);
    (this->Stack).ArrayNum = iVar7;
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
  *pEVar9 = CurlyOpen;
  return;
}

// WriteObjectStart @ 14e61f660

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectStart
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

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
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
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
    if (EVar2 == None) goto LAB_14e61f7bd;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_res10[0] = 10;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res18[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_14e61f7bd:
  local_res20[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res20,1);
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

// WriteStringValue @ 14e61f9c0

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FString *param_1)

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

// WriteStringValue @ 14e61fa40

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FUtf8String *param_1)

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

// WriteStringValue @ 14e61fac0

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,TStringView<char> *param_1)

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

// WriteStringValue @ 14e61fb30

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,
          TStringView<char8_t> *param_1)

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

// WriteStringValue @ 14e61fba0

void __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,
          TStringView<wchar_t> *param_1)

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

// WriteStringValue @ 14e61fc10

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

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

// WriteStringValue @ 14e61fc90

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FUtf8String *param_1)

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

// WriteStringValue @ 14e61fd10

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<char> *param_1)

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

// WriteStringValue @ 14e61fd80

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<char8_t> *param_1)

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

// WriteStringValue @ 14e61fdf0

void __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteStringValue
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,TStringView<wchar_t> *param_1)

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

// WriteValueOnly @ 14e6200b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteValueOnly
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,long64 param_1)

{
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  local_88.Size = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  local_88.DataPtr = local_78.Base;
  TGLTFJsonPrintPolicyUTF8::WriteString(this->Stream,&local_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 14e620170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteValueOnly
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,long64 param_1)

{
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  local_88.Size = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  local_88.DataPtr = local_78.Base;
  TGLTFJsonPrintPolicyUTF8::WriteString(this->Stream,&local_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

