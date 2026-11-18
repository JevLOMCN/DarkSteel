// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FStackTracker @ 141584510

FStackTracker * __thiscall
FStackTracker::FStackTracker
          (FStackTracker *this,_func___cdecl_void_FCallStack_ptr_void_ptr *param_1,
          _func___cdecl_void_FCallStack_ptr_ulong64_FOutputDevice_ptr *param_2,
          _func___cdecl_void_void_ptr *param_3,bool param_4)

{
  code *pcVar1;
  
  (this->CallStacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallStacks).ArrayNum = 0;
  (this->CallStacks).ArrayMax = 0;
  *(undefined8 *)&this->CRCToCallStackIndexMap = 0;
  *(undefined8 *)&(this->CRCToCallStackIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->CRCToCallStackIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->CRCToCallStackIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->AliasMap = 0;
  *(undefined8 *)&(this->AliasMap).field_0x8 = 0;
  *(undefined8 *)&(this->AliasMap).field_0x20 = 0;
  *(undefined4 *)&(this->AliasMap).field_0x28 = 0;
  *(undefined4 *)&(this->AliasMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AliasMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AliasMap).field_0x34 = 0;
  *(undefined8 *)&(this->AliasMap).field_0x40 = 0;
  *(undefined4 *)&(this->AliasMap).field_0x48 = 0;
  *(undefined8 *)&this->StringAliasMap = 0;
  *(undefined8 *)&(this->StringAliasMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringAliasMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringAliasMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringAliasMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringAliasMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringAliasMap).field_0x34 = 0;
  *(undefined8 *)&(this->StringAliasMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringAliasMap).field_0x48 = 0;
  this->bIsEnabled = param_4;
  pcVar1 = DefaultDeleteUserDataFn;
  if (param_3 != (_func___cdecl_void_void_ptr *)0x0) {
    pcVar1 = param_3;
  }
  this->bAvoidCapturing = false;
  this->DeleteUserDataFn = pcVar1;
  this->StartFrameCounter = 0;
  this->StopFrameCounter = 0;
  this->UpdateFn = param_1;
  this->ReportFn = param_2;
  return this;
}

// CaptureStackTrace @ 1415af5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
FStackTracker::CaptureStackTrace
          (FStackTracker *this,int param_1,void *param_2,int param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  _func___cdecl_void_FCallStack_ptr_void_ptr *p_Var4;
  _func___cdecl_void_void_ptr *p_Var5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  size_t sVar10;
  wchar_t *pwVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ulong64 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  ulong64 *puVar21;
  void *pvVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  ulong64 *puVar26;
  uint uVar27;
  longlong lVar28;
  ulong64 *puVar29;
  uint uVar30;
  ulong64 *puVar31;
  longlong lVar32;
  undefined1 auStack_318 [64];
  FString local_2d8;
  uint local_2c8;
  uint local_2c4;
  longlong local_2c0;
  uint local_2b8 [2];
  void *local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  ulong64 *local_298;
  ulong64 *local_290;
  ulong64 *local_288;
  ulong64 *local_280;
  FString *local_278;
  ulong64 *local_270;
  uint *local_268;
  uint *local_260;
  char local_258 [512];
  ulonglong local_58;
  
  puVar23 = auStack_318;
  local_58 = __security_cookie.value ^ (ulonglong)&local_2d8;
  lVar28 = (longlong)param_3;
  local_2b0 = param_2;
  if ((this->bAvoidCapturing == false) && (this->bIsEnabled != false)) {
    iVar18 = param_1 * 8 + 400;
    this->bAvoidCapturing = true;
    puVar26 = (ulong64 *)0x0;
    puVar21 = puVar26;
    if (iVar18 != 0) {
      uVar14 = (ulonglong)(param_1 * 8 + 0x19f);
      uVar9 = uVar14 + 0xf;
      if (uVar9 <= uVar14) {
        uVar9 = 0xffffffffffffff0;
      }
      puVar23 = auStack_318 + -(uVar9 & 0xfffffffffffffff0);
      puVar21 = (ulong64 *)((longlong)&local_2d8 + -(uVar9 & 0xfffffffffffffff0) + 8);
    }
    *(undefined8 *)(puVar23 + -8) = 0x1415af689;
    memset(puVar21,0,(longlong)iVar18);
    *(undefined8 *)(puVar23 + -8) = 0x1415af698;
    FWindowsPlatformStackWalk::CaptureStackBackTrace(puVar21,param_1 + 0x32,(void *)0x0);
    puVar21 = puVar21 + param_1;
    if (param_3 < 0x32) {
      *(undefined8 *)(puVar23 + -8) = 0x1415af6ba;
      memset(puVar21 + lVar28,0,(longlong)(0x32 - param_3) << 3);
    }
    uVar25 = 0;
    if ((param_4) && (local_2c8 = 0, 0 < param_3)) {
      local_2c0 = lVar28;
      puVar29 = puVar26;
      puVar16 = puVar26;
      do {
        uVar30 = (uint)puVar16;
        uVar9 = puVar21[(longlong)puVar29];
        if (uVar9 != 0) {
          if (*(int *)&(this->AliasMap).field_0x8 != *(int *)&(this->AliasMap).field_0x34) {
            puVar24 = *(undefined1 **)&(this->AliasMap).field_0x40;
            puVar19 = &(this->AliasMap).field_0x38;
            if (puVar24 != (undefined1 *)0x0) {
              puVar19 = puVar24;
            }
            iVar18 = *(int *)(puVar19 +
                             ((uVar9 >> 0x20) * 0x17 + uVar9 &
                             (ulonglong)(*(int *)&(this->AliasMap).field_0x48 - 1)) * 4);
            if (iVar18 != -1) {
              do {
                lVar28 = *(longlong *)&this->AliasMap + (longlong)iVar18 * 0x18;
                if (*(ulonglong *)(*(longlong *)&this->AliasMap + (longlong)iVar18 * 0x18) == uVar9)
                {
                  puVar16 = (ulong64 *)(lVar28 + 8);
                  if (lVar28 == 0) {
                    puVar16 = puVar26;
                  }
                  if (puVar16 != (ulong64 *)0x0) {
                    puVar21[(longlong)puVar29] = *puVar16;
                    lVar28 = local_2c0;
                    goto LAB_1415afa04;
                  }
                  break;
                }
                iVar18 = *(int *)(lVar28 + 0x10);
              } while (iVar18 != -1);
            }
          }
          uVar3 = puVar21[(longlong)puVar29];
          local_258[0] = '\0';
          *(undefined8 *)(puVar23 + 0x20) = 0;
          *(undefined8 *)(puVar23 + -8) = 0x1415af796;
          FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                    (1,uVar3,local_258,0x1ff,*(FGenericCrashContext **)(puVar23 + 0x20));
          local_2d8.Data.ArrayMax = 0;
          local_2d8.Data.ArrayNum = 0;
          local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_258[0] != '\0') {
            *(undefined8 *)(puVar23 + -8) = 0x1415af7b9;
            sVar10 = strlen(local_258);
            uVar27 = (int)sVar10 + 1;
            if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar23 + -8) = &UNK_1415afce1;
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
            }
            if (0 < (int)uVar27) {
              *(int **)(puVar23 + 0x28) = &local_2d8.Data.ArrayMax;
              *(undefined4 *)(puVar23 + 0x20) = 0;
              *(undefined8 *)(puVar23 + -8) = 0x1415af7e6;
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar27,(ForAnyElementType *)&local_2d8,*(int *)(puVar23 + 0x20),
                         *(int **)(puVar23 + 0x28));
            }
            *(int **)(puVar23 + 0x28) = &local_2d8.Data.ArrayMax;
            *(int **)(puVar23 + 0x20) = &local_2d8.Data.ArrayNum;
            *(undefined8 *)(puVar23 + -8) = 0x1415af80b;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar27,(ForAnyElementType *)&local_2d8,*(int **)(puVar23 + 0x20),
                       *(int **)(puVar23 + 0x28));
            FVar15.Data = local_2d8.Data.AllocatorInstance.Data;
            *(undefined8 *)(puVar23 + -8) = 0x1415af820;
            FGenericPlatformString::Convert<char,wchar_t>
                      ((wchar_t *)FVar15.Data,uVar27,local_258,uVar27);
          }
          iVar18 = local_2d8.Data.ArrayNum + -1;
          FVar15.Data = local_2d8.Data.AllocatorInstance.Data;
          if (local_2d8.Data.ArrayNum == 0) {
            iVar18 = 0;
            FVar15.Data = (FScriptContainerElement *)L"";
          }
          *(undefined8 *)(puVar23 + -8) = 0x1415af84d;
          pwVar11 = TCString<wchar_t>::Strnstr((wchar_t *)FVar15.Data,iVar18,L" - ",3);
          if (pwVar11 != (wchar_t *)0x0) {
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_2d8.Data.ArrayNum != 0) {
              FVar15.Data = local_2d8.Data.AllocatorInstance.Data;
            }
            iVar18 = (int)((longlong)pwVar11 - (longlong)FVar15.Data >> 1);
            if (iVar18 != -1) {
              uVar8 = iVar18 + 3;
              uVar27 = local_2d8.Data.ArrayNum - 1;
              if (local_2d8.Data.ArrayNum == 0) {
                uVar27 = uVar25;
              }
              if ((int)uVar8 < (int)uVar27) {
                uVar27 = uVar8;
              }
              uVar8 = 0;
              if (0 < (int)uVar27) {
                uVar8 = uVar27;
              }
              uVar27 = uVar25;
              if ((int)uVar8 <= local_2d8.Data.ArrayNum) {
                uVar27 = ~uVar8 >> 0x1f;
              }
              if (uVar27 == 0) {
                *(longlong *)(puVar23 + 0x30) = (longlong)local_2d8.Data.ArrayNum;
                *(longlong *)(puVar23 + 0x28) = (longlong)(int)uVar8;
                *(undefined8 *)(puVar23 + 0x20) = 0;
                *(undefined8 *)(puVar23 + -8) = 0x1415af8d2;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              FVar15.Data = local_2d8.Data.AllocatorInstance.Data;
              if (uVar8 != 0) {
                iVar18 = local_2d8.Data.ArrayNum - uVar8;
                if (iVar18 != 0) {
                  pFVar2 = local_2d8.Data.AllocatorInstance.Data + (longlong)(int)uVar8 * 2;
                  *(undefined8 *)(puVar23 + -8) = 0x1415af8fb;
                  memmove(FVar15.Data,pFVar2,(longlong)iVar18 * 2);
                }
                local_2d8.Data.ArrayNum = local_2d8.Data.ArrayNum - uVar8;
              }
            }
          }
          if (local_2d8.Data.ArrayNum == 0) {
            pwVar11 = L"";
            iVar18 = 0;
          }
          else {
            pwVar11 = (wchar_t *)local_2d8.Data.AllocatorInstance.Data;
            iVar18 = local_2d8.Data.ArrayNum + -1;
          }
          *(undefined8 *)(puVar23 + -8) = 0x1415af949;
          uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar11);
          *(undefined8 *)(puVar23 + -8) = 0x1415af95b;
          iVar18 = TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>
                             ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                               *)&this->StringAliasMap,uVar27,&local_2d8);
          if (iVar18 == -1) {
            puVar16 = puVar21 + (int)uVar30;
LAB_1415af9af:
            local_288 = puVar16;
            local_280 = puVar16;
            *(undefined8 *)(puVar23 + -8) = 0x1415af9cb;
            TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&>_>
                      ((TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,FDefaultSetAllocator>
                        *)&this->AliasMap,
                       (TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&> *)
                       (local_2a8 + 4),(bool *)&local_288);
            local_278 = &local_2d8;
            local_270 = puVar16;
            *(undefined8 *)(puVar23 + -8) = 0x1415af9ee;
            TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,unsigned___int64_const_&>_>
                      ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                        *)&this->StringAliasMap,
                       (TPairInitializer<FString_const_&,unsigned___int64_const_&> *)local_2a0,
                       (bool *)&local_278);
          }
          else {
            lVar28 = (longlong)iVar18 * 0x20 + *(longlong *)&this->StringAliasMap;
            puVar16 = puVar21 + (int)local_2c8;
            puVar31 = (ulong64 *)(lVar28 + 0x10);
            if (lVar28 == 0) {
              puVar31 = puVar26;
            }
            if (puVar31 == (ulong64 *)0x0) goto LAB_1415af9af;
            local_298 = puVar16;
            local_290 = puVar31;
            *(undefined8 *)(puVar23 + -8) = 0x1415af99f;
            TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&>_>
                      ((TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,FDefaultSetAllocator>
                        *)&this->AliasMap,
                       (TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&> *)
                       local_2a8,(bool *)&local_298);
            puVar21[(longlong)puVar29] = *puVar31;
          }
          FVar15.Data = local_2d8.Data.AllocatorInstance.Data;
          lVar28 = local_2c0;
          uVar30 = local_2c8;
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x1415af9fc;
            FMemory::Free(FVar15.Data);
            lVar28 = local_2c0;
            uVar30 = local_2c8;
          }
        }
