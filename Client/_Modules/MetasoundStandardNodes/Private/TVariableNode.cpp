// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 105

// GetDefaultOperatorFactory @ 14afc8f50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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

// GetDefaultOperatorFactory @ 14afc9700

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FStereoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afcc580

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FMonoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afcdbe0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff7ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff7d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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

// TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff7ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff7f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::FMonoAudioFormat> @ 14aff80e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::TVariableNode<Metasound::FMonoAudioFormat>
          (TVariableNode<Metasound::FMonoAudioFormat> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<Metasound::FMonoAudioFormat>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FMonoAudioFormat> @ 14aff81b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::TVariableNode<Metasound::FMonoAudioFormat>
          (TVariableNode<Metasound::FMonoAudioFormat> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FMonoAudioFormat> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFMonoAudioFormat_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFMonoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFMonoAudioFormat_Metasound___Metasound__6B_;
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
        pTVar4 = (TVariableNode<Metasound::FMonoAudioFormat> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::FMonoAudioFormat> *)(*pcVar1)();
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

// TVariableNode<Metasound::FStereoAudioFormat> @ 14aff8300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::
TVariableNode<Metasound::FStereoAudioFormat>
          (TVariableNode<Metasound::FStereoAudioFormat> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<Metasound::FStereoAudioFormat>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FStereoAudioFormat> @ 14aff83d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::
TVariableNode<Metasound::FStereoAudioFormat>
          (TVariableNode<Metasound::FStereoAudioFormat> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FStereoAudioFormat> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFStereoAudioFormat_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFStereoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFStereoAudioFormat_Metasound___Metasound__6B_;
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
        pTVar4 = (TVariableNode<Metasound::FStereoAudioFormat> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::FStereoAudioFormat> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b00c2c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
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

// CreateNodeClassMetadata @ 14b00c3e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b00c500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FMonoAudioFormat>(void)'
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

// CreateNodeClassMetadata @ 14b00c620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FStereoAudioFormat>(void)'
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

// DeclareVertexInterface @ 14b0191b0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
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

// DeclareVertexInterface @ 14b0192f0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
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

// DeclareVertexInterface @ 14b019430

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
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

// DeclareVertexInterface @ 14b019570

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
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

// GetDefaultOperatorFactory @ 14b034d30

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0516c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FName *param_1,FGuid *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  FNodeClassMetadata *pFVar3;
  TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  FVertexInterface *pFVar5;
  FNodeData *pFVar6;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_1e8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_1d8;
  FVertexInterface local_1c0;
  FNodeData local_170;
  FNodeClassMetadata local_f8;
  
  pFVar3 = CreateNodeClassMetadata(&local_f8);
  local_1e8.SharedReferenceCount.ReferenceController = ::operator_new(0xf0);
  if (local_1e8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_1e8.Object = ___xmm_00000000000000000000000000000010;
    local_1e8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_1e8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_1e8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFNodeClassMetadata_Metasound___00_SharedPointerInternals__6B_
    ;
    FNodeClassMetadata::FNodeClassMetadata
              ((FNodeClassMetadata *)(local_1e8.SharedReferenceCount.ReferenceController + 1),pFVar3
              );
    local_1e8.Object =
         (FNodeClassMetadata *)(local_1e8.SharedReferenceCount.ReferenceController + 1);
    if (local_1e8.Object == (FNodeClassMetadata *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  pFVar5 = DeclareVertexInterface(&local_1c0);
  pFVar6 = FNodeData::FNodeData(&local_170,param_1,param_2,pFVar5);
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_1d8,&param_3->Value);
  TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar6,&local_1e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_f8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b051800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b0607c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
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

// DeclareVertexInterface @ 14b0688e0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
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

// GetDefaultOperatorFactory @ 14b08b110

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b094570

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
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

// GetDefaultOperatorFactory @ 14b096690

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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

// GetDefaultOperatorFactory @ 14b0966c0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDefaultOperatorFactory
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

// TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b1fa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b2070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b21c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b2290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b23e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b24b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b2600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b26d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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

// CreateNodeClassMetadata @ 14b0c6b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b0c6ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b0c6dc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b0c6ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
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

// DeclareVertexInterface @ 14b0d1190

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
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

// DeclareVertexInterface @ 14b0d12d0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
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

// DeclareVertexInterface @ 14b0d1410

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
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

// DeclareVertexInterface @ 14b0d1550

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
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

// GetDefaultOperatorFactory @ 14b0ebd80

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0efbc0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0f3640

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0f7e30

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0fa130

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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

// GetDefaultOperatorFactory @ 14b0fb350

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDefaultOperatorFactory
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

// GetDefaultOperatorFactory @ 14b109f20

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13d440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13d510

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13d660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13d730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13d880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13d950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13daa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13db70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13dcc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13dd90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(*pcVar1)()
        ;
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13dee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13dfb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)(*pcVar1)()
      ;
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

// TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13e100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13e1d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b16b6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b16b7f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b16b910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b16ba30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
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

// CreateNodeClassMetadata @ 14b16bb50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b16bc70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b16bd90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
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

// DeclareVertexInterface @ 14b17eb60

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
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

// DeclareVertexInterface @ 14b17eca0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
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

// DeclareVertexInterface @ 14b17ede0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17ef20

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
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

// DeclareVertexInterface @ 14b17f060

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17f1a0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17f2e0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *pTVar1
  ;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
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

// GetDefaultOperatorFactory @ 14b1afe90

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b1b0550

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cd070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cd140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cd290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cd360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b1d77e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b1d7900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
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

// DeclareVertexInterface @ 14b1dcc20

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
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

// DeclareVertexInterface @ 14b1dcd60

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *pTVar1
  ;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
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

// GetDefaultOperatorFactory @ 14b1faa80

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
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

// GetDefaultOperatorFactory @ 14b1fd050

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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

// GetDefaultOperatorFactory @ 14b213370

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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

// TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b232870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b232940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b232a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
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
  TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b232b60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b232cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
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
  TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b232d80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &___7__TVariableNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b254580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b2546a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b2547c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
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

// DeclareVertexInterface @ 14b26f870

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
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

// DeclareVertexInterface @ 14b26f9b0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
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

// DeclareVertexInterface @ 14b26faf0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
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

