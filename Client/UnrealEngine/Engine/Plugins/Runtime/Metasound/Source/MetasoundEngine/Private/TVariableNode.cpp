// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 45

// GetDefaultOperatorFactory @ 14b2c7fc0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FWaveAsset>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FWaveAsset> *this,
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

// GetDefaultOperatorFactory @ 14b2c8210

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBusAsset>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FAudioBusAsset> *this,
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

// GetDefaultOperatorFactory @ 14b2cada0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
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

// GetDefaultOperatorFactory @ 14b2d9a20

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::GetDefaultOperatorFactory
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

// GetDefaultOperatorFactory @ 14b2e2690

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetDefaultOperatorFactory
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

// GetDefaultOperatorFactory @ 14b2f7a10

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::GetDefaultOperatorFactory
          (TVariableNode<Metasound::FWaveTableBankAsset> *this,
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

// GetDefaultOperatorFactory @ 14b2fc360

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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

// GetDefaultOperatorFactory @ 14b2fe170

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultOperatorFactory
          (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
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

// GetDefaultOperatorFactory @ 14b2ff420

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TVariableNode<WaveTable::FWaveTable>::GetDefaultOperatorFactory
          (TVariableNode<WaveTable::FWaveTable> *this,
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

// TVariableNode<WaveTable::FWaveTable> @ 14b343200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<WaveTable::FWaveTable> * __thiscall
Metasound::TVariableNode<WaveTable::FWaveTable>::TVariableNode<WaveTable::FWaveTable>
          (TVariableNode<WaveTable::FWaveTable> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<WaveTable::FWaveTable>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_UFWaveTable_WaveTable___Metasound__6B_;
  return this;
}

// TVariableNode<WaveTable::FWaveTable> @ 14b3432d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<WaveTable::FWaveTable> * __thiscall
Metasound::TVariableNode<WaveTable::FWaveTable>::TVariableNode<WaveTable::FWaveTable>
          (TVariableNode<WaveTable::FWaveTable> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<WaveTable::FWaveTable> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_UFWaveTable_WaveTable___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_UFWaveTable_WaveTable___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_UFWaveTable_WaveTable___Metasound__6B_;
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
        pTVar4 = (TVariableNode<WaveTable::FWaveTable> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<WaveTable::FWaveTable> *)(*pcVar1)();
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

// TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b343420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b3434f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
        pTVar4 = (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
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

// TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b343640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b343710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
        pTVar4 = (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar4 = (TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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

// TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b343860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b343930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
        pTVar4 = (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar4 = (TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar1)();
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

// TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b343a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
  TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b343b50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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

// TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b343ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
  TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b343d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode(this,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TVariableNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FFactory___TVariableNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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

// TVariableNode<Metasound::FAudioBusAsset> @ 14b343ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FAudioBusAsset> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBusAsset>::TVariableNode<Metasound::FAudioBusAsset>
          (TVariableNode<Metasound::FAudioBusAsset> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<Metasound::FAudioBusAsset>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFAudioBusAsset_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FAudioBusAsset> @ 14b343f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FAudioBusAsset> * __thiscall
Metasound::TVariableNode<Metasound::FAudioBusAsset>::TVariableNode<Metasound::FAudioBusAsset>
          (TVariableNode<Metasound::FAudioBusAsset> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FAudioBusAsset> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFAudioBusAsset_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFAudioBusAsset_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFAudioBusAsset_Metasound___Metasound__6B_;
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
        pTVar4 = (TVariableNode<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::FAudioBusAsset> *)(*pcVar1)();
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

// TVariableNode<Metasound::FWaveAsset> @ 14b3440e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FWaveAsset> * __thiscall
Metasound::TVariableNode<Metasound::FWaveAsset>::TVariableNode<Metasound::FWaveAsset>
          (TVariableNode<Metasound::FWaveAsset> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<Metasound::FWaveAsset>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFWaveAsset_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FWaveAsset> @ 14b3441b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FWaveAsset> * __thiscall
Metasound::TVariableNode<Metasound::FWaveAsset>::TVariableNode<Metasound::FWaveAsset>
          (TVariableNode<Metasound::FWaveAsset> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FWaveAsset> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFWaveAsset_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFWaveAsset_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFWaveAsset_Metasound___Metasound__6B_;
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
        pTVar4 = (TVariableNode<Metasound::FWaveAsset> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::FWaveAsset> *)(*pcVar1)();
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

// TVariableNode<Metasound::FWaveTableBankAsset> @ 14b344300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::
TVariableNode<Metasound::FWaveTableBankAsset>
          (TVariableNode<Metasound::FWaveTableBankAsset> *this,FName *param_1,FGuid *param_2,
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
  TVariableNode<Metasound::FWaveTableBankAsset>(this,(FLiteral *)&local_1d8,pFVar4,pTVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  this->_padding_ = (longlong)&___7__TVariableNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return this;
}

// TVariableNode<Metasound::FWaveTableBankAsset> @ 14b3443d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TVariableNode<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::
TVariableNode<Metasound::FWaveTableBankAsset>
          (TVariableNode<Metasound::FWaveTableBankAsset> *this,FLiteral *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TVariableNode<Metasound::FWaveTableBankAsset> *pTVar4;
  ulonglong uVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_2,param_3);
  this->_padding_ = (longlong)&___7__TVariableNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFFactory___TVariableNode_VFWaveTableBankAsset_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FFactory___TVariableNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
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
        pTVar4 = (TVariableNode<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
      pTVar4 = (TVariableNode<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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

// CreateNodeClassMetadata @ 14b37acc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<WaveTable::FWaveTable>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<WaveTable::FWaveTable>(void)'
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

// CreateNodeClassMetadata @ 14b37ade0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
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

// CreateNodeClassMetadata @ 14b37af00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
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

// CreateNodeClassMetadata @ 14b37b020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
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

// CreateNodeClassMetadata @ 14b37b140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
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

// CreateNodeClassMetadata @ 14b37b260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         ();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
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

// CreateNodeClassMetadata @ 14b37b380

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FAudioBusAsset>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FAudioBusAsset>(void)'
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

// CreateNodeClassMetadata @ 14b37b4a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FWaveAsset>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveAsset>(void)'
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

// CreateNodeClassMetadata @ 14b37b5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::CreateNodeClassMetadata
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
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
      VariableNames::GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                  ::__l2::ClassName,pFVar5);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
          ::__l2::ClassName.Name;
  (__return_storage_ptr__->ClassName).Namespace =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
       ::__l2::ClassName.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::FWaveTableBankAsset>(void)'
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

// DeclareVertexInterface @ 14b396ee0

FVertexInterface * __cdecl
Metasound::TVariableNode<WaveTable::FWaveTable>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
           TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
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

// DeclareVertexInterface @ 14b397020

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14b397160

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14b3972a0

FVertexInterface * __cdecl
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14b3973e0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
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

// DeclareVertexInterface @ 14b397520

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  undefined1 local_30 [40];
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
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

// DeclareVertexInterface @ 14b397660

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FAudioBusAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
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

// DeclareVertexInterface @ 14b3977a0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FWaveAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
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

// DeclareVertexInterface @ 14b3978e0

FVertexInterface * __cdecl
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  FInputVertexInterface *pFVar2;
  FOutputVertexInterface local_98;
  FInputVertexInterface local_78;
  FOutputVertexInterfaceDeclarationBuilder local_58;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_30;
  
  pTVar1 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
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