LAB_1415afa04:
        puVar16 = (ulong64 *)(ulonglong)(uVar30 + 1);
        puVar29 = (ulong64 *)((longlong)puVar29 + 1);
        local_2c8 = uVar30 + 1;
      } while ((longlong)puVar29 < lVar28);
    }
    lVar28 = 3;
    *(undefined8 *)(puVar23 + -8) = 0x1415afa2d;
    local_2b8[0] = FCrc::MemCrc_DEPRECATED(puVar21,400,0);
    puVar24 = puVar23;
    if (*(int *)&(this->CRCToCallStackIndexMap).field_0x8 !=
        *(int *)&(this->CRCToCallStackIndexMap).field_0x34) {
      puVar19 = *(undefined1 **)&(this->CRCToCallStackIndexMap).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->CRCToCallStackIndexMap).field_0x38;
      }
      uVar30 = *(uint *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->CRCToCallStackIndexMap).field_0x48 - 1U & local_2b8[0]) * 4
                        );
      if (uVar30 != 0xffffffff) {
        do {
          puVar17 = (uint *)((longlong)(int)uVar30 * 0x10 +
                            *(longlong *)&this->CRCToCallStackIndexMap);
          if (*puVar17 == local_2b8[0]) {
            piVar1 = &(this->CallStacks).ArrayNum;
            puVar29 = (ulong64 *)(puVar17 + 1);
            if (puVar17 == (uint *)0x0) {
              puVar29 = puVar26;
            }
            if (puVar29 != (ulong64 *)0x0) {
              uVar30 = (uint)*puVar29;
              iVar18 = *piVar1;
              uVar27 = uVar25;
              if ((int)uVar30 < iVar18) {
                uVar27 = ~uVar30 >> 0x1f;
              }
              if (uVar27 == 0) {
                *(longlong *)(puVar23 + 0x28) = (longlong)iVar18;
                *(longlong *)(puVar23 + 0x20) = (longlong)(int)uVar30;
                *(undefined8 *)(puVar23 + -8) = 0x1415afc05;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar2 = (this->CallStacks).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x1a0;
              *(longlong *)pFVar2 = *(longlong *)pFVar2 + 1;
              p_Var4 = this->UpdateFn;
              pvVar22 = local_2b0;
              if (p_Var4 != (_func___cdecl_void_FCallStack_ptr_void_ptr *)0x0) {
                uVar30 = (uint)*puVar29;
                iVar18 = *piVar1;
                if ((int)uVar30 < iVar18) {
                  uVar25 = ~uVar30 >> 0x1f;
                }
                if (uVar25 == 0) {
                  *(longlong *)(puVar23 + 0x28) = (longlong)iVar18;
                  *(longlong *)(puVar23 + 0x20) = (longlong)(int)uVar30;
                  *(undefined8 *)(puVar23 + -8) = 0x1415afc66;
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                pvVar22 = local_2b0;
                pFVar2 = (this->CallStacks).AllocatorInstance.Data;
                *(undefined8 *)(puVar23 + -8) = 0x1415afc81;
                (*p_Var4)((FCallStack *)(pFVar2 + (longlong)(int)uVar30 * 0x1a0),pvVar22);
              }
              if (pvVar22 == (void *)0x0) goto LAB_1415afb9b;
              p_Var5 = this->DeleteUserDataFn;
              *(undefined8 *)(puVar23 + -8) = 0x1415afc9c;
              (*p_Var5)(pvVar22);
              this->bAvoidCapturing = false;
              goto LAB_1415afcb7;
            }
            break;
          }
          uVar30 = puVar17[2];
        } while (uVar30 != 0xffffffff);
      }
    }
    piVar12 = &(this->CallStacks).ArrayNum;
    local_2c4 = *piVar12;
    piVar1 = &(this->CallStacks).ArrayMax;
    if (local_2c4 == *piVar1) {
      *(undefined8 *)(puVar23 + -8) = 0x1415afaa1;
      local_2c4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1a0,8,(ForAnyElementType *)this,piVar1);
      *piVar12 = local_2c4;
    }
    local_268 = local_2b8;
    *piVar12 = local_2c4 + 1;
    local_260 = &local_2c4;
    *(undefined8 *)(puVar23 + -8) = 0x1415afacf;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)&this->CRCToCallStackIndexMap,
               (TPairInitializer<unsigned_int_const_&,int_const_&> *)(local_2a0 + 4),
               (bool *)&local_268);
    lVar32 = (longlong)(int)local_2c4;
    if ((int)local_2c4 < *piVar12) {
      uVar25 = ~local_2c4 >> 0x1f;
    }
    if (uVar25 == 0) {
      *(longlong *)(puVar23 + 0x28) = (longlong)*piVar12;
      *(longlong *)(puVar23 + 0x20) = lVar32;
      *(undefined8 *)(puVar23 + -8) = 0x1415afb12;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar20 = (this->CallStacks).AllocatorInstance.Data + lVar32 * 0x1a0;
    pFVar2 = pFVar20 + 8;
    do {
      puVar26 = puVar21;
      pFVar13 = pFVar2;
      uVar3 = puVar26[1];
      *(ulong64 *)pFVar13 = *puVar26;
      *(ulong64 *)(pFVar13 + 8) = uVar3;
      uVar3 = puVar26[3];
      *(ulong64 *)(pFVar13 + 0x10) = puVar26[2];
      *(ulong64 *)(pFVar13 + 0x18) = uVar3;
      uVar3 = puVar26[5];
      *(ulong64 *)(pFVar13 + 0x20) = puVar26[4];
      *(ulong64 *)(pFVar13 + 0x28) = uVar3;
      uVar3 = puVar26[7];
      *(ulong64 *)(pFVar13 + 0x30) = puVar26[6];
      *(ulong64 *)(pFVar13 + 0x38) = uVar3;
      uVar3 = puVar26[9];
      *(ulong64 *)(pFVar13 + 0x40) = puVar26[8];
      *(ulong64 *)(pFVar13 + 0x48) = uVar3;
      uVar3 = puVar26[0xb];
      *(ulong64 *)(pFVar13 + 0x50) = puVar26[10];
      *(ulong64 *)(pFVar13 + 0x58) = uVar3;
      uVar3 = puVar26[0xd];
      *(ulong64 *)(pFVar13 + 0x60) = puVar26[0xc];
      *(ulong64 *)(pFVar13 + 0x68) = uVar3;
      uVar3 = puVar26[0xf];
      *(ulong64 *)(pFVar13 + 0x70) = puVar26[0xe];
      *(ulong64 *)(pFVar13 + 0x78) = uVar3;
      lVar28 = lVar28 + -1;
      pFVar2 = pFVar13 + 0x80;
      puVar21 = puVar26 + 0x10;
    } while (lVar28 != 0);
    uVar3 = puVar26[0x11];
    *(ulong64 *)(pFVar13 + 0x80) = puVar26[0x10];
    *(ulong64 *)(pFVar13 + 0x88) = uVar3;
    *(undefined8 *)pFVar20 = 1;
    *(void **)(pFVar20 + 0x198) = local_2b0;
LAB_1415afb9b:
    this->bAvoidCapturing = false;
  }
  else {
    puVar24 = auStack_318;
    if (param_2 != (void *)0x0) {
      (*this->DeleteUserDataFn)(param_2);
      puVar24 = auStack_318;
    }
  }
