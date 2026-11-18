// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// Create<char8_t> @ 14178a350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLogTemplate * __cdecl
UE::FLogTemplate::Create<char8_t>
          (uchar *param_1,FLogTemplateOptions *param_2,FLogField *param_3,int param_4,
          TFunctionWithContext<void_*___cdecl(int)> *param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char *_Str2;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FLogTemplate *pFVar10;
  size_t sVar11;
  FLogField *pFVar12;
  wchar_t *pwVar13;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar14;
  FLogTemplate *pFVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar20;
  int iVar21;
  byte *pbVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  FLogField *pFVar26;
  uchar *puVar27;
  int iVar28;
  byte *pbVar29;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar30;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar31;
  undefined1 auStack_da8 [32];
  FScriptContainerElement *local_d88;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_d80;
  FScriptContainerElement *local_d78;
  FScriptContainerElement *local_d70;
  undefined8 local_d68;
  char local_d58;
  int local_d54;
  undefined1 local_d50;
  undefined1 local_d4f [3];
  int local_d4c;
  int local_d48;
  uint local_d44;
  undefined4 local_d40;
  undefined4 uStack_d3c;
  undefined4 local_d38;
  int iStack_d34;
  undefined4 local_d30;
  undefined4 uStack_d2c;
  undefined4 local_d28;
  int iStack_d24;
  undefined4 local_d20;
  int iStack_d1c;
  int local_d18;
  int iStack_d14;
  undefined8 local_d10;
  FLogField *local_d08;
  uchar *local_d00;
  FLogTemplateOptions *local_cf8;
  byte *local_cf0;
  TFunctionWithContext<void_*___cdecl(int)> *local_ce8;
  FAsciiSet local_cd8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_cc8;
  uint local_c40;
  uint local_c3c;
  ForElementType<int> local_c38;
  int local_bf0;
  int local_bec;
  TStringBuilderBase<wchar_t> local_be8;
  FScriptContainerElement local_bc8 [64];
  TStringBuilderBase<char> local_b88;
  char local_b68 [256];
  FScriptContainerElement local_a68 [256];
  ForAnyElementType local_968;
  FScriptContainerElement *local_960;
  int local_958;
  FScriptContainerElement local_948 [256];
  ForAnyElementType local_848;
  FScriptContainerElement *local_840;
  int local_838;
  undefined1 local_828 [256];
  ForAnyElementType local_728;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_720;
  int local_718;
  undefined1 local_708 [256];
  ForAnyElementType local_608;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_600;
  int local_5f8;
  FScriptContainerElement local_5e8 [256];
  ForAnyElementType local_4e8;
  FScriptContainerElement *local_4e0;
  int local_4d8;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_da8;
  local_ce8 = param_5;
  local_d48 = param_4;
  local_d08 = param_3;
  local_d00 = param_1;
  local_cf8 = param_2;
  if (param_4 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FLogTemplate *)(*pcVar4)();
      return pFVar10;
    }
LAB_14178a3d3:
    pFVar26 = param_3 + param_4;
    for (pFVar12 = param_3; pFVar12 != pFVar26; pFVar12 = pFVar12 + 1) {
      if (pFVar12->Name != (char *)0x0) {
        local_d58 = '\0';
        pFVar12 = param_3;
        goto LAB_14178a654;
      }
    }
  }
  else if (param_4 != 0) goto LAB_14178a3d3;
  local_d58 = '\x01';
LAB_14178a3fb:
  uVar23 = 0;
  local_c3c = 0x10;
  local_cc8.SecondaryData = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_b88.Base = local_b68;
  local_c40 = 0;
  local_b88.CurPos = local_b68;
  local_b88.bIsDynamic = false;
  local_b88.bIsExternal = false;
  local_b88.End = (char *)local_a68;
  local_c38.SecondaryData = (ForElementType<int>)0x0;
  local_bf0 = 0;
  local_bec = 0x10;
  local_d4c = -1;
  local_d44 = 0;
  uVar19 = uVar23;
  uVar18 = uVar23;
  puVar27 = param_1;
  do {
    while( true ) {
      uVar24 = 0;
      uVar7 = (uint)uVar18;
      pbVar29 = param_1 + uVar19;
      bVar2 = param_1[uVar19] >> 6;
      uVar18 = uVar24;
      if (bVar2 == 1) {
        uVar18 = 0x2800000000000000;
      }
      for (uVar19 = (uVar18 | bVar2 == 0) >> (param_1[uVar19] & 0x3f); (uVar19 & 1) == 0;
          uVar19 = (uVar19 | bVar2 == 0) >> (*pbVar1 & 0x3f)) {
        pbVar1 = pbVar29 + 1;
        pbVar29 = pbVar29 + 1;
        bVar2 = *pbVar1 >> 6;
        uVar19 = uVar24;
        if (bVar2 == 1) {
          uVar19 = 0x2800000000000000;
        }
      }
      iVar28 = (int)pbVar29;
      if (*pbVar29 != 0x7b) break;
      if (pbVar29[1] != 0x7b) goto LAB_14178a4f9;
LAB_14178a764:
      if (param_1 == pbVar29) {
        local_d40 = 1;
        uStack_d3c = 1;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        if ((ulonglong)FVar20 <= &local_d40) {
          FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
          if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar20 = local_cc8.SecondaryData;
          }
          if (&local_d40 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
            local_d68 = 8;
            local_d70 = (FScriptContainerElement *)(longlong)(int)uVar7;
            local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
            if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_d80 = local_cc8.SecondaryData;
            }
            local_d88 = (FScriptContainerElement *)&local_d40;
            local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            uVar7 = local_c40;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FLogTemplate *)(*pcVar4)();
              return pFVar10;
            }
          }
        }
        if (uVar7 == local_c3c) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_cc8,(int *)&local_c3c);
        }
        local_c40 = uVar7 + 1;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        *(ulonglong *)((longlong)FVar20 + (longlong)(int)uVar7 * 8) = CONCAT44(uStack_d3c,local_d40)
        ;
        uVar18 = (ulonglong)local_c40;
        param_1 = pbVar29 + 1;
        uVar19 = 1;
      }
      else {
        local_d38 = 2;
        iStack_d34 = (iVar28 - (int)param_1) + 1;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        if ((ulonglong)FVar20 <= &local_d38) {
          FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
          if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar20 = local_cc8.SecondaryData;
          }
          if (&local_d38 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
            local_d68 = 8;
            local_d70 = (FScriptContainerElement *)(longlong)(int)uVar7;
            local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
            if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_d80 = local_cc8.SecondaryData;
            }
            local_d88 = (FScriptContainerElement *)&local_d38;
            local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            uVar7 = local_c40;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FLogTemplate *)(*pcVar4)();
              return pFVar10;
            }
          }
        }
        if (uVar7 == local_c3c) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_cc8,(int *)&local_c3c);
        }
        local_c40 = uVar7 + 1;
        local_d30 = 1;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        uStack_d2c = 1;
        *(ulonglong *)((longlong)FVar20 + (longlong)(int)uVar7 * 8) = CONCAT44(iStack_d34,local_d38)
        ;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        if ((ulonglong)FVar20 <= &local_d30) {
          FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
          if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar20 = local_cc8.SecondaryData;
          }
          if (&local_d30 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
            local_d70 = (FScriptContainerElement *)(longlong)(int)local_c40;
            local_d68 = 8;
            local_d88 = (FScriptContainerElement *)&local_d30;
            local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
            if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_d80 = local_cc8.SecondaryData;
            }
            local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FLogTemplate *)(*pcVar4)();
              return pFVar10;
            }
          }
        }
        if (local_c40 == local_c3c) {
          local_c40 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                (0x408,&local_cc8,(int *)&local_c3c);
        }
        lVar16 = (longlong)(int)local_c40;
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        local_c40 = local_c40 + 1;
        *(ulonglong *)((longlong)FVar20 + lVar16 * 8) = CONCAT44(uStack_d2c,local_d30);
        uVar18 = (ulonglong)local_c40;
        param_1 = pbVar29 + 2;
        uVar19 = uVar24;
      }
    }
    if ((*pbVar29 == 0x7d) && (pbVar29[1] == 0x7d)) goto LAB_14178a764;
LAB_14178a4f9:
    if (param_1 != pbVar29) {
      local_d28._0_1_ = '\x02';
      local_d28._1_1_ = '\0';
      local_d28._2_1_ = '\0';
      local_d28._3_1_ = '\0';
      iStack_d24 = iVar28 - (int)param_1;
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      if ((ulonglong)FVar20 <= &local_d28) {
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        if (&local_d28 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
          local_d68 = 8;
          local_d70 = (FScriptContainerElement *)(longlong)(int)uVar7;
          local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
          if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_d80 = local_cc8.SecondaryData;
          }
          local_d88 = (FScriptContainerElement *)&local_d28;
          local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar7 = local_c40;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FLogTemplate *)(*pcVar4)();
            return pFVar10;
          }
        }
      }
      if (uVar7 == local_c3c) {
        uVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_cc8,(int *)&local_c3c);
      }
      local_c40 = uVar7 + 1;
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      *(ulonglong *)((longlong)FVar20 + (longlong)(int)uVar7 * 8) = CONCAT44(iStack_d24,local_d28);
      uVar7 = local_c40;
    }
    if (*pbVar29 == 0) {
      local_d10._0_1_ = '\0';
      local_d10._1_1_ = '\0';
      local_d10._2_1_ = '\0';
      local_d10._3_1_ = '\0';
      local_d10._4_1_ = '\0';
      local_d10._5_1_ = '\0';
      local_d10._6_1_ = '\0';
      local_d10._7_1_ = '\0';
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      if ((ulonglong)FVar20 <= &local_d10) {
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar20 = local_cc8.SecondaryData;
        }
        if (&local_d10 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
          local_d70 = (FScriptContainerElement *)(longlong)(int)uVar7;
          local_d68 = 8;
          local_d88 = (FScriptContainerElement *)&local_d10;
          local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
          if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_d80 = local_cc8.SecondaryData;
          }
          local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar7 = local_c40;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FLogTemplate *)(*pcVar4)();
            return pFVar10;
          }
        }
      }
      if (uVar7 == local_c3c) {
        uVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_cc8,(int *)&local_c3c);
      }
      iVar28 = local_d48;
      local_c40 = uVar7 + 1;
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      *(undefined8 *)((longlong)FVar20 + (longlong)(int)uVar7 * 8) = local_d10;
      if (((local_d08 != (FLogField *)0x0) && (local_d58 != '\0')) && ((int)uVar23 != local_d48)) {
        pTVar14 = StringCast<wchar_t,128,char8_t>(&local_168,puVar27);
        local_d78 = (FScriptContainerElement *)pTVar14->Ptr;
        local_d80._0_4_ = iVar28;
        local_d88 = (FScriptContainerElement *)CONCAT44(local_d88._4_4_,(int)uVar23);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bFindFields || !bPositional || FormatFieldCount == FieldCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                           ,0x25a,L"Log format requires %d fields and %d were provided. [[%s]]");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      uVar7 = local_c40;
      uVar19 = (ulonglong)(int)local_c40;
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      FVar31 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar20 + uVar19 * 8)
      ;
      while( true ) {
        if ((uint)uVar19 != uVar7) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_d50);
          uVar19 = (ulonglong)local_c40;
        }
        if (FVar20 == FVar31) break;
        uVar18 = (longlong)*(int *)((longlong)FVar20 + 4) << 3 | (longlong)*(int *)FVar20;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar28 = 0;
        if (uVar18 != 0) {
          iVar28 = (int)lVar16;
        }
        iVar9 = iVar28 / 7 + 1;
        iVar28 = 9;
        if (iVar9 < 9) {
          iVar28 = iVar9;
        }
        uVar24 = (ulonglong)(uint)((int)uVar24 + iVar28);
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar20 + 8);
      }
      pFVar15 = (*local_ce8->Function)(local_ce8->Context,(int)uVar24 + 0x10);
      uVar7 = local_c40;
      pFVar15->StaticFormatUtf8 = puVar27;
      pFVar10 = pFVar15 + 1;
      pFVar15->StaticFormat = (wchar_t *)0x0;
      uVar19 = (ulonglong)(int)local_c40;
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      FVar31 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar20 + uVar19 * 8)
      ;
      while( true ) {
        if ((uint)uVar19 != uVar7) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d4f);
        }
        if (FVar20 == FVar31) break;
        uVar19 = (longlong)*(int *)((longlong)FVar20 + 4) << 3 | (longlong)*(int *)FVar20;
        lVar16 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar28 = 0;
        if (uVar19 != 0) {
          iVar28 = (int)lVar16;
        }
        uVar17 = iVar28 / 7 + 1;
        uVar25 = 9;
        if ((int)uVar17 < 9) {
          uVar25 = uVar17;
        }
        pFVar10 = (FLogTemplate *)((longlong)&pFVar10->StaticFormat + (ulonglong)uVar25);
        pbVar29 = (byte *)((longlong)&pFVar10[-1].StaticFormatUtf8 + 7);
        switch(uVar25) {
        case 9:
          *pbVar29 = (byte)uVar19;
          pbVar29 = (byte *)((longlong)&pFVar10[-1].StaticFormatUtf8 + 6);
          uVar19 = uVar19 >> 8;
        case 8:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 7:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 6:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 5:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 4:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 3:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        case 2:
          *pbVar29 = (byte)uVar19;
          pbVar29 = pbVar29 + -1;
          uVar19 = uVar19 >> 8;
        default:
          *pbVar29 = -1 << (9U - (char)uVar25 & 0x1f) | (byte)uVar19;
          FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar20 + 8);
          uVar19 = (ulonglong)local_c40;
        }
      }
      if (local_c38.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c38.SecondaryData);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_b88);
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free((void *)local_cc8.SecondaryData);
      }
      return pFVar15;
    }
    if (*pbVar29 != 0x7b) {
      local_968.Data = (FScriptContainerElement *)0x0;
      if (puVar27 == (uchar *)0x0) {
        local_960 = (FScriptContainerElement *)0x0;
        local_958 = 0;
      }
      else {
        sVar11 = strlen((char *)puVar27);
        local_958 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar27,(int)sVar11);
        uVar7 = local_958 + 1;
        uVar25 = uVar7;
        if (uVar7 < 0x81) {
          if (local_968.Data != (FScriptContainerElement *)0x0) {
            uVar25 = 0;
            goto LAB_14178aa3b;
          }
        }
        else {
LAB_14178aa3b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_968,0,uVar25,2);
        }
        local_960 = local_a68;
        if (local_968.Data != (FScriptContainerElement *)0x0) {
          local_960 = local_968.Data;
        }
        pwVar13 = Core::Private::Convert((wchar_t *)local_960,uVar7,puVar27,(int)sVar11 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_d70 = local_960;
      uVar7 = CONCAT31(0,*pbVar29);
      local_d78 = (FScriptContainerElement *)CONCAT44(local_d78._4_4_,uVar7);
      local_d80._0_4_ = uVar7;
      local_d88 = (FScriptContainerElement *)CONCAT44(local_d88._4_4_,(uint)*pbVar29);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldStart == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x22a,
                         L"Log format has an unexpected \'%c\' character. Use \'%c%c\' to escape it. [[%s]]"
                        );
      if (local_968.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
    }
    bVar2 = pbVar29[1];
    pbVar1 = pbVar29 + 1;
    uVar19 = uVar24;
    if ((bVar2 & 0xffffffc0) == 0x40) {
      uVar19 = 0x7fffffe87fffffe;
    }
    pbVar22 = pbVar1;
    for (uVar19 = (uVar19 | -(ulonglong)(bVar2 < 0x40) & 0x3ff800000000000) >> (bVar2 & 0x3f);
        (uVar19 & 1) != 0;
        uVar19 = (uVar19 | -(ulonglong)(uVar7 < 0x40) & 0x3ff800000000000) >> (uVar7 & 0x3f)) {
      bVar2 = pbVar22[1];
      uVar7 = (uint)bVar2;
      pbVar22 = pbVar22 + 1;
      uVar19 = uVar24;
      if ((uVar7 & 0xffffffc0) == 0x40) {
        uVar19 = 0x7fffffe87fffffe;
      }
    }
    if (bVar2 == 0) {
      local_848.Data = (FScriptContainerElement *)0x0;
      if (puVar27 == (uchar *)0x0) {
        local_840 = (FScriptContainerElement *)0x0;
        local_838 = 0;
      }
      else {
        sVar11 = strlen((char *)puVar27);
        local_838 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar27,(int)sVar11);
        uVar7 = local_838 + 1;
        uVar25 = uVar7;
        if (uVar7 < 0x81) {
          if (local_848.Data != (FScriptContainerElement *)0x0) {
            uVar25 = 0;
            goto LAB_14178abea;
          }
        }
        else {
LAB_14178abea:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_848,0,uVar25,2);
        }
        local_840 = local_948;
        if (local_848.Data != (FScriptContainerElement *)0x0) {
          local_840 = local_848.Data;
        }
        pwVar13 = Core::Private::Convert((wchar_t *)local_840,uVar7,puVar27,(int)sVar11 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_d88 = local_840;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x22d,
                         L"Log format has an unterminated field reference. Use \'{{\' to escape \'{\' if needed. [[%s]]"
                        );
      if (local_848.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
    }
    if (*pbVar22 != 0x7d) {
      local_728.Data = (FScriptContainerElement *)0x0;
      if (puVar27 == (uchar *)0x0) {
        local_720 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
        local_718 = 0;
      }
      else {
        sVar11 = strlen((char *)puVar27);
        local_718 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar27,(int)sVar11);
        uVar7 = local_718 + 1;
        uVar25 = uVar7;
        if (uVar7 < 0x81) {
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_728.Data !=
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            uVar25 = 0;
            goto LAB_14178acff;
          }
        }
        else {
LAB_14178acff:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_728,0,uVar25,2);
        }
        local_720 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_828;
        if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_728.Data !=
            (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_720 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_728.Data;
        }
        pwVar13 = Core::Private::Convert((wchar_t *)local_720,uVar7,puVar27,(int)sVar11 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_d80 = local_720;
      local_d88 = (FScriptContainerElement *)CONCAT44(local_d88._4_4_,(uint)*pbVar22);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd == \'}\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x230,
                         L"Log format has invalid character \'%c\' in field name. Use \'{{\' to escape \'{\' if needed. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_728.Data !=
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free(local_728.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
    }
    local_cf0 = pbVar22 + 1;
    iVar28 = (int)local_cf0 - iVar28;
    if (pbVar29[1] == 0x5f) {
      local_608.Data = (FScriptContainerElement *)0x0;
      if (puVar27 == (uchar *)0x0) {
        local_600 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
        local_5f8 = 0;
      }
      else {
        sVar11 = strlen((char *)puVar27);
        local_5f8 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar27,(int)sVar11);
        uVar7 = local_5f8 + 1;
        uVar25 = uVar7;
        if (uVar7 < 0x81) {
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_608.Data !=
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            uVar25 = 0;
            goto LAB_14178ae2b;
          }
        }
        else {
LAB_14178ae2b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_608,0,uVar25,2);
        }
        local_600 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_708;
        if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_608.Data !=
            (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_600 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_608.Data;
        }
        pwVar13 = Core::Private::Convert((wchar_t *)local_600,uVar7,puVar27,(int)sVar11 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar20 = local_600;
      local_be8.Base = (wchar_t *)local_bc8;
      iVar9 = iVar28 + -2;
      local_be8.CurPos = (wchar_t *)local_bc8;
      local_be8.bIsDynamic = false;
      local_be8.bIsExternal = false;
      local_be8.End = (wchar_t *)&local_b88;
      iVar8 = Core::Private::GetConvertedLength((wchar_t *)0x0,pbVar1,iVar9);
      if (local_be8.End <
          (TStringBuilderBase<char> *)((longlong)local_be8.CurPos + (longlong)iVar8 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_be8,(longlong)iVar8);
      }
      if (iVar9 != 0) {
        local_be8.CurPos = Core::Private::Convert(local_be8.CurPos,iVar8,pbVar1,iVar9);
      }
      if (local_be8.End < (TStringBuilderBase<char> *)((longlong)local_be8.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_be8,1);
      }
      *local_be8.CurPos = L'\0';
      local_d80 = FVar20;
      local_d88 = (FScriptContainerElement *)local_be8.Base;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldStart[1] != \'_\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x235,
                         L"Log format uses reserved field name \'%s\' with leading \'_\'. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_be8);
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_608.Data !=
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free(local_608.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
    }
    iVar9 = iVar28 + -2;
    iVar21 = (int)local_b88.CurPos - (int)local_b88.Base;
    iVar8 = Core::Private::GetConvertedLength((char *)0x0,pbVar1,iVar9);
    if (local_b88.End < (FScriptContainerElement *)(local_b88.CurPos + iVar8)) {
      TStringBuilderBase<char>::Extend(&local_b88,(longlong)iVar8);
    }
    if (iVar9 != 0) {
      local_b88.CurPos = Core::Private::Convert(local_b88.CurPos,iVar8,pbVar1,iVar9);
    }
    iVar8 = (int)local_b88.CurPos - (int)local_b88.Base;
    iVar21 = iVar8 - iVar21;
    iVar9 = iVar8;
    if (iVar21 < iVar8) {
      iVar9 = iVar21;
    }
    iVar21 = 0;
    if (0 < iVar9) {
      iVar21 = iVar9;
    }
    FVar31 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
             (((longlong)iVar8 - (longlong)iVar21) + (longlong)local_b88.Base);
    FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_c38;
    if (local_c38.SecondaryData != (ForElementType<int>)0x0) {
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_c38.SecondaryData;
    }
    local_d54 = iVar21;
    if ((ulonglong)FVar20 <= &local_d54) {
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_c38;
      if (local_c38.SecondaryData != (ForElementType<int>)0x0) {
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_c38.SecondaryData;
      }
      if (&local_d54 < (wchar_t *)((longlong)FVar20 + (longlong)local_bec * 4)) {
        local_d70 = (FScriptContainerElement *)(longlong)local_bf0;
        local_d68 = 4;
        local_d88 = (FScriptContainerElement *)&local_d54;
        local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_c38;
        if (local_c38.SecondaryData != (ForElementType<int>)0x0) {
          local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_c38.SecondaryData;
        }
        local_d78 = (FScriptContainerElement *)(longlong)local_bec;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
    }
    iVar9 = local_bf0;
    if (local_bf0 == local_bec) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&local_c38,&local_bec);
    }
    local_bf0 = iVar9 + 1;
    FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_c38;
    if (local_c38.SecondaryData != (ForElementType<int>)0x0) {
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_c38.SecondaryData;
    }
    *(int *)((longlong)FVar20 + (longlong)iVar9 * 4) = local_d54;
    for (FVar20 = FVar31; FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0,
        FVar20 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                  ((longlong)iVar21 + (longlong)FVar31);
        FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar20 + 1)) {
      if (*(char *)FVar20 == '/') {
        FVar30 = FVar20;
        if ((FVar20 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) &&
           (local_cf8->bAllowSubObjectReferences == false)) {
          pTVar14 = StringCast<wchar_t,128,char8_t>(&local_288,local_d00);
          local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)pTVar14->Ptr;
          local_d88 = (FScriptContainerElement *)CONCAT44(local_d88._4_4_,0x2f);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bHasSubObjectReference || Options.bAllowSubObjectReferences",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                             ,0x23f,
                             L"Log format has a sub-object reference (%c) in a context that does not allow them. [[%s]]"
                            );
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FLogTemplate *)(*pcVar4)();
            return pFVar10;
          }
        }
        break;
      }
    }
    if ((local_d08 != (FLogField *)0x0) && (local_d58 == '\0')) {
      if (0 < local_d48) {
        pFVar26 = local_d08;
        iVar9 = local_d48;
        do {
          local_d4c = (local_d4c + 1) % local_d48;
          _Str2 = pFVar26[local_d4c].Name;
          if (iVar21 == 0) {
            cVar3 = *_Str2;
            pFVar5 = local_d78;
joined_r0x00014178b31b:
            local_d78 = pFVar5;
            if (cVar3 == '\0') {
              FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
              if (local_cc8.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                FVar20 = local_cc8.SecondaryData;
              }
              local_d20._0_1_ = '\x05';
              local_d20._1_1_ = '\0';
              local_d20._2_1_ = '\0';
              local_d20._3_1_ = '\0';
              iStack_d1c = local_d4c;
              if ((ulonglong)FVar20 <= &local_d20) {
                local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
                FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
                if (local_cc8.SecondaryData !=
                    (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                  FVar20 = local_cc8.SecondaryData;
                }
                if (&local_d20 < (wchar_t *)((longlong)FVar20 + (longlong)local_d78 * 8)) {
                  local_d70 = (FScriptContainerElement *)(longlong)(int)local_c40;
                  local_d68 = 8;
                  local_d88 = (FScriptContainerElement *)&local_d20;
                  local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
                  if (local_cc8.SecondaryData !=
                      (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                    local_d80 = local_cc8.SecondaryData;
                  }
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  pFVar5 = local_d78;
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    pFVar10 = (FLogTemplate *)(*pcVar4)();
                    return pFVar10;
                  }
                }
              }
              local_d78 = pFVar5;
              if (local_c40 == local_c3c) {
                local_c40 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                      (0x408,&local_cc8,(int *)&local_c3c);
              }
              lVar16 = (longlong)(int)local_c40;
              FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
              if (local_cc8.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                FVar20 = local_cc8.SecondaryData;
              }
              local_c40 = local_c40 + 1;
              *(ulonglong *)((longlong)FVar20 + lVar16 * 8) = CONCAT44(iStack_d1c,local_d20);
              goto LAB_14178b44f;
            }
          }
          else {
            iVar8 = strncmp((char *)FVar31,_Str2,(longlong)iVar21);
            pFVar26 = local_d08;
            if (iVar8 == 0) {
              cVar3 = _Str2[iVar21];
              pFVar5 = local_d78;
              goto joined_r0x00014178b31b;
            }
          }
          iVar9 = iVar9 + -1;
        } while (0 < iVar9);
      }
      puVar27 = local_d00;
      local_4e8.Data = (FScriptContainerElement *)0x0;
      if (local_d00 == (uchar *)0x0) {
        local_4e0 = (FScriptContainerElement *)0x0;
        local_4d8 = 0;
      }
      else {
        sVar11 = strlen((char *)local_d00);
        local_4d8 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar27,(int)sVar11);
        uVar7 = local_4d8 + 1;
        uVar25 = uVar7;
        if (uVar7 < 0x81) {
          if (local_4e8.Data != (FScriptContainerElement *)0x0) {
            uVar25 = 0;
            goto LAB_14178b387;
          }
        }
        else {
LAB_14178b387:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4e8,0,uVar25,2);
        }
        local_4e0 = local_5e8;
        if (local_4e8.Data != (FScriptContainerElement *)0x0) {
          local_4e0 = local_4e8.Data;
        }
        pwVar13 = Core::Private::Convert((wchar_t *)local_4e0,uVar7,puVar27,(int)sVar11 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_d78 = local_4e0;
      local_d88 = (FScriptContainerElement *)CONCAT44(local_d88._4_4_,iVar21);
      local_d80 = FVar31;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFoundField",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x24f,
                         L"Log format requires field \'%.*hs\' which was not provided. [[%s]]");
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
    }
