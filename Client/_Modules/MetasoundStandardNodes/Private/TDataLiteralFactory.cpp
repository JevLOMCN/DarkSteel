// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 84

// CreateExplicitArgs @ 14b0065f0

TEnum<Metasound::EBandSplitterFilterOrder,1> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EBandSplitterFilterOrder EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
    EVar4 = (EBandSplitterFilterOrder)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
    EVar4 = (EBandSplitterFilterOrder)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
    EVar4 = (EBandSplitterFilterOrder)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(param_1,*pFVar5);
    return (TEnum<Metasound::EBandSplitterFilterOrder,1>)(EBandSplitterFilterOrder)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
  case None:
    EVar4 = FourPole;
  }
  TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
  TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(param_1,EVar4);
  return (TEnum<Metasound::EBandSplitterFilterOrder,1>)(EBandSplitterFilterOrder)param_1;
}

// CreateExplicitArgs @ 14b0067e0

TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0069c0

TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b006ba0

TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b006d80

TEnum<Audio::EBiquadFilter::Type,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  Type TVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
    TVar4 = (Type)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
    TVar4 = (Type)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
    TVar4 = (Type)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (param_1,*pFVar5);
    return (TEnum<Audio::EBiquadFilter::Type,0>)(Type)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
  case None:
    TVar4 = Lowpass;
  }
  TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>(param_1,TVar4);
  return (TEnum<Audio::EBiquadFilter::Type,0>)(Type)param_1;
}

// CreateExplicitArgs @ 14b006f60

TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007140

TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007320

TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007500

FMonoAudioFormat * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FMonoAudioFormat>_>
::CreateExplicitArgs
          (FMonoAudioFormat *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FMonoAudioFormat *pFVar4;
  uint uVar5;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMonoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)(byte)(param_2->Value)._padding_;
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMonoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)(param_2->Value)._padding_;
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMonoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)*(float *)&(param_2->Value)._padding_;
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMonoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMonoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    uVar5 = param_1->NumFramesPerBlock;
  }
  TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
            ((TStaticChannelAudioFormat<1> *)__return_storage_ptr__,uVar5);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007680

TDataReadReference<Metasound::FMonoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007830

TDataValueReference<Metasound::FMonoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataValueReference<Metasound::FMonoAudioFormat>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0079e0

TDataWriteReference<Metasound::FMonoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FMonoAudioFormat>::
    TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FMonoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007b90

FStereoAudioFormat * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FStereoAudioFormat>_>
::CreateExplicitArgs
          (FStereoAudioFormat *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FStereoAudioFormat *pFVar4;
  uint uVar5;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStereoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)(byte)(param_2->Value)._padding_;
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStereoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)(param_2->Value)._padding_;
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStereoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
    uVar5 = (uint)*(float *)&(param_2->Value)._padding_;
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStereoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStereoAudioFormat *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    uVar5 = param_1->NumFramesPerBlock;
  }
  TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
            ((TStaticChannelAudioFormat<2> *)__return_storage_ptr__,uVar5);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007d10

TDataReadReference<Metasound::FStereoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b007ec0

TDataValueReference<Metasound::FStereoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataValueReference<Metasound::FStereoAudioFormat>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b008070

TDataWriteReference<Metasound::FStereoAudioFormat> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><bool_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><int_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><float_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FStereoAudioFormat>::
    TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FStereoAudioFormat> *)__return_storage_ptr__,NewObject,
               param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b05e100