LAB_1415afcb7:
  *(undefined8 *)(puVar24 + -8) = 0x1415afcc6;
  return;
}

// DefaultDeleteUserDataFn @ 1415bcbd0

void __cdecl FStackTracker::DefaultDeleteUserDataFn(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// DumpStackTraces @ 1415be5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStackTracker::DumpStackTraces(FStackTracker *this,int param_1,FOutputDevice *param_2,float param_3)

{
  FCallStack *pFVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  FOutputDevice *pFVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  size_t sVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ForAnyElementType FVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStackY_398 [32];
  FIdentityFunctor local_358 [4];
  int local_354;
  ForAnyElementType local_350;
  int local_348;
  int local_344;
  ForAnyElementType local_340;
  undefined8 local_338;
  FString local_330;
  uint local_320;
  uint local_31c;
  FString local_318;
  FString local_308;
  FString local_2f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2e8;
  ulong64 *local_2d8;
  FOutputDevice *local_2d0;
  longlong local_2c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c0;
  FStackTracker *local_2b0;
  FCallStack *local_2a8;
  longlong local_2a0;
  FString local_298;
  FString local_288;
  char local_278 [512];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2d0 = param_2;
  local_2b0 = this;
  if ((param_3 <= 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleCountCorrectionFactor > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StackTracker.cpp"
                         ,0x9a,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->bAvoidCapturing != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAvoidCapturing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StackTracker.cpp"
                         ,0x9c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bAvoidCapturing = true;
  FVar11.Data = (FScriptContainerElement *)0x0;
  local_354 = (this->CallStacks).ArrayNum;
  lVar20 = (longlong)local_354;
  pFVar15 = (this->CallStacks).AllocatorInstance.Data;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = local_354;
  if (local_354 == 0) {
    local_344 = 0;
    iVar16 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1a0,8,local_354,0,&local_350,local_354,&local_344);
    FVar11.Data = local_350.Data;
    memcpy(local_350.Data,pFVar15,lVar20 * 0x1a0);
    iVar16 = local_348;
  }
  local_354 = local_348;
  AlgoImpl::
  IntroSortInternal<FStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FStackTracker::FCallStack,_FStackTracker::DumpStackTraces_::__l2::FCompareStackCount>_>
            ((FCallStack *)FVar11.Data,iVar16,local_358[0],(FCompareStackCount *)local_358);
  uVar12 = 0;
  iVar18 = local_354;
  if (0 < iVar16) {
    do {
      uVar9 = 0;
      if ((int)uVar12 < iVar16) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = uVar12 + 1;
      FVar11.Data = local_350.Data;
      param_2 = local_2d0;
      iVar18 = iVar16;
    } while ((int)uVar12 < iVar16);
  }
  local_354 = iVar18;
  fVar4 = __real_3f800000;
  if (param_3 == __real_3f800000) {
    FOutputDevice::LogfImpl
              (param_2,
               L"Captured %i unique callstacks totalling %i function calls over %i frames, averaging %5.2f calls/frame, Avg Per Frame"
              );
  }
  else {
    fVar21 = (float)param_1;
    param_1 = (int)(fVar21 / param_3);
    if ((int)(fVar21 / param_3) < 1) {
      param_1 = 1;
    }
    FOutputDevice::LogfImpl
              (param_2,L"Captured %i unique callstacks averaging %f function calls per frame");
  }
  local_31c = 0;
  if (0 < iVar16) {
    local_2a0 = (longlong)param_1;
    local_2c8 = 0;
    do {
      lVar7 = local_2a0;
      lVar20 = local_2c8;
      uVar9 = 0;
      uVar12 = uVar9;
      if ((int)local_31c < iVar16) {
        uVar12 = ~local_31c >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((longlong)((FCallStack *)FVar11.Data)->Addresses + lVar20 + -8);
      pFVar1 = (FCallStack *)((longlong)((FCallStack *)FVar11.Data)->Addresses + lVar20 + -8);
      local_2a8 = pFVar1;
      if (lVar2 <= lVar7) break;
      if (param_3 == fVar4) {
        local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.Data.ArrayNum = 0;
        local_2f8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_2f8,(int)lVar2);
        local_330.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
        local_330.Data.ArrayNum = local_2f8.Data.ArrayNum;
        local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.Data.ArrayMax = local_2f8.Data.ArrayMax;
        local_2f8.Data.ArrayNum = 0;
        local_2f8.Data.ArrayMax = 0;
        ::FString::PrintfImpl(&local_288,L",%5.2f");
        uVar12 = local_288.Data.ArrayNum - 1;
        if (local_288.Data.ArrayNum == 0) {
          uVar12 = uVar9;
        }
        ::FString::AppendChars(&local_330,(wchar_t *)local_288.Data.AllocatorInstance.Data,uVar12);
        FVar11.Data = local_288.Data.AllocatorInstance.Data;
      }
      else {
        local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.Data.ArrayNum = 0;
        local_308.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_308,(int)((float)lVar2 * param_3));
        local_330.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
        local_330.Data.ArrayNum = local_308.Data.ArrayNum;
        local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.Data.ArrayMax = local_308.Data.ArrayMax;
        local_308.Data.ArrayNum = 0;
        local_308.Data.ArrayMax = 0;
        ::FString::PrintfImpl(&local_298,L",%5.2f");
        uVar12 = local_298.Data.ArrayNum - 1;
        if (local_298.Data.ArrayNum == 0) {
          uVar12 = uVar9;
        }
        ::FString::AppendChars(&local_330,(wchar_t *)local_298.Data.AllocatorInstance.Data,uVar12);
        FVar11.Data = local_298.Data.AllocatorInstance.Data;
      }
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      local_2d8 = pFVar1->Addresses;
      local_320 = 0;
      FVar11.Data = local_330.Data.AllocatorInstance.Data;
      iVar16 = local_330.Data.ArrayNum;
      do {
        pFVar15 = (FScriptContainerElement *)0x0;
        FVar17.Data = FVar11.Data;
        if (*local_2d8 == 0) break;
        local_278[0] = '\0';
        FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                  (local_320,*local_2d8,local_278,0x1ff,(FGenericCrashContext *)0x0);
        local_340.Data = (FScriptContainerElement *)0x0;
        local_338 = 0;
        FVar14.Data = pFVar15;
        pFVar13 = pFVar15;
        pFVar19 = pFVar15;
        if (local_278[0] != '\0') {
          sVar10 = strlen(local_278);
          uVar12 = (int)sVar10 + 1;
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
          }
          if (0 < (int)uVar12) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar12,&local_340,0,(int *)((longlong)&local_338 + 4));
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar12,&local_340,(int *)&local_338,(int *)((longlong)&local_338 + 4));
          FVar14.Data = local_340.Data;
          FGenericPlatformString::Convert<char,wchar_t>
                    ((wchar_t *)local_340.Data,uVar12,local_278,uVar12);
          pFVar13 = (FScriptContainerElement *)(local_338 >> 0x20);
          pFVar19 = (FScriptContainerElement *)(local_338 & 0xffffffff);
        }
        iVar18 = (int)pFVar13;
        local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_318.Data.ArrayNum = iVar16;
        uVar12 = (6 - (uint)(iVar16 != 0)) + iVar16;
        if ((int)uVar12 < iVar16) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,0,(ForAnyElementType *)&local_318,iVar16,&local_318.Data.ArrayMax);
        if (iVar16 != 0) {
          memcpy(local_318.Data.AllocatorInstance.Data,FVar11.Data,(longlong)iVar16 * 2);
        }
        ::FString::AppendChars(&local_318,L"\r\n,,,",5);
        iVar5 = local_318.Data.ArrayNum;
        local_2c0.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
        local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.ArrayNum = local_318.Data.ArrayNum;
        local_2c0.ArrayMax = local_318.Data.ArrayMax;
        local_318.Data.ArrayNum = 0;
        local_318.Data.ArrayMax = 0;
        iVar16 = (int)pFVar19;
        if (iVar5 < 2) {
          local_340.Data = (FScriptContainerElement *)0x0;
          local_338 = 0;
          pFVar15 = (FScriptContainerElement *)0x0;
          FVar17.Data = FVar14.Data;
        }
        else {
          pFVar13 = (FScriptContainerElement *)(ulonglong)(iVar16 - 1);
          if (iVar16 == 0) {
            pFVar13 = pFVar15;
          }
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2e8,&local_2c0,(int)pFVar13);
          ::FString::AppendChars((FString *)&local_2e8,(wchar_t *)FVar14.Data,(int)pFVar13);
          FVar17.Data = local_2e8.AllocatorInstance.Data;
          iVar16 = local_2e8.ArrayNum;
          iVar18 = local_2e8.ArrayMax;
          local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e8.ArrayNum = 0;
          local_2e8.ArrayMax = 0;
          pFVar15 = FVar14.Data;
        }
        FVar14.Data = local_2c0.AllocatorInstance.Data;
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        local_330.Data.AllocatorInstance.Data = FVar17.Data;
        local_330.Data.ArrayNum = iVar16;
        local_330.Data.ArrayMax = iVar18;
        if (FVar14.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar14.Data);
        }
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        local_320 = local_320 + 1;
        local_2d8 = local_2d8 + 1;
        FVar11.Data = FVar17.Data;
      } while (local_320 < 0x32);
      pFVar6 = local_2d0;
      FOutputDevice::LogfImpl(local_2d0,L",%s");
      this = local_2b0;
      if (local_2b0->ReportFn != (_func___cdecl_void_FCallStack_ptr_ulong64_FOutputDevice_ptr *)0x0)
      {
        (*local_2b0->ReportFn)(local_2a8,local_2a8->StackCount,pFVar6);
      }
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      local_31c = local_31c + 1;
      local_2c8 = local_2c8 + 0x1a0;
      FVar11.Data = local_350.Data;
      iVar16 = local_354;
    } while ((int)local_31c < local_354);
  }
  this->bAvoidCapturing = false;
  if ((FCallStack *)FVar11.Data != (FCallStack *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return;
}

// ResetTracking @ 1415ea7a0

void __thiscall FStackTracker::ResetTracking(FStackTracker *this)

{
  undefined1 *puVar1;
  int *piVar2;
  _func___cdecl_void_void_ptr *p_Var3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((this->bAvoidCapturing != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAvoidCapturing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StackTracker.cpp"
                         ,0x102,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = 1 < *(int *)&(this->CRCToCallStackIndexMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                      *)&this->CRCToCallStackIndexMap);
  }
  uVar8 = 0;
  puVar1 = &(this->CRCToCallStackIndexMap).field_0xc;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->CRCToCallStackIndexMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x34 = 0;
  iVar7 = *(int *)&(this->CRCToCallStackIndexMap).field_0x2c;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CRCToCallStackIndexMap).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x48 = 1;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)&this->CRCToCallStackIndexMap);
  }
  iVar7 = (this->CallStacks).ArrayNum;
  uVar10 = uVar8;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
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
      if (*(longlong *)((this->CallStacks).AllocatorInstance.Data + uVar8 + 0x198) != 0) {
        p_Var3 = this->DeleteUserDataFn;
        uVar6 = 0;
        if ((int)uVar9 < (this->CallStacks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*p_Var3)(*(void **)((this->CallStacks).AllocatorInstance.Data + uVar8 + 0x198));
      }
      iVar7 = (this->CallStacks).ArrayNum;
      uVar8 = uVar8 + 0x1a0;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < iVar7);
  }
  piVar2 = &(this->CallStacks).ArrayMax;
  (this->CallStacks).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1a0,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  this->StartFrameCounter = GFrameCounter;
  this->StopFrameCounter = GFrameCounter;
  return;
}

