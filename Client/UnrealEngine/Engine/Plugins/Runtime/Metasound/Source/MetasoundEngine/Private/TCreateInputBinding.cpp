// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 18

// operator() @ 14b35dd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_> *this,
          FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35de50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::operator()(void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::operator()(void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_> *this,
          FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_> *this,
          FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_> *this
          ,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>::
operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>
           *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35e990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35eab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35ebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
::operator()(void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35ecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
::operator()(void *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_50._padding_ = **(longlong **)this;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35ef30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>::
operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>
           *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

// operator() @ 14b35f050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
             *this,FInputBinding *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
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
  plVar3 = (longlong *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50._padding_ = *(longlong *)this->VertexName;
  local_50._padding_ = *plVar3;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  local_50._padding_._0_4_ = 0;
  local_50.Literal.Value.TypeIndex = 0;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FInputBinding::FInputBinding(__return_storage_ptr__,&local_50);
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

