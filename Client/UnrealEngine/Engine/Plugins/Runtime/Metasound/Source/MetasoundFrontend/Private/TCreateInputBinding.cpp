// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 37

// operator() @ 14ada2300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<int>_> *this,
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

// operator() @ 14ada2420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14ada2540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
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

// operator() @ 14ada2660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
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

// operator() @ 14ada2780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_> *this,
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

// operator() @ 14ada28a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<FString>_> *this,
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

// operator() @ 14ada29c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14ada2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
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

// operator() @ 14ada2c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
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

// operator() @ 14af4b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<float>_> *this,
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

// operator() @ 14af4b3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4b720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4b840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4ba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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

// operator() @ 14af4bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
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

// operator() @ 14af4bcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>
::operator()(TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_> *this,
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

// operator() @ 14af4bde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_> *this,
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

// operator() @ 14af4bf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>::operator()
          (TCreateInputBinding<Metasound::TDataReadReference<bool>_> *this,
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

// operator() @ 14af4c020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::operator()
          (TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_> *this,
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

// operator() @ 14af4c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::operator()
          (TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_> *this,
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

// operator() @ 14af4c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
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

// operator() @ 14af4ca40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>
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

// operator() @ 14af4cb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
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

// operator() @ 14af4cc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>
::operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>
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

// operator() @ 14af4cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::operator()
          (TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>
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

// operator() @ 14af4cec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::
operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>
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

// operator() @ 14af4cfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::
operator()(TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>
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

// operator() @ 14af4d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::operator()
          (TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_> *this,
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