// ToggleTracking @ 141602ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStackTracker::ToggleTracking(FStackTracker *this)

{
  bool bVar1;
  
  bVar1 = this->bIsEnabled;
  if ((bVar1 == false) != bVar1) {
    this->bIsEnabled = bVar1 == false;
    if (bVar1 == false) {
      if (4 < (byte)LogStackTracker._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStackTracker);
      }
      this->StartFrameCounter = GFrameCounter;
      return;
    }
    this->StopFrameCounter = GFrameCounter;
    if (4 < (byte)LogStackTracker._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStackTracker);
      return;
    }
  }
  return;
}

// ToggleTracking @ 141602d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStackTracker::ToggleTracking(FStackTracker *this,bool param_1,bool param_2)

{
  if (param_1 != this->bIsEnabled) {
    this->bIsEnabled = param_1;
    if (param_1) {
      if ((!param_2) && (4 < (byte)LogStackTracker._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStackTracker);
      }
      this->StartFrameCounter = GFrameCounter;
      return;
    }
    this->StopFrameCounter = GFrameCounter;
    if ((!param_2) && (4 < (byte)LogStackTracker._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStackTracker);
      return;
    }
  }
  return;
}

// ~FStackTracker @ 141a72d90

void __thiscall FStackTracker::~FStackTracker(FStackTracker *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->StringAliasMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringAliasMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringAliasMap);
  *(undefined4 *)&(this->AliasMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AliasMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AliasMap);
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CRCToCallStackIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CRCToCallStackIndexMap);
  pFVar2 = (this->CallStacks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

