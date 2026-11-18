// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 58

// GetOrCreateDefaultDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad88f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
    TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar4 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad89110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::Frontend::FAnalyzerAddress> @ 14ad892b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<Metasound::Frontend::FAnalyzerAddress>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::Frontend::FAnalyzerAddress>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FSendAddress> @ 14ad89450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FSendAddress> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FSendAddress> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FSendAddress> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FSendAddress>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataReadReference<Metasound::FSendAddress>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataReadReference<Metasound::FSendAddress>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FSendAddress>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14ad9fca0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<int> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
                       (&(param_1->Data).TypedValue,(TDataReadReference<int> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_H_Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<int>();
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
  Metasound::FAnyDataReference::FAnyDataReference<int>
            (&(param_1->Data).TypedValue,(TDataReadReference<int> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14ad9fe70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14ad9ff70

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
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
                ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
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
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14ada0070

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2
::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::Frontend::FAnalyzerAddress>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14ada0170

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FSendAddress> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FSendAddress>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FSendAddress> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>();
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
  if ((code *)local_48[0][3] == Metasound::TDataReadReference<Metasound::FSendAddress>::Clone) {
    Metasound::TDataReadReference<Metasound::FSendAddress>::Clone
              ((TDataReadReference<Metasound::FSendAddress> *)local_48);
  }
  else {
    (*(code *)local_48[0][3])
              ((TDataReadReference<Metasound::FSendAddress> *)local_48,
               &(param_1->Data).TypedValue.DataRefPtr);
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

// operator() @ 14ada02e0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<FString> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<FString>_>
                       (&(param_1->Data).TypedValue,(TDataReadReference<FString> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<FString>();
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
  Metasound::FAnyDataReference::FAnyDataReference<FString>
            (&(param_1->Data).TypedValue,(TDataReadReference<FString> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14ada03e0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ada05b0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ada0780

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> **)
            this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetOrCreateDefaultDataReadReference<int> @ 14af05b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<int> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
          (FInputVertexInterfaceData *this,TDataReadReference<int> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<int> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<int>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<int,Metasound::TDataReadReference<int>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<int> *)(*pcVar1)();
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
    TDataLiteralFactory<int,Metasound::TDataReadReference<int>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<int> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<float> @ 14af05cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<float> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
          (FInputVertexInterfaceData *this,TDataReadReference<float> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<float> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
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
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af05e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
    TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af06000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
    TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af061a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
    TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar4 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af06340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
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
    TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af064e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
    TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af06680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
    TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af06820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FInputVertexInterfaceData *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
    TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer> @ 14af069c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FAudioBuffer> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<FMetasoundParameterStorageWrapper> @ 14af06b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::FInputVertexInterfaceData::
GetOrCreateDefaultDataReadReference<FMetasoundParameterStorageWrapper>
          (FInputVertexInterfaceData *this,
          TDataReadReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FMetasoundParameterStorageWrapper>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
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
    TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
    ::CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<FString> @ 14af06d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<FString> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
          (FInputVertexInterfaceData *this,TDataReadReference<FString> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<FString> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<FString>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<FString,Metasound::TDataReadReference<FString>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FString> *)(*pcVar1)();
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
    TDataLiteralFactory<FString,Metasound::TDataReadReference<FString>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FString> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<FString>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FTime> @ 14af06ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FTime> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FTime> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FTime> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FTime>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FTime,Metasound::TDataReadReference<Metasound::FTime>_>::
    CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FTime,Metasound::TDataReadReference<Metasound::FTime>_>::
    CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<Metasound::FTrigger> @ 14af07040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<Metasound::FTrigger> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
          (FInputVertexInterfaceData *this,
          TDataReadReference<Metasound::FTrigger> *__return_storage_ptr__,FName *param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<Metasound::FTrigger> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs(__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
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
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs(__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetOrCreateDefaultDataReadReference<bool> @ 14af071e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TDataReadReference<bool> * __thiscall
Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
          (FInputVertexInterfaceData *this,TDataReadReference<bool> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TDataReadReference<bool> *pTVar4;
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
                (&`public:_class_Metasound::TDataReadReference<bool>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid(&local_40);
    TDataLiteralFactory<bool,Metasound::TDataReadReference<bool>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,pFVar5);
    if ((0xc < local_40.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
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
    TDataLiteralFactory<bool,Metasound::TDataReadReference<bool>_>::CreateExplicitArgs
              (__return_storage_ptr__,param_2,(FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
              (&(pFVar3->Data).TypedValue,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// operator() @ 14af435d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<float> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                       (&(param_1->Data).TypedValue,(TDataReadReference<float> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<float>();
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
  Metasound::FAnyDataReference::FAnyDataReference<float>
            (&(param_1->Data).TypedValue,(TDataReadReference<float> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af436d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
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
  Metasound::FAnyDataReference::FAnyDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af437d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
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
  Metasound::FAnyDataReference::FAnyDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af438d0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar8
  ;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af439d0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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
                ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
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
  FAnyDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43ad0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28
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
                ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
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
  Metasound::FAnyDataReference::FAnyDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43bd0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *
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
                ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
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
  FAnyDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43cd0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
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
  Metasound::FAnyDataReference::FAnyDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43dd0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43ed0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<FMetasoundParameterStorageWrapper>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<FMetasoundParameterStorageWrapper> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
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
  Metasound::FAnyDataReference::FAnyDataReference<FMetasoundParameterStorageWrapper>
            (&(param_1->Data).TypedValue,
             (TDataReadReference<FMetasoundParameterStorageWrapper> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af43fd0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FTime> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
                       (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FTime> *)local_28
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
  local_48[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FTime>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FTime> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af440d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FTrigger> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FTrigger> *)local_28);
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
  local_48[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
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
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
            (&(param_1->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af441d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<bool> *pTVar8;
  FName *pFVar9;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
                       (&(param_1->Data).TypedValue,(TDataReadReference<bool> *)local_28);
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
  local_48[0] = &___7__TDataReadReference__N_Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<bool>();
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
  Metasound::FAnyDataReference::FAnyDataReference<bool>
            (&(param_1->Data).TypedValue,(TDataReadReference<bool> *)local_48);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// operator() @ 14af442d0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<int>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<int>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<int>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_const_&>
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
  Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af444a0

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<float>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<float>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<float>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44670

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>
::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> **
            )this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44840

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44a10

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44be0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44db0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af44f80

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2
::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45150

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>
::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45320

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af454f0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af456c0

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45890

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<FString>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<FString>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<FString>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45a60

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::
__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45c30

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'
::__l2::<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_const_&>
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
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::Get
            (&local_28,(param_1->Data).TypedValue.AccessType,
             (param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45e00

void __thiscall
`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::
<lambda_1>::operator()(void *this,FInputBinding *param_1)

{
  TDataWriteReference<Metasound::TVariable<bool>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<bool>_> local_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<bool>_> **)this;
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
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_const_&>
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
  Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>
  ::Get(&local_28,(param_1->Data).TypedValue.AccessType,(param_1->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = local_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = local_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14af45fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::
SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>::
operator()(void *this,FInputBinding *__return_storage_ptr__)

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
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
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

