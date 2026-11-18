// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 19

// IsParsable @ 14b02d110

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::IsParsable
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
    goto switchD_14b02d132_caseD_5;
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
switchD_14b02d132_caseD_5:
    return false;
  }
}

// IsParsable @ 14b02d1a0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::IsParsable
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
    goto switchD_14b02d1c2_caseD_5;
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
switchD_14b02d1c2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b077e50

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::IsParsable
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
    goto switchD_14b077e72_caseD_5;
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
switchD_14b077e72_caseD_5:
    return false;
  }
}

// IsParsable @ 14b0e3240

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::IsParsable
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
    goto switchD_14b0e3262_caseD_5;
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
switchD_14b0e3262_caseD_5:
    return false;
  }
}

// IsParsable @ 14b0e32d0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::IsParsable
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
    goto switchD_14b0e32f2_caseD_5;
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
switchD_14b0e32f2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b0e3360

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::IsParsable
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
    goto switchD_14b0e3382_caseD_5;
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
switchD_14b0e3382_caseD_5:
    return false;
  }
}

// IsParsable @ 14b0e33f0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
    goto switchD_14b0e3412_caseD_5;
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
switchD_14b0e3412_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a17a0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::IsParsable
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
    goto switchD_14b1a17c2_caseD_5;
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
switchD_14b1a17c2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a1830

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::IsParsable
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
    goto switchD_14b1a1852_caseD_5;
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
switchD_14b1a1852_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a18c0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::IsParsable
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
    goto switchD_14b1a18e2_caseD_5;
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
switchD_14b1a18e2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a1950

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::IsParsable
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
    goto switchD_14b1a1972_caseD_5;
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
switchD_14b1a1972_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a19e0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::IsParsable
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
    goto switchD_14b1a1a02_caseD_5;
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
switchD_14b1a1a02_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a1a70

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::IsParsable
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
    goto switchD_14b1a1a92_caseD_5;
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
switchD_14b1a1a92_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1a1b00

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::IsParsable
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
    goto switchD_14b1a1b22_caseD_5;
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
switchD_14b1a1b22_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1e8950

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::IsParsable
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
    goto switchD_14b1e8972_caseD_5;
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
switchD_14b1e8972_caseD_5:
    return false;
  }
}

// IsParsable @ 14b1e89e0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::IsParsable
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
    goto switchD_14b1e8a02_caseD_5;
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
switchD_14b1e8a02_caseD_5:
    return false;
  }
}

// IsParsable @ 14b288120

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::IsParsable
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
    goto switchD_14b288142_caseD_5;
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
switchD_14b288142_caseD_5:
    return false;
  }
}

// IsParsable @ 14b2881b0

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::IsParsable
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
    goto switchD_14b2881d2_caseD_5;
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
switchD_14b2881d2_caseD_5:
    return false;
  }
}

// IsParsable @ 14b288240

bool __cdecl
Metasound::TLiteralTraits<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::IsParsable
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
    goto switchD_14b288262_caseD_5;
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
switchD_14b288262_caseD_5:
    return false;
  }
}