LAB_14178b44f:
    local_d18 = (FVar30 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) + 3;
    FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
    if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar20 = local_cc8.SecondaryData;
    }
    iStack_d14 = iVar28;
    if ((ulonglong)FVar20 <= &local_d18) {
      FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
      if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar20 = local_cc8.SecondaryData;
      }
      if (&local_d18 < (wchar_t *)((longlong)FVar20 + (longlong)(int)local_c3c * 8)) {
        local_d70 = (FScriptContainerElement *)(longlong)(int)local_c40;
        local_d68 = 8;
        local_d88 = (FScriptContainerElement *)&local_d18;
        local_d80 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
        if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_d80 = local_cc8.SecondaryData;
        }
        local_d78 = (FScriptContainerElement *)(longlong)(int)local_c3c;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLogTemplate *)(*pcVar4)();
          return pFVar10;
        }
      }
    }
    if (local_c40 == local_c3c) {
      local_c40 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_cc8,(int *)&local_c3c);
    }
    FVar20 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_cc8;
    if (local_cc8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar20 = local_cc8.SecondaryData;
    }
    lVar16 = (longlong)(int)local_c40;
    local_d44 = local_d44 + 1;
    uVar23 = (ulonglong)local_d44;
    local_c40 = local_c40 + 1;
    *(ulonglong *)((longlong)FVar20 + lVar16 * 8) = CONCAT44(iStack_d14,local_d18);
    uVar18 = (ulonglong)local_c40;
    uVar19 = 0;
    param_1 = local_cf0;
    puVar27 = local_d00;
  } while( true );
  while (pFVar12 = pFVar12 + 1, pFVar12 != pFVar26) {
LAB_14178a654:
    if (pFVar12->Name == (char *)0x0) {
      pTVar14 = StringCast<wchar_t,128,char8_t>(&local_4c8,param_1);
      local_d88 = (FScriptContainerElement *)pTVar14->Ptr;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPositional || Algo::AllOf(FieldsView, &FLogField::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x1f2,L"Log fields must be entirely named or entirely anonymous. [[%s]]");
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
      break;
    }
  }
  do {
    cVar3 = *param_3->Name;
    if ((cVar3 == '\0') || (cVar3 == '_')) {
LAB_14178a6f4:
      pTVar14 = StringCast<wchar_t,128,char8_t>(&local_3a8,param_1);
      local_d88 = (FScriptContainerElement *)pTVar14->Ptr;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPositional || Algo::AllOf(FieldsView, [](const FLogField& Field) { return *Field.Name && *Field.Name != \'_\' && FAsciiSet::HasOnly(Field.Name, GValidLogFieldName); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x1f5,
                         L"Log field names must match \"[A-Za-z0-9][A-Za-z0-9_]*\" in [[%s]].");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FLogTemplate *)(*pcVar4)();
        return pFVar10;
      }
      break;
    }
    local_cd8 = Logging::Private::GValidLogFieldName;
    bVar6 = FAsciiSet::HasOnly<char>(param_3->Name,&local_cd8);
    if (!bVar6) goto LAB_14178a6f4;
    param_3 = param_3 + 1;
  } while (param_3 != pFVar26);
  goto LAB_14178a3fb;
}

// Create<wchar_t> @ 14178b8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLogTemplate * __cdecl
UE::FLogTemplate::Create<wchar_t>
          (wchar_t *param_1,FLogTemplateOptions *param_2,FLogField *param_3,int param_4,
          TFunctionWithContext<void_*___cdecl(int)> *param_5)

{
  char cVar1;
  wchar_t wVar2;
  code *pcVar3;
  TFunctionWithContext<void_*___cdecl(int)> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FLogTemplate *pFVar9;
  FLogField *pFVar10;
  void *pvVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar15;
  ulong64 uVar16;
  byte *pbVar17;
  int iVar18;
  wchar_t *pwVar19;
  int iVar20;
  wchar_t *pwVar21;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  FLogField *pFVar26;
  ulonglong uVar27;
  wchar_t *pwVar28;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar29;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar30;
  undefined1 auStack_388 [32];
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_368;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_360;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_358;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_350;
  undefined8 local_348;
  char local_338;
  int local_334;
  undefined1 local_330;
  undefined1 local_32f [3];
  int local_32c;
  int local_328;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_320;
  uint local_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined4 uStack_308;
  undefined4 local_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  int iStack_2f0;
  int local_2ec;
  int iStack_2e8;
  undefined8 local_2e4;
  FLogField *local_2d8;
  TFunctionWithContext<void_*___cdecl(int)> *local_2d0;
  FLogTemplateOptions *local_2c8;
  wchar_t *local_2c0;
  FAsciiSet local_2b8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_2a8;
  uint local_220;
  uint local_21c;
  ForElementType<int> local_218;
  int local_1d0;
  int local_1cc;
  TStringBuilderBase<wchar_t> local_1c8;
  TStringBuilderBase<char> local_1a8 [2];
  TStringBuilderBase<char> local_168;
  char local_148 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_388;
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_2d0 = param_5;
  local_328 = param_4;
  local_320 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
  local_2d8 = param_3;
  local_2c8 = param_2;
  if (param_4 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FLogTemplate *)(*pcVar3)();
      return pFVar9;
    }
LAB_14178b957:
    pFVar26 = param_3 + param_4;
    for (pFVar10 = param_3; pFVar10 != pFVar26; pFVar10 = pFVar10 + 1) {
      if (pFVar10->Name != (char *)0x0) {
        local_338 = '\0';
        pFVar10 = param_3;
        goto LAB_14178bbb0;
      }
    }
  }
  else if (param_4 != 0) goto LAB_14178b957;
  local_338 = '\x01';
