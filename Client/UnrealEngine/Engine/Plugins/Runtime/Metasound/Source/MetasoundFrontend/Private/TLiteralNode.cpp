// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad949a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TLiteralNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TLiteralNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad94ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TLiteralNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TLiteralNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  FLiteralNode::FLiteralNode(this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TLiteralNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return this;
}

// TLiteralNode<Metasound::Frontend::FAnalyzerAddress> @ 14ad94be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TLiteralNode<Metasound::Frontend::FAnalyzerAddress>::
TLiteralNode<Metasound::Frontend::FAnalyzerAddress>
          (TLiteralNode<Metasound::Frontend::FAnalyzerAddress> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFAnalyzerAddress_Frontend_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7__TLiteralOperatorLiteralFactory_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return this;
}

// TLiteralNode<int> @ 14af2e630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<int> * __thiscall
Metasound::TLiteralNode<int>::TLiteralNode<int>
          (TLiteralNode<int> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<int> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7__TLiteralOperatorLiteralFactory_H_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<int>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_H_Metasound__6B_;
  return this;
}

// TLiteralNode<float> @ 14af2e750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<float> * __thiscall
Metasound::TLiteralNode<float>::TLiteralNode<float>
          (TLiteralNode<float> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<float> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7__TLiteralOperatorLiteralFactory_M_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<float>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_M_Metasound__6B_;
  return this;
}

// TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af2e870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &___7__TLiteralNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af2e990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &___7__TLiteralNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af2eab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TLiteralNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af2ebd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TLiteralNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af2ecf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &___7__TLiteralNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af2ee10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &
       ___7__TLiteralNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af2ef30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this =
       &___7__TLiteralNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TLiteralNode<Metasound::FAudioBuffer> @ 14af2f050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::FAudioBuffer> * __thiscall
Metasound::TLiteralNode<Metasound::FAudioBuffer>::TLiteralNode<Metasound::FAudioBuffer>
          (TLiteralNode<Metasound::FAudioBuffer> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::FAudioBuffer> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFAudioBuffer_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7__TLiteralOperatorLiteralFactory_VFAudioBuffer_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFAudioBuffer_Metasound___Metasound__6B_;
  return this;
}

// TLiteralNode<FMetasoundParameterStorageWrapper> @ 14af2f170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TLiteralNode<FMetasoundParameterStorageWrapper>::
TLiteralNode<FMetasoundParameterStorageWrapper>
          (TLiteralNode<FMetasoundParameterStorageWrapper> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<FMetasoundParameterStorageWrapper> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFMetasoundParameterStorageWrapper___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7__TLiteralOperatorLiteralFactory_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return this;
}

// TLiteralNode<Metasound::FSendAddress> @ 14af2f290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::FSendAddress> * __thiscall
Metasound::TLiteralNode<Metasound::FSendAddress>::TLiteralNode<Metasound::FSendAddress>
          (TLiteralNode<Metasound::FSendAddress> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::FSendAddress> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFSendAddress_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7__TLiteralOperatorLiteralFactory_VFSendAddress_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFSendAddress_Metasound___Metasound__6B_;
  return this;
}

// TLiteralNode<FString> @ 14af2f3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<FString> * __thiscall
Metasound::TLiteralNode<FString>::TLiteralNode<FString>
          (TLiteralNode<FString> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<FString> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFString___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7__TLiteralOperatorLiteralFactory_VFString___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<FString>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFString___Metasound__6B_;
  return this;
}

// TLiteralNode<Metasound::FTime> @ 14af2f4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::FTime> * __thiscall
Metasound::TLiteralNode<Metasound::FTime>::TLiteralNode<Metasound::FTime>
          (TLiteralNode<Metasound::FTime> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::FTime> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFTime_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7__TLiteralOperatorLiteralFactory_VFTime_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::FTime> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::FTime>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFTime_Metasound___Metasound__6B_;
  return this;
}

// TLiteralNode<Metasound::FTrigger> @ 14af2f5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<Metasound::FTrigger> * __thiscall
Metasound::TLiteralNode<Metasound::FTrigger>::TLiteralNode<Metasound::FTrigger>
          (TLiteralNode<Metasound::FTrigger> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<Metasound::FTrigger> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_VFTrigger_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7__TLiteralOperatorLiteralFactory_VFTrigger_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<Metasound::FTrigger> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Reference,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode_VFTrigger_Metasound___Metasound__6B_;
  return this;
}

// TLiteralNode<bool> @ 14af2f710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TLiteralNode<bool> * __thiscall
Metasound::TLiteralNode<bool>::TLiteralNode<bool>
          (TLiteralNode<bool> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TLiteralNode<bool> *pTVar4;
  FName *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_28;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory__N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7__TLiteralOperatorLiteralFactory__N_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_3->Value);
    local_28.Object = (IOperatorFactory *)(pTVar3 + 1);
    if ((TReferenceControllerBase<1> *)local_28.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TLiteralNode<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = GetMetasoundDataTypeName<bool>();
  FLiteralNode::FLiteralNode((FLiteralNode *)this,param_1,param_2,pFVar5,Value,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7__TLiteralNode__N_Metasound__6B_;
  return this;
}

