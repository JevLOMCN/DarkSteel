// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 37

// ~FInvalidDocumentController @ 14ad9e260

void __thiscall
Metasound::Frontend::FInvalidDocumentController::~FInvalidDocumentController
          (FInvalidDocumentController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9e280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddDuplicateSubgraph @ 14ada5e90

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidDocumentController::AddDuplicateSubgraph
          (FInvalidDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__,
          IGraphController *param_1)

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddInterfaceVersion @ 14ada5ef0

void __thiscall
Metasound::Frontend::FInvalidDocumentController::AddInterfaceVersion
          (FInvalidDocumentController *this,FMetasoundFrontendVersion *param_1)

{
  return;
}

// ClearInterfaceVersions @ 14ada7700

void __thiscall
Metasound::Frontend::FInvalidDocumentController::ClearInterfaceVersions
          (FInvalidDocumentController *this)

{
  return;
}

// ExportToJSON @ 14adb8770

FString * __thiscall
Metasound::Frontend::FInvalidDocumentController::ExportToJSON
          (FInvalidDocumentController *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ExportToJSONAsset @ 14adb8790

bool __thiscall
Metasound::Frontend::FInvalidDocumentController::ExportToJSONAsset
          (FInvalidDocumentController *this,FString *param_1)

{
  return false;
}

// FindClass @ 14adb8a60

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindClass
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindClass @ 14adb8aa0

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindClass
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindClassWithID @ 14adb8b20

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindClassWithID
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FGuid *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindDependencyWithID @ 14adb8fc0

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindDependencyWithID
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FGuid *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindOrAddClass @ 14adb94c0

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindOrAddClass
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindOrAddClass @ 14adb9500

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindOrAddClass
          (FInvalidDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,bool param_2)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindSubgraphWithID @ 14adb9a00

FConstGraphClassAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::FindSubgraphWithID
          (FInvalidDocumentController *this,FConstGraphClassAccessPtr *__return_storage_ptr__,
          FGuid *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDependencies @ 14adbe760

TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetDependencies(FInvalidDocumentController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInterfaceVersions @ 14adbfb10

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions
          (FInvalidDocumentController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&`public:_virtual_class_TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *)&`public:_virtual_class_TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_Metasound::Frontend::FInvalidDocumentController::GetInterfaceVersions(void)const___ptr64'
             ::__l2::EmptyArray;
}

// GetMetadata @ 14adc0700

FMetasoundFrontendDocumentMetadata * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetMetadata(FInvalidDocumentController *this)

{
  return (FMetasoundFrontendDocumentMetadata *)0x0;
}

// GetMetadata @ 14adc0710

FMetasoundFrontendDocumentMetadata * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetMetadata(FInvalidDocumentController *this)

{
  return &::Invalid;
}

// GetRootGraphClass @ 14adc2aa0

FMetasoundFrontendGraphClass * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetRootGraphClass(FInvalidDocumentController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&::Invalid);
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClass'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
      return &::Invalid;
    }
  }
  return &::Invalid;
}

// GetSubgraphHandles @ 14adc2e70

TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetSubgraphHandles
          (FInvalidDocumentController *this,
          TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSubgraphHandles @ 14adc2e90

TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidDocumentController::GetSubgraphHandles
          (FInvalidDocumentController *this,
          TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSubgraphWithClassID @ 14adc2eb0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetSubgraphWithClassID
          (FInvalidDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__,FGuid *param_1
          )

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSubgraphWithClassID @ 14adc2ed0

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetSubgraphWithClassID
          (FInvalidDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  pTVar2 = IGraphController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetSubgraphs @ 14adc2f20

TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetSubgraphs(FInvalidDocumentController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// IsValid @ 14adc7e10

bool __thiscall
Metasound::Frontend::FInvalidDocumentController::IsValid(FInvalidDocumentController *this)

{
  return false;
}

// IterateDependencies @ 14adc8560

void __thiscall
Metasound::Frontend::FInvalidDocumentController::IterateDependencies
          (FInvalidDocumentController *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_&)> *param_1)

{
  return;
}

// IterateDependencies @ 14adc8570

void __thiscall
Metasound::Frontend::FInvalidDocumentController::IterateDependencies
          (FInvalidDocumentController *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)> *param_1)

{
  return;
}

// RemoveInterfaceVersion @ 14adcf090

void __thiscall
Metasound::Frontend::FInvalidDocumentController::RemoveInterfaceVersion
          (FInvalidDocumentController *this,FMetasoundFrontendVersion *param_1)

{
  return;
}

// RemoveUnreferencedDependencies @ 14adcf0d0

void __thiscall
Metasound::Frontend::FInvalidDocumentController::RemoveUnreferencedDependencies
          (FInvalidDocumentController *this)

{
  return;
}

// SetMetadata @ 14add09d0

void __thiscall
Metasound::Frontend::FInvalidDocumentController::SetMetadata
          (FInvalidDocumentController *this,FMetasoundFrontendDocumentMetadata *param_1)

{
  return;
}

// SetRootGraphClass @ 14add0d00

void __thiscall
Metasound::Frontend::FInvalidDocumentController::SetRootGraphClass
          (FInvalidDocumentController *this,FMetasoundFrontendGraphClass *param_1)

{
  return;
}

// ShareAccess @ 14add0ea0

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidDocumentController::ShareAccess
          (FInvalidDocumentController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add0ed0

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidDocumentController::ShareAccess
          (FInvalidDocumentController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SynchronizeDependencyMetadata @ 14add1720

TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidDocumentController::SynchronizeDependencyMetadata
          (FInvalidDocumentController *this,
          TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDocumentPtr @ 14ae382a0

FDocumentAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr
          (FInvalidDocumentController *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FDocumentAccessPtr::FDocumentAccessPtr(&::Invalid);
      atexit(`Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = ::Invalid._0_8_;
  uVar1 = ::Invalid._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = ::Invalid._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)&::Invalid.field_0x20;
    if (::Invalid._56_8_ != 0) {
      puVar2 = (undefined8 *)::Invalid._56_8_;
    }
    (**(code **)*puVar2)();
  }
  return __return_storage_ptr__;
}

// GetDocumentPtr @ 14ae38360

FDocumentAccessPtr * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr
          (FInvalidDocumentController *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FDocumentAccessPtr::FDocumentAccessPtr(&::Invalid);
      atexit(`Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = ::Invalid._0_8_;
  uVar1 = ::Invalid._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = ::Invalid._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)&::Invalid.field_0x20;
    if (::Invalid._56_8_ != 0) {
      puVar2 = (undefined8 *)::Invalid._56_8_;
    }
    (**(code **)*puVar2)();
  }
  return __return_storage_ptr__;
}

// GetRootGraph @ 14ae3cdb0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetRootGraph
          (FInvalidDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRootGraph @ 14ae3cdd0

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FInvalidDocumentController::GetRootGraph
          (FInvalidDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  pTVar2 = IGraphController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