LAB_14178b97e:
  local_2a8.SecondaryData = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_168.Base = local_148;
  local_220 = 0;
  local_168.CurPos = local_148;
  local_21c = 0x10;
  local_168.End = (char *)local_48;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_218.SecondaryData = (ForElementType<int>)0x0;
  local_1d0 = 0;
  local_1cc = 0x10;
  local_32c = -1;
  local_318 = 0;
  FVar30 = FVar15;
  pwVar28 = param_1;
  FVar29 = FVar15;
  do {
    while( true ) {
      FVar22 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
      uVar6 = FVar15._0_4_;
      wVar2 = pwVar28[(longlong)FVar30];
      pwVar21 = pwVar28 + (longlong)FVar30;
      FVar15 = FVar22;
      if ((ushort)wVar2 >> 6 == 1) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x2800000000000000;
      }
      uVar27 = ((ulonglong)FVar15 | (ulonglong)((ushort)wVar2 >> 6 == 0)) >> ((ushort)wVar2 & 0x3f);
      while ((uVar27 & 1) == 0) {
        wVar2 = pwVar21[1];
        pwVar21 = pwVar21 + 1;
        FVar15 = FVar22;
        if ((ushort)wVar2 >> 6 == 1) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x2800000000000000;
        }
        uVar27 = ((ulonglong)FVar15 | (ulonglong)((ushort)wVar2 >> 6 == 0)) >>
                 ((ushort)wVar2 & 0x3f);
      }
      if (((wVar2 != L'{') || (pwVar21[1] != L'{')) && ((*pwVar21 != L'}' || (pwVar21[1] != L'}'))))
      break;
      if (pwVar28 == pwVar21) {
        local_314 = 1;
        uStack_310 = 1;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if ((ulonglong)FVar15 <= &local_314) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          if (&local_314 < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
            local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)uVar6;
            local_348 = 8;
            local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_314;
            local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
            if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_360 = local_2a8.SecondaryData;
            }
            local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                        (longlong)(int)local_21c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            uVar6 = local_220;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FLogTemplate *)(*pcVar3)();
              return pFVar9;
            }
          }
        }
        if (uVar6 == local_21c) {
          uVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_2a8,(int *)&local_21c);
        }
        local_220 = uVar6 + 1;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        *(ulonglong *)((longlong)FVar15 + (longlong)(int)uVar6 * 8) = CONCAT44(uStack_310,local_314)
        ;
        FVar15._4_4_ = 0;
        FVar15._0_4_ = local_220;
        pwVar28 = pwVar21 + 1;
        FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x1;
      }
      else {
        local_30c = 2;
        uStack_308 = (undefined4)((longlong)pwVar21 + (2 - (longlong)pwVar28) >> 1);
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if ((ulonglong)FVar15 <= &local_30c) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          if (&local_30c < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
            local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)uVar6;
            local_348 = 8;
            local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_30c;
            local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
            if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_360 = local_2a8.SecondaryData;
            }
            local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                        (longlong)(int)local_21c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            uVar6 = local_220;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FLogTemplate *)(*pcVar3)();
              return pFVar9;
            }
          }
        }
        if (uVar6 == local_21c) {
          uVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_2a8,(int *)&local_21c);
        }
        local_220 = uVar6 + 1;
        local_304 = 1;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        uStack_300 = 1;
        *(ulonglong *)((longlong)FVar15 + (longlong)(int)uVar6 * 8) = CONCAT44(uStack_308,local_30c)
        ;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if ((ulonglong)FVar15 <= &local_304) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          if (&local_304 < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
            local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                        (longlong)(int)local_220;
            local_348 = 8;
            local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_304;
            local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
            if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_360 = local_2a8.SecondaryData;
            }
            local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                        (longlong)(int)local_21c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FLogTemplate *)(*pcVar3)();
              return pFVar9;
            }
          }
        }
        if (local_220 == local_21c) {
          local_220 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                (0x408,&local_2a8,(int *)&local_21c);
        }
        lVar13 = (longlong)(int)local_220;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        local_220 = local_220 + 1;
        *(ulonglong *)((longlong)FVar15 + lVar13 * 8) = CONCAT44(uStack_300,local_304);
        FVar15._4_4_ = 0;
        FVar15._0_4_ = local_220;
        pwVar28 = pwVar21 + 2;
        FVar30 = FVar22;
      }
    }
    if (pwVar28 != pwVar21) {
      local_2fc = 2;
      uStack_2f8 = (undefined4)((longlong)pwVar21 - (longlong)pwVar28 >> 1);
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      if ((ulonglong)FVar15 <= &local_2fc) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if (&local_2fc < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
          local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)uVar6;
          local_348 = 8;
          local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2fc;
          local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_360 = local_2a8.SecondaryData;
          }
          local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)local_21c
          ;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar6 = local_220;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FLogTemplate *)(*pcVar3)();
            return pFVar9;
          }
        }
      }
      if (uVar6 == local_21c) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_2a8,(int *)&local_21c);
      }
      local_220 = uVar6 + 1;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      *(ulonglong *)((longlong)FVar15 + (longlong)(int)uVar6 * 8) = CONCAT44(uStack_2f8,local_2fc);
      uVar6 = local_220;
    }
    if (*pwVar21 == L'\0') {
      local_2e4 = 0;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      if ((ulonglong)FVar15 <= &local_2e4) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if (&local_2e4 < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
          local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)uVar6;
          local_348 = 8;
          local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2e4;
          local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_360 = local_2a8.SecondaryData;
          }
          local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)local_21c
          ;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar6 = local_220;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FLogTemplate *)(*pcVar3)();
            return pFVar9;
          }
        }
      }
      if (uVar6 == local_21c) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_2a8,(int *)&local_21c);
      }
      local_220 = uVar6 + 1;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      *(undefined8 *)((longlong)FVar15 + (longlong)(int)uVar6 * 8) = local_2e4;
      if (((local_2d8 != (FLogField *)0x0) && (local_338 != '\0')) && (FVar29._0_4_ != local_328)) {
        local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
        if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
            (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_358 = FVar22;
        }
        local_360._0_4_ = local_328;
        local_368._0_4_ = FVar29._0_4_;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bFindFields || !bPositional || FormatFieldCount == FieldCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                           ,0x25a,L"Log format requires %d fields and %d were provided. [[%s]]");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FLogTemplate *)(*pcVar3)();
          return pFVar9;
        }
      }
      uVar6 = local_220;
      uVar27 = (ulonglong)(int)local_220;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + uVar27 * 8)
      ;
      while( true ) {
        if ((uint)uVar27 != uVar6) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_330);
          uVar27 = (ulonglong)local_220;
        }
        if (FVar15 == FVar30) break;
        uVar14 = (longlong)*(int *)((longlong)FVar15 + 4) << 3 | (longlong)*(int *)FVar15;
        lVar13 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = 0;
        if (uVar14 != 0) {
          iVar12 = (int)lVar13;
        }
        iVar18 = iVar12 / 7 + 1;
        iVar12 = 9;
        if (iVar18 < 9) {
          iVar12 = iVar18;
        }
        FVar22._0_4_ = FVar22._0_4_ + iVar12;
        FVar22._4_4_ = 0;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 8);
      }
      local_2d0 = (*local_2d0->Function)(local_2d0->Context,FVar22._0_4_ + 0x10);
      uVar6 = local_220;
      ((FLogTemplate *)local_2d0)->StaticFormatUtf8 = (uchar *)0x0;
      pFVar9 = (FLogTemplate *)(local_2d0 + 1);
      ((FLogTemplate *)local_2d0)->StaticFormat = (wchar_t *)local_320;
      uVar27 = (ulonglong)(int)local_220;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + uVar27 * 8)
      ;
      while( true ) {
        if ((uint)uVar27 != uVar6) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_32f);
        }
        pTVar4 = local_2d0;
        if (FVar15 == FVar30) break;
        uVar27 = (longlong)*(int *)((longlong)FVar15 + 4) << 3 | (longlong)*(int *)FVar15;
        lVar13 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = 0;
        if (uVar27 != 0) {
          iVar12 = (int)lVar13;
        }
        uVar24 = iVar12 / 7 + 1;
        uVar7 = 9;
        if ((int)uVar24 < 9) {
          uVar7 = uVar24;
        }
        pFVar9 = (FLogTemplate *)((longlong)&pFVar9->StaticFormat + (ulonglong)uVar7);
        pbVar17 = (byte *)((longlong)&pFVar9[-1].StaticFormatUtf8 + 7);
        switch(uVar7) {
        case 9:
          *pbVar17 = (byte)uVar27;
          pbVar17 = (byte *)((longlong)&pFVar9[-1].StaticFormatUtf8 + 6);
          uVar27 = uVar27 >> 8;
        case 8:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 7:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 6:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 5:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 4:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 3:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        case 2:
          *pbVar17 = (byte)uVar27;
          pbVar17 = pbVar17 + -1;
          uVar27 = uVar27 >> 8;
        default:
          *pbVar17 = -1 << (9U - (char)uVar7 & 0x1f) | (byte)uVar27;
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 8);
          uVar27 = (ulonglong)local_220;
        }
      }
      if (local_218.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_218.SecondaryData);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free((void *)local_2a8.SecondaryData);
      }
      return (FLogTemplate *)pTVar4;
    }
    uVar6 = CONCAT22(0,*pwVar21);
    if (uVar6 != 0x7b) {
      local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_350 = FVar22;
      }
      local_358._0_4_ = uVar6;
      local_360._0_4_ = uVar6;
      local_368._0_4_ = uVar6;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldStart == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x22a,
                         L"Log format has an unexpected \'%c\' character. Use \'%c%c\' to escape it. [[%s]]"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
    }
    wVar2 = pwVar21[1];
    pwVar28 = pwVar21 + 1;
    FVar15 = FVar22;
    if (((ushort)wVar2 & 0xffffffc0) == 0x40) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x7fffffe87fffffe;
    }
    uVar27 = ((ulonglong)FVar15 | -(ulonglong)((ushort)wVar2 < 0x40) & 0x3ff800000000000) >>
             ((ushort)wVar2 & 0x3f);
    pwVar19 = pwVar28;
    while ((uVar27 & 1) != 0) {
      wVar2 = pwVar19[1];
      uVar6 = (uint)(ushort)wVar2;
      pwVar19 = pwVar19 + 1;
      FVar15 = FVar22;
      if ((uVar6 & 0xffffffc0) == 0x40) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x7fffffe87fffffe;
      }
      uVar27 = ((ulonglong)FVar15 | -(ulonglong)(uVar6 < 0x40) & 0x3ff800000000000) >>
               (uVar6 & 0x3f);
    }
    if (wVar2 == L'\0') {
      local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_368 = FVar22;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x22d,
                         L"Log format has an unterminated field reference. Use \'{{\' to escape \'{\' if needed. [[%s]]"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
    }
    if (CONCAT22(0,*pwVar19) != 0x7d) {
      local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_360 = FVar22;
      }
      local_368._0_4_ = CONCAT22(0,*pwVar19);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd == \'}\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x230,
                         L"Log format has invalid character \'%c\' in field name. Use \'{{\' to escape \'{\' if needed. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
    }
    local_2c0 = pwVar19 + 1;
    iVar12 = (int)((longlong)local_2c0 - (longlong)pwVar21 >> 1);
    if (pwVar21[1] == L'_') {
      local_1c8.Base = (wchar_t *)local_1a8;
      local_1c8.End = (wchar_t *)&local_168;
      uVar16 = (ulong64)(iVar12 + -2);
      if (local_320 == (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        param_1 = (wchar_t *)FVar22;
      }
      local_1c8.bIsDynamic = false;
      local_1c8.bIsExternal = false;
      local_1c8.CurPos = (wchar_t *)local_1a8;
      if (&local_168 < (TStringBuilderBase<char> *)((longlong)&local_1a8[0].Base + uVar16 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1c8,uVar16);
      }
      if (iVar12 + -2 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_1c8.CurPos,pwVar28,uVar16 * 2);
        local_1c8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
      }
      if (local_1c8.End < (TStringBuilderBase<char> *)((longlong)(char **)local_1c8.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1c8,1);
      }
      *(undefined2 *)(char **)local_1c8.CurPos = 0;
      local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_1c8.Base;
      local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldStart[1] != \'_\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x235,
                         L"Log format uses reserved field name \'%s\' with leading \'_\'. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1c8);
      param_1 = (wchar_t *)local_320;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
    }
    iVar18 = iVar12 + -2;
    iVar20 = (int)local_168.CurPos - (int)local_168.Base;
    pcVar25 = local_168.CurPos;
    if (local_168.End < local_168.CurPos + iVar18) {
      TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar18);
      pcVar25 = (char *)((ulonglong)local_168.CurPos & 0xffffffff);
    }
    iVar23 = (int)pcVar25;
    iVar8 = (int)local_168.Base;
    if (iVar18 != 0) {
      local_168.CurPos =
           FGenericPlatformString::Convert<wchar_t,char>(local_168.CurPos,iVar18,pwVar28,iVar18);
      iVar23 = (int)local_168.CurPos;
      iVar8 = (int)local_168.Base;
    }
    uVar24 = iVar23 - iVar8;
    uVar7 = uVar24 - iVar20;
    uVar6 = uVar24;
    if ((int)uVar7 < (int)uVar24) {
      uVar6 = uVar7;
    }
    if (0 < (int)uVar6) {
      FVar22._4_4_ = 0;
      FVar22._0_4_ = uVar6;
    }
    iVar18 = FVar22._0_4_;
    FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
             (((longlong)(int)uVar24 - (longlong)iVar18) + (longlong)local_168.Base);
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
    if (local_218.SecondaryData != (ForElementType<int>)0x0) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
    }
    local_334 = iVar18;
    if ((ulonglong)FVar15 <= &local_334) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
      if (local_218.SecondaryData != (ForElementType<int>)0x0) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
      }
      if (&local_334 < (wchar_t *)((longlong)FVar15 + (longlong)local_1cc * 4)) {
        local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_1d0;
        local_348 = 4;
        local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_334;
        local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
        if (local_218.SecondaryData != (ForElementType<int>)0x0) {
          local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
        }
        local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_1cc;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FLogTemplate *)(*pcVar3)();
          return pFVar9;
        }
      }
    }
    if (local_1d0 == local_1cc) {
      local_1d0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_218,&local_1cc);
    }
    lVar13 = (longlong)local_1d0;
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
    if (local_218.SecondaryData != (ForElementType<int>)0x0) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
    }
    local_1d0 = local_1d0 + 1;
    *(int *)((longlong)FVar15 + lVar13 * 4) = local_334;
    for (FVar15 = FVar30;
        FVar15 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                  ((longlong)iVar18 + (longlong)FVar30);
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 1)) {
      if (*(char *)FVar15 == '/') {
        if ((FVar15 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) &&
           (local_2c8->bAllowSubObjectReferences == false)) {
          local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
          }
          local_368._0_4_ = 0x2f;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bHasSubObjectReference || Options.bAllowSubObjectReferences",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                             ,0x23f,
                             L"Log format has a sub-object reference (%c) in a context that does not allow them. [[%s]]"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FLogTemplate *)(*pcVar3)();
            return pFVar9;
          }
        }
        goto LAB_14178c32c;
      }
    }
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
LAB_14178c32c:
    if ((local_2d8 != (FLogField *)0x0) && (local_338 == '\0')) {
      if (0 < local_328) {
        pFVar26 = local_2d8;
        iVar20 = local_328;
        do {
          local_32c = (local_32c + 1) % local_328;
          pcVar25 = pFVar26[local_32c].Name;
          if (iVar18 == 0) {
            if (*pcVar25 == FVar22._0_1_) {
LAB_14178c38a:
              iStack_2f0 = local_32c;
              FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
              if (local_2a8.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                FVar30 = local_2a8.SecondaryData;
              }
              local_2f4 = 5;
              if ((ulonglong)FVar30 <= &local_2f4) {
                FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
                if (local_2a8.SecondaryData !=
                    (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                  FVar30 = local_2a8.SecondaryData;
                }
                if (&local_2f4 < (wchar_t *)((longlong)FVar30 + (longlong)(int)local_21c * 8)) {
                  local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                              (longlong)(int)local_220;
                  local_348 = 8;
                  local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2f4;
                  local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
                  if (local_2a8.SecondaryData !=
                      (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                    local_360 = local_2a8.SecondaryData;
                  }
                  local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                              (longlong)(int)local_21c;
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    pFVar9 = (FLogTemplate *)(*pcVar3)();
                    return pFVar9;
                  }
                }
              }
              if (local_220 == local_21c) {
                local_220 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                      (0x408,&local_2a8,(int *)&local_21c);
              }
              lVar13 = (longlong)(int)local_220;
              FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
              if (local_2a8.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                FVar30 = local_2a8.SecondaryData;
              }
              local_220 = local_220 + 1;
              *(ulonglong *)((longlong)FVar30 + lVar13 * 8) = CONCAT44(iStack_2f0,local_2f4);
              param_1 = (wchar_t *)local_320;
              goto LAB_14178c546;
            }
          }
          else {
            iVar8 = strncmp((char *)FVar30,pcVar25,(longlong)iVar18);
            pFVar26 = local_2d8;
            if ((iVar8 == 0) && (pcVar25[iVar18] == '\0')) goto LAB_14178c38a;
          }
          iVar20 = iVar20 + -1;
          param_1 = (wchar_t *)local_320;
        } while (0 < iVar20);
      }
      local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
      }
      local_368._0_4_ = iVar18;
      local_360 = FVar30;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFoundField",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x24f,
                         L"Log format requires field \'%.*hs\' which was not provided. [[%s]]");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
    }
LAB_14178c546:
    FVar30 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
    local_2ec = (FVar15 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) + 3;
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
    if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar15 = local_2a8.SecondaryData;
    }
    iStack_2e8 = iVar12;
    if ((ulonglong)FVar15 <= &local_2ec) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      if (&local_2ec < (wchar_t *)((longlong)FVar15 + (longlong)(int)local_21c * 8)) {
        local_350 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)local_220;
        local_348 = 8;
        local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2ec;
        local_360 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_360 = local_2a8.SecondaryData;
        }
        local_358 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)(int)local_21c;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FLogTemplate *)(*pcVar3)();
          return pFVar9;
        }
      }
    }
    if (local_220 == local_21c) {
      local_220 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                            (0x408,&local_2a8,(int *)&local_21c);
    }
    lVar13 = (longlong)(int)local_220;
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
    if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar15 = local_2a8.SecondaryData;
    }
    FVar29._0_4_ = local_318 + 1;
    FVar29._4_4_ = 0;
    local_220 = local_220 + 1;
    *(ulonglong *)((longlong)FVar15 + lVar13 * 8) = CONCAT44(iStack_2e8,local_2ec);
    FVar15._4_4_ = 0;
    FVar15._0_4_ = local_220;
    pwVar28 = local_2c0;
    local_318 = FVar29._0_4_;
  } while( true );
  while (pFVar10 = pFVar10 + 1, pFVar10 != pFVar26) {
LAB_14178bbb0:
    if (pFVar10->Name == (char *)0x0) {
      local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if (param_1 == (wchar_t *)0x0) {
        local_368 = FVar15;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPositional || Algo::AllOf(FieldsView, &FLogField::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x1f2,L"Log fields must be entirely named or entirely anonymous. [[%s]]");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
      break;
    }
  }
  do {
    cVar1 = *param_3->Name;
    if ((cVar1 == '\0') || (cVar1 == '_')) {
LAB_14178bc29:
      local_368 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1;
      if (param_1 == (wchar_t *)0x0) {
        local_368 = FVar15;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPositional || Algo::AllOf(FieldsView, [](const FLogField& Field) { return *Field.Name && *Field.Name != \'_\' && FAsciiSet::HasOnly(Field.Name, GValidLogFieldName); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x1f5,
                         L"Log field names must match \"[A-Za-z0-9][A-Za-z0-9_]*\" in [[%s]].");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar3)();
        return pFVar9;
      }
      break;
    }
    local_2b8 = Logging::Private::GValidLogFieldName;
    bVar5 = FAsciiSet::HasOnly<char>(param_3->Name,&local_2b8);
    if (!bVar5) goto LAB_14178bc29;
    param_3 = param_3 + 1;
  } while (param_3 != pFVar26);
  goto LAB_14178b97e;
}

// CreateLocalized<char8_t> @ 14178c9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLogTemplate * __cdecl
UE::FLogTemplate::CreateLocalized<char8_t>
          (FText *param_1,uchar *param_2,FLogTemplateOptions *param_3,FLogField *param_4,int param_5
          ,TFunctionWithContext<void_*___cdecl(int)> *param_6)

{
  byte *pbVar1;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar2;
  byte bVar3;
  char cVar4;
  char *_Str2;
  code *pcVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar12;
  FLogTemplate *pFVar13;
  FLocalizedLogFormatTable *this;
  FTextFormat *pFVar14;
  size_t sVar15;
  wchar_t *pwVar16;
  FLogTemplate *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar23;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FLogField *pFVar28;
  byte *pbVar29;
  int iVar30;
  undefined1 auStack_bb8 [32];
  FScriptContainerElement *local_b98;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_b90;
  FScriptContainerElement *local_b88;
  longlong local_b80;
  undefined8 local_b78;
  undefined1 local_b68 [4];
  int local_b64;
  int local_b60;
  undefined1 local_b5c;
  undefined1 local_b5b [3];
  int local_b58;
  uint local_b54;
  undefined4 local_b50;
  int iStack_b4c;
  undefined4 local_b48;
  int iStack_b44;
  undefined4 local_b40;
  uint uStack_b3c;
  int local_b38;
  int iStack_b34;
  byte *local_b30;
  undefined8 local_b28;
  int local_b20;
  FLogField *local_b18;
  uchar *local_b10;
  byte *local_b08;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_af8;
  int aiStack_af0 [2];
  char *local_ae8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_ad8;
  int iStack_ad0;
  undefined1 uStack_acc;
  undefined1 uStack_acb;
  undefined1 uStack_aca;
  undefined1 uStack_ac9;
  FLogTemplateOptions *local_ac8;
  TFunctionWithContext<void_*___cdecl(int)> *local_ac0;
  FTextFormat local_ab8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_aa8;
  uchar auStack_aa0 [8];
  char *local_a98;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_a88;
  uint local_a00;
  int local_9fc;
  ForElementType<int> local_9f8;
  int local_9b0;
  int local_9ac;
  TStringBuilderBase<wchar_t> local_9a8;
  FScriptContainerElement local_988 [64];
  TStringBuilderBase<char> local_948;
  char local_928 [256];
  FScriptContainerElement local_828 [256];
  ForAnyElementType local_728;
  FScriptContainerElement *local_720;
  int local_718;
  FScriptContainerElement local_708 [256];
  ForAnyElementType local_608;
  FScriptContainerElement *local_600;
  int local_5f8;
  undefined1 local_5e8 [256];
  ForAnyElementType local_4e8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_4e0;
  int local_4d8;
  undefined1 local_4c8 [256];
  ForAnyElementType local_3c8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_3c0;
  int local_3b8;
  FScriptContainerElement local_3a8 [256];
  ForAnyElementType local_2a8;
  FScriptContainerElement *local_2a0;
  int local_298;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_bb8;
  local_ac0 = param_6;
  local_b18 = param_4;
  local_b10 = param_2;
  local_ac8 = param_3;
  if ((param_4 != (FLogField *)0x0) && (param_3->bAllowSubObjectReferences != false)) {
    pTVar12 = StringCast<wchar_t,128,char8_t>(&local_288,param_2);
    local_b98 = (FScriptContainerElement *)pTVar12->Ptr;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFindFields || !Options.bAllowSubObjectReferences",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                       ,0x277,
                       L"Validation of field names is not compatible with sub-object references. [[%s]]"
                      );
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FLogTemplate *)(*pcVar5)();
      return pFVar13;
    }
  }
  local_9fc = 0x10;
  local_a88.SecondaryData = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_a00 = 0;
  local_b50._0_1_ = '\x06';
  local_b50._1_1_ = '\0';
  local_b50._2_1_ = '\0';
  local_b50._3_1_ = '\0';
  this = Logging::Private::GetLocalizedLogFormatTable();
  pFVar14 = FTextFormat::FTextFormat(&local_ab8,param_1,Default);
  iStack_b4c = Logging::Private::FLocalizedLogFormatTable::Add(this,pFVar14);
  FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
  if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar24 = local_a88.SecondaryData;
  }
  if ((ulonglong)FVar24 <= &local_b50) {
    FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
    if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar24 = local_a88.SecondaryData;
    }
    if (&local_b50 < (wchar_t *)((longlong)FVar24 + (longlong)local_9fc * 8)) {
      local_b80 = (longlong)(int)local_a00;
      local_b78 = 8;
      local_b98 = (FScriptContainerElement *)&local_b50;
      local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_b90 = local_a88.SecondaryData;
      }
      local_b88 = (FScriptContainerElement *)(longlong)local_9fc;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
  }
  if (local_a00 == local_9fc) {
    local_a00 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_a88,&local_9fc);
  }
  lVar18 = (longlong)(int)local_a00;
  FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
  if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar24 = local_a88.SecondaryData;
  }
  local_a00 = local_a00 + 1;
  *(ulonglong *)((longlong)FVar24 + lVar18 * 8) = CONCAT44(iStack_b4c,local_b50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab8.TextFormatData.SharedReferenceCount.ReferenceController);
  local_b60 = 0;
  local_948.bIsDynamic = false;
  local_948.bIsExternal = false;
  local_9f8.SecondaryData = (ForElementType<int>)0x0;
  local_948.Base = local_928;
  local_9b0 = 0;
  local_948.CurPos = local_928;
  local_9ac = 0x10;
  local_948.End = (char *)local_828;
  local_b54 = 0xffffffff;
  local_b30 = param_2;
