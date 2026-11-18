// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 17

// CreateOperator @ 14ad76640

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  void *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
           GetInputName();
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *
                     )local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (void *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &
                  ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
             FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                                 *)local_58,(TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad769b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FCoverterOperatorFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  bool bVar2;
  FName *this_01;
  FInputBinding *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  FLiteral *pFVar5;
  code *pcVar6;
  void *this_02;
  FConverterOperator *pFVar7;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  FString local_d8;
  undefined **local_c8 [2];
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
  TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
            (local_c8,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_c8[0] = &
                ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  this_01 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
            GetInputName();
  pFVar3 = FInputVertexInterfaceData::Find(this_00,this_01);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(this_01,&local_d8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<int>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid((FLiteral *)&local_50);
    TDataLiteralFactory<int,Metasound::TDataReadReference<int>_>::CreateExplicitArgs
              ((TDataReadReference<int> *)local_f8,pFVar1,pFVar5);
    if ((0xc < local_50.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_50.TypeIndex];
    pTVar8 = &local_50;
  }
  else {
    if ((pFVar3->Data).bIsSet != false) {
      if (((pFVar3->Data).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar6 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar6)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
                (&(pFVar3->Data).TypedValue,(TDataReadReference<int> *)local_f8);
      goto LAB_14ad76b60;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_68,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<int,Metasound::TDataReadReference<int>_>::CreateExplicitArgs
              ((TDataReadReference<int> *)local_f8,pFVar1,(FLiteral *)&local_68);
    if ((0xc < local_68.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_68.TypeIndex];
    pTVar8 = &local_68;
  }
  (*pcVar6)(pTVar8);
LAB_14ad76b60:
  this_02 = ::operator_new(0x50);
  pFVar7 = (FConverterOperator *)0x0;
  if (this_02 != (void *)0x0) {
    local_a8[1] = local_c8[1];
    local_98 = local_b8;
    if (local_b8 != (TReferenceControllerBase<0> *)0x0) {
      local_b8->SharedReferenceCount = local_b8->SharedReferenceCount + 1;
    }
    local_88[1] = (undefined **)local_f8._8_8_;
    local_a8[0] = &
                  ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    local_78 = (TReferenceControllerBase<0> *)local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
    pFVar7 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             FConverterOperator::FConverterOperator
                       (this_02,(TDataReadReference<int> *)local_88,
                        (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                         *)local_a8);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_b8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad77400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::
FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  bool bVar2;
  FName *this_01;
  FInputBinding *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  FLiteral *pFVar5;
  code *pcVar6;
  FConverterOperator *this_02;
  FConverterOperator *pFVar7;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  FString local_d8;
  TDataReference<Metasound::Frontend::FAnalyzerAddress> local_c8;
  undefined **local_a8;
  FAnalyzerAddress *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDataReference<Metasound::Frontend::FAnalyzerAddress>::
  TDataReference<Metasound::Frontend::FAnalyzerAddress><>(&local_c8,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_c8._padding_ =
       (longlong)&___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  this_01 = TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName();
  pFVar3 = FInputVertexInterfaceData::Find(this_00,this_01);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(this_01,&local_d8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<FString>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid((FLiteral *)&local_50);
    TDataLiteralFactory<FString,Metasound::TDataReadReference<FString>_>::CreateExplicitArgs
              ((TDataReadReference<FString> *)local_f8,pFVar1,pFVar5);
    if ((0xc < local_50.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_50.TypeIndex];
    pTVar8 = &local_50;
  }
  else {
    if ((pFVar3->Data).bIsSet != false) {
      if (((pFVar3->Data).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar6 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar6)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<FString>_>
                (&(pFVar3->Data).TypedValue,(TDataReadReference<FString> *)local_f8);
      goto LAB_14ad775b0;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_68,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<FString,Metasound::TDataReadReference<FString>_>::CreateExplicitArgs
              ((TDataReadReference<FString> *)local_f8,pFVar1,(FLiteral *)&local_68);
    if ((0xc < local_68.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_68.TypeIndex];
    pTVar8 = &local_68;
  }
  (*pcVar6)(pTVar8);
LAB_14ad775b0:
  this_02 = ::operator_new(0x50);
  pFVar7 = (FConverterOperator *)0x0;
  if (this_02 != (FConverterOperator *)0x0) {
    local_a0 = local_c8.ObjectReference.Object;
    local_98 = local_c8.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_c8.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_c8.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_c8.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_88[1] = (undefined **)local_f8._8_8_;
    local_a8 = &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    local_78 = (TReferenceControllerBase<0> *)local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    local_88[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
    pFVar7 = TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
             FConverterOperator(this_02,(TDataReadReference<FString> *)local_88,
                                (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)
                                &local_a8);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_c8.ObjectReference.SharedReferenceCount.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebe5f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FCoverterOperatorFactory::
CreateOperator(FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FSharedReferencer<0> FVar2;
  FName *pFVar3;
  FConverterOperator *this_01;
  FConverterOperator *pFVar4;
  undefined **local_68;
  FSendAddress *local_60;
  TReferenceControllerBase<0> *local_58;
  TDataReference<Metasound::FSendAddress> local_48;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  TDataReference<Metasound::FSendAddress>::TDataReference<Metasound::FSendAddress><>
            (&local_48,NewObject);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar3 = TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
            (this_00,(TDataReadReference<FString> *)local_28,pFVar3,pFVar1);
  this_01 = ::operator_new(0x50);
  FVar2.ReferenceController = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  pFVar4 = (FConverterOperator *)0x0;
  if (this_01 != (FConverterOperator *)0x0) {
    local_60 = local_48.ObjectReference.Object;
    local_58 = local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    local_48.ObjectReference.SharedReferenceCount.ReferenceController = local_18;
    local_68 = &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
    local_48.ObjectReference.Object = (FSendAddress *)local_28._8_8_;
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_48._padding_ = (longlong)&___7__TDataReadReference_VFString___Metasound__6B_;
    pFVar4 = TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::
             FConverterOperator(this_01,(TDataReadReference<FString> *)&local_48,
                                (TDataWriteReference<Metasound::FSendAddress> *)&local_68);
  }
  param_1->Node = (INode *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec2d70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::FTrigger,float>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::FTrigger> *)local_58,
                        (TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec4b00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::FTrigger,int>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::FTrigger> *)local_58,
                        (TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec7000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<Metasound::FTrigger> *)local_58,
                        (TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecc220

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<FString,FString>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x20);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<FString,FString>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
            (this_00,(TDataReadReference<FString> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_VFString___Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<FString,FString>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<FString> *)local_58,
                        (TDataWriteReference<FString> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecef70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<float,float>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<float,float>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_M_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<float,float>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<float> *)local_58,
                        (TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed46b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,float>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<int,float>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,float>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed5530

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<float,int>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<float,int>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_M_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<float,int>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<float> *)local_58,
                        (TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed6f10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,int>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<int,int>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,int>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedb030

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<bool,float>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<bool,float>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_M_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference__N_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<bool,float>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<bool> *)local_58,
                        (TDataWriteReference<float> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedcb10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<bool,int>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<bool,int>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference_H_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference__N_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<bool,int>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<bool> *)local_58,
                        (TDataWriteReference<int> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aede6c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<float,bool>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<float,bool>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_M_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<float,bool>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<float> *)local_58,
                        (TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedf480

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<int,bool>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<int,bool>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<int,bool>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<int> *)local_58,
                        (TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee00a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TAutoConverterNode<bool,bool>::FCoverterOperatorFactory::CreateOperator
          (FCoverterOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FName *pFVar6;
  FConverterOperator *this_01;
  FConverterOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  pTVar4 = ::operator_new(0x18);
  pFVar7 = (FConverterOperator *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar4[1]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = TAutoConverterNode<bool,bool>::GetInputName();
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_38,pFVar6,pFVar1);
  this_01 = ::operator_new(0x50);
  if (this_01 != (FConverterOperator *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    local_78 = &___7__TDataWriteReference__N_Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference__N_Metasound__6B_;
    local_70 = pTVar8;
    local_68 = pTVar4;
    pFVar7 = TAutoConverterNode<bool,bool>::FConverterOperator::FConverterOperator
                       (this_01,(TDataReadReference<bool> *)local_58,
                        (TDataWriteReference<bool> *)&local_78);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

