// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 38

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff4700

TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff47b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff4940

TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff49f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)()
        ;
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)()
        ;
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b050860

TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b050910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0aef80

TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0af030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_60,param_2
               ,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0af1c0

TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
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
       ___7__TInputValueOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0af270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
      ;
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
       ___7__TInputValueOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0af400

TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0af4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0af640

TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0af6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b1369d0

TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
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
       ___7__TInputValueOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b136a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
      ;
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
       ___7__TInputValueOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b136c10

TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b136cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b136e50

TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b136f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b137090

TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b137140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)local_60)
    ;
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b1372d0

TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b137380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b137510

TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b1375c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b137750

TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b137800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cb5a0

TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cb650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cb7e0

TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cb890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b22d8f0

TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b22d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_60,
               param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b22db30

TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b22dbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
       ___7__TInputValueOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b22dd70

TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b22de20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