LAB_14178cc02:
  do {
    uVar22 = 0;
    while( true ) {
      pbVar29 = local_b30 + local_b60;
      bVar3 = *pbVar29 >> 6;
      uVar21 = uVar22;
      if (bVar3 == 1) {
        uVar21 = 0x2800000100000000;
      }
      for (uVar21 = (uVar21 | bVar3 == 0) >> (*pbVar29 & 0x3f); (uVar21 & 1) == 0;
          uVar21 = (uVar21 | bVar3 == 0) >> (*pbVar1 & 0x3f)) {
        pbVar1 = pbVar29 + 1;
        pbVar29 = pbVar29 + 1;
        bVar3 = *pbVar1 >> 6;
        uVar21 = uVar22;
        if (bVar3 == 1) {
          uVar21 = 0x2800000100000000;
        }
      }
      bVar3 = *pbVar29;
      local_b60 = 0;
      iVar25 = (int)pbVar29;
      if (bVar3 != 0x60) break;
      if ((0x1d < (byte)(pbVar29[1] + 0xa0)) ||
         ((0x28000001U >> ((byte)(pbVar29[1] + 0xa0) & 0x1f) & 1) == 0)) goto LAB_14178ccce;
      local_b60 = (iVar25 - (int)local_b30) + 2;
    }
    if (bVar3 == 0) {
      local_b28._0_1_ = '\0';
      local_b28._1_1_ = '\0';
      local_b28._2_1_ = '\0';
      local_b28._3_1_ = '\0';
      local_b28._4_1_ = '\0';
      local_b28._5_1_ = '\0';
      local_b28._6_1_ = '\0';
      local_b28._7_1_ = '\0';
      FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar24 = local_a88.SecondaryData;
      }
      if ((ulonglong)FVar24 <= &local_b28) {
        FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
        if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar24 = local_a88.SecondaryData;
        }
        if (&local_b28 < (wchar_t *)((longlong)FVar24 + (longlong)local_9fc * 8)) {
          local_b80 = (longlong)(int)local_a00;
          local_b78 = 8;
          local_b98 = (FScriptContainerElement *)&local_b28;
          local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
          if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_b90 = local_a88.SecondaryData;
          }
          local_b88 = (FScriptContainerElement *)(longlong)local_9fc;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FLogTemplate *)(*pcVar5)();
            return pFVar13;
          }
        }
      }
      uVar27 = local_a00;
      if (local_a00 == local_9fc) {
        uVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                           (0x408,&local_a88,&local_9fc);
      }
      local_a00 = uVar27 + 1;
      FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar24 = local_a88.SecondaryData;
      }
      *(undefined8 *)((longlong)FVar24 + (longlong)(int)uVar27 * 8) = local_b28;
      uVar27 = local_a00;
      uVar21 = (ulonglong)(int)local_a00;
      FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar24 = local_a88.SecondaryData;
      }
      FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar24 + uVar21 * 8)
      ;
      while( true ) {
        if ((uint)uVar21 != uVar27) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_b5c);
          uVar21 = (ulonglong)local_a00;
        }
        iVar25 = 0;
        if (FVar24 == FVar23) break;
        uVar19 = (longlong)*(int *)((longlong)FVar24 + 4) << 3 | (longlong)*(int *)FVar24;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        if (uVar19 != 0) {
          iVar25 = (int)lVar18;
        }
        iVar30 = iVar25 / 7 + 1;
        iVar25 = 9;
        if (iVar30 < 9) {
          iVar25 = iVar30;
        }
        uVar22 = (ulonglong)(uint)((int)uVar22 + iVar25);
        FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar24 + 8);
      }
      pFVar17 = (*local_ac0->Function)(local_ac0->Context,(int)uVar22 + 0x10);
      uVar27 = local_a00;
      pFVar17->StaticFormatUtf8 = param_2;
      pFVar13 = pFVar17 + 1;
      pFVar17->StaticFormat = (wchar_t *)0x0;
      uVar22 = (ulonglong)(int)local_a00;
      FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar24 = local_a88.SecondaryData;
      }
      FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar24 + uVar22 * 8)
      ;
      while( true ) {
        if ((uint)uVar22 != uVar27) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b5b);
        }
        if (FVar24 == FVar23) break;
        uVar22 = (longlong)*(int *)((longlong)FVar24 + 4) << 3 | (longlong)*(int *)FVar24;
        lVar18 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar30 = iVar25;
        if (uVar22 != 0) {
          iVar30 = (int)lVar18;
        }
        uVar20 = iVar30 / 7 + 1;
        uVar26 = 9;
        if ((int)uVar20 < 9) {
          uVar26 = uVar20;
        }
        pFVar13 = (FLogTemplate *)((longlong)&pFVar13->StaticFormat + (ulonglong)uVar26);
        pbVar29 = (byte *)((longlong)&pFVar13[-1].StaticFormatUtf8 + 7);
        switch(uVar26) {
        case 9:
          *pbVar29 = (byte)uVar22;
          pbVar29 = (byte *)((longlong)&pFVar13[-1].StaticFormatUtf8 + 6);
          uVar22 = uVar22 >> 8;
        case 8:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 7:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 6:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 5:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 4:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 3:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        case 2:
          *pbVar29 = (byte)uVar22;
          pbVar29 = pbVar29 + -1;
          uVar22 = uVar22 >> 8;
        default:
          *pbVar29 = -1 << (9U - (char)uVar26 & 0x1f) | (byte)uVar22;
          FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar24 + 8);
          uVar22 = (ulonglong)local_a00;
        }
      }
      if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_9f8.SecondaryData);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_948);
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free((void *)local_a88.SecondaryData);
      }
      return pFVar17;
    }
    if (bVar3 == 0x7b) goto LAB_14178cde8;
LAB_14178ccce:
    local_728.Data = (FScriptContainerElement *)0x0;
    if (param_2 == (uchar *)0x0) {
      local_720 = (FScriptContainerElement *)0x0;
      local_718 = 0;
    }
    else {
      sVar15 = strlen((char *)param_2);
      local_718 = Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,(int)sVar15);
      uVar27 = local_718 + 1;
      uVar26 = uVar27;
      if (uVar27 < 0x81) {
        if (local_728.Data != (FScriptContainerElement *)0x0) {
          uVar26 = 0;
          goto LAB_14178cd1b;
        }
      }
      else {
LAB_14178cd1b:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_728,0,uVar26,2);
      }
      local_720 = local_828;
      if (local_728.Data != (FScriptContainerElement *)0x0) {
        local_720 = local_728.Data;
      }
      pwVar16 = Core::Private::Convert((wchar_t *)local_720,uVar27,param_2,(int)sVar15 + 1);
      if ((pwVar16 == (wchar_t *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
    local_b88 = local_720;
    local_b90._0_4_ = CONCAT31(0,*pbVar29);
    local_b98 = (FScriptContainerElement *)CONCAT44(local_b98._4_4_,CONCAT31(0,*pbVar29));
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("*FieldStart == \'{\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                       ,0x29b,
                       L"Log format has an unexpected \'%c\' character. Use \'`%c\' to escape it. [[%s]]"
                      );
    if (local_728.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data);
    }
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FLogTemplate *)(*pcVar5)();
      return pFVar13;
    }
LAB_14178cde8:
    bVar3 = pbVar29[1];
    uVar22 = 0;
    if ((bVar3 & 0xffffffc0) == 0x40) {
      uVar22 = 0x7fffffe87fffffe;
    }
    pbVar1 = pbVar29;
    for (uVar22 = (uVar22 | -(ulonglong)(bVar3 < 0x40) & 0x3ff800000000000) >> (bVar3 & 0x3f);
        pbVar1 = pbVar1 + 1, (uVar22 & 1) != 0;
        uVar22 = (uVar22 | -(ulonglong)(uVar27 < 0x40) & 0x3ff800000000000) >> (uVar27 & 0x3f)) {
      bVar3 = pbVar1[1];
      uVar27 = (uint)bVar3;
      uVar22 = 0;
      if ((uVar27 & 0xffffffc0) == 0x40) {
        uVar22 = 0x7fffffe87fffffe;
      }
    }
    if (bVar3 == 0) {
      local_608.Data = (FScriptContainerElement *)0x0;
      if (param_2 == (uchar *)0x0) {
        local_600 = (FScriptContainerElement *)0x0;
        local_5f8 = 0;
      }
      else {
        sVar15 = strlen((char *)param_2);
        local_5f8 = Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,(int)sVar15);
        uVar27 = local_5f8 + 1;
        uVar26 = uVar27;
        if (uVar27 < 0x81) {
          if (local_608.Data != (FScriptContainerElement *)0x0) {
            uVar26 = 0;
            goto LAB_14178ceba;
          }
        }
        else {
LAB_14178ceba:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_608,0,uVar26,2);
        }
        local_600 = local_708;
        if (local_608.Data != (FScriptContainerElement *)0x0) {
          local_600 = local_608.Data;
        }
        pwVar16 = Core::Private::Convert((wchar_t *)local_600,uVar27,param_2,(int)sVar15 + 1);
        if ((pwVar16 == (wchar_t *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FLogTemplate *)(*pcVar5)();
          return pFVar13;
        }
      }
      local_b98 = local_600;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x29e,
                         L"Log format has an unterminated field reference. Use \'`{\' to escape \'{\' if needed. [[%s]]"
                        );
      if (local_608.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data);
      }
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
    if (*pbVar1 != 0x7d) {
      local_4e8.Data = (FScriptContainerElement *)0x0;
      if (param_2 == (uchar *)0x0) {
        local_4e0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
        local_4d8 = 0;
      }
      else {
        sVar15 = strlen((char *)param_2);
        local_4d8 = Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,(int)sVar15);
        uVar27 = local_4d8 + 1;
        uVar26 = uVar27;
        if (uVar27 < 0x81) {
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_4e8.Data !=
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            uVar26 = 0;
            goto LAB_14178cfd0;
          }
        }
        else {
LAB_14178cfd0:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4e8,0,uVar26,2);
        }
        local_4e0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_5e8;
        if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_4e8.Data !=
            (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_4e0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_4e8.Data;
        }
        pwVar16 = Core::Private::Convert((wchar_t *)local_4e0,uVar27,param_2,(int)sVar15 + 1);
        if ((pwVar16 == (wchar_t *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FLogTemplate *)(*pcVar5)();
          return pFVar13;
        }
      }
      local_b90 = local_4e0;
      local_b98 = (FScriptContainerElement *)CONCAT44(local_b98._4_4_,(uint)*pbVar1);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd == \'}\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x2a1,
                         L"Log format has invalid character \'%c\' in field name. Use \'`{\' to escape \'{\' if needed. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_4e8.Data !=
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
    local_b08 = pbVar1 + 1;
    iVar30 = (int)local_b08 - iVar25;
    local_b20 = iVar30;
    if (pbVar29[1] == 0x5f) {
      local_3c8.Data = (FScriptContainerElement *)0x0;
      if (param_2 == (uchar *)0x0) {
        local_3c0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
        local_3b8 = 0;
      }
      else {
        sVar15 = strlen((char *)param_2);
        local_3b8 = Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,(int)sVar15);
        uVar27 = local_3b8 + 1;
        uVar26 = uVar27;
        if (uVar27 < 0x81) {
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_3c8.Data !=
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            uVar26 = 0;
            goto LAB_14178d101;
          }
        }
        else {
LAB_14178d101:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_3c8,0,uVar26,2);
        }
        local_3c0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_4c8;
        if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_3c8.Data !=
            (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          local_3c0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_3c8.Data;
        }
        pwVar16 = Core::Private::Convert((wchar_t *)local_3c0,uVar27,param_2,(int)sVar15 + 1);
        if ((pwVar16 == (wchar_t *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FLogTemplate *)(*pcVar5)();
          return pFVar13;
        }
      }
      FVar24 = local_3c0;
      local_9a8.Base = (wchar_t *)local_988;
      iVar10 = iVar30 + -2;
      local_9a8.CurPos = (wchar_t *)local_988;
      local_9a8.bIsDynamic = false;
      local_9a8.bIsExternal = false;
      local_9a8.End = (wchar_t *)&local_948;
      iVar9 = Core::Private::GetConvertedLength((wchar_t *)0x0,pbVar29 + 1,iVar10);
      if (local_9a8.End <
          (TStringBuilderBase<char> *)((longlong)local_9a8.CurPos + (longlong)iVar9 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_9a8,(longlong)iVar9);
      }
      if (iVar10 != 0) {
        local_9a8.CurPos = Core::Private::Convert(local_9a8.CurPos,iVar9,pbVar29 + 1,iVar10);
      }
      if (local_9a8.End < (TStringBuilderBase<char> *)((longlong)local_9a8.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_9a8,1);
      }
      local_b90 = FVar24;
      *local_9a8.CurPos = L'\0';
      local_b98 = (FScriptContainerElement *)local_9a8.Base;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldStart[1] != \'_\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x2a6,
                         L"Log format uses reserved field name \'%s\' with leading \'_\'. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_9a8);
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)local_3c8.Data !=
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free(local_3c8.Data);
      }
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
    iVar30 = iVar30 + -2;
    iVar9 = (int)local_948.CurPos - (int)local_948.Base;
    iVar10 = Core::Private::GetConvertedLength((char *)0x0,pbVar29 + 1,iVar30);
    if (local_948.End < (FScriptContainerElement *)(local_948.CurPos + iVar10)) {
      TStringBuilderBase<char>::Extend(&local_948,(longlong)iVar10);
    }
    if (iVar30 != 0) {
      local_948.CurPos = Core::Private::Convert(local_948.CurPos,iVar10,pbVar29 + 1,iVar30);
    }
    iVar10 = (int)local_948.CurPos - (int)local_948.Base;
    iVar9 = iVar10 - iVar9;
    iVar30 = iVar10;
    if (iVar9 < iVar10) {
      iVar30 = iVar9;
    }
    FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
    local_b58 = 0;
    if (0 < iVar30) {
      local_b58 = iVar30;
    }
    local_ad8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                ((longlong)local_948.Base + ((longlong)iVar10 - (longlong)local_b58));
    for (FVar23 = local_ad8; iStack_ad0 = local_b58,
        FVar23 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                  ((longlong)local_948.Base + (longlong)iVar10);
        FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar23 + 1)) {
      if (*(char *)FVar23 == '/') {
        FVar24 = FVar23;
        if ((FVar23 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) &&
           (local_ac8->bAllowSubObjectReferences == false)) {
          pTVar12 = StringCast<wchar_t,128,char8_t>(&local_168,param_2);
          local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)pTVar12->Ptr;
          local_b98 = (FScriptContainerElement *)CONCAT44(local_b98._4_4_,0x2f);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bHasSubObjectReference || Options.bAllowSubObjectReferences",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                             ,0x2af,
                             L"Log format has a sub-object reference (%c) in a context that does not allow them. [[%s]]"
                            );
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FLogTemplate *)(*pcVar5)();
            return pFVar13;
          }
        }
        break;
      }
    }
    iVar30 = local_9b0;
    aiStack_af0[1]._0_1_ = uStack_acc;
    aiStack_af0[1]._1_1_ = uStack_acb;
    aiStack_af0[1]._2_1_ = uStack_aca;
    aiStack_af0[1]._3_1_ = uStack_ac9;
    aiStack_af0[0]._0_1_ = (undefined1)iStack_ad0;
    aiStack_af0[0]._1_1_ = iStack_ad0._1_1_;
    aiStack_af0[0]._2_1_ = iStack_ad0._2_1_;
    aiStack_af0[0]._3_1_ = iStack_ad0._3_1_;
    local_aa8 = local_ad8;
    FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_9f8;
    if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
      FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_9f8.SecondaryData;
    }
    local_af8 = local_ad8;
    FVar2 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
            ((longlong)FVar23 + (longlong)local_9b0 * 4);
    local_ae8 = local_948.Base;
    auStack_aa0 = (uchar  [8])aiStack_af0;
    local_a98 = local_948.Base;
    while( true ) {
      if (local_9b0 != iVar30) {
        local_b68[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b68);
      }
      iVar10 = local_b58;
      if (FVar23 == FVar2) {
        sVar15 = (size_t)local_b58;
        local_b64 = local_b58;
        FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_9f8;
        if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_9f8.SecondaryData;
        }
        if ((ulonglong)FVar23 <= &local_b64) {
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_9f8;
          if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
            FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_9f8.SecondaryData;
          }
          if (&local_b64 < (wchar_t *)((longlong)FVar23 + (longlong)local_9ac * 4)) {
            local_b80 = (longlong)local_9b0;
            local_b78 = 4;
            local_b98 = (FScriptContainerElement *)&local_b64;
            local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_9f8;
            if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
              local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                          local_9f8.SecondaryData;
            }
            local_b88 = (FScriptContainerElement *)(longlong)local_9ac;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              pFVar13 = (FLogTemplate *)(*pcVar5)();
              return pFVar13;
            }
          }
        }
        if (local_9b0 == local_9ac) {
          local_9b0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_9f8,&local_9ac);
        }
        lVar18 = (longlong)local_9b0;
        FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_9f8;
        if (local_9f8.SecondaryData != (ForElementType<int>)0x0) {
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_9f8.SecondaryData;
        }
        local_9b0 = local_9b0 + 1;
        *(int *)((longlong)FVar23 + lVar18 * 4) = local_b64;
        if (local_b30 != pbVar29) {
          iStack_b44 = iVar25 - (int)local_b30;
          local_b48._0_1_ = '\x01';
          local_b48._1_1_ = '\0';
          local_b48._2_1_ = '\0';
          local_b48._3_1_ = '\0';
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
          if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar23 = local_a88.SecondaryData;
          }
          if ((ulonglong)FVar23 <= &local_b48) {
            FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
            if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              FVar23 = local_a88.SecondaryData;
            }
            if (&local_b48 < (wchar_t *)((longlong)FVar23 + (longlong)local_9fc * 8)) {
              local_b80 = (longlong)(int)local_a00;
              local_b78 = 8;
              local_b98 = (FScriptContainerElement *)&local_b48;
              local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
              if (local_a88.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                local_b90 = local_a88.SecondaryData;
              }
              local_b88 = (FScriptContainerElement *)(longlong)local_9fc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                pFVar13 = (FLogTemplate *)(*pcVar5)();
                return pFVar13;
              }
            }
          }
          if (local_a00 == local_9fc) {
            local_a00 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                  (0x408,&local_a88,&local_9fc);
          }
          lVar18 = (longlong)(int)local_a00;
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
          if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar23 = local_a88.SecondaryData;
          }
          local_a00 = local_a00 + 1;
          *(ulonglong *)((longlong)FVar23 + lVar18 * 8) = CONCAT44(iStack_b44,local_b48);
        }
        if (local_b18 == (FLogField *)0x0) goto LAB_14178d998;
        if (param_5 < 1) goto LAB_14178d879;
        uVar22 = (ulonglong)local_b54;
        pFVar28 = local_b18;
        iVar25 = param_5;
        goto LAB_14178d720;
      }
      iVar10 = *(int *)FVar23;
      sVar15 = (size_t)iVar10;
      iVar9 = aiStack_af0[0];
      if (((aiStack_af0[0] == iVar10) &&
          (((aiStack_af0[0] == 0 || (iVar10 == 0)) ||
           (iVar11 = strncmp((char *)local_af8,local_ae8,sVar15), iVar11 == 0)))) &&
         (iVar9 == iVar10)) break;
      local_ae8 = local_ae8 + sVar15;
      FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar23 + 4);
    }
    local_b60 = (int)local_b08 - (int)local_b30;
    local_ae8 = local_ae8 + sVar15;
    lVar18 = (longlong)local_b58;
    if (((int)local_948.CurPos - (int)local_948.Base < local_b58) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FLogTemplate *)(*pcVar5)();
      return pFVar13;
    }
    local_948.CurPos = local_948.CurPos + -lVar18;
    param_2 = local_b10;
  } while( true );
