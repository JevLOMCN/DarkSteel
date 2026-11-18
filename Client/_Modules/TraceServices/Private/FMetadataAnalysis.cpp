// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FMetadataAnalysis @ 14d3cc9a0

FMetadataAnalysis * __thiscall
TraceServices::FMetadataAnalysis::FMetadataAnalysis
          (FMetadataAnalysis *this,IAnalysisSession *param_1,FMetadataProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FMetadataAnalysis_TraceServices__6B_;
  *(undefined8 *)&this->EncounteredMetadataTypes = 0;
  *(undefined8 *)&(this->EncounteredMetadataTypes).field_0x8 = 0;
  *(undefined8 *)&(this->EncounteredMetadataTypes).field_0x20 = 0;
  this->MetadataProvider = param_2;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x28 = 0;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x34 = 0;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EncounteredMetadataTypes).field_0x40 = 0;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x48 = 0;
  return this;
}

// ~FMetadataAnalysis @ 14d3d0e60

void __thiscall TraceServices::FMetadataAnalysis::~FMetadataAnalysis(FMetadataAnalysis *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FMetadataAnalysis_TraceServices__6B_;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EncounteredMetadataTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EncounteredMetadataTypes);
  return;
}

// GetOrRegisterType @ 14d3e17b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort __thiscall
TraceServices::FMetadataAnalysis::GetOrRegisterType(FMetadataAnalysis *this,FEventTypeInfo *param_1)

