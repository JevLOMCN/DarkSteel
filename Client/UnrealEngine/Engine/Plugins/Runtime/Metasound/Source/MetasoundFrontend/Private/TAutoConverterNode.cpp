// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 85

// GetDefaultOperatorFactory @ 14ad6e670

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::
GetDefaultOperatorFactory
          (TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *this,
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

// GetDefaultOperatorFactory @ 14ad78ab0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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

// GetDefaultOperatorFactory @ 14ad78da0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
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

// TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad92390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_HV__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *
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

// TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int> @ 14ad92490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>
          (void *this,FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int> *pTVar4;
  
  FBasicNode::FBasicNode(this,param_1,param_2);
  *(undefined ***)this =
       &
       ___7__TAutoConverterNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound__H_Metasound__6B_
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound__H_Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int> *)
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

// TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> @ 14ad92590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::
TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>
          (TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *this,
          FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TAutoConverterNode_VFString__VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFString__VFAnalyzerAddress_Frontend_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_VFString__VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
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

// ~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9c710

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int> @ 14ad9c750

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
~TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> @ 14ad9c790

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::
~TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>
          (TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14adbf290

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14adbf300

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14adbf370

FName * __cdecl
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14adc2150

FName * __cdecl
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14adc21c0

FName * __cdecl
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14adc2230

FName * __cdecl
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetDefaultOperatorFactory @ 14ae96c10

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<bool,bool>::GetDefaultOperatorFactory
          (TAutoConverterNode<bool,bool> *this,
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

// GetDefaultOperatorFactory @ 14ae97500

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,bool>::GetDefaultOperatorFactory
          (TAutoConverterNode<int,bool> *this,
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

// GetDefaultOperatorFactory @ 14ae97a30

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<float,bool>::GetDefaultOperatorFactory
          (TAutoConverterNode<float,bool> *this,
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

// GetDefaultOperatorFactory @ 14ae98bf0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<bool,int>::GetDefaultOperatorFactory
          (TAutoConverterNode<bool,int> *this,
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

// GetDefaultOperatorFactory @ 14ae99890

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<bool,float>::GetDefaultOperatorFactory
          (TAutoConverterNode<bool,float> *this,
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

// GetDefaultOperatorFactory @ 14aea48e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetDefaultOperatorFactory
          (TAutoConverterNode<FString,Metasound::FSendAddress> *this,
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

// GetDefaultOperatorFactory @ 14aeadb10

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<FString,FString>::GetDefaultOperatorFactory
          (TAutoConverterNode<FString,FString> *this,
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

// GetDefaultOperatorFactory @ 14aebcec0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,int>::GetDefaultOperatorFactory
          (TAutoConverterNode<int,int> *this,
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

// GetDefaultOperatorFactory @ 14aebd9d0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<float,int>::GetDefaultOperatorFactory
          (TAutoConverterNode<float,int> *this,
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

// GetDefaultOperatorFactory @ 14aebde60

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<int,float>::GetDefaultOperatorFactory
          (TAutoConverterNode<int,float> *this,
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

// GetDefaultOperatorFactory @ 14aed4d70

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetDefaultOperatorFactory
          (TAutoConverterNode<Metasound::FTrigger,bool> *this,
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

// GetDefaultOperatorFactory @ 14aed5380

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetDefaultOperatorFactory
          (TAutoConverterNode<Metasound::FTrigger,int> *this,
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

// GetDefaultOperatorFactory @ 14aed66e0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetDefaultOperatorFactory
          (TAutoConverterNode<Metasound::FTrigger,float> *this,
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

// GetDefaultOperatorFactory @ 14aee3c00

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TAutoConverterNode<float,float>::GetDefaultOperatorFactory
          (TAutoConverterNode<float,float> *this,
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

// TAutoConverterNode<int,int> @ 14af260b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,int> * __thiscall
Metasound::TAutoConverterNode<int,int>::TAutoConverterNode<int,int>
          (TAutoConverterNode<int,int> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,int> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_HH_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HH_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_HH_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,int> *)(*pcVar1)();
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

// TAutoConverterNode<int,float> @ 14af261b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,float> * __thiscall
Metasound::TAutoConverterNode<int,float>::TAutoConverterNode<int,float>
          (TAutoConverterNode<int,float> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,float> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_HM_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HM_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_HM_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,float> *)(*pcVar1)();
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

// TAutoConverterNode<int,bool> @ 14af262b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<int,bool> * __thiscall
Metasound::TAutoConverterNode<int,bool>::TAutoConverterNode<int,bool>
          (TAutoConverterNode<int,bool> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<int,bool> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_H_N_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_H_N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_H_N_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<int,bool> *)(*pcVar1)();
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

// TAutoConverterNode<float,int> @ 14af263b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<float,int> * __thiscall
Metasound::TAutoConverterNode<float,int>::TAutoConverterNode<float,int>
          (TAutoConverterNode<float,int> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<float,int> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_MH_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_MH_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_MH_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<float,int> *)(*pcVar1)();
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

// TAutoConverterNode<float,float> @ 14af264b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<float,float> * __thiscall
Metasound::TAutoConverterNode<float,float>::TAutoConverterNode<float,float>
          (TAutoConverterNode<float,float> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<float,float> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_MM_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_MM_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_MM_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<float,float> *)(*pcVar1)();
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

// TAutoConverterNode<float,bool> @ 14af265b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<float,bool> * __thiscall
Metasound::TAutoConverterNode<float,bool>::TAutoConverterNode<float,bool>
          (TAutoConverterNode<float,bool> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<float,bool> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_M_N_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_M_N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_M_N_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<float,bool> *)(*pcVar1)();
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

// TAutoConverterNode<FString,FString> @ 14af266b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<FString,FString> * __thiscall
Metasound::TAutoConverterNode<FString,FString>::TAutoConverterNode<FString,FString>
          (TAutoConverterNode<FString,FString> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<FString,FString> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_VFString__V1__Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFString__V1__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode_VFString__V1__Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<FString,FString> *)(*pcVar1)();
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

// TAutoConverterNode<FString,Metasound::FSendAddress> @ 14af267b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<FString,Metasound::FSendAddress> * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::
TAutoConverterNode<FString,Metasound::FSendAddress>
          (TAutoConverterNode<FString,Metasound::FSendAddress> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<FString,Metasound::FSendAddress> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7__TAutoConverterNode_VFString__VFSendAddress_Metasound___Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFString__VFSendAddress_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_VFString__VFSendAddress_Metasound___Metasound__6B_
    ;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<FString,Metasound::FSendAddress> *)(*pcVar1)();
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

// TAutoConverterNode<Metasound::FTrigger,int> @ 14af268b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::FTrigger,int> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::TAutoConverterNode<Metasound::FTrigger,int>
          (TAutoConverterNode<Metasound::FTrigger,int> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::FTrigger,int> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_VFTrigger_Metasound__H_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound__H_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::FTrigger,int> *)(*pcVar1)();
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

// TAutoConverterNode<Metasound::FTrigger,float> @ 14af269b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::FTrigger,float> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::
TAutoConverterNode<Metasound::FTrigger,float>
          (TAutoConverterNode<Metasound::FTrigger,float> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::FTrigger,float> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_VFTrigger_Metasound__M_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound__M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound__M_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::FTrigger,float> *)(*pcVar1)();
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

// TAutoConverterNode<Metasound::FTrigger,bool> @ 14af26ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<Metasound::FTrigger,bool> * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::
TAutoConverterNode<Metasound::FTrigger,bool>
          (TAutoConverterNode<Metasound::FTrigger,bool> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<Metasound::FTrigger,bool> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode_VFTrigger_Metasound___N_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound___N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &___7FCoverterOperatorFactory___TAutoConverterNode_VFTrigger_Metasound___N_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<Metasound::FTrigger,bool> *)(*pcVar1)();
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

// TAutoConverterNode<bool,int> @ 14af26bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<bool,int> * __thiscall
Metasound::TAutoConverterNode<bool,int>::TAutoConverterNode<bool,int>
          (TAutoConverterNode<bool,int> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<bool,int> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode__NH_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode__NH_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode__NH_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<bool,int> *)(*pcVar1)();
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

// TAutoConverterNode<bool,float> @ 14af26cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<bool,float> * __thiscall
Metasound::TAutoConverterNode<bool,float>::TAutoConverterNode<bool,float>
          (TAutoConverterNode<bool,float> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<bool,float> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode__NM_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode__NM_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode__NM_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<bool,float> *)(*pcVar1)();
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

// TAutoConverterNode<bool,bool> @ 14af26db0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TAutoConverterNode<bool,bool> * __thiscall
Metasound::TAutoConverterNode<bool,bool>::TAutoConverterNode<bool,bool>
          (TAutoConverterNode<bool,bool> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAutoConverterNode<bool,bool> *pTVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7__TAutoConverterNode__N_N_Metasound__6B_;
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode__N_N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)&___7FCoverterOperatorFactory___TAutoConverterNode__N_N_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TAutoConverterNode<bool,bool> *)(*pcVar1)();
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

// ~TAutoConverterNode<int,int> @ 14af3f000

void __thiscall
Metasound::TAutoConverterNode<int,int>::~TAutoConverterNode<int,int>
          (TAutoConverterNode<int,int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,float> @ 14af3f040

void __thiscall
Metasound::TAutoConverterNode<int,float>::~TAutoConverterNode<int,float>
          (TAutoConverterNode<int,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<int,bool> @ 14af3f080

void __thiscall
Metasound::TAutoConverterNode<int,bool>::~TAutoConverterNode<int,bool>
          (TAutoConverterNode<int,bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<float,int> @ 14af3f0c0

void __thiscall
Metasound::TAutoConverterNode<float,int>::~TAutoConverterNode<float,int>
          (TAutoConverterNode<float,int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<float,float> @ 14af3f100

void __thiscall
Metasound::TAutoConverterNode<float,float>::~TAutoConverterNode<float,float>
          (TAutoConverterNode<float,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<float,bool> @ 14af3f140

void __thiscall
Metasound::TAutoConverterNode<float,bool>::~TAutoConverterNode<float,bool>
          (TAutoConverterNode<float,bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<FString,FString> @ 14af3f180

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::~TAutoConverterNode<FString,FString>
          (TAutoConverterNode<FString,FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<FString,Metasound::FSendAddress> @ 14af3f1c0

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::
~TAutoConverterNode<FString,Metasound::FSendAddress>
          (TAutoConverterNode<FString,Metasound::FSendAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::FTrigger,int> @ 14af3f200

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::~TAutoConverterNode<Metasound::FTrigger,int>
          (TAutoConverterNode<Metasound::FTrigger,int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::FTrigger,float> @ 14af3f240

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::
~TAutoConverterNode<Metasound::FTrigger,float>(TAutoConverterNode<Metasound::FTrigger,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<Metasound::FTrigger,bool> @ 14af3f280

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::
~TAutoConverterNode<Metasound::FTrigger,bool>(TAutoConverterNode<Metasound::FTrigger,bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<bool,int> @ 14af3f2c0

void __thiscall
Metasound::TAutoConverterNode<bool,int>::~TAutoConverterNode<bool,int>
          (TAutoConverterNode<bool,int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<bool,float> @ 14af3f300

void __thiscall
Metasound::TAutoConverterNode<bool,float>::~TAutoConverterNode<bool,float>
          (TAutoConverterNode<bool,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TAutoConverterNode<bool,bool> @ 14af3f340

void __thiscall
Metasound::TAutoConverterNode<bool,bool>::~TAutoConverterNode<bool,bool>
          (TAutoConverterNode<bool,bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetInputName @ 14af9aca0

FName * __cdecl Metasound::TAutoConverterNode<int,int>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9ad10

FName * __cdecl Metasound::TAutoConverterNode<int,float>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9ad80

FName * __cdecl Metasound::TAutoConverterNode<int,bool>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9adf0

FName * __cdecl Metasound::TAutoConverterNode<float,int>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9ae60

FName * __cdecl Metasound::TAutoConverterNode<float,float>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9aed0

FName * __cdecl Metasound::TAutoConverterNode<float,bool>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9af40

FName * __cdecl Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9afb0

FName * __cdecl Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b020

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b090

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b100

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b170

FName * __cdecl Metasound::TAutoConverterNode<bool,int>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b1e0

FName * __cdecl Metasound::TAutoConverterNode<bool,float>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetInputName(void)'
          ::__l2::InputName;
}

// GetInputName @ 14af9b250

FName * __cdecl Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
      ::__l2::InputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetInputName(void)'
          ::__l2::InputName;
}

// GetOutputName @ 14afa6560

FName * __cdecl Metasound::TAutoConverterNode<int,int>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa65d0

FName * __cdecl Metasound::TAutoConverterNode<int,float>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6640

FName * __cdecl Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa66b0

FName * __cdecl Metasound::TAutoConverterNode<float,int>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6720

FName * __cdecl Metasound::TAutoConverterNode<float,float>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6790

FName * __cdecl Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<float,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6800

FName * __cdecl Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,FString>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6870

FName * __cdecl Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa68e0

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6950

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa69c0

FName * __cdecl Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6a30

FName * __cdecl Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,int>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6aa0

FName * __cdecl Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,float>::GetOutputName(void)'
          ::__l2::OutputName;
}

// GetOutputName @ 14afa6b10

FName * __cdecl Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
      ::__l2::OutputName = *pFVar1;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::TAutoConverterNode<bool,bool>::GetOutputName(void)'
          ::__l2::OutputName;
}