LAB_14178d720:
  do {
    uVar27 = ((int)uVar22 + 1) % param_5;
    uVar22 = (ulonglong)(int)uVar27;
    _Str2 = pFVar28[uVar22].Name;
    local_b54 = uVar27;
    if (iVar10 == 0) {
      cVar4 = *_Str2;
      pFVar7 = local_b88;
joined_r0x00014178d85e:
      local_b88 = pFVar7;
      if (cVar4 == '\0') {
        local_b40._0_1_ = '\x05';
        local_b40._1_1_ = '\0';
        local_b40._2_1_ = '\0';
        local_b40._3_1_ = '\0';
        FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
        if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar23 = local_a88.SecondaryData;
        }
        uStack_b3c = uVar27;
        if ((ulonglong)FVar23 <= &local_b40) {
          local_b88 = (FScriptContainerElement *)(longlong)local_9fc;
          FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
          if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar23 = local_a88.SecondaryData;
          }
          if (&local_b40 < (wchar_t *)((longlong)FVar23 + (longlong)local_b88 * 8)) {
            local_b80 = (longlong)(int)local_a00;
            local_b78 = 8;
            local_b98 = (FScriptContainerElement *)&local_b40;
            local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
            if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_b90 = local_a88.SecondaryData;
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            pFVar7 = local_b88;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              pFVar13 = (FLogTemplate *)(*pcVar5)();
              return pFVar13;
            }
          }
        }
        local_b88 = pFVar7;
        if (local_a00 == local_9fc) {
          local_a00 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                (0x408,&local_a88,&local_9fc);
        }
        lVar18 = (longlong)(int)local_a00;
        FVar23 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
        if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar23 = local_a88.SecondaryData;
        }
        local_a00 = local_a00 + 1;
        *(ulonglong *)((longlong)FVar23 + lVar18 * 8) = CONCAT44(uStack_b3c,local_b40);
        goto LAB_14178d998;
      }
    }
    else {
      iVar30 = strncmp((char *)local_ad8,_Str2,sVar15);
      pFVar28 = local_b18;
      if (iVar30 == 0) {
        cVar4 = _Str2[sVar15];
        pFVar7 = local_b88;
        goto joined_r0x00014178d85e;
      }
    }
    iVar25 = iVar25 + -1;
  } while (0 < iVar25);
LAB_14178d879:
  puVar6 = local_b10;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  if (local_b10 == (uchar *)0x0) {
    local_2a0 = (FScriptContainerElement *)0x0;
    local_298 = 0;
    goto LAB_14178d944;
  }
  sVar15 = strlen((char *)local_b10);
  local_298 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar6,(int)sVar15);
  uVar27 = local_298 + 1;
  uVar26 = uVar27;
  if (uVar27 < 0x81) {
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      uVar26 = 0;
      goto LAB_14178d8cc;
    }
  }
  else {
LAB_14178d8cc:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2a8,0,uVar26,2);
  }
  local_2a0 = local_3a8;
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    local_2a0 = local_2a8.Data;
  }
  pwVar16 = Core::Private::Convert((wchar_t *)local_2a0,uVar27,puVar6,(int)sVar15 + 1);
  if ((pwVar16 == (wchar_t *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FLogTemplate *)(*pcVar5)();
    return pFVar13;
  }
LAB_14178d944:
  local_b88 = local_2a0;
  local_b90 = local_ad8;
  local_b98 = (FScriptContainerElement *)CONCAT44(local_b98._4_4_,iVar10);
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("bFoundField",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x2d4,L"Log format requires field \'%.*hs\' which was not provided. [[%s]]");
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FLogTemplate *)(*pcVar5)();
    return pFVar13;
  }
LAB_14178d998:
  local_b38 = (FVar24 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) + 3;
  iStack_b34 = local_b20;
  FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
  if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar24 = local_a88.SecondaryData;
  }
  if ((ulonglong)FVar24 <= &local_b38) {
    FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
    if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar24 = local_a88.SecondaryData;
    }
    if (&local_b38 < (wchar_t *)((longlong)FVar24 + (longlong)local_9fc * 8)) {
      local_b80 = (longlong)(int)local_a00;
      local_b78 = 8;
      local_b98 = (FScriptContainerElement *)&local_b38;
      local_b90 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
      if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_b90 = local_a88.SecondaryData;
      }
      local_b88 = (FScriptContainerElement *)(longlong)local_9fc;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FLogTemplate *)(*pcVar5)();
        return pFVar13;
      }
    }
  }
  if (local_a00 == local_9fc) {
    local_a00 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_a88,&local_9fc);
  }
  lVar18 = (longlong)(int)local_a00;
  FVar24 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_a88;
  if (local_a88.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar24 = local_a88.SecondaryData;
  }
  local_b30 = local_b08;
  local_a00 = local_a00 + 1;
  *(ulonglong *)((longlong)FVar24 + lVar18 * 8) = CONCAT44(iStack_b34,local_b38);
  param_2 = local_b10;
  goto LAB_14178cc02;
}

// CreateLocalized<wchar_t> @ 14178dde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLogTemplate * __cdecl
UE::FLogTemplate::CreateLocalized<wchar_t>
          (FText *param_1,wchar_t *param_2,FLogTemplateOptions *param_3,FLogField *param_4,
          int param_5,TFunctionWithContext<void_*___cdecl(int)> *param_6)

{
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar1;
  char cVar2;
  wchar_t wVar3;
  code *pcVar4;
  uint uVar5;
  wchar_t *pwVar6;
  TFunctionWithContext<void_*___cdecl(int)> *pTVar7;
  bool bVar8;
  FLogTemplate *pFVar9;
  FLocalizedLogFormatTable *this;
  FTextFormat *pFVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar15;
  ulong64 uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  size_t sVar21;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  FLogField *pFVar26;
  wchar_t *pwVar27;
  ulonglong uVar28;
  undefined1 auStack_3d8 [32];
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_3b8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_3b0;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  undefined1 local_388 [4];
  int local_384;
  undefined1 local_380;
  undefined1 local_37f [3];
  int local_37c;
  uint local_378;
  wchar_t local_374 [2];
  int iStack_370;
  wchar_t local_36c [2];
  uchar auStack_368 [4];
  wchar_t local_364 [2];
  uint uStack_360;
  int local_35c;
  uchar auStack_358 [8];
  wchar_t *local_350;
  wchar_t local_348 [4];
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_340;
  FLogTemplateOptions *local_338;
  FLogField *local_330;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_328;
  TFunctionWithContext<void_*___cdecl(int)> *local_320;
  wchar_t *local_318;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_308;
  int aiStack_300 [2];
  char *local_2f8;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong local_2d8;
  FTextFormat local_2d0;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_2c0;
  uchar auStack_2b8 [8];
  char *local_2b0;
  ForElementType<UE::Logging::Private::FLogTemplateOp> local_2a8;
  uint local_220;
  int local_21c;
  ForElementType<int> local_218;
  int local_1d0;
  int local_1cc;
  TStringBuilderBase<wchar_t> local_1c8;
  TStringBuilderBase<char> local_1a8 [2];
  TStringBuilderBase<char> local_168;
  char local_148 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_3d8;
  local_320 = param_6;
  local_338 = param_3;
  local_330 = param_4;
  local_328 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
  if ((param_4 != (FLogField *)0x0) && (param_3->bAllowSubObjectReferences != false)) {
    local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
    if (param_2 == (wchar_t *)0x0) {
      local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFindFields || !Options.bAllowSubObjectReferences",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                       ,0x277,
                       L"Validation of field names is not compatible with sub-object references. [[%s]]"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FLogTemplate *)(*pcVar4)();
      return pFVar9;
    }
  }
  local_2a8.SecondaryData = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_220 = 0;
  local_21c = 0x10;
  local_374 = (wchar_t  [2])0x6;
  this = Logging::Private::GetLocalizedLogFormatTable();
  pFVar10 = FTextFormat::FTextFormat(&local_2d0,param_1,Default);
  iStack_370 = Logging::Private::FLocalizedLogFormatTable::Add(this,pFVar10);
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar15 = local_2a8.SecondaryData;
  }
  if ((ulonglong)FVar15 <= local_374) {
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
    if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar15 = local_2a8.SecondaryData;
    }
    if (local_374 < (wchar_t *)((longlong)FVar15 + (longlong)local_21c * 8)) {
      local_3a0 = (longlong)(int)local_220;
      local_398 = 8;
      local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_374;
      local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_3b0 = local_2a8.SecondaryData;
      }
      local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_21c;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
    }
  }
  if (local_220 == local_21c) {
    local_220 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                          (0x408,&local_2a8,&local_21c);
  }
  lVar12 = (longlong)(int)local_220;
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar15 = local_2a8.SecondaryData;
  }
  local_220 = local_220 + 1;
  *(ulonglong *)((longlong)FVar15 + lVar12 * 8) = CONCAT44(iStack_370,local_374);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.TextFormatData.SharedReferenceCount.ReferenceController);
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.Base = local_148;
  local_168.End = (char *)local_48;
  local_218.SecondaryData = (ForElementType<int>)0x0;
  local_1d0 = 0;
  local_1cc = 0x10;
  local_378 = 0xffffffff;
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  local_350 = param_2;
LAB_14178e008:
  uVar28 = (ulonglong)local_168.Base & 0xffffffff;
  do {
    iVar18 = (int)uVar28;
    FVar22 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
    while( true ) {
      wVar3 = local_350[FVar15._0_4_];
      pwVar27 = local_350 + FVar15._0_4_;
      FVar15 = FVar22;
      if ((ushort)wVar3 >> 6 == 1) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x2800000100000000;
      }
      uVar28 = ((ulonglong)FVar15 | (ulonglong)((ushort)wVar3 >> 6 == 0)) >> ((ushort)wVar3 & 0x3f);
      while ((uVar28 & 1) == 0) {
        wVar3 = pwVar27[1];
        pwVar27 = pwVar27 + 1;
        FVar15 = FVar22;
        if ((ushort)wVar3 >> 6 == 1) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x2800000100000000;
        }
        uVar28 = ((ulonglong)FVar15 | (ulonglong)((ushort)wVar3 >> 6 == 0)) >>
                 ((ushort)wVar3 & 0x3f);
      }
      local_340 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                  ((ulonglong)local_340 & 0xffffffff00000000);
      if (((wVar3 != L'`') || (0x1d < (ushort)(pwVar27[1] + L'ﾠ'))) ||
         ((0x28000001U >> ((ushort)(pwVar27[1] + L'ﾠ') & 0x1f) & 1) == 0)) break;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
               ((longlong)pwVar27 + (4 - (longlong)local_350) >> 1);
    }
    if (*pwVar27 == L'\0') {
      local_348 = (wchar_t  [4])0x0;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      if ((ulonglong)FVar15 <= local_348) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        if (local_348 < (wchar_t *)((longlong)FVar15 + (longlong)local_21c * 8)) {
          local_3a0 = (longlong)(int)local_220;
          local_398 = 8;
          local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_348;
          local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            local_3b0 = local_2a8.SecondaryData;
          }
          local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_21c;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FLogTemplate *)(*pcVar4)();
            return pFVar9;
          }
        }
      }
      uVar23 = local_220;
      if (local_220 == local_21c) {
        uVar23 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                           (0x408,&local_2a8,&local_21c);
      }
      local_220 = uVar23 + 1;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      *(wchar_t (*) [4])((longlong)FVar15 + (longlong)(int)uVar23 * 8) = local_348;
      uVar23 = local_220;
      uVar28 = (ulonglong)(int)local_220;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      FVar1 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + uVar28 * 8);
      while( true ) {
        if ((uint)uVar28 != uVar23) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_380);
          uVar28 = (ulonglong)local_220;
        }
        if (FVar15 == FVar1) break;
        uVar13 = (longlong)*(int *)((longlong)FVar15 + 4) << 3 | (longlong)*(int *)FVar15;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar18 = 0;
        if (uVar13 != 0) {
          iVar18 = (int)lVar12;
        }
        iVar19 = iVar18 / 7 + 1;
        iVar18 = 9;
        if (iVar19 < 9) {
          iVar18 = iVar19;
        }
        FVar22._0_4_ = FVar22._0_4_ + iVar18;
        FVar22._4_4_ = 0;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 8);
      }
      local_320 = (*local_320->Function)(local_320->Context,FVar22._0_4_ + 0x10);
      uVar23 = local_220;
      ((FLogTemplate *)local_320)->StaticFormat = param_2;
      ((FLogTemplate *)local_320)->StaticFormatUtf8 = (uchar *)0x0;
      pFVar9 = (FLogTemplate *)(local_320 + 1);
      uVar28 = (ulonglong)(int)local_220;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      FVar22 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + uVar28 * 8)
      ;
      while( true ) {
        if ((uint)uVar28 != uVar23) {
          `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_37f);
        }
        pTVar7 = local_320;
        if (FVar15 == FVar22) break;
        uVar28 = (longlong)*(int *)((longlong)FVar15 + 4) << 3 | (longlong)*(int *)FVar15;
        lVar12 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar18 = 0;
        if (uVar28 != 0) {
          iVar18 = (int)lVar12;
        }
        uVar14 = iVar18 / 7 + 1;
        uVar5 = 9;
        if ((int)uVar14 < 9) {
          uVar5 = uVar14;
        }
        pFVar9 = (FLogTemplate *)((longlong)&pFVar9->StaticFormat + (ulonglong)uVar5);
        pbVar17 = (byte *)((longlong)&pFVar9[-1].StaticFormatUtf8 + 7);
        switch(uVar5) {
        case 9:
          *pbVar17 = (byte)uVar28;
          pbVar17 = (byte *)((longlong)&pFVar9[-1].StaticFormatUtf8 + 6);
          uVar28 = uVar28 >> 8;
        case 8:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 7:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 6:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 5:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 4:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 3:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        case 2:
          *pbVar17 = (byte)uVar28;
          pbVar17 = pbVar17 + -1;
          uVar28 = uVar28 >> 8;
        default:
          *pbVar17 = -1 << (9U - (char)uVar5 & 0x1f) | (byte)uVar28;
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 8);
          uVar28 = (ulonglong)local_220;
        }
      }
      if (local_218.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_218.SecondaryData);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FMemory::Free((void *)local_2a8.SecondaryData);
      }
      return (FLogTemplate *)pTVar7;
    }
    uVar23 = CONCAT22(0,*pwVar27);
    if (uVar23 != 0x7b) {
      local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_3a8 = FVar22;
      }
      local_3b0._0_4_ = uVar23;
      local_3b8._0_4_ = uVar23;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldStart == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x29b,
                         L"Log format has an unexpected \'%c\' character. Use \'`%c\' to escape it. [[%s]]"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
      iVar18 = (int)local_168.Base;
    }
    wVar3 = pwVar27[1];
    FVar15 = FVar22;
    if (((ushort)wVar3 & 0xffffffc0) == 0x40) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x7fffffe87fffffe;
    }
    uVar28 = ((ulonglong)FVar15 | -(ulonglong)((ushort)wVar3 < 0x40) & 0x3ff800000000000) >>
             ((ushort)wVar3 & 0x3f);
    pwVar6 = pwVar27;
    while ((uVar28 & 1) != 0) {
      wVar3 = pwVar6[2];
      uVar23 = (uint)(ushort)wVar3;
      FVar15 = FVar22;
      if ((uVar23 & 0xffffffc0) == 0x40) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x7fffffe87fffffe;
      }
      pwVar6 = pwVar6 + 1;
      uVar28 = ((ulonglong)FVar15 | -(ulonglong)(uVar23 < 0x40) & 0x3ff800000000000) >>
               (uVar23 & 0x3f);
    }
    if (wVar3 == L'\0') {
      local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_3b8 = FVar22;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x29e,
                         L"Log format has an unterminated field reference. Use \'`{\' to escape \'{\' if needed. [[%s]]"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
      iVar18 = (int)local_168.Base;
    }
    uVar23 = CONCAT22(0,pwVar6[1]);
    if (uVar23 != 0x7d) {
      local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_3b0 = FVar22;
      }
      local_3b8._0_4_ = uVar23;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FieldPathEnd == \'}\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x2a1,
                         L"Log format has invalid character \'%c\' in field name. Use \'`{\' to escape \'{\' if needed. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
      iVar18 = (int)local_168.Base;
    }
    local_318 = pwVar6 + 2;
    local_2d8 = (longlong)local_318 - (longlong)pwVar27 >> 1;
    iVar19 = (int)local_2d8;
    if (pwVar27[1] == L'_') {
      local_1c8.Base = (wchar_t *)local_1a8;
      local_1c8.bIsDynamic = false;
      local_1c8.bIsExternal = false;
      iVar18 = iVar19 + -2;
      local_1c8.End = (wchar_t *)&local_168;
      uVar16 = (ulong64)iVar18;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
      if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2 ==
          (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
      }
      local_1c8.CurPos = (wchar_t *)local_1a8;
      if (&local_168 < (TStringBuilderBase<char> *)((longlong)&local_1a8[0].Base + uVar16 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1c8,uVar16);
      }
      if (iVar18 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_1c8.CurPos,pwVar27 + 1,uVar16 * 2);
        local_1c8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
      }
      if (local_1c8.End < (TStringBuilderBase<char> *)((longlong)(char **)local_1c8.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1c8,1);
      }
      *(undefined2 *)(char **)local_1c8.CurPos = 0;
      local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_1c8.Base;
      local_3b0 = FVar15;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldStart[1] != \'_\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                         ,0x2a6,
                         L"Log format uses reserved field name \'%s\' with leading \'_\'. Names must match \"[A-Za-z0-9][A-Za-z0-9_]*\". [[%s]]"
                        );
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1c8);
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
      iVar18 = (int)local_168.Base;
      param_3 = local_338;
    }
    iVar19 = iVar19 + -2;
    iVar20 = (int)local_168.CurPos - iVar18;
    pcVar25 = local_168.CurPos;
    if (local_168.End < local_168.CurPos + iVar19) {
      TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar19);
      pcVar25 = (char *)((ulonglong)local_168.CurPos & 0xffffffff);
      iVar18 = (int)local_168.Base;
    }
    iVar24 = (int)pcVar25;
    if (iVar19 != 0) {
      local_168.CurPos =
           FGenericPlatformString::Convert<wchar_t,char>(local_168.CurPos,iVar19,pwVar27 + 1,iVar19)
      ;
      iVar24 = (int)local_168.CurPos;
      iVar18 = (int)local_168.Base;
    }
    iVar24 = iVar24 - iVar18;
    iVar20 = iVar24 - iVar20;
    iVar18 = iVar24;
    if (iVar20 < iVar24) {
      iVar18 = iVar20;
    }
    local_37c = 0;
    if (0 < iVar18) {
      local_37c = iVar18;
    }
    local_2e8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                ((longlong)local_168.Base + ((longlong)iVar24 - (longlong)local_37c));
    for (FVar15 = local_2e8; FVar22 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0,
        iStack_2e0 = local_37c,
        FVar15 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                  ((longlong)local_168.Base + (longlong)iVar24);
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 1)) {
      if (*(char *)FVar15 == '/') {
        FVar22 = FVar15;
        if ((FVar15 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) &&
           (param_3->bAllowSubObjectReferences == false)) {
          local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2;
          if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_2 ==
              (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
            local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
          }
          local_3b8._0_4_ = 0x2f;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bHasSubObjectReference || Options.bAllowSubObjectReferences",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                             ,0x2af,
                             L"Log format has a sub-object reference (%c) in a context that does not allow them. [[%s]]"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FLogTemplate *)(*pcVar4)();
            return pFVar9;
          }
        }
        break;
      }
    }
    iVar18 = local_1d0;
    aiStack_300[1]._0_1_ = (undefined1)uStack_2dc;
    aiStack_300[1]._1_1_ = uStack_2dc._1_1_;
    aiStack_300[1]._2_1_ = uStack_2dc._2_1_;
    aiStack_300[1]._3_1_ = uStack_2dc._3_1_;
    aiStack_300[0]._0_1_ = (undefined1)iStack_2e0;
    aiStack_300[0]._1_1_ = iStack_2e0._1_1_;
    aiStack_300[0]._2_1_ = iStack_2e0._2_1_;
    aiStack_300[0]._3_1_ = iStack_2e0._3_1_;
    local_2c0 = local_2e8;
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
    if (local_218.SecondaryData != (ForElementType<int>)0x0) {
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
    }
    local_308 = local_2e8;
    FVar1 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
            ((longlong)FVar15 + (longlong)local_1d0 * 4);
    local_2f8 = local_168.Base;
    auStack_2b8 = (uchar  [8])aiStack_300;
    local_2b0 = local_168.Base;
    while( true ) {
      if (local_1d0 != iVar18) {
        local_388[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_388);
      }
      iVar19 = local_37c;
      if (FVar15 == FVar1) {
        sVar21 = (size_t)local_37c;
        local_384 = local_37c;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
        if (local_218.SecondaryData != (ForElementType<int>)0x0) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
        }
        if ((ulonglong)FVar15 <= &local_384) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
          if (local_218.SecondaryData != (ForElementType<int>)0x0) {
            FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
          }
          if (&local_384 < (wchar_t *)((longlong)FVar15 + (longlong)local_1cc * 4)) {
            local_3a0 = (longlong)local_1d0;
            local_398 = 4;
            local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_384;
            local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
            if (local_218.SecondaryData != (ForElementType<int>)0x0) {
              local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                          local_218.SecondaryData;
            }
            local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_1cc;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FLogTemplate *)(*pcVar4)();
              return pFVar9;
            }
          }
        }
        if (local_1d0 == local_1cc) {
          local_1d0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_218,&local_1cc);
        }
        lVar12 = (longlong)local_1d0;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_218;
        if (local_218.SecondaryData != (ForElementType<int>)0x0) {
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_218.SecondaryData;
        }
        local_1d0 = local_1d0 + 1;
        *(int *)((longlong)FVar15 + lVar12 * 4) = local_384;
        if (local_350 != pwVar27) {
          local_36c = (wchar_t  [2])0x1;
          auStack_368 = SUB84((longlong)pwVar27 - (longlong)local_350 >> 1,0);
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          if ((ulonglong)FVar15 <= local_36c) {
            FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
            if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              FVar15 = local_2a8.SecondaryData;
            }
            if (local_36c < (wchar_t *)((longlong)FVar15 + (longlong)local_21c * 8)) {
              local_3a0 = (longlong)(int)local_220;
              local_398 = 8;
              local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_36c;
              local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
              if (local_2a8.SecondaryData !=
                  (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
                local_3b0 = local_2a8.SecondaryData;
              }
              local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_21c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                pFVar9 = (FLogTemplate *)(*pcVar4)();
                return pFVar9;
              }
            }
          }
          if (local_220 == local_21c) {
            local_220 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                  (0x408,&local_2a8,&local_21c);
          }
          lVar12 = (longlong)(int)local_220;
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          local_220 = local_220 + 1;
          *(ulonglong *)((longlong)FVar15 + lVar12 * 8) = CONCAT44(auStack_368,local_36c);
        }
        FVar15 = local_2e8;
        if (local_330 == (FLogField *)0x0) goto LAB_14178e9a4;
        if (param_5 < 1) goto LAB_14178e95c;
        uVar28 = (ulonglong)local_378;
        pFVar26 = local_330;
        iVar18 = param_5;
        goto LAB_14178e800;
      }
      iVar19 = *(int *)FVar15;
      sVar21 = (size_t)iVar19;
      iVar20 = aiStack_300[0];
      if (((aiStack_300[0] == iVar19) &&
          (((aiStack_300[0] == 0 || (iVar19 == 0)) ||
           (iVar24 = strncmp((char *)local_308,local_2f8,sVar21), iVar24 == 0)))) &&
         (iVar20 == iVar19)) break;
      local_2f8 = local_2f8 + sVar21;
      FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)((longlong)FVar15 + 4);
    }
    local_2f8 = local_2f8 + sVar21;
    lVar12 = (longlong)local_37c;
    local_340 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
                ((longlong)local_318 - (longlong)local_350 >> 1);
    if ((int)((int)local_168.CurPos - (uint)local_168.Base) < local_37c) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0xe8,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
    }
    uVar28 = (ulonglong)(uint)local_168.Base;
    local_168.CurPos = local_168.CurPos + -lVar12;
    FVar15 = local_340;
    param_3 = local_338;
    param_2 = (wchar_t *)local_328;
  } while( true );