TEnum<Audio::EDynamicFilterType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EDynamicFilterType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
    EVar4 = (EDynamicFilterType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
    EVar4 = (EDynamicFilterType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
    EVar4 = (EDynamicFilterType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (param_1,*pFVar5);
    return (TEnum<Audio::EDynamicFilterType,0>)(EDynamicFilterType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
  case None:
    EVar4 = Bell;
  }
  TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>(param_1,EVar4);
  return (TEnum<Audio::EDynamicFilterType,0>)(EDynamicFilterType)param_1;
}

// CreateExplicitArgs @ 14b05e2e0

TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b05e4c0

TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b05e6a0

TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b05e880

TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  undefined8 *puVar5;
  FName *pFVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
  EEnvelopePeakMode EVar8;
  wchar_t *pwVar9;
  FName local_res20;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case None:
    goto switchD_14b05e8be_caseD_0;
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    puVar5 = ::operator_new(0x18);
    if (puVar5 == (undefined8 *)0x0) {
LAB_14b05eaf9:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
      goto LAB_14b05eb09;
    }
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    EVar8 = (EEnvelopePeakMode)(byte)(param_2->Value)._padding_;
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    puVar5 = ::operator_new(0x18);
    if (puVar5 == (undefined8 *)0x0) goto LAB_14b05eaf9;
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    EVar8 = (EEnvelopePeakMode)(param_2->Value)._padding_;
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    puVar5 = ::operator_new(0x18);
    if (puVar5 == (undefined8 *)0x0) goto LAB_14b05eaf9;
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    EVar8 = (EEnvelopePeakMode)*(float *)&(param_2->Value)._padding_;
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    puVar5 = ::operator_new(0x18);
    if (puVar5 == (undefined8 *)0x0) goto LAB_14b05eaf9;
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    if ((int)(param_2->Value)._padding_ == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Value)._padding_;
    }
    pFVar6 = ::FName::FName(&local_res20,pwVar9);
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar5 + 2,*pFVar6);
    puVar1 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
    goto LAB_14b05eab0;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar7;
    }
switchD_14b05e8be_caseD_0:
    DataFactoryPrivate::
    TDataFactoryInternal<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
    ::
    CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,0>
              (__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
            (puVar5 + 2,EVar8);
  puVar1 = puVar5 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
LAB_14b05eab0:
  *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
  if ((puVar1 == (undefined8 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
    return pTVar7;
  }
LAB_14b05eb09:
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c2630

TEnum<Audio::Grain::EEnvelope,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EEnvelope EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
    EVar4 = (EEnvelope)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
    EVar4 = (EEnvelope)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
    EVar4 = (EEnvelope)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>(param_1,*pFVar5);
    return (TEnum<Audio::Grain::EEnvelope,0>)(EEnvelope)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
  case None:
    EVar4 = Gaussian;
  }
  TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>(param_1,EVar4);
  return (TEnum<Audio::Grain::EEnvelope,0>)(EEnvelope)param_1;
}

// CreateExplicitArgs @ 14b0c2810

TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c29f0

TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__
          ,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c2bd0

TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__
          ,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c2db0

TEnum<Metasound::EEnvelopePeakMode,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EEnvelopePeakMode EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
    EVar4 = (EEnvelopePeakMode)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
    EVar4 = (EEnvelopePeakMode)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
    EVar4 = (EEnvelopePeakMode)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::EEnvelopePeakMode,0>)(EEnvelopePeakMode)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
  case None:
    EVar4 = Peak;
  }
  TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
            (param_1,EVar4);
  return (TEnum<Metasound::EEnvelopePeakMode,0>)(EEnvelopePeakMode)param_1;
}

// CreateExplicitArgs @ 14b0c2f90

TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c3170

TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c3350

TEnum<Metasound::EKneeMode,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EKneeMode EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
    EVar4 = (EKneeMode)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
    EVar4 = (EKneeMode)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
    EVar4 = (EKneeMode)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(param_1,*pFVar5);
    return (TEnum<Metasound::EKneeMode,0>)(EKneeMode)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
  case None:
    EVar4 = Hard;
  }
  TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(param_1,EVar4);
  return (TEnum<Metasound::EKneeMode,0>)(EKneeMode)param_1;
}

// CreateExplicitArgs @ 14b0c3530

TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c3710

TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c38f0

TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c3ad0

