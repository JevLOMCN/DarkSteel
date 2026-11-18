// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 28

// GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable> @ 14b3186e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<WaveTable::FWaveTable> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
          (FInputVertexInterfaceData *this,
          TDataReadReference<WaveTable::FWaveTable> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<WaveTable::FWaveTable> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<WaveTable::FWaveTable>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataReadReference<WaveTable::FWaveTable>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
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
    TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataReadReference<WaveTable::FWaveTable>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b318880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar1)();
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
    TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b318a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
    TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b318bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
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
    TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b318d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b318f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset> @ 14b3190a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FAudioBusAsset> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBusAsset>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset> @ 14b319240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FWaveAsset> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FWaveAsset> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FWaveAsset> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FWaveAsset>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataReadReference<Metasound::FWaveAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataReadReference<Metasound::FWaveAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset> @ 14b3193e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b353270

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<WaveTable::FWaveTable> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<WaveTable::FWaveTable> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
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
  Metasound::FAnyDataReference::FAnyDataReference<WaveTable::FWaveTable>
            (&(param_1->Data).TypedValue,(TDataReadReference<WaveTable::FWaveTable> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353370

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353470

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
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
  FAnyDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353570

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353670

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
                ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353770

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
                ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353870

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>
::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBusAsset>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353970

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FWaveAsset> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FWaveAsset> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveAsset>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FWaveAsset> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353a70

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveTableBankAsset>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14b353b70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b353d40

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b353f10

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b3540e0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b3542b0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b354480

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b354650

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b354820

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b3549f0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>::
  Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14b354df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_1>::operator()
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
  pFVar3 = Metasound::GetMetasoundDataTypeName<bool>();
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

