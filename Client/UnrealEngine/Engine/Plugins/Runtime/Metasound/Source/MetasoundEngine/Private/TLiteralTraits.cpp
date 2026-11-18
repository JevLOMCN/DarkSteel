// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// IsParsable @ 14b3c8740

bool __cdecl Metasound::TLiteralTraits<WaveTable::FWaveTable>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case FloatArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c8762_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8762_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c87d0

bool __cdecl
Metasound::TLiteralTraits<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case UObjectProxyArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    goto switchD_14b3c87f2_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c87f2_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c8860

bool __cdecl
Metasound::TLiteralTraits<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::IsParsable
          (FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case UObjectProxyArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    goto switchD_14b3c8882_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8882_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c88f0

bool __cdecl
Metasound::TLiteralTraits<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case UObjectProxyArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    goto switchD_14b3c8912_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8912_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c8980

bool __cdecl
Metasound::
TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case Boolean:
  case Integer:
  case Float:
  case String:
    return true;
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c89a2_caseD_5;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c89a2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b3c8a10

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case Boolean:
  case Integer:
  case Float:
  case String:
    return true;
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c8a32_caseD_5;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8a32_caseD_5:
    return false;
  }
}

// IsParsable @ 14b3c8aa0

bool __cdecl Metasound::TLiteralTraits<Metasound::FAudioBusAsset>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case UObjectProxy:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c8ac2_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8ac2_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c8b30

bool __cdecl Metasound::TLiteralTraits<Metasound::FWaveAsset>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case UObjectProxy:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c8b52_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8b52_caseD_1:
    return false;
  }
}

// IsParsable @ 14b3c8bc0

bool __cdecl
Metasound::TLiteralTraits<Metasound::FWaveTableBankAsset>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case UObjectProxy:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14b3c8be2_caseD_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x360,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
switchD_14b3c8be2_caseD_1:
    return false;
  }
}

