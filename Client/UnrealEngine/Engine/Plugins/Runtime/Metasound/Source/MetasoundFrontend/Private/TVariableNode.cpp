// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 95

// GetDefaultOperatorFactory @ 14ad6d650

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::Frontend::FAnalyzerAddress> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14ad70530

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14ad73ac0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetDefaultOperatorFactory
          (void *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = *(IOperatorFactory **)((longlong)this + 0x90);
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x98);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad96480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad96550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad966a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad96770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)((longlong)this + 0x90) = 0x10;
    *(undefined8 *)((longlong)this + 0x98) = 0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    *(TReferenceControllerBase<1> **)((longlong)this + 0x90) = pTVar3 + 1;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x98) = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::Frontend::FAnalyzerAddress> @ 14ad968c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::
TVariableNode<Metasound::Frontend::FAnalyzerAddress>
          (TVariableNode<Metasound::Frontend::FAnalyzerAddress> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::Frontend::FAnalyzerAddress>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)&___7__TVariableNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::Frontend::FAnalyzerAddress> @ 14ad96990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::
TVariableNode<Metasound::Frontend::FAnalyzerAddress>
          (TVariableNode<Metasound::Frontend::FAnalyzerAddress> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)&___7__TVariableNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFAnalyzerAddress_Frontend_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FFactory___TVariableNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14adaf330

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14adb53f0

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14adb5530

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
                     (local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14adb5670

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14ae91530

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<int>::GetDefaultOperatorFactory
          (TVariableNode<int> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14ae9a780

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14ae9af00

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<float>::GetDefaultOperatorFactory
          (TVariableNode<float> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aea5c60

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultOperatorFactory
          (TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aea73b0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<FString>::GetDefaultOperatorFactory
          (TVariableNode<FString> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aea8970

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultOperatorFactory
          (TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aeafaf0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aeb5510

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FTrigger>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FTrigger> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aebaa50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FTime>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FTime> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aebf1b0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aec63e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultOperatorFactory
          (TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aec85a0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FSendAddress>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FSendAddress> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aeca270

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::GetDefaultOperatorFactory
          (TVariableNode<FMetasoundParameterStorageWrapper> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aed4a90

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBuffer>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FAudioBuffer> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aee0210

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<bool>::GetDefaultOperatorFactory
          (TVariableNode<bool> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14aee5810

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultOperatorFactory
          (TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// TVariableNode<int> @ 14af36250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<int> * __thiscall
Metasound::TVariableNode<int>::TVariableNode<int>
          (TVariableNode<int> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<int>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_H_Metasound__6B_;
  return this;
}

// TVariableNode<int> @ 14af36320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<int> * __thiscall
Metasound::TVariableNode<int>::TVariableNode<int>
          (TVariableNode<int> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<int> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_H_Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory___TVariableNode_H_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<float> @ 14af36470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<float> * __thiscall
Metasound::TVariableNode<float>::TVariableNode<float>
          (TVariableNode<float> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<float>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_M_Metasound__6B_;
  return this;
}

// TVariableNode<float> @ 14af36540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<float> * __thiscall
Metasound::TVariableNode<float>::TVariableNode<float>
          (TVariableNode<float> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<float> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_M_Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory___TVariableNode_M_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af36690

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2)
  ;
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af36760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FFactory___TVariableNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af368b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af36980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FFactory___TVariableNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af36ad0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af36ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af36cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af36dc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af36f10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &___7__TVariableNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return this;
}

// TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af36fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &___7__TVariableNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af37130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,FName *param_1
          ,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af37200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)()
        ;
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af37350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af37420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)&___7__TVariableNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::FAudioBuffer> @ 14af37570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FAudioBuffer> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBuffer>::TVariableNode<Metasound::FAudioBuffer>
          (TVariableNode<Metasound::FAudioBuffer> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::FAudioBuffer>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFAudioBuffer_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FAudioBuffer> @ 14af37640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FAudioBuffer> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBuffer>::TVariableNode<Metasound::FAudioBuffer>
          (TVariableNode<Metasound::FAudioBuffer> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FAudioBuffer> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFAudioBuffer_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFAudioBuffer_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<FMetasoundParameterStorageWrapper> @ 14af37790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::
TVariableNode<FMetasoundParameterStorageWrapper>
          (TVariableNode<FMetasoundParameterStorageWrapper> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<FMetasoundParameterStorageWrapper>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)&___7__TVariableNode_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return this;
}

// TVariableNode<FMetasoundParameterStorageWrapper> @ 14af37860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::
TVariableNode<FMetasoundParameterStorageWrapper>
          (TVariableNode<FMetasoundParameterStorageWrapper> *this,FLiteral *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<FMetasoundParameterStorageWrapper> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)&___7__TVariableNode_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFMetasoundParameterStorageWrapper___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFMetasoundParameterStorageWrapper___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::FSendAddress> @ 14af379b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FSendAddress> * __thiscall
Metasound::TVariableNode<Metasound::FSendAddress>::TVariableNode<Metasound::FSendAddress>
          (TVariableNode<Metasound::FSendAddress> *this,FName *param_1,FGuid *param_2,
          FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::FSendAddress>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFSendAddress_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FSendAddress> @ 14af37a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FSendAddress> * __thiscall
Metasound::TVariableNode<Metasound::FSendAddress>::TVariableNode<Metasound::FSendAddress>
          (TVariableNode<Metasound::FSendAddress> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FSendAddress> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFSendAddress_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFSendAddress_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFSendAddress_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<FString> @ 14af37bd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<FString> * __thiscall
Metasound::TVariableNode<FString>::TVariableNode<FString>
          (TVariableNode<FString> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<FString>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFString___Metasound__6B_;
  return this;
}

// TVariableNode<FString> @ 14af37ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<FString> * __thiscall
Metasound::TVariableNode<FString>::TVariableNode<FString>
          (TVariableNode<FString> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<FString> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFString___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFString___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory___TVariableNode_VFString___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<FString> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::FTime> @ 14af37df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FTime> * __thiscall
Metasound::TVariableNode<Metasound::FTime>::TVariableNode<Metasound::FTime>
          (TVariableNode<Metasound::FTime> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::FTime>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFTime_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FTime> @ 14af37ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FTime> * __thiscall
Metasound::TVariableNode<Metasound::FTime>::TVariableNode<Metasound::FTime>
          (TVariableNode<Metasound::FTime> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FTime> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFTime_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFTime_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory___TVariableNode_VFTime_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::FTime> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<Metasound::FTrigger> @ 14af38010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FTrigger> * __thiscall
Metasound::TVariableNode<Metasound::FTrigger>::TVariableNode<Metasound::FTrigger>
          (TVariableNode<Metasound::FTrigger> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::FTrigger>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFTrigger_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FTrigger> @ 14af380e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FTrigger> * __thiscall
Metasound::TVariableNode<Metasound::FTrigger>::TVariableNode<Metasound::FTrigger>
          (TVariableNode<Metasound::FTrigger> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FTrigger> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFTrigger_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFTrigger_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFTrigger_Metasound___Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::FTrigger> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TVariableNode<bool> @ 14af38230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<bool> * __thiscall
Metasound::TVariableNode<bool>::TVariableNode<bool>
          (TVariableNode<bool> *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1c0;
  FVertexInterface local_1b0;
  FNodeData local_160;
  FNodeClassMetadata local_e8;
  
  pFVar1 = CreateNodeClassMetadata(&local_e8);
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata>
                     (&local_1c0,pFVar1);
  pFVar3 = DeclareVertexInterface(&local_1b0);
  pFVar4 = FNodeData::FNodeData(&local_160,param_1,param_2,pFVar3);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<bool>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode__N_Metasound__6B_;
  return this;
}

// TVariableNode<bool> @ 14af38300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<bool> * __thiscall
Metasound::TVariableNode<bool>::TVariableNode<bool>
          (TVariableNode<bool> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<bool> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode__N_Metasound__6B_;
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode__N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory___TVariableNode__N_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (0xc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVariableNode<bool> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14af646f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<int>::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<int>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<int>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<float>::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<float>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<float>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64b70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64db0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64ed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af65110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FAudioBuffer>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBuffer>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af65230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FMetasoundParameterStorageWrapper>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af65350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FSendAddress>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FSendAddress>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af65470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<FString>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<FString>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<FString>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af65590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FTime>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FTime>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTime>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af656b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FTrigger>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FTrigger>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af657d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<bool>::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName FVar3;
  FVertexInterface *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<bool>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<bool>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  ::FString::operator=(&__return_storage_ptr__->Author,&PluginAuthor);
  TVar2 = PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = PluginNodeMissingPrompt.Flags;
  pFVar4 = DeclareVertexInterface(&local_58);
  FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar4);
  FVertexInterface::~FVertexInterface(&local_58);
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af85b80

FVertexInterface * __cdecl
Metasound::TVariableNode<int>::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<int>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<int>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<int>_>::
           TOutputDataVertex<Metasound::TVariable<int>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af85cc0

FVertexInterface * __cdecl
Metasound::TVariableNode<float>::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<float>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<float>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<float>_>::
           TOutputDataVertex<Metasound::TVariable<float>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af85e00

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af85f40

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86080

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af861c0

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86300

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86440

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86580

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af866c0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FAudioBuffer>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86800

FVertexInterface * __cdecl
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86940

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FSendAddress>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86a80

FVertexInterface * __cdecl
Metasound::TVariableNode<FString>::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<FString>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<FString>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<FString>_>::
           TOutputDataVertex<Metasound::TVariable<FString>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86bc0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FTime>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86d00

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FTrigger>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14af86e40

FVertexInterface * __cdecl
Metasound::TVariableNode<bool>::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<bool>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<bool>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<bool>_>::
           TOutputDataVertex<Metasound::TVariable<bool>_><>
                     (&local_30,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_98);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_58,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_98
             ,&local_98.SubInterfaces);
  if ((local_58.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_58.Vertices)->AllocatorInstance,(local_58.Vertices)->ArrayNum,
               &(local_58.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_58,(FOutputDataVertex *)pTVar1);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_58);
  pFVar2 = FInputVertexInterface::FInputVertexInterface(&local_78);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar2,&local_98);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data,
             local_78.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_78.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_78.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_78._padding_,(int)local_78._padding_);
  if ((FInputDataVertex *)local_78._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data,
             local_98.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_98.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_98.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

