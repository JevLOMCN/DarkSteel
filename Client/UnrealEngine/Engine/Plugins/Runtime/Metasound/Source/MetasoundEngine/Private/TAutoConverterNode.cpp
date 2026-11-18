// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 20

// GetDefaultOperatorFactory @ 14b2e2560

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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

// GetDefaultOperatorFactory @ 14b2e2a70

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
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

// GetDefaultOperatorFactory @ 14b2e9460

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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

// GetDefaultOperatorFactory @ 14b2ea060

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b339010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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

// TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b339110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
  *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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

// TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int> @ 14b339210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int> *
__thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
  *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound__H_Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
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

// TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int> @ 14b339310

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int> *
__thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
  *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound__H_Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
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

// ~TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b34de70

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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

// ~TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b34deb0

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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

// ~TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int> @ 14b34def0

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
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

// ~TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int> @ 14b34df30

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
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

// GetInputName @ 14b3b4c90

FName * __cdecl
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b3b4d00

FName * __cdecl
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b3b4d70

FName * __cdecl
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14b3b4de0

FName * __cdecl
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14b3becd0

FName * __cdecl
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b3bed40

FName * __cdecl
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b3bedb0

FName * __cdecl
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14b3bee20

FName * __cdecl
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