{
  FName FVar1;
  FMetadataProvider *pFVar2;
  code *pcVar3;
  wchar_t wVar4;
  ForAnyElementType FVar5;
  byte bVar6;
  uchar uVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  EType EVar12;
  FEventFieldInfo *this_00;
  char *pcVar13;
  size_t sVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  FName *pFVar17;
  uint *puVar18;
  uint uVar19;
  FScriptContainerElement FVar20;
  byte bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ForAnyElementType FVar25;
  TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
  *this_01;
  ForAnyElementType FVar26;
  undefined1 auStackY_3a8 [32];
  wchar_t local_368 [2];
  uint local_364;
  ForAnyElementType local_360;
  byte local_358 [8];
  uint local_350 [2];
  FMetadataAnalysis *local_348;
  TPairInitializer<unsigned_int_&&,unsigned_short_&> local_340;
  code *local_330;
  FEventTypeInfo *local_328;
  TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
  *local_320;
  uint *local_318;
  wchar_t *local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298 [2];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  this_01 = (TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
             *)&this->EncounteredMetadataTypes;
  local_348 = this;
  local_328 = param_1;
  local_320 = this_01;
  uVar10 = UE::Trace::IAnalyzer::FEventTypeInfo::GetId(param_1);
  FVar25.Data = (FScriptContainerElement *)0x0;
  if (*(int *)&(this->EncounteredMetadataTypes).field_0x8 !=
      *(int *)&(this->EncounteredMetadataTypes).field_0x34) {
    puVar24 = *(undefined1 **)&(this->EncounteredMetadataTypes).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->EncounteredMetadataTypes).field_0x38;
    }
    uVar19 = *(uint *)(puVar24 +
                      (ulonglong)
                      (*(int *)&(this->EncounteredMetadataTypes).field_0x48 - 1U & uVar10) * 4);
    if (uVar19 != 0xffffffff) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar19 * 0x10 +
                          *(longlong *)
                           &((TMap<unsigned_int,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>_>
                              *)this_01)->field_0x0);
        if (*puVar18 == uVar10) {
          pFVar15 = (FScriptContainerElement *)(puVar18 + 1);
          if (puVar18 == (uint *)0x0) {
            pFVar15 = FVar25.Data;
          }
          if (pFVar15 != (FScriptContainerElement *)0x0) {
            return *(wchar_t *)pFVar15;
          }
          break;
        }
        uVar19 = puVar18[2];
      } while (uVar19 != 0xffffffff);
    }
  }
  uVar10 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(param_1);
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358[0] = 0;
  local_358[1] = 0;
  local_358[2] = 0;
  local_358[3] = 0;
  local_358[4] = 0;
  local_358[5] = 0;
  local_358[6] = 0;
  local_358[7] = 0;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0xc,4,uVar10 & 0xff,&local_360,(int *)local_358,(int *)(local_358 + 4));
  memset(local_360.Data + (longlong)iVar11 * 0xc,0,(ulonglong)(uVar10 & 0xff) * 0xc);
  FVar5.Data = local_360.Data;
  bVar6 = local_358[0];
  FVar20 = (FScriptContainerElement)0x0;
  local_364 = 0;
  uVar10 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(param_1);
  pFVar15 = FVar25.Data;
  uVar22 = 0;
  if (uVar10 != 0) {
    do {
      this_00 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldInfo(param_1,(uint)pFVar15);
      local_340.Value = (ushort *)this->Session;
      local_330 = *(code **)((longlong)*(IAnalysisSession *)local_340.Value + 0xd0);
      pcVar13 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_00);
      local_188.Data = (FScriptContainerElement *)0x0;
      if (pcVar13 == (char *)0x0) {
        local_178 = 0;
        local_180 = (FScriptContainerElement *)0x0;
      }
      else {
        sVar14 = strlen(pcVar13);
        local_178 = (int)sVar14;
        uVar10 = local_178 + 1;
        FVar26.Data = FVar25.Data;
        if (0x80 < uVar10) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar10,2);
          FVar26.Data = local_188.Data;
        }
        local_180 = local_288;
        if (FVar26.Data != (FScriptContainerElement *)0x0) {
          local_180 = FVar26.Data;
        }
        TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_180,uVar10,pcVar13,uVar10);
      }
      pwVar16 = (wchar_t *)(*local_330)(local_340.Value);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      uVar7 = UE::Trace::IAnalyzer::FEventFieldInfo::GetSize(this_00);
      EVar12 = UE::Trace::IAnalyzer::FEventFieldInfo::GetType(this_00);
      bVar21 = (byte)uVar22;
      uVar23 = uVar22;
      switch(EVar12) {
      case Integer:
        bVar8 = UE::Trace::IAnalyzer::FEventFieldInfo::IsSigned(this_00);
        if (bVar8) {
          if (uVar7 == '\x01') {
            pFVar17 = ::FName::FName(&local_308,pwVar16);
            FVar1 = *pFVar17;
            if ((bVar6 <= bVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentFieldCount < MaxFieldCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                   ,0x30,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return uVar9;
            }
            uVar23 = (ulonglong)(byte)(bVar21 + 1);
            FVar5.Data[uVar22 * 0xc + 9] = FVar20;
            FVar20 = (FScriptContainerElement)((char)FVar20 + '\x01');
            *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
            FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x1;
            FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x1;
          }
          else if (uVar7 == '\x02') {
            pFVar17 = ::FName::FName(&local_300,pwVar16);
            FVar1 = *pFVar17;
            if ((bVar6 <= bVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentFieldCount < MaxFieldCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                   ,0x30,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return uVar9;
            }
            uVar23 = (ulonglong)(byte)(bVar21 + 1);
            FVar5.Data[uVar22 * 0xc + 9] = FVar20;
            FVar20 = (FScriptContainerElement)((char)FVar20 + '\x02');
            *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
            FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x1;
            FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x2;
          }
          else if (uVar7 == '\x04') {
            pFVar17 = ::FName::FName(&local_2f8,pwVar16);
            FVar1 = *pFVar17;
            if ((bVar6 <= bVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentFieldCount < MaxFieldCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                   ,0x30,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return uVar9;
            }
            uVar23 = (ulonglong)(byte)(bVar21 + 1);
            FVar5.Data[uVar22 * 0xc + 9] = FVar20;
            FVar20 = (FScriptContainerElement)((char)FVar20 + '\x04');
            *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
            FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x1;
            FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x4;
          }
          else {
            if (uVar7 == '\b') {
              pFVar17 = ::FName::FName(&local_2f0,pwVar16);
              FVar1 = *pFVar17;
              if ((bVar6 <= bVar21) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CurrentFieldCount < MaxFieldCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                     ,0x30,L""), bVar8)) {
                pcVar3 = (code *)swi(3);
                uVar9 = (*pcVar3)();
                return uVar9;
              }
              *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
              FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x1;
              goto LAB_14d3e1f01;
            }
            iVar11 = 0xa5;
LAB_14d3e1f9e:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                               ,iVar11,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return uVar9;
            }
          }
        }
        else if (uVar7 == '\x01') {
          pFVar17 = ::FName::FName(&local_2e8,pwVar16);
          FVar1 = *pFVar17;
          if ((bVar6 <= bVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentFieldCount < MaxFieldCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                 ,0x30,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          uVar23 = (ulonglong)(byte)(bVar21 + 1);
          FVar5.Data[uVar22 * 0xc + 9] = FVar20;
          FVar20 = (FScriptContainerElement)((char)FVar20 + '\x01');
          *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
          FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x0;
          FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x1;
        }
        else if (uVar7 == '\x02') {
          pFVar17 = ::FName::FName(&local_2e0,pwVar16);
          FVar1 = *pFVar17;
          if ((bVar6 <= bVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentFieldCount < MaxFieldCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                 ,0x30,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          uVar23 = (ulonglong)(byte)(bVar21 + 1);
          FVar5.Data[uVar22 * 0xc + 9] = FVar20;
          FVar20 = (FScriptContainerElement)((char)FVar20 + '\x02');
          *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
          FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x0;
          FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x2;
        }
        else {
          if (uVar7 != '\x04') {
            if (uVar7 != '\b') {
              iVar11 = 0xae;
              goto LAB_14d3e1f9e;
            }
            pFVar17 = ::FName::FName(&local_2d0,pwVar16);
            FVar1 = *pFVar17;
            if ((bVar6 <= bVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentFieldCount < MaxFieldCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                   ,0x30,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return uVar9;
            }
            *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
            FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x0;
            goto LAB_14d3e1f01;
          }
          pFVar17 = ::FName::FName(&local_2d8,pwVar16);
          FVar1 = *pFVar17;
          if ((bVar6 <= bVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentFieldCount < MaxFieldCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                 ,0x30,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          uVar23 = (ulonglong)(byte)(bVar21 + 1);
          FVar5.Data[uVar22 * 0xc + 9] = FVar20;
          FVar20 = (FScriptContainerElement)((char)FVar20 + '\x04');
          *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
          FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x0;
          FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x4;
        }
        break;
      case Float:
        if (uVar7 == '\x04') {
          pFVar17 = ::FName::FName(&local_2c8,pwVar16);
          FVar1 = *pFVar17;
          if ((bVar6 <= bVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentFieldCount < MaxFieldCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                 ,0x30,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          FVar5.Data[uVar22 * 0xc + 9] = FVar20;
          FVar20 = (FScriptContainerElement)((char)FVar20 + '\x04');
          *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
          FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x2;
          FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x4;
          uVar23 = (ulonglong)(byte)(bVar21 + 1);
        }
        else if (uVar7 == '\b') {
          pFVar17 = ::FName::FName(&local_2c0,pwVar16);
          FVar1 = *pFVar17;
          if ((bVar6 <= bVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentFieldCount < MaxFieldCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                 ,0x30,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
          FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x2;
          goto LAB_14d3e1f01;
        }
        break;
      case AnsiString:
      case WideString:
        pFVar17 = ::FName::FName(&local_2b8,pwVar16);
        FVar1 = *pFVar17;
        if ((bVar6 <= bVar21) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentFieldCount < MaxFieldCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                               ,0x30,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return uVar9;
        }
        *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
        FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x3;
        goto LAB_14d3e1f01;
      case Reference8:
      case Reference16:
      case Reference32:
      case Reference64:
        if (uVar7 == '\x01') {
          pFVar17 = &local_2b0;
        }
        else {
          pFVar17 = &local_2a8;
          if (uVar7 != '\x02') {
            if (uVar7 != '\x04') {
              if (uVar7 != '\b') {
                iVar11 = 0xcf;
                goto LAB_14d3e1f9e;
              }
              pFVar17 = ::FName::FName(local_298,pwVar16);
              FVar1 = *pFVar17;
              if ((bVar6 <= bVar21) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CurrentFieldCount < MaxFieldCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                                     ,0x30,L""), bVar8)) {
                pcVar3 = (code *)swi(3);
                uVar9 = (*pcVar3)();
                return uVar9;
              }
              FVar5.Data[uVar22 * 0xc + 9] = FVar20;
              FVar20 = (FScriptContainerElement)((char)FVar20 + '\x10');
              *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
              FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x4;
              FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x10;
              uVar23 = (ulonglong)(byte)(bVar21 + 1);
              break;
            }
            pFVar17 = &local_2a0;
          }
        }
        pFVar17 = ::FName::FName(pFVar17,pwVar16);
        FVar1 = *pFVar17;
        if ((bVar6 <= bVar21) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentFieldCount < MaxFieldCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                               ,0x30,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return uVar9;
        }
        *(FName *)(FVar5.Data + uVar22 * 0xc) = FVar1;
        FVar5.Data[uVar22 * 0xc + 8] = (FScriptContainerElement)0x4;
LAB_14d3e1f01:
        FVar5.Data[uVar22 * 0xc + 9] = FVar20;
        FVar20 = (FScriptContainerElement)((char)FVar20 + '\b');
        FVar5.Data[uVar22 * 0xc + 10] = (FScriptContainerElement)0x8;
        uVar23 = (ulonglong)(byte)(bVar21 + 1);
      }
      param_1 = local_328;
      uVar19 = local_364 + 1;
      pFVar15 = (FScriptContainerElement *)(ulonglong)uVar19;
      local_364 = uVar19;
      uVar10 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(local_328);
      uVar22 = uVar23;
      this_01 = local_320;
      this = local_348;
    } while (uVar19 < uVar10);
  }
  pFVar2 = this->MetadataProvider;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x20);
  pcVar13 = UE::Trace::IAnalyzer::FEventTypeInfo::GetName(param_1);
  local_68.Data = (FScriptContainerElement *)0x0;
  if (pcVar13 == (char *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  else {
    sVar14 = strlen(pcVar13);
    local_58 = (int)sVar14;
    uVar10 = local_58 + 1;
    if (0x80 < uVar10) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar10,2);
      FVar25.Data = local_68.Data;
    }
    local_60 = local_168;
    if (FVar25.Data != (FScriptContainerElement *)0x0) {
      local_60 = FVar25.Data;
    }
    TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_60,uVar10,pcVar13,uVar10);
  }
  local_368[0] = (*pcVar3)(&pFVar2->_padding_,local_60,&local_360);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_350[0] = UE::Trace::IAnalyzer::FEventTypeInfo::GetId(param_1);
  local_318 = local_350;
  local_310 = local_368;
  TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_short_&>_>
            (this_01,&local_340,(bool *)&local_318);
  wVar4 = local_368[0];
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  return wVar4;
}

// OnAnalysisBegin @ 14d3e8c90

void __thiscall
TraceServices::FMetadataAnalysis::OnAnalysisBegin
          (FMetadataAnalysis *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"MetadataStack","ClearScope",1);
  (**(code **)*pFVar1)(pFVar1,1,"MetadataStack","SaveStack",0);
  (**(code **)*pFVar1)(pFVar1,2,"MetadataStack","RestoreStack",1);
                    /* WARNING: Could not recover jumptable at 0x00014d3e8d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pFVar1 + 8))(pFVar1,3,"Metadata",1);
  return;
}

// OnAnalysisEnd @ 14d3eaa40

void __thiscall TraceServices::FMetadataAnalysis::OnAnalysisEnd(FMetadataAnalysis *this)

{
  FMetadataProvider *pFVar1;
  
  pFVar1 = this->MetadataProvider;
  (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
  (**(code **)(this->MetadataProvider->_padding_ + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00014d3eaa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  return;
}

// OnEvent @ 14d3f3280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FMetadataAnalysis::OnEvent
          (FMetadataAnalysis *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FMetadataProvider *pFVar1;
  FEventData *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  FEventTypeInfo *pFVar8;
  longlong *plVar9;
  ForElementType<unsigned_char> FVar10;
  undefined1 auStackY_98 [32];
  TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->MetadataProvider;
  (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
  if (param_1 == 0) {
    uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    if (param_2 == EnterScope) {
      plVar9 = &this->MetadataProvider->_padding_;
      (**(code **)(*plVar9 + 0x38))(plVar9,uVar6);
    }
    else if (param_2 == LeaveScope) {
      plVar9 = &this->MetadataProvider->_padding_;
      (**(code **)(*plVar9 + 0x40))(plVar9,uVar6);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7799157119109824585>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                         ,0x49,"Style == EStyle::LeaveScope");
      if (bVar3) goto code_r0x00014d3f351b;
    }
  }
  else if (param_1 == 1) {
    uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Id",0);
    plVar9 = &this->MetadataProvider->_padding_;
    (**(code **)(*plVar9 + 0x48))(plVar9,uVar6,uVar7);
  }
  else if (param_1 == 2) {
    uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    if (param_2 == EnterScope) {
      uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Id",0);
      plVar9 = &this->MetadataProvider->_padding_;
      (**(code **)(*plVar9 + 0x50))(plVar9,uVar6,uVar7);
    }
    else if (param_2 == LeaveScope) {
      plVar9 = &this->MetadataProvider->_padding_;
      (**(code **)(*plVar9 + 0x58))(plVar9,uVar6);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7799157119109824608>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                         ,0x60,"Style == EStyle::LeaveScope");
      if (bVar3) {
code_r0x00014d3f351b:
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  else if (param_1 == 3) {
    this_00 = param_3->EventData;
    pFVar8 = UE::Trace::IAnalyzer::FEventData::GetTypeInfo(this_00);
    uVar5 = GetOrRegisterType(this,pFVar8);
    uVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    if (param_2 == EnterScope) {
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0x20;
      WriteData<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_68,this_00,uVar5,this->MetadataProvider,this->Session);
      plVar9 = &this->MetadataProvider->_padding_;
      FVar10 = (ForElementType<unsigned_char>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
        FVar10 = local_68.AllocatorInstance.SecondaryData;
      }
      (**(code **)(*plVar9 + 0x28))(plVar9,uVar6,uVar5,FVar10);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    else if (param_2 == LeaveScope) {
      plVar9 = &this->MetadataProvider->_padding_;
      (**(code **)(*plVar9 + 0x30))(plVar9,uVar6,uVar5);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7799157119109824634>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                         ,0x7a,"Style == EStyle::LeaveScope");
      if (bVar3) goto code_r0x00014d3f351b;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                       ,0x82,L"Invalid route.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  return true;
}

