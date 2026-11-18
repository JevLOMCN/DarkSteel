// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 86

// CreateNodeClassMetadata @ 14adaf0f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::
           TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::
           TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo
                     ();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14adaf2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5f230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5f3f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5f5b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5f770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5f930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5faf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Concat");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayConcatInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5fcb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<int>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5fe00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<float>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af5ff50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af600a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<FString>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af601f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<bool>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af605e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af609d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60c70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af60e80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af612a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af614b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af616c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af618d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61b70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
               ::GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af61f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af620b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<int>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<float>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af624a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<FString>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af625f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62740

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<bool>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62890

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
                         ();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af629e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62b30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62c80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af62f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
                         ();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af633f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af635b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<int>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<int>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<float>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<float>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63b50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::
           TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           ::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::
           TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63c10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::
           TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63c70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63cd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63d00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<FString>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<FString>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63d60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63dc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<bool>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = ReceiveNodePrivate::TReceiverOperator<bool>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<int>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63e80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<float>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63f10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af63fa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af640c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af641e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af644b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<FString>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af645d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>_>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14af64660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TNodeFacade<Metasound::SendNodePrivate::TSendOperator<bool>_>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info);
  return __return_storage_ptr__;
}