LAB_14178e800:
  do {
    uVar23 = ((int)uVar28 + 1) % param_5;
    uVar28 = (ulonglong)(int)uVar23;
    pcVar25 = pFVar26[uVar28].Name;
    local_378 = uVar23;
    if (iVar19 == 0) {
      cVar2 = *pcVar25;
      FVar1 = local_3a8;
joined_r0x00014178e941:
      local_3a8 = FVar1;
      if (cVar2 == '\0') {
        local_364 = (wchar_t  [2])0x5;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        uStack_360 = uVar23;
        if ((ulonglong)FVar15 <= local_364) {
          local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_21c;
          FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
          if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0)
          {
            FVar15 = local_2a8.SecondaryData;
          }
          if (local_364 < (wchar_t *)((longlong)FVar15 + (longlong)local_3a8 * 8)) {
            local_3a0 = (longlong)(int)local_220;
            local_398 = 8;
            local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)local_364;
            local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
            if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0
               ) {
              local_3b0 = local_2a8.SecondaryData;
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            FVar1 = local_3a8;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FLogTemplate *)(*pcVar4)();
              return pFVar9;
            }
          }
        }
        local_3a8 = FVar1;
        if (local_220 == local_21c) {
          local_220 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                                (0x408,&local_2a8,&local_21c);
        }
        lVar12 = (longlong)(int)local_220;
        FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
        if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
          FVar15 = local_2a8.SecondaryData;
        }
        local_220 = local_220 + 1;
        *(ulonglong *)((longlong)FVar15 + lVar12 * 8) = CONCAT44(uStack_360,local_364);
        goto LAB_14178e9a4;
      }
    }
    else {
      iVar20 = strncmp((char *)FVar15,pcVar25,sVar21);
      pFVar26 = local_330;
      if (iVar20 == 0) {
        cVar2 = pcVar25[sVar21];
        FVar1 = local_3a8;
        goto joined_r0x00014178e941;
      }
    }
    iVar18 = iVar18 + -1;
  } while (0 < iVar18);
LAB_14178e95c:
  local_3a8 = local_328;
  if (local_328 == (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0;
  }
  local_3b0 = FVar15;
  local_3b8._0_4_ = iVar19;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("bFoundField",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x2d4,L"Log format requires field \'%.*hs\' which was not provided. [[%s]]");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FLogTemplate *)(*pcVar4)();
    return pFVar9;
  }
LAB_14178e9a4:
  local_35c = (FVar22 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) + 3;
  auStack_358._0_4_ = (undefined4)local_2d8;
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar15 = local_2a8.SecondaryData;
  }
  if ((ulonglong)FVar15 <= &local_35c) {
    FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
    if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      FVar15 = local_2a8.SecondaryData;
    }
    if (&local_35c < (wchar_t *)((longlong)FVar15 + (longlong)local_21c * 8)) {
      local_3a0 = (longlong)(int)local_220;
      local_398 = 8;
      local_3b8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_35c;
      local_3b0 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
      if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
        local_3b0 = local_2a8.SecondaryData;
      }
      local_3a8 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)(longlong)local_21c;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLogTemplate *)(*pcVar4)();
        return pFVar9;
      }
    }
  }
  uVar23 = local_220;
  if (local_220 == local_21c) {
    uVar23 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Logging::Private::FLogTemplateOp>_>
                       (0x408,&local_2a8,&local_21c);
  }
  local_220 = uVar23 + 1;
  FVar15 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    FVar15 = local_2a8.SecondaryData;
  }
  local_350 = local_318;
  *(ulonglong *)((longlong)FVar15 + (longlong)(int)uVar23 * 8) =
       CONCAT44(auStack_358._0_4_,local_35c);
  FVar15 = local_340;
  param_3 = local_338;
  param_2 = (wchar_t *)local_328;
  goto LAB_14178e008;
}

// FormatLocalizedTo<char8_t,char8_t> @ 1417926c0

