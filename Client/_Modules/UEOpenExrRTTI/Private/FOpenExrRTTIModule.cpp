// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UEOpenExrRTTI
// Functions: 2

// AddFileMetadata @ 14ddb7850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddb8241) */
/* WARNING: Removing unreachable block (ram,0x00014ddb8257) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FOpenExrRTTIModule::AddFileMetadata
          (FOpenExrRTTIModule *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1,Header *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  wchar_t wVar4;
  int iVar5;
  uint uVar6;
  uchar *_Str;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *pTVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar19;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pTVar20;
  size_t sVar21;
  char *pcVar22;
  Attribute *pAVar23;
  byte bVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 uVar27;
  ulong64 uVar28;
  wchar_t *pwVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ForAnyElementType FVar33;
  undefined1 *puVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  int iVar37;
  uint *puVar38;
  longlong lVar39;
  undefined1 auStackY_598 [32];
  undefined1 local_564;
  undefined1 local_563 [3];
  TypedAttribute<int> *local_560;
  int local_558;
  float local_554;
  int local_550;
  uint uStack_54c;
  undefined1 *puStack_548;
  uint local_540;
  uint uStack_53c;
  uint uStack_538;
  undefined4 uStack_534;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_530;
  int iStack_528;
  uint uStack_524;
  undefined1 *local_520;
  undefined4 uStack_518;
  int iStack_514;
  int local_510;
  int iStack_50c;
  int iStack_508;
  undefined4 uStack_504;
  int local_500;
  int local_4fc;
  Header *local_4f8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e8;
  undefined8 uStack_4c8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  int local_498;
  undefined4 uStack_494;
  TypedAttribute<float> *local_490;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_488;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_480;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_478;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_470;
  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_468;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  uint uStack_448;
  uint uStack_444;
  undefined8 local_440;
  undefined8 uStack_438;
  _Bxty local_430;
  undefined8 local_420;
  ulonglong uStack_418;
  _Bxty local_410;
  undefined8 local_400;
  ulonglong uStack_3f8;
  _Bxty local_3f0;
  undefined8 local_3e0;
  ulonglong uStack_3d8;
  _Bxty local_3d0;
  undefined8 local_3c0;
  ulonglong uStack_3b8;
  _Bxty local_3b0;
  undefined8 local_3a0;
  ulonglong uStack_398;
  _Bxty local_390;
  undefined8 local_380;
  ulonglong uStack_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  int local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  int local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_188;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_598;
  bVar13 = false;
  bVar17 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar18 = false;
  iStack_528 = 0;
  uStack_524 = 1;
  puVar1 = &param_1->field_0x10;
  local_510 = 0;
  iVar5 = *(int *)&param_1->field_0x28;
  iStack_514 = 0;
  if (iVar5 != 0) {
    puVar38 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar38 = (uint *)puVar1;
    }
    uVar31 = *puVar38;
    while (uVar31 == 0) {
      lVar25 = (longlong)iStack_528;
      iStack_528 = iStack_528 + 1;
      local_510 = local_510 + 0x20;
      iStack_514 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_528) goto LAB_14ddb791e;
      uVar31 = puVar38[lVar25 + 1];
    }
    uStack_524 = ~(uVar31 - 1) & uVar31;
    uVar2 = (ulonglong)uStack_524 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_500 = (int)lVar25;
    iStack_514 = local_510 + -1 + local_500;
    if (iVar5 < iStack_514) {
      iStack_514 = iVar5;
    }
  }
LAB_14ddb791e:
  uStack_518 = 0xffffffff;
  iStack_508 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_4e8._padding_ = CONCAT44(uStack_524,iStack_528);
  TStack_4e8.CurrentBitIndex = iStack_514;
  TStack_4e8.UnvisitedBitMask = 0xffffffff;
  TStack_4e8._28_4_ = iStack_514;
  TStack_4e8.BaseBitIndex = local_510;
  uStack_4c8 = CONCAT44(uStack_504,iStack_508);
  uVar31 = *(uint *)&param_1->field_0x28;
  iVar37 = (int)uVar31 >> 5;
  local_560 = (TypedAttribute<int> *)CONCAT44(local_560._4_4_,iVar37);
  bVar24 = (byte)uVar31 & 0x1f;
  uStack_54c = 1 << bVar24;
  uVar30 = -1 << bVar24;
  uVar32 = uVar31 & 0xffffffe0;
  local_550 = iVar37;
  puStack_548 = puVar1;
  local_540 = uVar30;
  uStack_53c = uVar31;
  uStack_538 = uVar32;
  local_530 = param_1;
  local_520 = puVar1;
  iStack_50c = iStack_514;
  local_4f8 = param_2;
  local_4f0 = param_1;
  TStack_4e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar31 < 0) || (iVar5 < (int)uVar31)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar2 = _UNK_15076add8;
  uVar14 = ___xmm_000000000000000f0000000000000000;
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar31 != uVar6) {
    puVar34 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar34 = puVar1;
    }
    uVar30 = uVar30 & *(uint *)(puVar34 + (longlong)iVar37 * 4);
    while (uVar30 == 0) {
      local_550 = iVar37 + 1;
      uStack_538 = uVar32 + 0x20;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < local_550)
      goto LAB_14ddb7a70;
      uVar30 = *(uint *)(puVar34 + (longlong)iVar37 * 4 + 4);
      local_540 = 0xffffffff;
      iVar37 = local_550;
      uVar32 = uStack_538;
    }
    uStack_54c = ~(uVar30 - 1) & uVar30;
    uVar3 = (ulonglong)uStack_54c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_4fc = (int)lVar25;
    uStack_53c = (uVar32 - 1) + local_4fc;
    if ((int)uVar6 < (int)uStack_53c) {
LAB_14ddb7a70:
      uStack_53c = uVar6;
    }
  }
  uStack_4b8 = CONCAT44(uStack_54c,local_550);
  uStack_4b0 = puStack_548;
  puVar1 = uStack_4b0;
  uStack_4a8 = CONCAT44(uStack_53c,local_540);
  uStack_4a0 = CONCAT44(uStack_534,uStack_538);
  local_498 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_4b0._0_4_ = SUB84(puStack_548,0);
  uStack_4b0._4_4_ = (undefined4)((ulonglong)puStack_548 >> 0x20);
  local_450 = (undefined4)uStack_4b0;
  uStack_44c = uStack_4b0._4_4_;
  uStack_448 = local_540;
  uStack_444 = uStack_53c;
  uStack_438 = CONCAT44(uStack_494,local_498);
  local_4c0 = param_1;
  uStack_4b0 = puVar1;
  local_460 = param_1;
  uStack_458 = uStack_4b8;
  local_440 = uStack_4a0;
  do {
    pTVar15 = local_4f0;
    if (*(int *)&local_4f0->field_0x8 - *(int *)&local_4f0->field_0x34 != (int)uStack_4c8) {
      local_564 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_564);
    }
    if (((TStack_4e8.CurrentBitIndex == uStack_444) &&
        (TStack_4e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_44c,local_450))
        ) && (pTVar15 == local_460)) {
      return;
    }
    lVar39 = (longlong)TStack_4e8.CurrentBitIndex * 0x38;
    lVar25 = *(longlong *)pTVar15;
    switch(*(undefined4 *)(lVar39 + 0x10 + lVar25)) {
    case 0:
      local_560 = ::operator_new(0x10);
      if (local_560 == (TypedAttribute<int> *)0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        local_558 = *(int *)(lVar39 + 0x18 + lVar25);
        pAVar23 = (Attribute *)
                  Imf_3_3::TypedAttribute<int>::TypedAttribute<int>(local_560,&local_558);
      }
      break;
    default:
      local_563[0] = 0;
      `FOpenExrRTTIModule::AddFileMetadata'::__l8::<lambda_1>::operator()(local_563);
      goto LAB_14ddb8445;
    case 2:
      local_490 = ::operator_new(0x10);
      if (local_490 == (TypedAttribute<float> *)0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        local_554 = (float)*(double *)(lVar39 + 0x18 + lVar25);
        pAVar23 = (Attribute *)
                  Imf_3_3::TypedAttribute<float>::TypedAttribute<float>(local_490,&local_554);
      }
      break;
    case 3:
      pTVar20 = ::operator_new(0x28);
      local_488 = pTVar20;
      if (pTVar20 ==
          (TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
          0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        if (*(int *)(lVar39 + 0x28 + lVar25) == 0) {
          pwVar29 = L"";
        }
        else {
          pwVar29 = *(wchar_t **)(lVar39 + 0x20 + lVar25);
        }
        pTVar19 = StringCast<char,128,wchar_t>(&local_188,pwVar29);
        pcVar22 = pTVar19->Ptr;
        local_430._Ptr = (char *)0x0;
        local_430._8_8_ = 0;
        local_420 = 0;
        uStack_418 = 0;
        sVar21 = strlen(pcVar22);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_430,
                   pcVar22,sVar21);
        bVar9 = true;
        bVar8 = true;
        pAVar23 = (Attribute *)
                  Imf_3_3::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                            (pTVar20,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_430);
      }
      if (bVar9) {
        bVar9 = false;
        if (0xf < uStack_418) {
          uVar28 = uStack_418 + 1;
          uVar27 = local_430._Ptr;
          if (0xfff < uVar28) {
            uVar28 = uStack_418 + 0x28;
            uVar27 = *(undefined8 *)(local_430._Ptr + -8);
            if ((char *)0x1f < local_430._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar27,uVar28);
        }
        local_420 = uVar14;
        uStack_418 = uVar2;
        local_430._Ptr = local_430._Ptr & 0xffffffffffffff00;
      }
      if ((bVar8) && (bVar8 = false, (void *)local_188._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_188._padding_);
      }
      break;
    case 4:
      pTVar20 = ::operator_new(0x28);
      local_480 = pTVar20;
      if (pTVar20 ==
          (TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
          0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        local_410._Ptr = (char *)0x0;
        local_410._8_8_ = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        sVar21 = strlen(*(char **)(lVar39 + 0x18 + lVar25));
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_410,
                   *(char **)(lVar39 + 0x18 + lVar25),sVar21);
        bVar10 = true;
        pAVar23 = (Attribute *)
                  Imf_3_3::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                            (pTVar20,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_410);
      }
      if (bVar10) {
        bVar10 = false;
        if (0xf < uStack_3f8) {
          uVar28 = uStack_3f8 + 1;
          uVar27 = local_410._Ptr;
          if (0xfff < uVar28) {
            uVar28 = uStack_3f8 + 0x28;
            uVar27 = *(undefined8 *)(local_410._Ptr + -8);
            if ((char *)0x1f < local_410._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar27,uVar28);
        }
        local_400 = uVar14;
        uStack_3f8 = uVar2;
        local_410._Ptr = local_410._Ptr & 0xffffffffffffff00;
      }
      break;
    case 5:
      pTVar20 = ::operator_new(0x28);
      local_478 = pTVar20;
      if (pTVar20 ==
          (TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
          0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        pTVar19 = StringCast<char,128,wchar_t>(&local_e8,*(wchar_t **)(lVar39 + 0x18 + lVar25));
        pcVar22 = pTVar19->Ptr;
        local_3f0._Ptr = (char *)0x0;
        local_3f0._8_8_ = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        sVar21 = strlen(pcVar22);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_3f0,
                   pcVar22,sVar21);
        bVar12 = true;
        bVar11 = true;
        pAVar23 = (Attribute *)
                  Imf_3_3::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                            (pTVar20,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_3f0);
      }
      if (bVar11) {
        bVar11 = false;
        if (0xf < uStack_3d8) {
          uVar28 = uStack_3d8 + 1;
          uVar27 = local_3f0._Ptr;
          if (0xfff < uVar28) {
            uVar28 = uStack_3d8 + 0x28;
            uVar27 = *(undefined8 *)(local_3f0._Ptr + -8);
            if ((char *)0x1f < local_3f0._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar27,uVar28);
        }
        local_3e0 = uVar14;
        uStack_3d8 = uVar2;
        local_3f0._Ptr = local_3f0._Ptr & 0xffffffffffffff00;
      }
      if ((bVar12) && (bVar12 = false, (void *)local_e8._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_e8._padding_);
      }
      break;
    case 6:
      pTVar20 = ::operator_new(0x28);
      local_470 = pTVar20;
      if (pTVar20 ==
          (TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
          0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        pwVar29 = *(wchar_t **)(lVar39 + 0x18 + lVar25);
        local_248.Data = (FScriptContainerElement *)0x0;
        if (pwVar29 == (wchar_t *)0x0) {
          local_240 = (FScriptContainerElement *)0x0;
          local_238 = 0;
        }
        else {
          sVar21 = wcslen(pwVar29);
          local_238 = (int)sVar21;
          uVar31 = local_238 + 1;
          FVar33.Data = (FScriptContainerElement *)0x0;
          if (0x80 < uVar31) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar31,1);
            FVar33.Data = local_248.Data;
          }
          pFVar35 = local_2c8;
          if (FVar33.Data != (FScriptContainerElement *)0x0) {
            pFVar35 = FVar33.Data;
          }
          bVar17 = false;
          lVar26 = 0;
          lVar36 = (longlong)(int)uVar31;
          local_240 = pFVar35;
          if (0 < (int)uVar31) {
            do {
              wVar4 = pwVar29[lVar26];
              pFVar35[lVar26] = SUB21(wVar4,0);
              bVar17 = (bool)(bVar17 | 0x7f < (ushort)wVar4);
              lVar26 = lVar26 + 1;
            } while (lVar26 < lVar36);
            if (bVar17) {
              lVar26 = 0;
              do {
                if (0x7f < (ushort)pwVar29[lVar26]) {
                  pFVar35[lVar26] = (FScriptContainerElement)0x3f;
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < lVar36);
            }
          }
          if ((pFVar35 + lVar36 == (FScriptContainerElement *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_3d0._Ptr = (char *)0x0;
        local_3d0._8_8_ = 0;
        local_3c0 = 0;
        uStack_3b8 = 0;
        sVar21 = strlen((char *)local_240);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_3d0,
                   (char *)local_240,sVar21);
        bVar13 = true;
        bVar17 = true;
        pAVar23 = (Attribute *)
                  Imf_3_3::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                            (pTVar20,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_3d0);
      }
      if (bVar17) {
        bVar17 = false;
        if (0xf < uStack_3b8) {
          uVar28 = uStack_3b8 + 1;
          uVar27 = local_3d0._Ptr;
          if (0xfff < uVar28) {
            uVar28 = uStack_3b8 + 0x28;
            uVar27 = *(undefined8 *)(local_3d0._Ptr + -8);
            if ((char *)0x1f < local_3d0._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar27,uVar28);
        }
        local_3c0 = uVar14;
        uStack_3b8 = uVar2;
        local_3d0._Ptr = local_3d0._Ptr & 0xffffffffffffff00;
      }
      if ((bVar13) && (bVar13 = false, local_248.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_248.Data);
      }
      break;
    case 7:
      pTVar20 = ::operator_new(0x28);
      local_468 = pTVar20;
      if (pTVar20 ==
          (TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
          0x0) {
        pAVar23 = (Attribute *)0x0;
      }
      else {
        _Str = *(uchar **)(lVar39 + 0x18 + lVar25);
        local_2e8.Data = (FScriptContainerElement *)0x0;
        if (_Str == (uchar *)0x0) {
          local_2d8 = 0;
          local_2e0 = (FScriptContainerElement *)0x0;
        }
        else {
          sVar21 = strlen((char *)_Str);
          local_2d8 = UE::Core::Private::GetConvertedLength((char *)0x0,_Str,(int)sVar21);
          uVar31 = local_2d8 + 1;
          uVar30 = uVar31;
          if (uVar31 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar30 = 0;
              goto LAB_14ddb80ee;
            }
          }
          else {
LAB_14ddb80ee:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar30,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          pcVar22 = UE::Core::Private::Convert((char *)local_2e0,uVar31,_Str,(int)sVar21 + 1);
          if ((pcVar22 == (char *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar35 = local_2e0;
        local_3b0._Ptr = (char *)0x0;
        local_3b0._8_8_ = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        sVar21 = strlen((char *)local_2e0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_3b0,
                   (char *)pFVar35,sVar21);
        bVar18 = true;
        pAVar23 = (Attribute *)
                  Imf_3_3::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::
                  TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                            (pTVar20,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_3b0);
      }
      if (bVar18) {
        bVar18 = false;
        if (0xf < uStack_398) {
          uVar28 = uStack_398 + 1;
          uVar27 = local_3b0._Ptr;
          if (0xfff < uVar28) {
            uVar28 = uStack_398 + 0x28;
            uVar27 = *(undefined8 *)(local_3b0._Ptr + -8);
            if ((char *)0x1f < local_3b0._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar27,uVar28);
        }
        local_3a0 = uVar14;
        uStack_398 = uVar2;
        local_3b0._Ptr = local_3b0._Ptr & 0xffffffffffffff00;
      }
    }
    if (pAVar23 != (Attribute *)0x0) {
      if (*(int *)(lVar39 + 8 + lVar25) == 0) {
        pwVar29 = L"";
      }
      else {
        pwVar29 = *(wchar_t **)(lVar39 + lVar25);
      }
      local_1a8.Data = (FScriptContainerElement *)0x0;
      if (pwVar29 == (wchar_t *)0x0) {
        local_1a0 = (FScriptContainerElement *)0x0;
        local_198 = 0;
      }
      else {
        sVar21 = wcslen(pwVar29);
        local_198 = (int)sVar21;
        uVar31 = local_198 + 1;
        FVar33.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar31) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1a8,0,uVar31,1);
          FVar33.Data = local_1a8.Data;
        }
        pFVar35 = local_228;
        if (FVar33.Data != (FScriptContainerElement *)0x0) {
          pFVar35 = FVar33.Data;
        }
        bVar16 = false;
        lVar25 = 0;
        lVar39 = (longlong)(int)uVar31;
        local_1a0 = pFVar35;
        if (0 < (int)uVar31) {
          do {
            wVar4 = pwVar29[lVar25];
            pFVar35[lVar25] = SUB21(wVar4,0);
            bVar16 = (bool)(bVar16 | 0x7f < (ushort)wVar4);
            lVar25 = lVar25 + 1;
          } while (lVar25 < lVar39);
          if (bVar16) {
            lVar25 = 0;
            do {
              if (0x7f < (ushort)pwVar29[lVar25]) {
                pFVar35[lVar25] = (FScriptContainerElement)0x3f;
              }
              lVar25 = lVar25 + 1;
            } while (lVar25 < lVar39);
          }
        }
        if ((pFVar35 + lVar39 == (FScriptContainerElement *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                ,0x25,L""), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_390._Ptr = (char *)0x0;
      local_390._8_8_ = 0;
      local_380 = 0;
      uStack_378 = 0;
      sVar21 = strlen((char *)local_1a0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_390,
                 (char *)local_1a0,sVar21);
      Imf_3_3::Header::insert
                (local_4f8,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_390,
                 pAVar23);
      if (0xf < uStack_378) {
        uVar28 = uStack_378 + 1;
        uVar27 = local_390._Ptr;
        if (0xfff < uVar28) {
          uVar28 = uStack_378 + 0x28;
          uVar27 = *(undefined8 *)(local_390._Ptr + -8);
          if ((char *)0x1f < local_390._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar27,uVar28);
      }
      local_380 = uVar14;
      uStack_378 = uVar2;
      local_390._Ptr = local_390._Ptr & 0xffffffffffffff00;
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      (**(code **)*pAVar23)(pAVar23,1);
    }
LAB_14ddb8445:
    TStack_4e8.UnvisitedBitMask = TStack_4e8.UnvisitedBitMask & ~TStack_4e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e8);
  } while( true );
}

// operator() @ 15058f1a0

bool __thiscall `FOpenExrRTTIModule::AddFileMetadata'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<297664928947372081>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<297664928947372081>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FOpenExrRTTIModule::AddFileMetadata(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>_const&___ptr64,Imf_3_3::Header&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

