// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// GetResetFunction @ 14ae98c20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::TResetablePostExecutableInputOperator<Metasound::FTrigger>::
GetResetFunction(TResetablePostExecutableInputOperator<Metasound::FTrigger> *this)

{
  code *pcVar1;
  
  pcVar1 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  if ((char)this->_padding_ == '\x02') {
    pcVar1 = Reset;
  }
  return pcVar1;
}

// TResetablePostExecutableInputOperator<Metasound::FTrigger> @ 14af31120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TResetablePostExecutableInputOperator<Metasound::FTrigger> * __thiscall
Metasound::MetasoundInputNodePrivate::TResetablePostExecutableInputOperator<Metasound::FTrigger>::
TResetablePostExecutableInputOperator<Metasound::FTrigger>
          (TResetablePostExecutableInputOperator<Metasound::FTrigger> *this,FName *param_1,
          FOperatorSettings *param_2,FInputVertexInterfaceData *param_3)

{
  bool bVar1;
  FInputBinding *pFVar2;
  TResetablePostExecutableInputOperator<Metasound::FTrigger> *pTVar3;
  FLiteral *pFVar4;
  code *pcVar5;
  FInputDataVertex *pFVar6;
  FString *pFVar7;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar8;
  wchar_t *pwVar9;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  undefined1 local_a8 [32];
  FString local_88;
  FString local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar2 = FInputVertexInterfaceData::Find(param_3,param_1);
  pwVar9 = L"";
  if (pFVar2 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_88);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_class_Metasound::TDataWriteReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataWriteReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = FLiteral::CreateInvalid((FLiteral *)&local_50);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataWriteReference<Metasound::FTrigger> *)local_a8,param_2,pFVar4);
    if ((0xc < local_50.TypeIndex) &&
       (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar1)) {
      pcVar5 = (code *)swi(3);
      pTVar3 = (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar3;
    }
    pcVar5 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_50.TypeIndex];
    pTVar8 = &local_50;
  }
  else {
    if ((pFVar2->Data).bIsSet != false) {
      if (((pFVar2->Data).bIsSet == false) &&
         (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar1)) {
        pcVar5 = (code *)swi(3);
        pTVar3 = (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)(*pcVar5)();
        return pTVar3;
      }
      FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_>
                (&(pFVar2->Data).TypedValue,(TDataWriteReference<Metasound::FTrigger> *)local_a8);
      goto LAB_14af312b9;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_68,&(pFVar2->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataWriteReference<Metasound::FTrigger> *)local_a8,param_2,
                       (FLiteral *)&local_68);
    if ((0xc < local_68.TypeIndex) &&
       (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar1)) {
      pcVar5 = (code *)swi(3);
      pTVar3 = (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar3;
    }
    pcVar5 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_68.TypeIndex];
    pTVar8 = &local_68;
  }
  (*pcVar5)(pTVar8);
LAB_14af312b9:
  this->_padding_ =
       (longlong)
       &
       ___7__TPostExecutableInputOperator_VFTrigger_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  this->_padding_ = (longlong)*param_1;
  FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
            ((FAnyDataReference *)&this->_padding_,
             (TDataWriteReference<Metasound::FTrigger> *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  this->_padding_ =
       (longlong)
       &
       ___7__TResetablePostExecutableInputOperator_VFTrigger_Metasound___MetasoundInputNodePrivate_Metasound__6B_
  ;
  pFVar6 = FInputVertexInterfaceData::GetVertex(param_3,param_1);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&(this->Literal).Value,&(pFVar6->Literal).Value);
  bVar1 = FInputVertexInterfaceData::IsVertexBound(param_3,param_1);
  if (bVar1) {
    pFVar7 = ::FName::ToString(param_1,&local_78);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    local_b8 = (FScriptContainerElement *)pwVar9;
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InData.IsVertexBound(InDataReferenceName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundInputNode.h"
                       ,0xbd,
                       L"Vertex %s should not be bound when using TResetablePostExecutableInputOperator"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      pcVar5 = (code *)swi(3);
      pTVar3 = (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar3;
    }
  }
  return this;
}

// ~TResetablePostExecutableInputOperator<Metasound::FTrigger> @ 14af40540

void __thiscall
Metasound::MetasoundInputNodePrivate::TResetablePostExecutableInputOperator<Metasound::FTrigger>::
~TResetablePostExecutableInputOperator<Metasound::FTrigger>
          (TResetablePostExecutableInputOperator<Metasound::FTrigger> *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Literal).Value.TypeIndex;
  if (0xc < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Literal);
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Reset @ 14afb8730

void __cdecl
Metasound::MetasoundInputNodePrivate::TResetablePostExecutableInputOperator<Metasound::FTrigger>::
Reset(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTrigger *this;
  FTrigger *pFVar3;
  FTrigger local_28;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != Operator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundInputNode.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FAnyDataReference::GetWritableValue<Metasound::FTrigger>
                   ((FAnyDataReference *)(param_1 + 2));
  if (this == (FTrigger *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1743643824665657129>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundInputNode.h"
                       ,0xd7,"Value != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = TDataLiteralFactory<Metasound::FTrigger,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTrigger>_>
             ::CreateExplicitArgs(&local_28,param_2->OperatorSettings,(FLiteral *)(param_1 + 5));
    FTrigger::operator=(this,pFVar3);
    if (local_28.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.TriggeredFrames.AllocatorInstance.Data);
    }
  }
  return;
}

