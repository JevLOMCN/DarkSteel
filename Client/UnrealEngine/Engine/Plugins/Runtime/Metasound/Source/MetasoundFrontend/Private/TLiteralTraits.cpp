// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// IsParsable @ 14adc76a0

bool __cdecl
Metasound::
TLiteralTraits<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
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
  case StringArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    goto switchD_14adc76c2_caseD_1;
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
switchD_14adc76c2_caseD_1:
    return false;
  }
}

// IsParsable @ 14adc7730

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::IsParsable
          (FLiteral *param_1)

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
    goto switchD_14adc7752_caseD_5;
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
switchD_14adc7752_caseD_5:
    return false;
  }
}

// IsParsable @ 14adc77c0

bool __cdecl
Metasound::TLiteralTraits<Metasound::Frontend::FAnalyzerAddress>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case String:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14adc77e2_caseD_1;
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
switchD_14adc77e2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afaf900

bool __cdecl Metasound::TLiteralTraits<int>::IsParsable(FLiteral *param_1)

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
    return true;
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afaf922_caseD_4;
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
switchD_14afaf922_caseD_4:
    return false;
  }
}

// IsParsable @ 14afaf990

bool __cdecl Metasound::TLiteralTraits<float>::IsParsable(FLiteral *param_1)

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
    return true;
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afaf9b2_caseD_4;
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
switchD_14afaf9b2_caseD_4:
    return false;
  }
}

// IsParsable @ 14afafa20

bool __cdecl
Metasound::TLiteralTraits<TArray<int,TSizedDefaultAllocator<32>_>_>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afafa42_caseD_1;
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
switchD_14afafa42_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafab0

bool __cdecl
Metasound::TLiteralTraits<TArray<float,TSizedDefaultAllocator<32>_>_>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afafad2_caseD_1;
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
switchD_14afafad2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafb40

bool __cdecl
Metasound::TLiteralTraits<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
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
    goto switchD_14afafb62_caseD_1;
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
switchD_14afafb62_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafbd0

bool __cdecl
Metasound::TLiteralTraits<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::IsParsable
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
  case StringArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    goto switchD_14afafbf2_caseD_1;
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
switchD_14afafbf2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafc60

bool __cdecl
Metasound::TLiteralTraits<TArray<FString,TSizedDefaultAllocator<32>_>_>::IsParsable
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
  case StringArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    goto switchD_14afafc82_caseD_1;
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
switchD_14afafc82_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafcf0

bool __cdecl
Metasound::TLiteralTraits<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::IsParsable
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
  case FloatArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afafd12_caseD_1;
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
switchD_14afafd12_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafd80

bool __cdecl
Metasound::TLiteralTraits<TArray<bool,TSizedDefaultAllocator<32>_>_>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
    goto switchD_14afafda2_caseD_1;
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
switchD_14afafda2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afafe10

bool __cdecl Metasound::TLiteralTraits<Metasound::FAudioBuffer>::IsParsable(FLiteral *param_1)

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
    return true;
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afafe32_caseD_4;
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
switchD_14afafe32_caseD_4:
    return false;
  }
}

// IsParsable @ 14afafea0

bool __cdecl
Metasound::TLiteralTraits<FMetasoundParameterStorageWrapper>::IsParsable(FLiteral *param_1)

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
    goto switchD_14afafec2_caseD_1;
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
switchD_14afafec2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afaff30

bool __cdecl Metasound::TLiteralTraits<Metasound::FSendAddress>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case String:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afaff52_caseD_1;
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
switchD_14afaff52_caseD_1:
    return false;
  }
}

// IsParsable @ 14afaffc0

bool __cdecl Metasound::TLiteralTraits<FString>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case String:
    return true;
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afaffe2_caseD_1;
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
switchD_14afaffe2_caseD_1:
    return false;
  }
}

// IsParsable @ 14afb0050

bool __cdecl Metasound::TLiteralTraits<Metasound::FTime>::IsParsable(FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
  case Float:
    return true;
  case Boolean:
  case Integer:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afb0072_caseD_1;
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
switchD_14afb0072_caseD_1:
    return false;
  }
}

// IsParsable @ 14afb00e0

bool __cdecl Metasound::TLiteralTraits<Metasound::FTrigger>::IsParsable(FLiteral *param_1)

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
    return true;
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afb0102_caseD_3;
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
switchD_14afb0102_caseD_3:
    return false;
  }
}

// IsParsable @ 14afb0170

bool __cdecl Metasound::TLiteralTraits<bool>::IsParsable(FLiteral *param_1)

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
  case UObjectProxy:
    return true;
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    goto switchD_14afb0192_caseD_4;
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
switchD_14afb0192_caseD_4:
    return false;
  }
}