TEnum<Metasound::ELowFrequencyNoiseInterpType,2> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ELowFrequencyNoiseInterpType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
    EVar4 = (ELowFrequencyNoiseInterpType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
    EVar4 = (ELowFrequencyNoiseInterpType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
    EVar4 = (ELowFrequencyNoiseInterpType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(param_1,*pFVar5);
    return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)(ELowFrequencyNoiseInterpType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
  case None:
    EVar4 = Cubic;
  }
  TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
  TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(param_1,EVar4);
  return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)(ELowFrequencyNoiseInterpType)param_1;
}

// CreateExplicitArgs @ 14b0c3cc0

TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c3ea0

TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b0c4080

TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1613a0

TEnum<Metasound::ELfoWaveshapeType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ELfoWaveshapeType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
    EVar4 = (ELfoWaveshapeType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
    EVar4 = (ELfoWaveshapeType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
    EVar4 = (ELfoWaveshapeType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::ELfoWaveshapeType,0>)(ELfoWaveshapeType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
  case None:
    EVar4 = Sine;
  }
  TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::ELfoWaveshapeType,0>)(ELfoWaveshapeType)param_1;
}

// CreateExplicitArgs @ 14b161580

TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b161760

TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b161940

TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b161b20

TEnum<Metasound::ENoiseType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ENoiseType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
    EVar4 = (ENoiseType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
    EVar4 = (ENoiseType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
    EVar4 = (ENoiseType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(param_1,*pFVar5);
    return (TEnum<Metasound::ENoiseType,0>)(ENoiseType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
  case None:
    EVar4 = Pink;
  }
  TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(param_1,EVar4);
  return (TEnum<Metasound::ENoiseType,0>)(ENoiseType)param_1;
}

// CreateExplicitArgs @ 14b161d00

TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b161ee0

TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1620c0

TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1622a0

TEnum<Metasound::ESawGenerationType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ESawGenerationType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
    EVar4 = (ESawGenerationType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
    EVar4 = (ESawGenerationType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
    EVar4 = (ESawGenerationType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::ESawGenerationType,0>)(ESawGenerationType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
  case None:
    EVar4 = PolySmooth;
  }
  TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::ESawGenerationType,0>)(ESawGenerationType)param_1;
}

// CreateExplicitArgs @ 14b162480

TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b162660

TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b162840

TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b162a20

TEnum<Metasound::ESineGenerationType,3> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ESineGenerationType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
    EVar4 = (ESineGenerationType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
    EVar4 = (ESineGenerationType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
    EVar4 = (ESineGenerationType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (param_1,*pFVar5);
    return (TEnum<Metasound::ESineGenerationType,3>)(ESineGenerationType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
  case None:
    EVar4 = Wavetable;
  }
  TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
            (param_1,EVar4);
  return (TEnum<Metasound::ESineGenerationType,3>)(ESineGenerationType)param_1;
}

// CreateExplicitArgs @ 14b162c10

TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b162df0

TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b162fd0

TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1631b0

TEnum<Metasound::ESquareGenerationType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ESquareGenerationType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
    EVar4 = (ESquareGenerationType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
    EVar4 = (ESquareGenerationType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
    EVar4 = (ESquareGenerationType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::ESquareGenerationType,0>)(ESquareGenerationType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
  case None:
    EVar4 = PolySmooth;
  }
  TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::ESquareGenerationType,0>)(ESquareGenerationType)param_1;
}

// CreateExplicitArgs @ 14b163390

TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b163570

TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b163750

TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b163930

TEnum<Metasound::ETriangleGenerationType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ETriangleGenerationType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
    EVar4 = (ETriangleGenerationType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
    EVar4 = (ETriangleGenerationType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
    EVar4 = (ETriangleGenerationType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(param_1,*pFVar5);
    return (TEnum<Metasound::ETriangleGenerationType,0>)(ETriangleGenerationType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
  case None:
    EVar4 = PolySmooth;
  }
  TEnum<enum_Metasound::ETriangleGenerationType,0>::TEnum<enum_Metasound::ETriangleGenerationType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::ETriangleGenerationType,0>)(ETriangleGenerationType)param_1;
}

// CreateExplicitArgs @ 14b163b10

TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b163cf0

TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b163ed0

TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1640b0

TEnum<Audio::EMusicalScale::Scale,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  Scale SVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
    SVar4 = (Scale)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
    SVar4 = (Scale)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
    SVar4 = (Scale)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (param_1,*pFVar5);
    return (TEnum<Audio::EMusicalScale::Scale,0>)(Scale)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      SVar4 = (*pcVar1)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
  case None:
    SVar4 = Major;
  }
  TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
            (param_1,SVar4);
  return (TEnum<Audio::EMusicalScale::Scale,0>)(Scale)param_1;
}

// CreateExplicitArgs @ 14b164290

TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b164470

TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b164650

TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d54e0

TEnum<Metasound::EPanningLaw,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EPanningLaw EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
    EVar4 = (EPanningLaw)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
    EVar4 = (EPanningLaw)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
    EVar4 = (EPanningLaw)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>(param_1,*pFVar5);
    return (TEnum<Metasound::EPanningLaw,0>)(EPanningLaw)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
  case None:
    EVar4 = EqualPower;
  }
  TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>(param_1,EVar4);
  return (TEnum<Metasound::EPanningLaw,0>)(EPanningLaw)param_1;
}

// CreateExplicitArgs @ 14b1d56c0

TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d58a0

TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d5a80

TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d5c60

TEnum<Metasound::EStereoDelayMode,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EStereoDelayMode EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
    EVar4 = (EStereoDelayMode)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
    EVar4 = (EStereoDelayMode)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
    EVar4 = (EStereoDelayMode)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::EStereoDelayMode,0>)(EStereoDelayMode)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
  case None:
    EVar4 = Normal;
  }
  TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
            (param_1,EVar4);
  return (TEnum<Metasound::EStereoDelayMode,0>)(EStereoDelayMode)param_1;
}

