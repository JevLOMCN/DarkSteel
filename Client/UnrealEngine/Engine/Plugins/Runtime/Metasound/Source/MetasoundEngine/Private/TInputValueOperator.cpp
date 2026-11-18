// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 18

// TInputValueOperator<WaveTable::FWaveTable> @ 14b33d630

TInputValueOperator<WaveTable::FWaveTable> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<WaveTable::FWaveTable>::
TInputValueOperator<WaveTable::FWaveTable>
          (TInputValueOperator<WaveTable::FWaveTable> *this,FName *param_1,
          TDataValueReference<WaveTable::FWaveTable> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<WaveTable::FWaveTable> *pTVar3;
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
      pTVar3 = (TInputValueOperator<WaveTable::FWaveTable> *)(*pcVar1)();
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
       &___7__TInputValueOperator_UFWaveTable_WaveTable___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<WaveTable::FWaveTable> @ 14b33d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<WaveTable::FWaveTable> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<WaveTable::FWaveTable>::
TInputValueOperator<WaveTable::FWaveTable>
          (TInputValueOperator<WaveTable::FWaveTable> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<WaveTable::FWaveTable> *pTVar4;
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
    TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataValueReference<WaveTable::FWaveTable>_>
    ::CreateExplicitArgs
              ((TDataValueReference<WaveTable::FWaveTable> *)local_60,param_2,(FLiteral *)&local_40)
    ;
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<WaveTable::FWaveTable> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<WaveTable::FWaveTable> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<WaveTable::FWaveTable>_>
              (&(pFVar3->Data).TypedValue,(TDataValueReference<WaveTable::FWaveTable> *)local_60);
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
      pTVar4 = (TInputValueOperator<WaveTable::FWaveTable> *)(*pcVar1)();
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
       &___7__TInputValueOperator_UFWaveTable_WaveTable___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b33d870

TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FName *param_1,
          TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TInputValueOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b33d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
    TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
        pTVar4 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar4 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TInputValueOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b33dab0

TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,
          TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
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
       ___7__TInputValueOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b33db60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
    TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
        pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
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
       ___7__TInputValueOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b33dcf0

TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,
          TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TInputValueOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b33dda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
    TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
        pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar4 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TInputValueOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b33df30

TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar3
  ;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b33dfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4
  ;
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
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b33e170

TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,FName *param_1,
          TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b33e220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,FName *param_1,FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
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
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)local_60,param_2,(FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
        pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
      pTVar4 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
       ___7__TInputValueOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FAudioBusAsset> @ 14b33e3b0

TInputValueOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FAudioBusAsset>::
TInputValueOperator<Metasound::FAudioBusAsset>
          (TInputValueOperator<Metasound::FAudioBusAsset> *this,FName *param_1,
          TDataValueReference<Metasound::FAudioBusAsset> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::FAudioBusAsset> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
       ___7__TInputValueOperator_VFAudioBusAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FAudioBusAsset> @ 14b33e460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FAudioBusAsset>::
TInputValueOperator<Metasound::FAudioBusAsset>
          (TInputValueOperator<Metasound::FAudioBusAsset> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::FAudioBusAsset> *pTVar4;
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
    TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::FAudioBusAsset> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::FAudioBusAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
              (&(pFVar3->Data).TypedValue,(TDataValueReference<Metasound::FAudioBusAsset> *)local_60
              );
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
      pTVar4 = (TInputValueOperator<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
       ___7__TInputValueOperator_VFAudioBusAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FWaveAsset> @ 14b33e5f0

TInputValueOperator<Metasound::FWaveAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FWaveAsset>::
TInputValueOperator<Metasound::FWaveAsset>
          (TInputValueOperator<Metasound::FWaveAsset> *this,FName *param_1,
          TDataValueReference<Metasound::FWaveAsset> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::FWaveAsset> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::FWaveAsset> *)(*pcVar1)();
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
       &___7__TInputValueOperator_VFWaveAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<Metasound::FWaveAsset> @ 14b33e6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FWaveAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FWaveAsset>::
TInputValueOperator<Metasound::FWaveAsset>
          (TInputValueOperator<Metasound::FWaveAsset> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::FWaveAsset> *pTVar4;
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
    TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataValueReference<Metasound::FWaveAsset>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::FWaveAsset> *)local_60,param_2,(FLiteral *)&local_40)
    ;
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::FWaveAsset> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::FWaveAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveAsset>_>
              (&(pFVar3->Data).TypedValue,(TDataValueReference<Metasound::FWaveAsset> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::FWaveAsset> *)(*pcVar1)();
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
       &___7__TInputValueOperator_VFWaveAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// TInputValueOperator<Metasound::FWaveTableBankAsset> @ 14b33e830

TInputValueOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FWaveTableBankAsset>::
TInputValueOperator<Metasound::FWaveTableBankAsset>
          (TInputValueOperator<Metasound::FWaveTableBankAsset> *this,FName *param_1,
          TDataValueReference<Metasound::FWaveTableBankAsset> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TInputValueOperator<Metasound::FWaveTableBankAsset> *pTVar3;
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
      pTVar3 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
       ___7__TInputValueOperator_VFWaveTableBankAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

// TInputValueOperator<Metasound::FWaveTableBankAsset> @ 14b33e8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TInputValueOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::MetasoundInputNodePrivate::TInputValueOperator<Metasound::FWaveTableBankAsset>::
TInputValueOperator<Metasound::FWaveTableBankAsset>
          (TInputValueOperator<Metasound::FWaveTableBankAsset> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TInputValueOperator<Metasound::FWaveTableBankAsset> *pTVar4;
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
    TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
    ::CreateExplicitArgs
              ((TDataValueReference<Metasound::FWaveTableBankAsset> *)local_60,param_2,
               (FLiteral *)&local_40);
    if (0xc < local_40.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
        pTVar4 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
              (&(pFVar3->Data).TypedValue,
               (TDataValueReference<Metasound::FWaveTableBankAsset> *)local_60);
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
      pTVar4 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
       ___7__TInputValueOperator_VFWaveTableBankAsset_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  return this;
}

