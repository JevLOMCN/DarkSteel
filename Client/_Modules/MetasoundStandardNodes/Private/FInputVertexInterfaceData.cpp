// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 69

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14afe5cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14afe5e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat> @ 14afe5ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FMonoAudioFormat>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat> @ 14afe6190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FStereoAudioFormat>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14affd0b0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                         *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14affd1b0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14affd2b0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FMonoAudioFormat> *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FMonoAudioFormat>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FMonoAudioFormat> *)local_48
            );
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14affd3b0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FStereoAudioFormat> *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FStereoAudioFormat>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::FStereoAudioFormat> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14affd670

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14affd840

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14affda10

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14affdbe0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b047170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *__return_storage_ptr__
          ,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b047310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b054a60

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b054b60

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48;
  undefined8 local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_40 = *(undefined8 *)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48 = &
             ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  (param_1->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (param_1->Data).TypedValue.AccessType = Read;
  if ((code *)local_48[3] ==
      Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::Clone)
  {
    Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::Clone
              (&local_48);
  }
  else {
    (*(code *)local_48[3])(&local_48,&(param_1->Data).TypedValue.DataRefPtr);
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (param_1->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b054e90

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar1
  ;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b055060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FInputBinding *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  FText local_78;
  FText local_68;
  undefined1 local_58;
  FInputDataVertex local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FText::FText(&local_78);
  FText::FText(&local_68);
  local_58 = 0;
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *(longlong *)pFVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 1;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  Metasound::VertexDataPrivate::FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
  uVar5 = (ulonglong)local_50.Literal.Value.TypeIndex;
  if (0xc < local_50.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50.Literal);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0a1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0a1fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0a2160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b6450

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_28
                       );
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b0b6550

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b0b6650

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>
::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                         *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b0b6750

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b0b6920

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b0b6af0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b0b6cc0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b121470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b121610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b1217b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b121950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b121af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b121c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b121e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b1457d0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b1458d0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b1459d0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b145ad0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b145bd0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *
                        )local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b145cd0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                         *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)local_48
            );
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b145dd0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b145ed0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b1460a0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b146270

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b146440

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b146610

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b1467e0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b1469b0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c43d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultValue<int> @ 14b1c4570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultValue<int>
          (FInputVertexInterfaceData *this,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInputBinding *pFVar4;
  undefined1 auStack_48 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar4 = FindChecked(this,param_1);
  if ((pFVar4->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_28,&(pFVar4->Vertex).Literal.Value);
    iVar3 = TDataLiteralFactory<int,Metasound::DataFactoryPrivate::TDataTypeCreator<int>_>::
            CreateExplicitArgs(param_2,(FLiteral *)&local_28);
    if (0xc < local_28.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28.TypeIndex])(&local_28);
    return iVar3;
  }
  if ((pFVar4->Data).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FAnyDataReference::GetAs<int>(&(pFVar4->Data).TypedValue);
  return iVar3;
}

// GetOrCreateDefaultValue<float> @ 14b1c4670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultValue<float>
          (FInputVertexInterfaceData *this,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar3 = FindChecked(this,param_1);
  if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_38,&(pFVar3->Vertex).Literal.Value);
    fVar4 = TDataLiteralFactory<float,Metasound::DataFactoryPrivate::TDataTypeCreator<float>_>::
            CreateExplicitArgs(param_2,(FLiteral *)&local_38);
    if (0xc < local_38.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.TypeIndex])(&local_38);
    return fVar4;
  }
  if ((pFVar3->Data).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = FAnyDataReference::GetAs<float>(&(pFVar3->Data).TypedValue);
  return fVar4;
}

// operator() @ 14b1d0120

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28)
    ;
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b1d0220

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b1d0320

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b1d04f0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2
::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b1d06c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::SetValue<int>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FInputBinding *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  FText local_78;
  FText local_68;
  undefined1 local_58;
  FInputDataVertex local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FText::FText(&local_78);
  FText::FText(&local_68);
  local_58 = 0;
  pFVar3 = Metasound::GetMetasoundDataTypeName<int>();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *(longlong *)pFVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 1;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  Metasound::VertexDataPrivate::FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
  uVar5 = (ulonglong)local_50.Literal.Value.TypeIndex;
  if (0xc < local_50.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50.Literal);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b1d07e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::SetValue<float>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FInputBinding *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  FText local_78;
  FText local_68;
  undefined1 local_58;
  FInputDataVertex local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FText::FText(&local_78);
  FText::FText(&local_68);
  local_58 = 0;
  pFVar3 = Metasound::GetMetasoundDataTypeName<float>();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *(longlong *)pFVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 1;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  Metasound::VertexDataPrivate::FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
  uVar5 = (ulonglong)local_50.Literal.Value.TypeIndex;
  if (0xc < local_50.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50.Literal);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b1d0900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::
SetValue<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FInputBinding *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  FText local_78;
  FText local_68;
  undefined1 local_58;
  FInputDataVertex local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FText::FText(&local_78);
  FText::FText(&local_68);
  local_58 = 0;
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *(longlong *)pFVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 1;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  Metasound::VertexDataPrivate::FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
  uVar5 = (ulonglong)local_50.Literal.Value.TypeIndex;
  if (0xc < local_50.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50.Literal);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b21db30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b21dcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b21de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  FLiteral *pFVar5;
  undefined1 auStack_88 [32];
  FString local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  FLiteral local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = Find(this,param_1);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Value.TypeIndex])(&local_40);
  }
  else if ((pFVar3->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar3->Data).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b237a70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                        local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b237b70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                         *)local_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)local_48)
  ;
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b237c70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28)
    ;
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  local_48[1] = *(undefined ***)(lVar1 + 8);
  local_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  local_48[0] = &
                ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b237e50

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b238020

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b2381f0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
             **)this;
  if ((param_1->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_const_&>
              (&param_1->Data,pTVar1);
    if ((param_1->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
    return;
  }
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