// CreateExplicitArgs @ 14b1d5e40

TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d6020

TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b1d6200

TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24aab0

TEnum<Metasound::EBufferTriggerType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EBufferTriggerType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
    EVar4 = (EBufferTriggerType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
    EVar4 = (EBufferTriggerType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
    EVar4 = (EBufferTriggerType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::EBufferTriggerType,0>)(EBufferTriggerType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
  case None:
    EVar4 = RisingEdge;
  }
  TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::EBufferTriggerType,0>)(EBufferTriggerType)param_1;
}

// CreateExplicitArgs @ 14b24ac90

TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24ae70

TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24b050

TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24b230

TEnum<Metasound::ETriggerComparisonType,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ETriggerComparisonType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
    EVar4 = (ETriggerComparisonType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
    EVar4 = (ETriggerComparisonType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
    EVar4 = (ETriggerComparisonType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (param_1,*pFVar5);
    return (TEnum<Metasound::ETriggerComparisonType,0>)(ETriggerComparisonType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
  case None:
    EVar4 = Equals;
  }
  TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
            (param_1,EVar4);
  return (TEnum<Metasound::ETriggerComparisonType,0>)(ETriggerComparisonType)param_1;
}

// CreateExplicitArgs @ 14b24b410

TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24b5f0

TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24b7d0

TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24b9b0

TEnum<Audio::EWaveShaperType,1> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EWaveShaperType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
    EVar4 = (EWaveShaperType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
    EVar4 = (EWaveShaperType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
    EVar4 = (EWaveShaperType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>(param_1,*pFVar5);
    return (TEnum<Audio::EWaveShaperType,1>)(EWaveShaperType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
  case None:
    EVar4 = ATan;
  }
  TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>(param_1,EVar4);
  return (TEnum<Audio::EWaveShaperType,1>)(EWaveShaperType)param_1;
}

// CreateExplicitArgs @ 14b24bba0

TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24bd80

TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b24bf60

TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

