// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticStruct @ 14b5b8890

UScriptStruct * __cdecl FDS_TextFormatArg::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_TextFormatArg.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_TextFormatArg.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_TextFormatArg,(UObject *)pUVar1,
                         L"DS_TextFormatArg");
  }
  return Z_Registration_Info_UScriptStruct_FDS_TextFormatArg.OuterSingleton;
}

// FDS_TextFormatArg<FDS_StringWorldID_const_&> @ 14b7caad0

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringWorldID_const_&>
          (FDS_TextFormatArg *this,FDS_StringWorldID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringWorldIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringWorldID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringWorldIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<int_const_&> @ 14b8a5c90

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<int_const_&>(FDS_TextFormatArg *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FNumberFormattingOptions *pFVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  FDS_TextFormatArg *pFVar12;
  UScriptStruct *pUVar13;
  uint uVar14;
  uint uVar15;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar9 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar8 = pFVar9->UseGrouping;
  bVar3 = pFVar9->IndicateNearlyInteger;
  uVar4 = pFVar9->field_0x3;
  EVar5 = pFVar9->RoundingMode;
  iVar6 = pFVar9->MinimumIntegralDigits;
  iVar7 = pFVar9->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar9->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = pFVar9->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar10 = FDS_Int32StringFormatArg::StaticStruct();
  if (pUVar10 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar11 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar15 = (uint)*(short *)((longlong)&pUVar10->_padding_ + 4);
    uVar14 = (int)pUVar10->_padding_ + -1 + uVar15 & -uVar15;
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    puVar11 = FMemory::Malloc((longlong)(int)uVar14,uVar15);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar10;
    (this->Arg).StructMemory = puVar11;
  }
  if (puVar11 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar12;
    }
  }
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  piVar1 = (int *)(this->Arg).StructMemory;
  if ((piVar1 != (int *)0x0) &&
     (pUVar10 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar10 != (UScriptStruct *)0x0)) {
    pUVar13 = FDS_Int32StringFormatArg::StaticStruct();
    if (pUVar13 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar13->_padding_;
      if (((int)pUVar10->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *piVar1 = *param_1;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FDS_StringBaseID_const_&> @ 14b8a5dc0

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
          (FDS_TextFormatArg *this,FDS_StringBaseID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringBaseIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringBaseID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringBaseIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FString_const_&> @ 14b8a5ef0

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FString_const_&>(FDS_TextFormatArg *this,FString *param_1)

{
  FString *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
    if (*(void **)puVar10 != (void *)0x0) {
      FMemory::Free(*(void **)puVar10);
    }
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[0] = '\0';
  puVar10[1] = '\0';
  puVar10[2] = '\0';
  puVar10[3] = '\0';
  puVar10[4] = '\0';
  puVar10[5] = '\0';
  puVar10[6] = '\0';
  puVar10[7] = '\0';
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  this_00 = (FString *)(this->Arg).StructMemory;
  if ((this_00 != (FString *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        ::FString::operator=(this_00,param_1);
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FDS_StringBaseID_&> @ 14ba247f0

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_&>
          (FDS_TextFormatArg *this,FDS_StringBaseID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringBaseIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringBaseID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringBaseIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// SetArg<FDS_Text_&> @ 14baeaa00

void __thiscall FDS_TextFormatArg::SetArg<FDS_Text_&>(FDS_TextFormatArg *this,FDS_Text *param_1)

{
  int iVar1;
  FDS_Text *this_00;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  uchar *puVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  uint uVar8;
  
  pUVar4 = FDS_DSTextFormatArg::StaticStruct();
  if (pUVar4 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar5 = (this->Arg).StructMemory;
    DestructItems<FDS_TextFormatArg,int>
              (*(FDS_TextFormatArg **)(puVar5 + 0x40),*(int *)(puVar5 + 0x48));
    if (*(void **)(puVar5 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar5 + 0x40));
    }
    if (*(void **)(puVar5 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar5 + 0x30));
    }
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar8 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar7 = (int)pUVar4->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    puVar5 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->Arg).StructMemory = puVar5;
  }
  if (puVar5 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5[0x2d] = '\0';
  puVar5[0x2e] = '\0';
  puVar5[0x2f] = '\0';
  *puVar5 = '\0';
  puVar5[8] = '\0';
  puVar5[9] = '\0';
  puVar5[10] = '\0';
  puVar5[0xb] = '\0';
  puVar5[0xc] = '\0';
  puVar5[0xd] = '\0';
  puVar5[0xe] = '\0';
  puVar5[0xf] = '\0';
  puVar5[0x10] = '\0';
  puVar5[0x11] = '\0';
  puVar5[0x12] = '\0';
  puVar5[0x13] = '\0';
  puVar5[0x14] = '\0';
  puVar5[0x15] = '\0';
  puVar5[0x16] = '\0';
  puVar5[0x17] = '\0';
  puVar5[0x18] = '\0';
  puVar5[0x19] = '\0';
  puVar5[0x1a] = '\0';
  puVar5[0x1b] = '\0';
  puVar5[0x1c] = '\0';
  puVar5[0x1d] = '\0';
  puVar5[0x1e] = '\0';
  puVar5[0x1f] = '\0';
  puVar5[0x20] = '\0';
  puVar5[0x21] = '\0';
  puVar5[0x22] = '\0';
  puVar5[0x23] = '\0';
  puVar5[0x24] = '\0';
  puVar5[0x25] = '\0';
  puVar5[0x26] = '\0';
  puVar5[0x27] = '\0';
  puVar5[0x28] = '\0';
  puVar5[0x29] = '\0';
  puVar5[0x2a] = '\0';
  puVar5[0x2b] = '\0';
  puVar5[0x2c] = '\0';
  puVar5[0x30] = '\0';
  puVar5[0x31] = '\0';
  puVar5[0x32] = '\0';
  puVar5[0x33] = '\0';
  puVar5[0x34] = '\0';
  puVar5[0x35] = '\0';
  puVar5[0x36] = '\0';
  puVar5[0x37] = '\0';
  puVar5[0x38] = '\0';
  puVar5[0x39] = '\0';
  puVar5[0x3a] = '\0';
  puVar5[0x3b] = '\0';
  puVar5[0x3c] = '\0';
  puVar5[0x3d] = '\0';
  puVar5[0x3e] = '\0';
  puVar5[0x3f] = '\0';
  puVar5[0x40] = '\0';
  puVar5[0x41] = '\0';
  puVar5[0x42] = '\0';
  puVar5[0x43] = '\0';
  puVar5[0x44] = '\0';
  puVar5[0x45] = '\0';
  puVar5[0x46] = '\0';
  puVar5[0x47] = '\0';
  puVar5[0x48] = '\0';
  puVar5[0x49] = '\0';
  puVar5[0x4a] = '\0';
  puVar5[0x4b] = '\0';
  puVar5[0x4c] = '\0';
  puVar5[0x4d] = '\0';
  puVar5[0x4e] = '\0';
  puVar5[0x4f] = '\0';
  this_00 = (FDS_Text *)(this->Arg).StructMemory;
  if ((this_00 != (FDS_Text *)0x0) &&
     (pUVar4 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0)) {
    pUVar6 = FDS_DSTextFormatArg::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FDS_Text::operator=(this_00,param_1);
      }
    }
  }
  return;
}

// ~FDS_TextFormatArg @ 14bc84ba0

void __thiscall FDS_TextFormatArg::~FDS_TextFormatArg(FDS_TextFormatArg *this)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = (this->Arg).StructMemory;
  if (puVar1 != (uchar *)0x0) {
    pUVar2 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr;
    if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
      pUVar2 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,(this->Arg).StructMemory,1);
    }
    FMemory::Free(puVar1);
    (this->Arg).StructMemory = (uchar *)0x0;
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    return;
  }
  (this->Arg).StructMemory = (uchar *)0x0;
  (this->Arg).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return;
}

// FDS_TextFormatArg<__int64_&> @ 14bcd0540

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<__int64_&>(FDS_TextFormatArg *this,long64 *param_1)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FNumberFormattingOptions *pFVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  FDS_TextFormatArg *pFVar12;
  UScriptStruct *pUVar13;
  uint uVar14;
  uint uVar15;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar9 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar8 = pFVar9->UseGrouping;
  bVar3 = pFVar9->IndicateNearlyInteger;
  uVar4 = pFVar9->field_0x3;
  EVar5 = pFVar9->RoundingMode;
  iVar6 = pFVar9->MinimumIntegralDigits;
  iVar7 = pFVar9->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar9->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = pFVar9->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar10 = FDS_Int64StringFormatArg::StaticStruct();
  if (pUVar10 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar11 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar15 = (uint)*(short *)((longlong)&pUVar10->_padding_ + 4);
    uVar14 = (int)pUVar10->_padding_ + -1 + uVar15 & -uVar15;
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    puVar11 = FMemory::Malloc((longlong)(int)uVar14,uVar15);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar10;
    (this->Arg).StructMemory = puVar11;
  }
  if (puVar11 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar12;
    }
  }
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  plVar1 = (long64 *)(this->Arg).StructMemory;
  if ((plVar1 != (long64 *)0x0) &&
     (pUVar10 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar10 != (UScriptStruct *)0x0)) {
    pUVar13 = FDS_Int64StringFormatArg::StaticStruct();
    if (pUVar13 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar13->_padding_;
      if (((int)pUVar10->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *plVar1 = *param_1;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<float_const_&> @ 14bcd0670

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<float_const_&>
          (FDS_TextFormatArg *this,float *param_1,FNumberFormattingOptions *param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  bVar8 = param_2->UseGrouping;
  bVar3 = param_2->IndicateNearlyInteger;
  uVar4 = param_2->field_0x3;
  EVar5 = param_2->RoundingMode;
  iVar6 = param_2->MinimumIntegralDigits;
  iVar7 = param_2->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = param_2->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = param_2->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = param_2->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar9 = FDS_FloatStringFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar11;
    }
  }
  puVar10[0] = '\0';
  puVar10[1] = '\0';
  puVar10[2] = '\0';
  puVar10[3] = '\0';
  pfVar1 = (float *)(this->Arg).StructMemory;
  if ((pfVar1 != (float *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_FloatStringFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *pfVar1 = *param_1;
      }
    }
  }
  return this;
}

// SetArg<FDS_Text_const_&> @ 14bcdf7b0

void __thiscall
FDS_TextFormatArg::SetArg<FDS_Text_const_&>(FDS_TextFormatArg *this,FDS_Text *param_1)

{
  int iVar1;
  FDS_Text *this_00;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  uchar *puVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  uint uVar8;
  
  pUVar4 = FDS_DSTextFormatArg::StaticStruct();
  if (pUVar4 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar5 = (this->Arg).StructMemory;
    DestructItems<FDS_TextFormatArg,int>
              (*(FDS_TextFormatArg **)(puVar5 + 0x40),*(int *)(puVar5 + 0x48));
    if (*(void **)(puVar5 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar5 + 0x40));
    }
    if (*(void **)(puVar5 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar5 + 0x30));
    }
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar8 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar7 = (int)pUVar4->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    puVar5 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->Arg).StructMemory = puVar5;
  }
  if (puVar5 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5[0x2d] = '\0';
  puVar5[0x2e] = '\0';
  puVar5[0x2f] = '\0';
  *puVar5 = '\0';
  puVar5[8] = '\0';
  puVar5[9] = '\0';
  puVar5[10] = '\0';
  puVar5[0xb] = '\0';
  puVar5[0xc] = '\0';
  puVar5[0xd] = '\0';
  puVar5[0xe] = '\0';
  puVar5[0xf] = '\0';
  puVar5[0x10] = '\0';
  puVar5[0x11] = '\0';
  puVar5[0x12] = '\0';
  puVar5[0x13] = '\0';
  puVar5[0x14] = '\0';
  puVar5[0x15] = '\0';
  puVar5[0x16] = '\0';
  puVar5[0x17] = '\0';
  puVar5[0x18] = '\0';
  puVar5[0x19] = '\0';
  puVar5[0x1a] = '\0';
  puVar5[0x1b] = '\0';
  puVar5[0x1c] = '\0';
  puVar5[0x1d] = '\0';
  puVar5[0x1e] = '\0';
  puVar5[0x1f] = '\0';
  puVar5[0x20] = '\0';
  puVar5[0x21] = '\0';
  puVar5[0x22] = '\0';
  puVar5[0x23] = '\0';
  puVar5[0x24] = '\0';
  puVar5[0x25] = '\0';
  puVar5[0x26] = '\0';
  puVar5[0x27] = '\0';
  puVar5[0x28] = '\0';
  puVar5[0x29] = '\0';
  puVar5[0x2a] = '\0';
  puVar5[0x2b] = '\0';
  puVar5[0x2c] = '\0';
  puVar5[0x30] = '\0';
  puVar5[0x31] = '\0';
  puVar5[0x32] = '\0';
  puVar5[0x33] = '\0';
  puVar5[0x34] = '\0';
  puVar5[0x35] = '\0';
  puVar5[0x36] = '\0';
  puVar5[0x37] = '\0';
  puVar5[0x38] = '\0';
  puVar5[0x39] = '\0';
  puVar5[0x3a] = '\0';
  puVar5[0x3b] = '\0';
  puVar5[0x3c] = '\0';
  puVar5[0x3d] = '\0';
  puVar5[0x3e] = '\0';
  puVar5[0x3f] = '\0';
  puVar5[0x40] = '\0';
  puVar5[0x41] = '\0';
  puVar5[0x42] = '\0';
  puVar5[0x43] = '\0';
  puVar5[0x44] = '\0';
  puVar5[0x45] = '\0';
  puVar5[0x46] = '\0';
  puVar5[0x47] = '\0';
  puVar5[0x48] = '\0';
  puVar5[0x49] = '\0';
  puVar5[0x4a] = '\0';
  puVar5[0x4b] = '\0';
  puVar5[0x4c] = '\0';
  puVar5[0x4d] = '\0';
  puVar5[0x4e] = '\0';
  puVar5[0x4f] = '\0';
  this_00 = (FDS_Text *)(this->Arg).StructMemory;
  if ((this_00 != (FDS_Text *)0x0) &&
     (pUVar4 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0)) {
    pUVar6 = FDS_DSTextFormatArg::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FDS_Text::operator=(this_00,param_1);
      }
    }
  }
  return;
}

// FDS_TextFormatArg<FDS_StringItemID_const_&> @ 14bd2ac90

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringItemID_const_&>
          (FDS_TextFormatArg *this,FDS_StringItemID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringItemIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringItemID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringItemIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<float_&> @ 14bd94360

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<float_&>
          (FDS_TextFormatArg *this,float *param_1,FNumberFormattingOptions *param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  bVar8 = param_2->UseGrouping;
  bVar3 = param_2->IndicateNearlyInteger;
  uVar4 = param_2->field_0x3;
  EVar5 = param_2->RoundingMode;
  iVar6 = param_2->MinimumIntegralDigits;
  iVar7 = param_2->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = param_2->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = param_2->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = param_2->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar9 = FDS_FloatStringFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar11;
    }
  }
  puVar10[0] = '\0';
  puVar10[1] = '\0';
  puVar10[2] = '\0';
  puVar10[3] = '\0';
  pfVar1 = (float *)(this->Arg).StructMemory;
  if ((pfVar1 != (float *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_FloatStringFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *pfVar1 = *param_1;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FName> @ 14bd94490

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FName>(FDS_TextFormatArg *this,FName *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FNumberFormattingOptions *pFVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  FDS_TextFormatArg *pFVar12;
  UScriptStruct *pUVar13;
  uint uVar14;
  uint uVar15;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar9 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar8 = pFVar9->UseGrouping;
  bVar3 = pFVar9->IndicateNearlyInteger;
  uVar4 = pFVar9->field_0x3;
  EVar5 = pFVar9->RoundingMode;
  iVar6 = pFVar9->MinimumIntegralDigits;
  iVar7 = pFVar9->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar9->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = pFVar9->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar10 = FDS_StringEnumKeyFormatArg::StaticStruct();
  if (pUVar10 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar11 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar15 = (uint)*(short *)((longlong)&pUVar10->_padding_ + 4);
    uVar14 = (int)pUVar10->_padding_ + -1 + uVar15 & -uVar15;
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    puVar11 = FMemory::Malloc((longlong)(int)uVar14,uVar15);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar10;
    (this->Arg).StructMemory = puVar11;
  }
  if (puVar11 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar12;
    }
  }
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  pFVar1 = (FName *)(this->Arg).StructMemory;
  if ((pFVar1 != (FName *)0x0) &&
     (pUVar10 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar10 != (UScriptStruct *)0x0)) {
    pUVar13 = FDS_StringEnumKeyFormatArg::StaticStruct();
    if (pUVar13 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar13->_padding_;
      if (((int)pUVar10->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *pFVar1 = *param_1;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FDS_StringUiID> @ 14bdfc2c0

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringUiID>
          (FDS_TextFormatArg *this,FDS_StringUiID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringUiIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringUiID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringUiIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FString> @ 14be5be70

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FString>(FDS_TextFormatArg *this,FString *param_1)

{
  int iVar1;
  FString *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  bool bVar6;
  FNumberFormattingOptions *pFVar7;
  UScriptStruct *pUVar8;
  uchar *puVar9;
  FDS_TextFormatArg *pFVar10;
  UScriptStruct *pUVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar7 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar6 = pFVar7->UseGrouping;
  bVar3 = pFVar7->IndicateNearlyInteger;
  uVar4 = pFVar7->field_0x3;
  EVar5 = pFVar7->RoundingMode;
  iVar14 = pFVar7->MinimumIntegralDigits;
  iVar1 = pFVar7->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar7->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar6;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar14;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar1;
  iVar14 = pFVar7->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar7->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar14;
  pUVar8 = FDS_StringFormatArg::StaticStruct();
  if (pUVar8 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar9 = (this->Arg).StructMemory;
    if (*(void **)puVar9 != (void *)0x0) {
      FMemory::Free(*(void **)puVar9);
    }
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar13 = (uint)*(short *)((longlong)&pUVar8->_padding_ + 4);
    uVar12 = (int)pUVar8->_padding_ + -1 + uVar13 & -uVar13;
    if ((int)uVar12 < 1) {
      uVar12 = 1;
    }
    puVar9 = FMemory::Malloc((longlong)(int)uVar12,uVar13);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar8;
    (this->Arg).StructMemory = puVar9;
  }
  if (puVar9 == (uchar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar10;
    }
  }
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = '\0';
  puVar9[4] = '\0';
  puVar9[5] = '\0';
  puVar9[6] = '\0';
  puVar9[7] = '\0';
  puVar9[8] = '\0';
  puVar9[9] = '\0';
  puVar9[10] = '\0';
  puVar9[0xb] = '\0';
  puVar9[0xc] = '\0';
  puVar9[0xd] = '\0';
  puVar9[0xe] = '\0';
  puVar9[0xf] = '\0';
  this_00 = (FString *)(this->Arg).StructMemory;
  if ((this_00 != (FString *)0x0) &&
     (pUVar8 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar8 != (UScriptStruct *)0x0)) {
    pUVar11 = FDS_StringFormatArg::StaticStruct();
    if (pUVar11 != (UScriptStruct *)0x0) {
      iVar14 = (int)pUVar11->_padding_;
      if (((int)pUVar8->_padding_ < iVar14) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar14 * 8) !=
          &pUVar11->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        iVar1 = (param_1->Data).ArrayNum;
        iVar14 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange(this_00,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar14);
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<FDS_StringQuestID_const_&> @ 14bf26320

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringQuestID_const_&>
          (FDS_TextFormatArg *this,FDS_StringQuestID *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FNumberFormattingOptions *pFVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  FDS_TextFormatArg *pFVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  uint uVar14;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar8 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar7 = pFVar8->UseGrouping;
  bVar2 = pFVar8->IndicateNearlyInteger;
  uVar3 = pFVar8->field_0x3;
  EVar4 = pFVar8->RoundingMode;
  iVar5 = pFVar8->MinimumIntegralDigits;
  iVar6 = pFVar8->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar8->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar7;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar2;
  (this->NumberFormatOption).field_0x3 = uVar3;
  (this->NumberFormatOption).RoundingMode = EVar4;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar5;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar6;
  iVar5 = pFVar8->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar8->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar5;
  pUVar9 = FDS_StringQuestIDFormatArg::StaticStruct();
  if (pUVar9 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar10 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar14 = (uint)*(short *)((longlong)&pUVar9->_padding_ + 4);
    uVar13 = (int)pUVar9->_padding_ + -1 + uVar14 & -uVar14;
    if ((int)uVar13 < 1) {
      uVar13 = 1;
    }
    puVar10 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar9;
    (this->Arg).StructMemory = puVar10;
  }
  if (puVar10 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FDS_TextFormatArg *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar10[8] = '\0';
  puVar10[9] = '\0';
  puVar10[10] = '\0';
  puVar10[0xb] = '\0';
  puVar10[0xc] = '\0';
  puVar10[0xd] = '\0';
  puVar10[0xe] = '\0';
  puVar10[0xf] = '\0';
  *(undefined ***)puVar10 = &___7FDS_StringQuestID__6B_;
  puVar10 = (this->Arg).StructMemory;
  if ((puVar10 != (uchar *)0x0) &&
     (pUVar9 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar9 != (UScriptStruct *)0x0)) {
    pUVar12 = FDS_StringQuestIDFormatArg::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar12->_padding_;
      if (((int)pUVar9->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *(long64 *)(puVar10 + 8) = param_1->ID;
      }
    }
  }
  return this;
}

// FDS_TextFormatArg<__int64> @ 14bfe8160

FDS_TextFormatArg * __thiscall
FDS_TextFormatArg::FDS_TextFormatArg<__int64>(FDS_TextFormatArg *this,long64 *param_1)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FNumberFormattingOptions *pFVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  FDS_TextFormatArg *pFVar12;
  UScriptStruct *pUVar13;
  uint uVar14;
  uint uVar15;
  
  FInstancedStruct::FInstancedStruct(&this->Arg);
  pFVar9 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar8 = pFVar9->UseGrouping;
  bVar3 = pFVar9->IndicateNearlyInteger;
  uVar4 = pFVar9->field_0x3;
  EVar5 = pFVar9->RoundingMode;
  iVar6 = pFVar9->MinimumIntegralDigits;
  iVar7 = pFVar9->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar9->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar8;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar3;
  (this->NumberFormatOption).field_0x3 = uVar4;
  (this->NumberFormatOption).RoundingMode = EVar5;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar6;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar6 = pFVar9->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar6;
  pUVar10 = FDS_Int64StringFormatArg::StaticStruct();
  if (pUVar10 == (this->Arg).ScriptStruct.field0_0x0.DebugPtr) {
    puVar11 = (this->Arg).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->Arg);
    uVar15 = (uint)*(short *)((longlong)&pUVar10->_padding_ + 4);
    uVar14 = (int)pUVar10->_padding_ + -1 + uVar15 & -uVar15;
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    puVar11 = FMemory::Malloc((longlong)(int)uVar14,uVar15);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->Arg).ScriptStruct.field0_0x0.DebugPtr = pUVar10;
    (this->Arg).StructMemory = puVar11;
  }
  if (puVar11 == (uchar *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FDS_TextFormatArg *)(*pcVar2)();
      return pFVar12;
    }
  }
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  plVar1 = (long64 *)(this->Arg).StructMemory;
  if ((plVar1 != (long64 *)0x0) &&
     (pUVar10 = (this->Arg).ScriptStruct.field0_0x0.DebugPtr, pUVar10 != (UScriptStruct *)0x0)) {
    pUVar13 = FDS_Int64StringFormatArg::StaticStruct();
    if (pUVar13 != (UScriptStruct *)0x0) {
      iVar6 = (int)pUVar13->_padding_;
      if (((int)pUVar10->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        *plVar1 = *param_1;
      }
    }
  }
  return this;
}