void __cdecl
UE::FLogTemplate::FormatLocalizedTo<char8_t,char8_t>
          (uchar *param_1,TStringBuilderBase<char8_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  int iVar1;
  FText *this;
  FString *pFVar2;
  int iVar3;
  FText local_18;
  
  this = FormatLocalizedToText<char8_t>(&local_18,param_1,param_3,param_4);
  pFVar2 = FText::ToString(this);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<char8_t>::Append<wchar_t,0>
            (param_2,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FormatLocalizedTo<char8_t,wchar_t> @ 141792720

void __cdecl
UE::FLogTemplate::FormatLocalizedTo<char8_t,wchar_t>
          (uchar *param_1,TStringBuilderBase<wchar_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  int iVar1;
  FText *this;
  FString *pFVar2;
  int iVar3;
  FText local_18;
  
  this = FormatLocalizedToText<char8_t>(&local_18,param_1,param_3,param_4);
  pFVar2 = FText::ToString(this);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_2,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FormatLocalizedTo<wchar_t,char8_t> @ 141792780

void __cdecl
UE::FLogTemplate::FormatLocalizedTo<wchar_t,char8_t>
          (wchar_t *param_1,TStringBuilderBase<char8_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  int iVar1;
  FText *this;
  FString *pFVar2;
  int iVar3;
  FText local_18;
  
  this = FormatLocalizedToText<wchar_t>(&local_18,param_1,param_3,param_4);
  pFVar2 = FText::ToString(this);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<char8_t>::Append<wchar_t,0>
            (param_2,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FormatLocalizedTo<wchar_t,wchar_t> @ 1417927e0

void __cdecl
UE::FLogTemplate::FormatLocalizedTo<wchar_t,wchar_t>
          (wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  int iVar1;
  FText *this;
  FString *pFVar2;
  int iVar3;
  FText local_18;
  
  this = FormatLocalizedToText<wchar_t>(&local_18,param_1,param_3,param_4);
  pFVar2 = FText::ToString(this);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_2,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FormatLocalizedToText<char8_t> @ 141792840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::FLogTemplate::FormatLocalizedToText<char8_t>
          (FText *__return_storage_ptr__,uchar *param_1,FCbFieldViewIterator *param_2,uchar *param_3
          )

{
  uchar *_Str;
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  atomic<unsigned_char> aVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  FCbFieldView *pFVar8;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar9;
  FText *pFVar10;
  int iVar11;
  TStringView<char8_t> *pTVar12;
  longlong *plVar13;
  uchar *_Str_00;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  uchar *local_290;
  FTextFormat local_288;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_278
  ;
  longlong *local_268;
  FTextFormatData *local_260;
  uchar *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  uchar *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  int local_238;
  undefined8 local_230;
  FText *local_228;
  TStringView<char8_t> local_218;
  uchar *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  TStringView<char8_t> local_1f8;
  uchar *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TFieldFinder<char8_t> local_1d8;
  FCbFieldView local_198;
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_1d8.Fields._0_8_ = *(undefined8 *)param_2;
  local_1d8.Fields._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_1d8.Fields._16_8_ = *(undefined8 *)&param_2->field_0x10;
  bVar5 = false;
  uVar20 = 0xffffffff;
  local_278.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Pairs.ArrayNum = 0;
  local_278.Pairs.ArrayMax = 0;
  local_1d8.Index = 0;
  pTVar21 = (TReferenceControllerBase<1> *)param_1;
  local_290 = param_1;
  local_288.TextFormatData.Object = (FTextFormatData *)param_1;
  local_228 = __return_storage_ptr__;
  local_1d8.Format = param_1;
  local_1d8.It._0_8_ = local_1d8.Fields._0_8_;
  local_1d8.It._8_8_ = local_1d8.Fields._8_8_;
  local_1d8.It._16_8_ = local_1d8.Fields._16_8_;
  if (param_3 != (uchar *)0x0) {
    _Str_00 = param_1 + 1;
    plVar13 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_268 = plVar13;
    local_260 = (FTextFormatData *)param_1;
    do {
      pbVar18 = param_3 + 1;
      uVar16 = (ulonglong)(byte)~*param_3 * 2 + 1;
      lVar1 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_238 = (int)lVar1;
      uVar19 = -local_238 + 9;
      uVar16 = (ulonglong)(0xff >> ((byte)uVar19 & 0x1f) & 0xff) & (ulonglong)*param_3;
      switch(-local_238) {
      case 0:
        pbVar18 = param_3 + 2;
      case -1:
        pbVar18 = pbVar18 + 1;
      case -2:
        pbVar18 = pbVar18 + 1;
      case -3:
        uVar16 = (ulonglong)*pbVar18;
        pbVar18 = pbVar18 + 1;
      case -4:
        bVar3 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar3;
      case -5:
        bVar3 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar3;
      case -6:
        bVar3 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar3;
      case -7:
        uVar16 = uVar16 << 8 | (ulonglong)*pbVar18;
      }
      param_3 = param_3 + uVar19;
      uVar15 = uVar16 >> 3;
      uVar19 = (uint)uVar16 & 7;
      iVar14 = (int)uVar15;
      local_230 = uVar15 << 0x20 | (ulonglong)uVar19;
      pTVar21 = (TReferenceControllerBase<1> *)param_1;
      if ((uVar16 & 7) == 0) {
        param_3 = (byte *)0x0;
LAB_141792c46:
        iVar14 = local_230._4_4_;
      }
      else {
        iVar17 = (int)uVar20;
        if (uVar19 == 3) {
          _Str = local_290 + 1;
          iVar11 = iVar14 + -2;
          if (_Str == (uchar *)0x0) {
            iVar11 = 0;
            local_248 = (uchar *)0x0;
LAB_141792c09:
            local_1f8._12_4_ = uStack_23c;
            local_1f8.Size = iVar11;
            local_1f8.DataPtr = local_248;
            iStack_240 = iVar11;
            local_1e8 = local_248;
            pFVar8 = Logging::Private::TFieldFinder<char8_t>::Find(&local_1d8,&local_1f8,iVar17);
          }
          else {
            if ((0 < iVar11) && (_Str[(longlong)iVar14 + -3] == '\0')) {
              iVar11 = iVar14 + -3;
            }
            local_248 = _Str;
            if (iVar11 != -1) goto LAB_141792c09;
            sVar7 = strlen((char *)_Str);
            iStack_240 = (int)sVar7;
            local_1f8._12_4_ = uStack_23c;
            local_1f8.Size = iStack_240;
            local_1f8.DataPtr = local_248;
            local_1e8 = _Str;
            pFVar8 = Logging::Private::TFieldFinder<char8_t>::Find(&local_1d8,&local_1f8,iVar17);
            sVar7 = strlen((char *)_Str);
            iVar11 = (int)sVar7;
          }
          pTVar12 = &local_178;
          local_178.DataPtr = local_1e8;
          local_178._12_4_ = uStack_1dc;
          local_178.Size = iVar11;
          iStack_1e0 = iVar11;
LAB_141792b80:
          Logging::Private::AddFieldValue(&local_278,pTVar12,pFVar8);
          uVar20 = 0xffffffff;
          plVar13 = local_268;
          goto LAB_141792c46;
        }
        if (uVar19 == 4) {
          iVar11 = iVar14 + -2;
          if (_Str_00 == (uchar *)0x0) {
            iVar11 = 0;
            local_258 = (uchar *)0x0;
LAB_141792b45:
            local_218._12_4_ = uStack_24c;
            local_218.Size = iVar11;
            local_218.DataPtr = local_258;
            iStack_250 = iVar11;
            local_208 = local_258;
            pFVar8 = Logging::Private::TFieldFinder<char8_t>::FindByPath
                               (&local_1d8,&local_198,&local_218,iVar17);
          }
          else {
            if ((0 < iVar11) && (_Str_00[(longlong)iVar14 + -3] == '\0')) {
              iVar11 = iVar14 + -3;
            }
            local_258 = _Str_00;
            if (iVar11 != -1) goto LAB_141792b45;
            sVar7 = strlen((char *)_Str_00);
            iStack_250 = (int)sVar7;
            local_218._12_4_ = uStack_24c;
            local_218.Size = iStack_250;
            local_218.DataPtr = local_258;
            local_208 = _Str_00;
            pFVar8 = Logging::Private::TFieldFinder<char8_t>::FindByPath
                               (&local_1d8,&local_198,&local_218,iVar17);
            sVar7 = strlen((char *)_Str_00);
            iVar11 = (int)sVar7;
          }
          pTVar12 = &local_188;
          local_188._12_4_ = uStack_1fc;
          local_188.Size = iVar11;
          local_188.DataPtr = local_208;
          iStack_200 = iVar11;
          goto LAB_141792b80;
        }
        if (uVar19 == 5) {
          uVar20 = uVar15 & 0xffffffff;
LAB_141792ad0:
          iVar14 = 0;
        }
        else {
          if (uVar19 != 6) {
            if (1 < uVar19 - 5) goto LAB_141792c46;
            goto LAB_141792ad0;
          }
          if ((*(int *)(*plVar13 + 0x9d4c) < ::_TSS0) &&
             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`UE::Logging::Private::GetLocalizedLogFormatTable'::__l2::
                   _dynamic_atexit_destructor_for__Table__);
            _Init_thread_footer(&::_TSS0);
          }
          LOCK();
          bVar6 = Table.Mutex.State == (atomic<unsigned_char>)0x0;
          if (bVar6) {
            Table.Mutex.State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar6) {
            FMutex::LockSlow(&Table.Mutex);
          }
          pTVar21 = *(TReferenceControllerBase<1> **)
                     (Table.Table._0_8_ + 8 + (longlong)iVar14 * 0x10);
          local_260 = *(FTextFormatData **)(Table.Table._0_8_ + (longlong)iVar14 * 0x10);
          if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
            UNLOCK();
          }
          LOCK();
          aVar4 = Table.Mutex.State + -1;
          UNLOCK();
          bVar3 = (byte)Table.Mutex.State & 2;
          Table.Mutex.State = aVar4;
          if (bVar3 != 0) {
            FMutex::WakeWaitingThread(&Table.Mutex);
          }
          if (bVar5) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)param_1);
          }
          if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar5 = true;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar21);
          iVar14 = 0;
          plVar13 = local_268;
        }
      }
      local_290 = local_290 + iVar14;
      _Str_00 = _Str_00 + iVar14;
      param_1 = (uchar *)pTVar21;
    } while (param_3 != (byte *)0x0);
    param_1 = &local_260->SourceType;
    if (bVar5) goto LAB_141792cf2;
  }
  pTVar9 = StringCast<wchar_t,128,char8_t>
                     (&local_168,&(local_288.TextFormatData.Object)->SourceType);
  local_2a8 = pTVar9->Ptr;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("TextFormat",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x389,L"Missing text format when formatting localized template. [[%s]]");
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FText *)(*pcVar2)();
    return pFVar10;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsSet()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                     ,0x1bd,
                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                    );
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FText *)(*pcVar2)();
    return pFVar10;
  }
LAB_141792cf2:
  pFVar10 = local_228;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_288.TextFormatData.Object = (FTextFormatData *)param_1;
  local_288.TextFormatData.SharedReferenceCount.ReferenceController = pTVar21;
  FText::Format(local_228,&local_288,&local_278);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_278.Pairs.AllocatorInstance.Data,
             local_278.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_278.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_278.Pairs.AllocatorInstance.Data);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  return pFVar10;
}

// FormatLocalizedToText<wchar_t> @ 141792df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::FLogTemplate::FormatLocalizedToText<wchar_t>
          (FText *__return_storage_ptr__,wchar_t *param_1,FCbFieldViewIterator *param_2,
          uchar *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  atomic<unsigned_char> aVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uchar *puVar10;
  FCbFieldView *pFVar11;
  FCbObjectView *this;
  FText *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  int iVar18;
  ulonglong uVar19;
  byte *pbVar20;
  uint uVar21;
  wchar_t *pwVar22;
  TReferenceControllerBase<1> *pTVar23;
  byte *pbVar24;
  ulonglong uVar25;
  undefined1 auStackY_2f8 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2a8
  ;
  FTextFormatData *local_298;
  TReferenceControllerBase<1> *local_290;
  TStringView<char8_t> local_288;
  TStringView<char8_t> local_278;
  int local_268;
  undefined8 local_260;
  FText *local_258;
  FCbFieldView local_250;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FTextFormat local_1f8;
  TFieldFinder<wchar_t> local_1e8;
  TStringView<char8_t> local_1a8;
  TStringView<char8_t> local_198;
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  TStringView<char8_t> local_158;
  TStringView<char8_t> local_148;
  FCbObjectView local_138;
  FCbFieldView local_128;
  FScriptContainerElement local_118 [32];
  ForAnyElementType local_f8;
  FScriptContainerElement *local_f0;
  int local_e8;
  FScriptContainerElement local_e0 [32];
  ForAnyElementType local_c0;
  FScriptContainerElement *local_b8;
  int local_b0;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_1e8.Fields._0_8_ = *(undefined8 *)param_2;
  local_1e8.Fields._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_1e8.Fields._16_8_ = *(undefined8 *)&param_2->field_0x10;
  bVar6 = false;
  uVar25 = 0xffffffff;
  bVar8 = false;
  local_2a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Pairs.ArrayNum = 0;
  local_2a8.Pairs.ArrayMax = 0;
  local_1e8.Index = 0;
  pTVar23 = (TReferenceControllerBase<1> *)param_1;
  local_258 = __return_storage_ptr__;
  local_1e8.Format = param_1;
  local_1e8.It._0_8_ = local_1e8.Fields._0_8_;
  local_1e8.It._8_8_ = local_1e8.Fields._8_8_;
  local_1e8.It._16_8_ = local_1e8.Fields._16_8_;
  if (param_3 != (uchar *)0x0) {
    pwVar22 = param_1 + 1;
    local_298 = (FTextFormatData *)param_1;
    local_290 = (TReferenceControllerBase<1> *)param_1;
    do {
      pbVar24 = (byte *)0x0;
      pbVar20 = param_3 + 1;
      uVar19 = (ulonglong)(byte)~*param_3 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_268 = (int)lVar2;
      uVar21 = -local_268 + 9;
      uVar19 = (ulonglong)(0xff >> ((byte)uVar21 & 0x1f) & 0xff) & (ulonglong)*param_3;
      switch(-local_268) {
      case 0:
        pbVar20 = param_3 + 2;
      case -1:
        pbVar20 = pbVar20 + 1;
      case -2:
        pbVar20 = pbVar20 + 1;
      case -3:
        uVar19 = (ulonglong)*pbVar20;
        pbVar20 = pbVar20 + 1;
      case -4:
        bVar4 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        uVar19 = uVar19 << 8 | (ulonglong)bVar4;
      case -5:
        bVar4 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        uVar19 = uVar19 << 8 | (ulonglong)bVar4;
      case -6:
        bVar4 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        uVar19 = uVar19 << 8 | (ulonglong)bVar4;
      case -7:
        uVar19 = uVar19 << 8 | (ulonglong)*pbVar20;
      }
      param_3 = param_3 + uVar21;
      uVar16 = uVar19 >> 3;
      uVar21 = (uint)uVar19 & 7;
      iVar14 = (int)uVar16;
      local_260 = uVar16 << 0x20 | (ulonglong)uVar21;
      if ((uVar19 & 7) == 0) {
LAB_1417933c0:
        param_3 = pbVar24;
        iVar9 = local_260._4_4_;
      }
      else {
        iVar9 = 0;
        if (uVar21 == 3) {
          local_c0.Data = (FScriptContainerElement *)0x0;
          iVar9 = iVar14 + -2;
          pwVar17 = param_1 + 1;
          if (pwVar17 == (wchar_t *)0x0) {
            local_b8 = (FScriptContainerElement *)0x0;
            local_b0 = 0;
          }
          else {
            if ((0 < iVar9) && (param_1[(longlong)iVar14 + -2] == L'\0')) {
              pbVar24 = &DAT_00000001;
              iVar9 = iVar14 + -3;
            }
            local_b0 = Core::Private::GetConvertedLength((uchar *)0x0,pwVar17,iVar9);
            uVar15 = local_b0 + (int)pbVar24;
            uVar21 = uVar15;
            if (uVar15 < 0x21) {
              if (local_c0.Data != (FScriptContainerElement *)0x0) {
                uVar21 = 0;
                goto LAB_14179345f;
              }
            }
            else {
LAB_14179345f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_c0,0,uVar21,1);
            }
            local_b8 = local_e0;
            if (local_c0.Data != (FScriptContainerElement *)0x0) {
              local_b8 = local_c0.Data;
            }
            puVar10 = Core::Private::Convert((uchar *)local_b8,uVar15,pwVar17,(int)pbVar24 + iVar9);
            if ((puVar10 == (uchar *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pFVar12 = (FText *)(*pcVar3)();
              return pFVar12;
            }
          }
          local_218 = local_b8;
          iStack_210 = local_b0;
          local_158._12_4_ = uStack_20c;
          local_158.Size = local_b0;
          local_158.DataPtr = (uchar *)local_b8;
          pFVar11 = Logging::Private::TFieldFinder<wchar_t>::Find(&local_1e8,&local_158,(int)uVar25)
          ;
          local_208 = local_b8;
          iStack_200 = local_b0;
          local_148._12_4_ = uStack_1fc;
          local_148.Size = local_b0;
          local_148.DataPtr = (uchar *)local_b8;
          Logging::Private::AddFieldValue(&local_2a8,&local_148,pFVar11);
          FVar13.Data = local_c0.Data;
LAB_1417933a7:
          uVar25 = 0xffffffff;
          pbVar24 = param_3;
          bVar6 = bVar8;
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
          goto LAB_1417933c0;
        }
        if (uVar21 == 4) {
          local_f8.Data = (FScriptContainerElement *)0x0;
          iVar18 = iVar14 + -2;
          if (pwVar22 == (wchar_t *)0x0) {
            local_f0 = (FScriptContainerElement *)0x0;
            local_e8 = 0;
          }
          else {
            if ((0 < iVar18) && (pwVar22[(longlong)iVar14 + -3] == L'\0')) {
              iVar9 = 1;
              iVar18 = iVar14 + -3;
            }
            local_e8 = Core::Private::GetConvertedLength((uchar *)0x0,pwVar22,iVar18);
            uVar21 = iVar9 + local_e8;
            uVar15 = uVar21;
            if (uVar21 < 0x21) {
              if (local_f8.Data != (FScriptContainerElement *)0x0) {
                uVar15 = 0;
                goto LAB_1417930f5;
              }
            }
            else {
LAB_1417930f5:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_f8,0,uVar15,1);
            }
            local_f0 = local_118;
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              local_f0 = local_f8.Data;
            }
            puVar10 = Core::Private::Convert((uchar *)local_f0,uVar21,pwVar22,iVar9 + iVar18);
            if ((puVar10 == (uchar *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pFVar12 = (FText *)(*pcVar3)();
              return pFVar12;
            }
          }
          local_238 = local_f0;
          iStack_230 = local_e8;
          local_288._12_4_ = uStack_22c;
          local_288.Size = local_e8;
          local_278.DataPtr = (uchar *)local_f0;
          local_288.DataPtr = (uchar *)local_f0;
          local_1a8.DataPtr = (uchar *)local_f0;
          local_278._8_8_ = local_288._8_8_;
          local_1a8._8_8_ = local_288._8_8_;
          bVar6 = String::SplitFirstChar(&local_1a8,'/',&local_288,&local_278,CaseSensitive);
          local_198.DataPtr = local_288.DataPtr;
          local_198.Size = local_288.Size;
          local_198._12_4_ = local_288._12_4_;
          pFVar11 = Logging::Private::TFieldFinder<wchar_t>::Find(&local_1e8,&local_198,(int)uVar25)
          ;
          local_250.TypeWithFlags = pFVar11->TypeWithFlags;
          local_250.Error = pFVar11->Error;
          local_250._2_2_ = *(undefined2 *)&pFVar11->field_0x2;
          local_250.NameLen = pFVar11->NameLen;
          local_250.Value = pFVar11->Value;
          if (bVar6) {
            do {
              local_288.DataPtr = local_278.DataPtr;
              local_288.Size = local_278.Size;
              local_288._12_4_ = local_278._12_4_;
              local_188.DataPtr = local_278.DataPtr;
              local_188.Size = local_278.Size;
              local_188._12_4_ = local_278._12_4_;
              bVar6 = String::SplitFirstChar(&local_188,'/',&local_288,&local_278,CaseSensitive);
              this = FCbFieldView::AsObjectView(&local_250,&local_138);
              local_178.DataPtr = local_288.DataPtr;
              local_178.Size = local_288.Size;
              local_178._12_4_ = local_288._12_4_;
              pFVar11 = FCbObjectView::FindView(this,&local_128,&local_178);
              puVar10 = local_278.DataPtr;
              uVar21._0_1_ = pFVar11->TypeWithFlags;
              uVar21._1_1_ = pFVar11->Error;
              uVar21._2_2_ = *(undefined2 *)&pFVar11->field_0x2;
              local_250.TypeWithFlags = pFVar11->TypeWithFlags;
              local_250.Error = pFVar11->Error;
              local_250._2_2_ = *(undefined2 *)&pFVar11->field_0x2;
              local_250.NameLen = pFVar11->NameLen;
              local_250.Value = pFVar11->Value;
              if ((uVar21 & 0x1f) == 0) {
                local_a8.Base = local_88;
                iVar14 = local_278.Size;
                local_a8.CurPos = local_88;
                local_a8.bIsDynamic = false;
                local_a8.bIsExternal = false;
                local_a8.End = (wchar_t *)local_48;
                iVar9 = Core::Private::GetConvertedLength
                                  ((wchar_t *)0x0,local_278.DataPtr,local_278.Size);
                if (local_a8.End < local_a8.CurPos + iVar9) {
                  TStringBuilderBase<wchar_t>::Extend(&local_a8,(longlong)iVar9);
                }
                if (iVar14 != 0) {
                  local_a8.CurPos = Core::Private::Convert(local_a8.CurPos,iVar9,puVar10,iVar14);
                }
                if (local_a8.End < local_a8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
                }
                *local_a8.CurPos = L'\0';
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Field",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                                   ,0x15c,
                                   L"Log format requires field \'%s\' which was not provided. [[%s]]"
                                  );
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  pFVar12 = (FText *)(*pcVar3)();
                  return pFVar12;
                }
              }
              pTVar23 = local_290;
            } while (bVar6);
          }
          local_228 = local_f0;
          iStack_220 = local_e8;
          local_168._12_4_ = uStack_21c;
          local_168.Size = local_e8;
          local_168.DataPtr = (uchar *)local_f0;
          Logging::Private::AddFieldValue(&local_2a8,&local_168,&local_250);
          FVar13.Data = local_f8.Data;
          goto LAB_1417933a7;
        }
        if (uVar21 == 5) {
          uVar25 = uVar16 & 0xffffffff;
        }
        else if (uVar21 == 6) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`UE::Logging::Private::GetLocalizedLogFormatTable'::__l2::
                   _dynamic_atexit_destructor_for__Table__);
            _Init_thread_footer(&::_TSS0);
          }
          LOCK();
          bVar8 = Table.Mutex.State == (atomic<unsigned_char>)0x0;
          if (bVar8) {
            Table.Mutex.State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar8) {
            FMutex::LockSlow(&Table.Mutex);
          }
          pTVar1 = *(TReferenceControllerBase<1> **)
                    (Table.Table._0_8_ + 8 + (longlong)iVar14 * 0x10);
          local_298 = *(FTextFormatData **)(Table.Table._0_8_ + (longlong)iVar14 * 0x10);
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          LOCK();
          aVar5 = Table.Mutex.State + -1;
          UNLOCK();
          bVar4 = (byte)Table.Mutex.State & 2;
          Table.Mutex.State = aVar5;
          if (bVar4 != 0) {
            FMutex::WakeWaitingThread(&Table.Mutex);
          }
          if (bVar6) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar23);
          }
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar6 = true;
          bVar8 = true;
          local_290 = pTVar1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          iVar9 = 0;
          pTVar23 = pTVar1;
        }
        else {
          pbVar24 = param_3;
          if (1 < uVar21 - 5) goto LAB_1417933c0;
        }
      }
      param_1 = param_1 + iVar9;
      pwVar22 = pwVar22 + iVar9;
    } while (param_3 != (byte *)0x0);
    param_1 = (wchar_t *)local_298;
    if (bVar6) goto LAB_1417935be;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("TextFormat",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x389,L"Missing text format when formatting localized template. [[%s]]");
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FText *)(*pcVar3)();
    return pFVar12;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsSet()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                     ,0x1bd,
                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                    );
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FText *)(*pcVar3)();
    return pFVar12;
  }
LAB_1417935be:
  pFVar12 = local_258;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f8.TextFormatData.Object = (FTextFormatData *)param_1;
  local_1f8.TextFormatData.SharedReferenceCount.ReferenceController = pTVar23;
  FText::Format(local_258,&local_1f8,&local_2a8);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_2a8.Pairs.AllocatorInstance.Data,
             local_2a8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_2a8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_2a8.Pairs.AllocatorInstance.Data);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  return pFVar12;
}

// FormatTo<char8_t> @ 141793f30

void __thiscall
UE::FLogTemplate::FormatTo<char8_t>
          (FLogTemplate *this,TStringBuilderBase<char8_t> *param_1,FCbFieldViewIterator *param_2)

{
  if (this->StaticFormatUtf8 != (uchar *)0x0) {
    FormatTo<char8_t,char8_t>(this->StaticFormatUtf8,param_1,param_2,(uchar *)(this + 1));
    return;
  }
  FormatTo<wchar_t,char8_t>(this->StaticFormat,param_1,param_2,(uchar *)(this + 1));
  return;
}

// FormatTo<char8_t,char8_t> @ 141793f60

