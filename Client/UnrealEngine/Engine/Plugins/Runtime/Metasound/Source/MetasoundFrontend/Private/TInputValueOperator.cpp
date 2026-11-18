// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 34

// TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad94310

TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,
          TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Value;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad943c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  undefined1 auStack_98 [32];
  FAnyDataReference local_78;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar3 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar3->Data).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)local_60);
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_78.AccessType = Value;
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_78.DataRefPtr);
  if (local_78.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_78);
  if (local_78.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_78.DataRefPtr.Ptr)(local_78.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad94550

TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Value;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase(this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad94600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  undefined1 auStack_98 [32];
  FAnyDataReference local_78;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar3 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar3->Data).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               local_60);
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_78.AccessType = Value;
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_78.DataRefPtr);
  if (local_78.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase(this,param_1,&local_78);
  if (local_78.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_78.DataRefPtr.Ptr)(local_78.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad94790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::Frontend::FAnalyzerAddress>::
TInputValueOperator<Metasound::Frontend::FAnalyzerAddress>
          (TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *this_00;
  TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar3;
  undefined1 auStack_98 [32];
  FAnyDataReference local_78;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((this_00->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(this_00->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    VertexDataPrivate::FInputBinding::
    GetDataReferenceAs<Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_>
              (this_00,(TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)local_60);
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_78.AccessType = Value;
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_78.DataRefPtr);
  if (local_78.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_78._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_78);
  if (local_78.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_78.DataRefPtr.Ptr)(local_78.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_VFAnalyzerAddress_Frontend_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<int> @ 14af2b5f0

/* WARNING: Removing unreachable block (ram,0x00014af2b6bd) */
/* WARNING: Removing unreachable block (ram,0x00014af2b6e2) */

TInputValueOperator<int> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<int>::TInputValueOperator<int>
          (TInputValueOperator<int> *this,FName *param_1,TDataValueReference<int> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<int> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<int> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<int> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this = &___7__TInputValueOperator_H_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<int> @ 14af2b730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<int> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<int>::TInputValueOperator<int>
          (TInputValueOperator<int> *this,FName *param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<int> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<int,Metasound::TDataValueReference<int>_>::CreateExplicitArgs
              ((TDataValueReference<int> *)local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<int> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<int> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<int>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<int> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<int> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<int> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<int> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this = &___7__TInputValueOperator_H_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<float> @ 14af2b940

/* WARNING: Removing unreachable block (ram,0x00014af2ba0d) */
/* WARNING: Removing unreachable block (ram,0x00014af2ba32) */

TInputValueOperator<float> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<float>::TInputValueOperator<float>
          (TInputValueOperator<float> *this,FName *param_1,TDataValueReference<float> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<float> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<float> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<float> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this = &___7__TInputValueOperator_M_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<float> @ 14af2ba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<float> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<float>::TInputValueOperator<float>
          (TInputValueOperator<float> *this,FName *param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<float> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataValueReference<float>_>::CreateExplicitArgs
              ((TDataValueReference<float> *)local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<float> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<float> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<float>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<float> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<float> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<float> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<float> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this = &___7__TInputValueOperator_M_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af2bc90

/* WARNING: Removing unreachable block (ram,0x00014af2bd5d) */
/* WARNING: Removing unreachable block (ram,0x00014af2bd82) */

TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
::TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af2bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
::TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af2bfe0

/* WARNING: Removing unreachable block (ram,0x00014af2c0ad) */
/* WARNING: Removing unreachable block (ram,0x00014af2c0d2) */

TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af2c120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af2c330

/* WARNING: Removing unreachable block (ram,0x00014af2c3fd) */
/* WARNING: Removing unreachable block (ram,0x00014af2c422) */

TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,
          TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af2c470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af2c680

/* WARNING: Removing unreachable block (ram,0x00014af2c74d) */
/* WARNING: Removing unreachable block (ram,0x00014af2c772) */

TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,
          TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_2
          )

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af2c7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af2c9d0

/* WARNING: Removing unreachable block (ram,0x00014af2ca9d) */
/* WARNING: Removing unreachable block (ram,0x00014af2cac2) */

TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af2cb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_60,param_2
               ,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af2cd20

/* WARNING: Removing unreachable block (ram,0x00014af2cded) */
/* WARNING: Removing unreachable block (ram,0x00014af2ce12) */

TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,
          TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af2ce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af2d070

/* WARNING: Removing unreachable block (ram,0x00014af2d13d) */
/* WARNING: Removing unreachable block (ram,0x00014af2d162) */

TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
::TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af2d1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
::TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FAudioBuffer> @ 14af2d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FAudioBuffer>::
TInputValueOperator<Metasound::FAudioBuffer>
          (TInputValueOperator<Metasound::FAudioBuffer> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *this_00;
  TInputValueOperator<Metasound::FAudioBuffer> *pTVar5;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  char local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((this_00->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_50,&(this_00->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataValueReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::FAudioBuffer> *)local_70,param_2,
               (FLiteral *)&local_50);
    if ((0xc < local_50.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TInputValueOperator<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  else {
    VertexDataPrivate::FInputBinding::
    GetDataReferenceAs<Metasound::TDataValueReference<Metasound::FAudioBuffer>_>
              (this_00,(TDataValueReference<Metasound::FAudioBuffer> *)local_70);
  }
  local_88 = &___7FAnyDataReference_Metasound__6B_;
  local_80 = '\x04';
  (**(code **)(local_70._0_8_ + 0x18))(local_70,&local_78);
  if ((local_78 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TInputValueOperator<Metasound::FAudioBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  cVar3 = local_80;
  local_88 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_80;
  (**(code **)(*local_78 + 0x18))(local_78,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TInputValueOperator<Metasound::FAudioBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TInputValueOperator<Metasound::FAudioBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_78 != (longlong *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_70._16_8_);
  *(undefined ***)this =
       &___7__TInputValueOperator_VFAudioBuffer_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<FMetasoundParameterStorageWrapper> @ 14af2d5a0

/* WARNING: Removing unreachable block (ram,0x00014af2d66d) */
/* WARNING: Removing unreachable block (ram,0x00014af2d692) */

TInputValueOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<FMetasoundParameterStorageWrapper>::
TInputValueOperator<FMetasoundParameterStorageWrapper>
          (TInputValueOperator<FMetasoundParameterStorageWrapper> *this,FName *param_1,
          TDataValueReference<FMetasoundParameterStorageWrapper> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<FMetasoundParameterStorageWrapper> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_VFMetasoundParameterStorageWrapper___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<FMetasoundParameterStorageWrapper> @ 14af2d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<FMetasoundParameterStorageWrapper>::
TInputValueOperator<FMetasoundParameterStorageWrapper>
          (TInputValueOperator<FMetasoundParameterStorageWrapper> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<FMetasoundParameterStorageWrapper> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
    ::CreateExplicitArgs
              ((TDataValueReference<FMetasoundParameterStorageWrapper> *)local_60,param_2,
               (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
              (&(pFVar5->Data).TypedValue,
               (TDataValueReference<FMetasoundParameterStorageWrapper> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &
       ___7__TInputValueOperator_VFMetasoundParameterStorageWrapper___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FSendAddress> @ 14af2d8f0

/* WARNING: Removing unreachable block (ram,0x00014af2d9bd) */
/* WARNING: Removing unreachable block (ram,0x00014af2d9e2) */

TInputValueOperator<Metasound::FSendAddress> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FSendAddress>::
TInputValueOperator<Metasound::FSendAddress>
          (TInputValueOperator<Metasound::FSendAddress> *this,FName *param_1,
          TDataValueReference<Metasound::FSendAddress> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<Metasound::FSendAddress> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7__TInputValueOperator_VFSendAddress_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FSendAddress> @ 14af2da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FSendAddress> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FSendAddress>::
TInputValueOperator<Metasound::FSendAddress>
          (TInputValueOperator<Metasound::FSendAddress> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<Metasound::FSendAddress> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataValueReference<Metasound::FSendAddress>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::FSendAddress> *)local_60,param_2,
               (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FSendAddress>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<Metasound::FSendAddress> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &___7__TInputValueOperator_VFSendAddress_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<FString> @ 14af2dc40

/* WARNING: Removing unreachable block (ram,0x00014af2dd0d) */
/* WARNING: Removing unreachable block (ram,0x00014af2dd32) */

TInputValueOperator<FString> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<FString>::TInputValueOperator<FString>
          (TInputValueOperator<FString> *this,FName *param_1,TDataValueReference<FString> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<FString> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<FString> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<FString> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7__TInputValueOperator_VFString___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<FString> @ 14af2dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<FString> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<FString>::TInputValueOperator<FString>
          (TInputValueOperator<FString> *this,FName *param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<FString> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<FString,Metasound::TDataValueReference<FString>_>::CreateExplicitArgs
              ((TDataValueReference<FString> *)local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<FString> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<FString> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<FString>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<FString> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FString> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FString> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<FString> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &___7__TInputValueOperator_VFString___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<Metasound::FTime> @ 14af2df90

/* WARNING: Removing unreachable block (ram,0x00014af2e05d) */
/* WARNING: Removing unreachable block (ram,0x00014af2e082) */

TInputValueOperator<Metasound::FTime> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FTime>::
TInputValueOperator<Metasound::FTime>
          (TInputValueOperator<Metasound::FTime> *this,FName *param_1,
          TDataValueReference<Metasound::FTime> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<Metasound::FTime> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7__TInputValueOperator_VFTime_Metasound___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<Metasound::FTime> @ 14af2e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FTime> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FTime>::
TInputValueOperator<Metasound::FTime>
          (TInputValueOperator<Metasound::FTime> *this,FName *param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<Metasound::FTime> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTime,Metasound::TDataValueReference<Metasound::FTime>_>::
    CreateExplicitArgs((TDataValueReference<Metasound::FTime> *)local_60,param_2,
                       (FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FTime>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<Metasound::FTime> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<Metasound::FTime> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this =
       &___7__TInputValueOperator_VFTime_Metasound___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<bool> @ 14af2e2e0

/* WARNING: Removing unreachable block (ram,0x00014af2e3ad) */
/* WARNING: Removing unreachable block (ram,0x00014af2e3d2) */

TInputValueOperator<bool> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<bool>::TInputValueOperator<bool>
          (TInputValueOperator<bool> *this,FName *param_1,TDataValueReference<bool> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TInputValueOperator<bool> *pTVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<bool> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TInputValueOperator<bool> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this = &___7__TInputValueOperator__N_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<bool> @ 14af2e420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<bool> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<bool>::TInputValueOperator<bool>
          (TInputValueOperator<bool> *this,FName *param_1,FOperatorSettings *param_2,
          FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TInputValueOperator<bool> *pTVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  char local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar5 = FInputVertexInterfaceData::FindChecked(param_3,param_1);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<bool,Metasound::TDataValueReference<bool>_>::CreateExplicitArgs
              ((TDataValueReference<bool> *)local_60,param_2,(FLiteral *)&local_40);
    if ((0xc < local_40.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<bool> *)(*pcVar1)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if (((pFVar5->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TInputValueOperator<bool> *)(*pcVar1)();
      return pTVar6;
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<bool>_>
              (&(pFVar5->Data).TypedValue,(TDataValueReference<bool> *)local_60);
  }
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  local_70 = '\x04';
  (**(code **)(local_60._0_8_ + 0x18))(local_60,&local_68);
  if ((local_68 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<bool> *)(*pcVar1)();
    return pTVar6;
  }
  cVar3 = local_70;
  local_78 = &___7FAnyDataReference_Metasound__6B_;
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = local_70;
  (**(code **)(*local_68 + 0x18))(local_68,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<bool> *)(*pcVar1)();
    return pTVar6;
  }
  if ((cVar3 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::None != InAccessType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TInputValueOperator<bool> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  *(undefined ***)this = &___7__TInputValueOperator__N_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

