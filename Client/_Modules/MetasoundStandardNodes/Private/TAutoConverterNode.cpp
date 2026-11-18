// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 250

// GetDefaultOperatorFactory @ 14afd1d30

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd1e20

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<int,Metasound::FMonoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd2180

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<float,Metasound::FMonoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd5050

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd5970

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<int,Metasound::FStereoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd60d0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetDefaultOperatorFactory
          (TAutoConverterNode<float,Metasound::FStereoAudioFormat> *this,
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

// GetDefaultOperatorFactory @ 14afd9b00

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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

// GetDefaultOperatorFactory @ 14afda050

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
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

// GetDefaultOperatorFactory @ 14afdcf50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
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

// GetDefaultOperatorFactory @ 14afdd680

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
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

// GetDefaultOperatorFactory @ 14afddcb0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
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

// GetDefaultOperatorFactory @ 14afde0a0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14afee940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                 )(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14afeea40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::FMonoAudioFormat> @ 14afeeb40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::FMonoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::
TAutoConverterNode<int,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<int,Metasound::FMonoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::FMonoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode_HVFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HVFMonoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HVFMonoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::FMonoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::FStereoAudioFormat> @ 14afeec40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::FStereoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::
TAutoConverterNode<int,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<int,Metasound::FStereoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::FStereoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode_HVFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HVFStereoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HVFStereoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::FStereoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<float,Metasound::FMonoAudioFormat> @ 14afeed40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<float,Metasound::FMonoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::
TAutoConverterNode<float,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<float,Metasound::FMonoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<float,Metasound::FMonoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode_MVFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_MVFMonoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_MVFMonoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<float,Metasound::FMonoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<float,Metasound::FStereoAudioFormat> @ 14afeee40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<float,Metasound::FStereoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::
TAutoConverterNode<float,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<float,Metasound::FStereoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<float,Metasound::FStereoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode_MVFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_MVFStereoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_MVFStereoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<float,Metasound::FStereoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int> @ 14afeef40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int> @ 14afef040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float> @ 14afef140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__M_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__M_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool> @ 14afef240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___N_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___N_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<bool,Metasound::FMonoAudioFormat> @ 14afef340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<bool,Metasound::FMonoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::
TAutoConverterNode<bool,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode__NVFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode__NVFMonoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode__NVFMonoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<bool,Metasound::FStereoAudioFormat> @ 14afef440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<bool,Metasound::FStereoAudioFormat> * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::
TAutoConverterNode<bool,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode__NVFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode__NVFStereoAudioFormat_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode__NVFStereoAudioFormat_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affb560

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affb5a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::FMonoAudioFormat> @ 14affb5e0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::
~TAutoConverterNode<int,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<int,Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::FStereoAudioFormat> @ 14affb620

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::
~TAutoConverterNode<int,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<int,Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<float,Metasound::FMonoAudioFormat> @ 14affb660

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::
~TAutoConverterNode<float,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<float,Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<float,Metasound::FStereoAudioFormat> @ 14affb6a0

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::
~TAutoConverterNode<float,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<float,Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int> @ 14affb6e0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int> @ 14affb720

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float> @ 14affb760

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool> @ 14affb7a0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<bool,Metasound::FMonoAudioFormat> @ 14affb7e0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::
~TAutoConverterNode<bool,Metasound::FMonoAudioFormat>
          (TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<bool,Metasound::FStereoAudioFormat> @ 14affb820

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::
~TAutoConverterNode<bool,Metasound::FStereoAudioFormat>
          (TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b024820

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024890

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024900

FName * __cdecl Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024970

FName * __cdecl Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0249e0

FName * __cdecl Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024a50

FName * __cdecl
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024ac0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024b30

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024ba0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024c10

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024c80

FName * __cdecl Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b024cf0

FName * __cdecl
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b029540

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0295b0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029620

FName * __cdecl Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029690

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029700

FName * __cdecl
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029770

FName * __cdecl
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0297e0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029850

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0298c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029930

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0299a0

FName * __cdecl Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b029a10

FName * __cdecl
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14b0416e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// GetDefaultOperatorFactory @ 14b041800

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
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

// GetDefaultOperatorFactory @ 14b041ad0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b041ea0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b04e320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int> @ 14b04e420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float> @ 14b04e520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool> @ 14b04e620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b053600

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int> @ 14b053640

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float> @ 14b053680

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool> @ 14b0536c0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b073aa0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b073b10

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b073b80

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b073bf0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b0761b0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b076220

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b076290

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b076300

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14b0823e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b082770

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
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

// GetDefaultOperatorFactory @ 14b086460

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
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

// GetDefaultOperatorFactory @ 14b0864f0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
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

// GetDefaultOperatorFactory @ 14b0899f0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b089ba0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
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

// GetDefaultOperatorFactory @ 14b08d0e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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

// GetDefaultOperatorFactory @ 14b08d2f0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0ac1e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_HV__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)()
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0ac2e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0ac3e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_HV__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0ac4e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int> @ 14b0ac5e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound__H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int> @ 14b0ac6e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int> @ 14b0ac7e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound__H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int> @ 14b0ac8e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b4dc0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b4e00

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b4e40

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b4e80

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int> @ 14b0b4ec0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int> @ 14b0b4f00

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int> @ 14b0b4f40

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int> @ 14b0b4f80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b0d66f0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d6760

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d67d0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d6840

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d68b0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d6920

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d6990

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b0d6a00

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b0d9b50

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9bc0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9c30

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9ca0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9d10

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9d80

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9df0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EKneeMode,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b0d9e60

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14b0e98a0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0e9b10

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b0ef560

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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

// GetDefaultOperatorFactory @ 14b0efaa0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b0f8be0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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

// GetDefaultOperatorFactory @ 14b0f93a0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
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

// GetDefaultOperatorFactory @ 14b0f9730

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
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

// GetDefaultOperatorFactory @ 14b0f9cd0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
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

// GetDefaultOperatorFactory @ 14b101850

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
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

// GetDefaultOperatorFactory @ 14b1023c0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b109730

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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

// GetDefaultOperatorFactory @ 14b109c50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
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

// GetDefaultOperatorFactory @ 14b10d180

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b10d400

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b111a50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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

// GetDefaultOperatorFactory @ 14b111b30

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b130cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b130df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_HV__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b130ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b130ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b1310f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b1311f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b1312f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int> @ 14b1313f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int> @ 14b1314f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound__H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int> @ 14b1315f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int> @ 14b1316f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int> @ 14b1317f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int> @ 14b1318f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int> @ 14b1319f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float> @ 14b131af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__M_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__M_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool> @ 14b131bf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___N_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___N_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b142b00

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b142b40

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b142b80

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b142bc0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b142c00

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b142c40

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b142c80

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int> @ 14b142cc0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int> @ 14b142d00

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int> @ 14b142d40

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int> @ 14b142d80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int> @ 14b142dc0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int> @ 14b142e00

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int> @ 14b142e40

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float> @ 14b142e80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool> @ 14b142ec0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b191da0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b191e10

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b191e80

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b191ef0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b191f60

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b191fd0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192040

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1920b0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192120

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192190

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192200

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192270

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1922e0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192350

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1923c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b192430

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b197f30

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b197fa0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198010

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198080

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1980f0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198160

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1981d0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198240

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1982b0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ENoiseType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198320

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198390

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198400

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198470

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1984e0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b198550

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1985c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14b1abdc0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
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

// GetDefaultOperatorFactory @ 14b1abe50

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
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

// GetDefaultOperatorFactory @ 14b1b99d0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b1b9a60

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c9bc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c9cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int> @ 14b1c9dc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int> @ 14b1c9ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cf2f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cf330

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int> @ 14b1cf370

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int> @ 14b1cf3b0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b1e2670

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1e26e0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1e2750

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b1e27c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b1e4010

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1e4080

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1e40f0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b1e4160

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14b1f9940

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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

// GetDefaultOperatorFactory @ 14b1f9c80

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b201c00

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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

// GetDefaultOperatorFactory @ 14b2022c0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
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

// GetDefaultOperatorFactory @ 14b20d6b0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
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

// GetDefaultOperatorFactory @ 14b20de20

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b22b250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b22b350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b22b450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_HV__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int> @ 14b22b550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int> @ 14b22b650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int> *)
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int> @ 14b22b750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &___7__TAutoConverterNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound__H_Metasound__6B_;
  pTVar3 = ::operator_new(0x18);
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int> *)(*pcVar1)();
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
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b234bd0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b234c10

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b234c50

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int> @ 14b234c90

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int> @ 14b234cd0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int> @ 14b234d10

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14b27a670

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b27a6e0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b27a750

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b27a7c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b27a830

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b27a8a0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::GetInputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b2838f0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b283960

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b2839d0

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b283a40

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b283ab0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b283b20

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::GetOutputName
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EWaveShaperType,1>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