void __cdecl
UE::FLogTemplate::FormatTo<char8_t,char8_t>
          (uchar *param_1,TStringBuilderBase<char8_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  size_t sVar6;
  FCbFieldView *pFVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  byte *pbVar15;
  uchar *local_b8;
  undefined4 uStack_ac;
  uchar *local_a8;
  undefined4 uStack_9c;
  TStringView<char8_t> local_98;
  FCbFieldView local_88;
  TFieldFinder<char8_t> local_78;
  
  local_78.Fields._0_8_ = *(undefined8 *)param_3;
  local_78.Fields._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_78.Fields._16_8_ = *(undefined8 *)&param_3->field_0x10;
  uVar13 = 0xffffffff;
  local_78.Index = 0;
  puVar8 = param_1;
  pbVar15 = param_4;
  local_78.Format = param_1;
  local_78.It._0_8_ = local_78.Fields._0_8_;
  local_78.It._8_8_ = local_78.Fields._8_8_;
  local_78.It._16_8_ = local_78.Fields._16_8_;
  do {
    pbVar11 = pbVar15 + 1;
    uVar4 = (ulonglong)(byte)~*pbVar15 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar12 = -(int)lVar2 + 9;
    uVar4 = (ulonglong)(0xff >> ((byte)uVar12 & 0x1f) & 0xff) & (ulonglong)*pbVar15;
    switch(-(int)lVar2) {
    case 0:
      pbVar11 = pbVar15 + 2;
    case -1:
      pbVar11 = pbVar11 + 1;
    case -2:
      pbVar11 = pbVar11 + 1;
    case -3:
      uVar4 = (ulonglong)*pbVar11;
      pbVar11 = pbVar11 + 1;
    case -4:
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -7:
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar11;
    }
    uVar3 = (uint)uVar4 & 7;
    pbVar15 = pbVar15 + uVar12;
    iVar9 = (int)(uVar4 >> 3);
    switch(uVar3) {
    case 0:
      return;
    case 2:
      uVar14 = (ulong64)iVar9;
      if (param_2->End < param_2->CurPos + uVar14) {
        TStringBuilderBase<char8_t>::Extend(param_2,uVar14);
      }
      if (iVar9 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy(param_2->CurPos,puVar8,uVar14);
        param_2->CurPos = (uchar *)((longlong)pvVar5 + uVar14);
      }
      break;
    case 3:
      local_b8 = puVar8 + 1;
      iVar10 = iVar9 + -2;
      if (local_b8 == (uchar *)0x0) {
        iVar10 = 0;
        local_b8 = (uchar *)0x0;
      }
      else {
        if ((0 < iVar10) && (local_b8[(longlong)iVar9 + -3] == '\0')) {
          iVar10 = iVar9 + -3;
        }
        if (iVar10 == -1) {
          sVar6 = strlen((char *)local_b8);
          iVar10 = (int)sVar6;
        }
      }
      local_98._12_4_ = uStack_ac;
      local_98.Size = iVar10;
      local_98.DataPtr = local_b8;
      pFVar7 = Logging::Private::TFieldFinder<char8_t>::Find(&local_78,&local_98,(int)uVar13);
      goto LAB_1417941c4;
    case 4:
      local_a8 = puVar8 + 1;
      iVar10 = iVar9 + -2;
      if (local_a8 == (uchar *)0x0) {
        iVar10 = 0;
        local_a8 = (uchar *)0x0;
      }
      else {
        if ((0 < iVar10) && (local_a8[(longlong)iVar9 + -3] == '\0')) {
          iVar10 = iVar9 + -3;
        }
        if (iVar10 == -1) {
          sVar6 = strlen((char *)local_a8);
          iVar10 = (int)sVar6;
        }
      }
      local_98._12_4_ = uStack_9c;
      local_98.Size = iVar10;
      local_98.DataPtr = local_a8;
      pFVar7 = Logging::Private::TFieldFinder<char8_t>::FindByPath
                         (&local_78,&local_88,&local_98,(int)uVar13);
LAB_1417941c4:
      Logging::Private::LogFieldValue<char8_t>(param_2,pFVar7);
      uVar13 = 0xffffffff;
      break;
    case 5:
      uVar13 = uVar4 >> 3 & 0xffffffff;
      break;
    case 6:
      FormatLocalizedTo<char8_t,char8_t>(param_1,param_2,param_3,param_4);
      return;
    }
    iVar10 = 0;
    if (1 < uVar3 - 5) {
      iVar10 = iVar9;
    }
    puVar8 = puVar8 + iVar10;
  } while( true );
}

// FormatTo<char8_t,wchar_t> @ 141794270

void __cdecl
UE::FLogTemplate::FormatTo<char8_t,wchar_t>
          (uchar *param_1,TStringBuilderBase<wchar_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  size_t sVar5;
  FCbFieldView *pFVar6;
  byte *pbVar7;
  uchar *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uchar *local_a8;
  undefined4 uStack_9c;
  uchar *local_98;
  undefined4 uStack_8c;
  TStringView<char8_t> local_88;
  FCbFieldView local_78;
  TFieldFinder<char8_t> local_68;
  
  local_68.Fields._0_8_ = *(undefined8 *)param_3;
  local_68.Fields._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_68.Fields._16_8_ = *(undefined8 *)&param_3->field_0x10;
  uVar13 = 0xffffffff;
  local_68.Index = 0;
  pbVar7 = param_4;
  puVar8 = param_1;
  local_68.Format = param_1;
  local_68.It._0_8_ = local_68.Fields._0_8_;
  local_68.It._8_8_ = local_68.Fields._8_8_;
  local_68.It._16_8_ = local_68.Fields._16_8_;
  do {
    pbVar10 = pbVar7 + 1;
    uVar4 = (ulonglong)(byte)~*pbVar7 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar12 = -(int)lVar2 + 9;
    uVar4 = (ulonglong)(0xff >> ((byte)uVar12 & 0x1f) & 0xff) & (ulonglong)*pbVar7;
    switch(-(int)lVar2) {
    case 0:
      pbVar10 = pbVar7 + 2;
    case -1:
      pbVar10 = pbVar10 + 1;
    case -2:
      pbVar10 = pbVar10 + 1;
    case -3:
      uVar4 = (ulonglong)*pbVar10;
      pbVar10 = pbVar10 + 1;
    case -4:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -7:
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar10;
    }
    uVar3 = (uint)uVar4 & 7;
    pbVar7 = pbVar7 + uVar12;
    iVar11 = (int)(uVar4 >> 3);
    switch(uVar3) {
    case 0:
      return;
    case 2:
      TStringBuilderBase<wchar_t>::Append<char8_t,0>(param_2,puVar8,iVar11);
      break;
    case 3:
      local_a8 = puVar8 + 1;
      iVar9 = iVar11 + -2;
      if (local_a8 == (uchar *)0x0) {
        iVar9 = 0;
        local_a8 = (uchar *)0x0;
      }
      else {
        if ((0 < iVar9) && (local_a8[(longlong)iVar11 + -3] == '\0')) {
          iVar9 = iVar11 + -3;
        }
        if (iVar9 == -1) {
          sVar5 = strlen((char *)local_a8);
          iVar9 = (int)sVar5;
        }
      }
      local_88._12_4_ = uStack_9c;
      local_88.Size = iVar9;
      local_88.DataPtr = local_a8;
      pFVar6 = Logging::Private::TFieldFinder<char8_t>::Find(&local_68,&local_88,(int)uVar13);
      goto LAB_1417944bc;
    case 4:
      local_98 = puVar8 + 1;
      iVar9 = iVar11 + -2;
      if (local_98 == (uchar *)0x0) {
        iVar9 = 0;
        local_98 = (uchar *)0x0;
      }
      else {
        if ((0 < iVar9) && (local_98[(longlong)iVar11 + -3] == '\0')) {
          iVar9 = iVar11 + -3;
        }
        if (iVar9 == -1) {
          sVar5 = strlen((char *)local_98);
          iVar9 = (int)sVar5;
        }
      }
      local_88._12_4_ = uStack_8c;
      local_88.Size = iVar9;
      local_88.DataPtr = local_98;
      pFVar6 = Logging::Private::TFieldFinder<char8_t>::FindByPath
                         (&local_68,&local_78,&local_88,(int)uVar13);
LAB_1417944bc:
      Logging::Private::LogFieldValue<wchar_t>(param_2,pFVar6);
      uVar13 = 0xffffffff;
      break;
    case 5:
      uVar13 = uVar4 >> 3 & 0xffffffff;
      break;
    case 6:
      FormatLocalizedTo<char8_t,wchar_t>(param_1,param_2,param_3,param_4);
      return;
    }
    iVar9 = 0;
    if (1 < uVar3 - 5) {
      iVar9 = iVar11;
    }
    puVar8 = puVar8 + iVar9;
  } while( true );
}

// FormatTo<wchar_t> @ 141794570

void __thiscall
UE::FLogTemplate::FormatTo<wchar_t>
          (FLogTemplate *this,TStringBuilderBase<wchar_t> *param_1,FCbFieldViewIterator *param_2)

{
  if (this->StaticFormatUtf8 != (uchar *)0x0) {
    FormatTo<char8_t,wchar_t>(this->StaticFormatUtf8,param_1,param_2,(uchar *)(this + 1));
    return;
  }
  FormatTo<wchar_t,wchar_t>(this->StaticFormat,param_1,param_2,(uchar *)(this + 1));
  return;
}

// FormatTo<wchar_t,char8_t> @ 1417945a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::FLogTemplate::FormatTo<wchar_t,char8_t>
          (wchar_t *param_1,TStringBuilderBase<char8_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  FCbFieldView *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_138 [32];
  uchar *local_118;
  TStringView<char8_t> local_108;
  uchar *local_f8;
  int iStack_f0;
  uchar *local_e8;
  int iStack_e0;
  TFieldFinder<wchar_t> local_d8;
  FCbFieldView local_98;
  TStringConversion<TStringConvert<wchar_t,char8_t>,32> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8.Fields._0_8_ = *(undefined8 *)param_3;
  local_d8.Fields._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_d8.Fields._16_8_ = *(undefined8 *)&param_3->field_0x10;
  uVar10 = 0xffffffff;
  local_d8.Index = 0;
  pwVar6 = param_1;
  local_118 = param_4;
  local_d8.Format = param_1;
  local_d8.It._0_8_ = local_d8.Fields._0_8_;
  local_d8.It._8_8_ = local_d8.Fields._8_8_;
  local_d8.It._16_8_ = local_d8.Fields._16_8_;
LAB_141794620:
  do {
    pbVar8 = param_4 + 1;
    uVar4 = (ulonglong)(byte)~*param_4 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar9 = -(int)lVar2 + 9;
    uVar4 = (ulonglong)(0xff >> ((byte)uVar9 & 0x1f) & 0xff) & (ulonglong)*param_4;
    switch(-(int)lVar2) {
    case 0:
      pbVar8 = param_4 + 2;
    case -1:
      pbVar8 = pbVar8 + 1;
    case -2:
      pbVar8 = pbVar8 + 1;
    case -3:
      uVar4 = (ulonglong)*pbVar8;
      pbVar8 = pbVar8 + 1;
    case -4:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -7:
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar8;
    }
    uVar3 = (uint)uVar4 & 7;
    iVar7 = (int)(uVar4 >> 3);
    param_4 = param_4 + uVar9;
    switch(uVar3) {
    case 0:
      return;
    default:
      if (uVar3 != 5) goto LAB_141794725;
      goto LAB_14179472a;
    case 2:
      TStringBuilderBase<char8_t>::Append<wchar_t,0>(param_2,pwVar6,iVar7);
      goto LAB_141794725;
    case 3:
      StringCast<char8_t,32,wchar_t>(&local_88,pwVar6 + 1,iVar7 + -2);
      local_f8 = local_88.Ptr;
      iStack_f0 = local_88.StringLength;
      local_108.DataPtr = local_88.Ptr;
      pFVar5 = Logging::Private::TFieldFinder<wchar_t>::Find(&local_d8,&local_108,(int)uVar10);
      break;
    case 4:
      StringCast<char8_t,32,wchar_t>(&local_88,pwVar6 + 1,iVar7 + -2);
      local_e8 = local_88.Ptr;
      iStack_e0 = local_88.StringLength;
      local_108.DataPtr = local_88.Ptr;
      pFVar5 = Logging::Private::TFieldFinder<wchar_t>::FindByPath
                         (&local_d8,&local_98,&local_108,(int)uVar10);
      break;
    case 5:
      goto switchD_14179470a_caseD_5;
    case 6:
      FormatLocalizedTo<wchar_t,char8_t>(param_1,param_2,param_3,local_118);
      return;
    }
    Logging::Private::LogFieldValue<char8_t>(param_2,pFVar5);
    uVar10 = 0xffffffff;
    if ((void *)local_88._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_88._padding_);
    }
LAB_141794725:
    if (uVar3 == 6) {
LAB_14179472a:
      iVar7 = 0;
    }
    pwVar6 = pwVar6 + iVar7;
  } while( true );
switchD_14179470a_caseD_5:
  uVar10 = uVar4 >> 3 & 0xffffffff;
  goto LAB_141794620;
}

// FormatTo<wchar_t,wchar_t> @ 1417948a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::FLogTemplate::FormatTo<wchar_t,wchar_t>
          (wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2,FCbFieldViewIterator *param_3,
          uchar *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  FCbFieldView *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_138 [32];
  uchar *local_118;
  TStringView<char8_t> local_108;
  uchar *local_f8;
  int iStack_f0;
  uchar *local_e8;
  int iStack_e0;
  TFieldFinder<wchar_t> local_d8;
  FCbFieldView local_98;
  TStringConversion<TStringConvert<wchar_t,char8_t>,32> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8.Fields._0_8_ = *(undefined8 *)param_3;
  local_d8.Fields._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_d8.Fields._16_8_ = *(undefined8 *)&param_3->field_0x10;
  uVar10 = 0xffffffff;
  local_d8.Index = 0;
  pwVar6 = param_1;
  local_118 = param_4;
  local_d8.Format = param_1;
  local_d8.It._0_8_ = local_d8.Fields._0_8_;
  local_d8.It._8_8_ = local_d8.Fields._8_8_;
  local_d8.It._16_8_ = local_d8.Fields._16_8_;
LAB_141794920:
  do {
    pbVar8 = param_4 + 1;
    uVar4 = (ulonglong)(byte)~*param_4 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar9 = -(int)lVar2 + 9;
    uVar4 = (ulonglong)(0xff >> ((byte)uVar9 & 0x1f) & 0xff) & (ulonglong)*param_4;
    switch(-(int)lVar2) {
    case 0:
      pbVar8 = param_4 + 2;
    case -1:
      pbVar8 = pbVar8 + 1;
    case -2:
      pbVar8 = pbVar8 + 1;
    case -3:
      uVar4 = (ulonglong)*pbVar8;
      pbVar8 = pbVar8 + 1;
    case -4:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -7:
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar8;
    }
    uVar3 = (uint)uVar4 & 7;
    iVar7 = (int)(uVar4 >> 3);
    param_4 = param_4 + uVar9;
    switch(uVar3) {
    case 0:
      return;
    default:
      if (uVar3 != 5) goto LAB_141794a25;
      goto LAB_141794a2a;
    case 2:
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar6,iVar7);
      goto LAB_141794a25;
    case 3:
      StringCast<char8_t,32,wchar_t>(&local_88,pwVar6 + 1,iVar7 + -2);
      local_f8 = local_88.Ptr;
      iStack_f0 = local_88.StringLength;
      local_108.DataPtr = local_88.Ptr;
      pFVar5 = Logging::Private::TFieldFinder<wchar_t>::Find(&local_d8,&local_108,(int)uVar10);
      break;
    case 4:
      StringCast<char8_t,32,wchar_t>(&local_88,pwVar6 + 1,iVar7 + -2);
      local_e8 = local_88.Ptr;
      iStack_e0 = local_88.StringLength;
      local_108.DataPtr = local_88.Ptr;
      pFVar5 = Logging::Private::TFieldFinder<wchar_t>::FindByPath
                         (&local_d8,&local_98,&local_108,(int)uVar10);
      break;
    case 5:
      goto switchD_141794a0a_caseD_5;
    case 6:
      FormatLocalizedTo<wchar_t,wchar_t>(param_1,param_2,param_3,local_118);
      return;
    }
    Logging::Private::LogFieldValue<wchar_t>(param_2,pFVar5);
    uVar10 = 0xffffffff;
    if ((void *)local_88._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_88._padding_);
    }
LAB_141794a25:
    if (uVar3 == 6) {
LAB_141794a2a:
      iVar7 = 0;
    }
    pwVar6 = pwVar6 + iVar7;
  } while( true );
switchD_141794a0a_caseD_5:
  uVar10 = uVar4 >> 3 & 0xffffffff;
  goto LAB_141794920;
}

// Destroy @ 1417c3570

void __cdecl UE::FLogTemplate::Destroy(FLogTemplate *param_1)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  FLocalizedLogFormatTable *this_00;
  bool bVar2;
  FLogTemplate *local_res10;
  FLogTemplateOp local_res18;
  
  local_res10 = param_1 + 1;
  local_res18 = Logging::Private::FLogTemplateOp::Load((uchar **)&local_res10);
  if (local_res18.Code == OpLocalized) {
    this_00 = Logging::Private::GetLocalizedLogFormatTable();
    this = &this_00->Mutex;
    LOCK();
    bVar2 = this->State == (atomic<unsigned_char>)0x0;
    if (bVar2) {
      this->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar2) {
      FMutex::LockSlow(this);
    }
    TSparseArray<FTextFormat,FDefaultSparseArrayAllocator>::RemoveAt
              (&this_00->Table,local_res18.Value,1);
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this);
    }
  }
  return;
}

// FormatLocalizedToText @ 1417cf3e0

FText * __thiscall
UE::FLogTemplate::FormatLocalizedToText
          (FLogTemplate *this,FText *__return_storage_ptr__,FCbFieldViewIterator *param_1)

{
  if (this->StaticFormatUtf8 != (uchar *)0x0) {
    FormatLocalizedToText<char8_t>
              (__return_storage_ptr__,this->StaticFormatUtf8,param_1,(uchar *)(this + 1));
    return __return_storage_ptr__;
  }
  FormatLocalizedToText<wchar_t>
            (__return_storage_ptr__,this->StaticFormat,param_1,(uchar *)(this + 1));
  return __return_storage_ptr__;
}

// FormatToText @ 1417cf5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
UE::FLogTemplate::FormatToText
          (FLogTemplate *this,FText *__return_storage_ptr__,FCbFieldViewIterator *param_1)

{
  FLogTemplate *pFVar1;
  uchar *puVar2;
  FLogTemplateOp FVar3;
  undefined1 auStack_488 [32];
  TStringView<wchar_t> local_468;
  FLogTemplate *local_458 [2];
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  pFVar1 = this + 1;
  local_458[0] = pFVar1;
  FVar3 = Logging::Private::FLogTemplateOp::Load((uchar **)local_458);
  puVar2 = this->StaticFormatUtf8;
  if (FVar3.Code == OpLocalized) {
    if (puVar2 == (uchar *)0x0) {
      FormatLocalizedToText<wchar_t>
                (__return_storage_ptr__,this->StaticFormat,param_1,(uchar *)pFVar1);
    }
    else {
      FormatLocalizedToText<char8_t>(__return_storage_ptr__,puVar2,param_1,(uchar *)pFVar1);
    }
  }
  else {
    local_448.bIsDynamic = false;
    local_448.bIsExternal = false;
    local_448.Base = local_428;
    local_448.CurPos = local_428;
    local_448.End = (wchar_t *)local_28;
    if (puVar2 == (uchar *)0x0) {
      FormatTo<wchar_t,wchar_t>(this->StaticFormat,&local_448,param_1,(uchar *)pFVar1);
    }
    else {
      FormatTo<char8_t,wchar_t>(puVar2,&local_448,param_1,(uchar *)pFVar1);
    }
    local_468.Size = (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1);
    local_468.DataPtr = local_448.Base;
    FText::FromStringView(__return_storage_ptr__,&local_468);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  }
  return __return_storage_ptr__;
}

