// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FSlateWidgetClassData<FSlateControlledConstruction> @ 1425b05b0

FSlateWidgetClassData * __thiscall
FSlateWidgetClassData::FSlateWidgetClassData<FSlateControlledConstruction>
          (FSlateWidgetClassData *this,TIdentity<FSlateControlledConstruction> param_1,FName param_2
          ,_func___cdecl_void_FInitializer_ptr *param_3)

{
  int *piVar1;
  int *piVar2;
  TArray<FSlateAttributeDescriptor::FContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  void *pvVar7;
  FName *pFVar8;
  ForElementType<FSlateAttributeDescriptor::FContainer> _Dst;
  ForElementType<FSlateAttributeDescriptor::FContainer> _Src;
  longlong lVar9;
  FInitializer local_res8;
  FName local_res18;
  
  pvVar7 = ThreadLocalStoragePointer;
  piVar1 = &(this->Descriptor).Attributes.ArrayMax;
  piVar2 = &(this->Descriptor).Containers.ArrayMax;
  (this->Descriptor).Attributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptor).Attributes.ArrayNum = 0;
  (this->Descriptor).Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  *piVar1 = 0;
  (this->Descriptor).Containers.ArrayNum = 0;
  *piVar2 = 1;
  this->WidgetType = param_2;
  if (*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar8 = ::FName::FName(&local_res18,L"FSlateControlledConstruction");
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.WidgetType = *pFVar8;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Attributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Attributes.ArrayNum = 0;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Attributes.ArrayMax = 0;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Containers.ArrayNum = 0;
      `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
      ::__l2::Instance.Descriptor.Containers.ArrayMax = 1;
      atexit(`FSlateControlledConstruction::StaticWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_res8.Descriptor = &this->Descriptor;
  if (this != &`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
               ::__l2::Instance) {
    DestructItems<FSlateAttributeDescriptor::FAttribute,int>
              ((FAttribute *)(this->Descriptor).Attributes.AllocatorInstance.Data,
               (this->Descriptor).Attributes.ArrayNum);
    FVar6 = `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
            ::__l2::Instance.Descriptor.Attributes.AllocatorInstance;
    iVar5 = `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
            ::__l2::Instance.Descriptor.Attributes.ArrayNum;
    iVar4 = *piVar1;
    (this->Descriptor).Attributes.ArrayNum =
         `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
         ::__l2::Instance.Descriptor.Attributes.ArrayNum;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar5,iVar4,(ForAnyElementType *)this,iVar5,piVar1);
      ConstructItems<FSlateAttributeDescriptor::FAttribute,FSlateAttributeDescriptor::FAttribute,int>
                ((this->Descriptor).Attributes.AllocatorInstance.Data,(FAttribute *)FVar6.Data,iVar5
                );
    }
  }
  iVar4 = `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.ArrayNum;
  pTVar3 = &(this->Descriptor).Containers;
  if (pTVar3 != (TArray<FSlateAttributeDescriptor::FContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)0x15502a388) {
    lVar9 = (longlong)
            `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
            ::__l2::Instance.Descriptor.Containers.ArrayNum;
    iVar5 = *piVar2;
    _Src = (ForElementType<FSlateAttributeDescriptor::FContainer>)0x15502a388;
    if (`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
        ::__l2::Instance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
        (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
      _Src = `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
             ::__l2::Instance.Descriptor.Containers.AllocatorInstance.SecondaryData;
    }
    (this->Descriptor).Containers.ArrayNum =
         `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
         ::__l2::Instance.Descriptor.Containers.ArrayNum;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
                (0x10,4,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar2);
      _Dst = (this->Descriptor).Containers.AllocatorInstance.SecondaryData;
      if (iVar4 != 0) {
        if (_Dst == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
          _Dst = (ForElementType<FSlateAttributeDescriptor::FContainer>)pTVar3;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar9 << 4);
      }
    }
  }
  (*param_3)(&local_res8);
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
  return this;
}

