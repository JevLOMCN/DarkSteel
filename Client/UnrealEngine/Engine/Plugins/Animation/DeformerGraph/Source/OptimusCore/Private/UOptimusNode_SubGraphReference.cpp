// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 31

// StaticClass @ 14e1079d0

UClass * __cdecl UOptimusNode_SubGraphReference::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_SubGraphReference",
               &Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton,
               StaticRegisterNativesUOptimusNode_SubGraphReference,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_SubGraphReference>,
               InternalVTableHelperCtorCaller<UOptimusNode_SubGraphReference>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton;
}

// UOptimusNode_SubGraphReference @ 14e15c1d0

UOptimusNode_SubGraphReference * __thiscall
UOptimusNode_SubGraphReference::UOptimusNode_SubGraphReference
          (UOptimusNode_SubGraphReference *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeSubGraphReferencer__;
  (this->SubGraphName).ComparisonIndex = 0;
  (this->SubGraphName).Number = 0;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SubGraph).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UOptimusNode_SubGraphReference @ 14e15c240

UOptimusNode_SubGraphReference * __thiscall
UOptimusNode_SubGraphReference::UOptimusNode_SubGraphReference(UOptimusNode_SubGraphReference *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeSubGraphReferencer__;
  (this->SubGraphName).ComparisonIndex = 0;
  (this->SubGraphName).Number = 0;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SubGraph).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UOptimusNode_SubGraphReference @ 14e163b70

void __thiscall
UOptimusNode_SubGraphReference::~UOptimusNode_SubGraphReference
          (UOptimusNode_SubGraphReference *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&___7IOptimusNodeSubGraphReferencer__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeGraphProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodePinRouter__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// AddPinForNewBinding @ 14e177960

void __thiscall
UOptimusNode_SubGraphReference::AddPinForNewBinding
          (UOptimusNode_SubGraphReference *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FOptimusParameterBinding *pFVar4;
  EOptimusNodePinDirection EVar5;
  UOptimusNodePin *pUVar6;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) {
    pUVar3 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar5 = Input;
    pUVar3 = pUVar3 + 4;
    UOptimusNode::GetPinsByDirection((UOptimusNode *)this,&local_18,Output,false);
    if (local_18.ArrayNum < 1) {
      pUVar6 = (UOptimusNodePin *)0x0;
    }
    else {
      pUVar6 = *(UOptimusNodePin **)local_18.AllocatorInstance.Data;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) {
      return;
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar5 = Output;
    pUVar6 = (UOptimusNodePin *)0x0;
    pUVar3 = (UObject *)&pUVar3[4].field_0x10;
  }
  if (pUVar3 != (UObject *)0x0) {
    if ((*(int *)&pUVar3->field_0x8 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingArrayPtr->Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                           ,0xdf,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = FOptimusParameterBindingArray::Last((FOptimusParameterBindingArray *)pUVar3,0);
    UOptimusNode::AddPin((UOptimusNode *)this,pFVar4,EVar5,pUVar6);
  }
  return;
}

// BeginDestroy @ 14e17ed40

void __thiscall UOptimusNode_SubGraphReference::BeginDestroy(UOptimusNode_SubGraphReference *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  UObject::BeginDestroy((UObject *)this);
  this_00 = &this->SubGraph;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 8),this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x20,this);
  }
  return;
}

// ConstructNode @ 14e194240

void __thiscall UOptimusNode_SubGraphReference::ConstructNode(UOptimusNode_SubGraphReference *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  UObject *pUVar4;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  size_t _Size;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  UOptimusNodePin *local_res20;
  undefined1 local_168 [32];
  FUtf8String local_148;
  FOptimusDataDomain local_138;
  undefined1 local_f8 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  TSharedPtr<FOptimusDataType_const_,1> local_c8;
  undefined1 local_b8 [16];
  FSoftObjectPath local_a8;
  undefined1 local_88 [16];
  FSoftObjectPath local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7575750353644158941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                       ,0x23,"SubGraph.Get()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00 = FOptimusDataTypeRegistry::Get();
    pUVar5 = UOptimusComponentSourceBinding::StaticClass();
    pTVar6 = FOptimusDataTypeRegistry::FindType(this_00,&local_58,pUVar5);
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    local_168._8_8_ = 0;
    local_168._24_8_ = 0;
    local_168._16_8_ = 0;
    FUtf8String::Reset(&local_148,0);
    local_c8.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    local_c8.Object = pTVar6->Object;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_168,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar6->SharedReferenceCount).ReferenceController);
    _Src.Data = local_148.Data.AllocatorInstance.Data;
    _Size = (size_t)local_148.Data.ArrayNum;
    local_f8._0_8_ = local_168._0_8_;
    local_f8._8_8_ = local_168._8_8_;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = local_148.Data.ArrayNum;
    local_f8._16_8_ = local_168._16_8_;
    local_f8._24_8_ = local_168._24_8_;
    if (local_148.Data.ArrayNum == 0) {
      local_cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_148.Data.ArrayNum,0,&local_d8,local_148.Data.ArrayNum,&local_cc);
      memcpy(local_d8.Data,_Src.Data,_Size);
    }
    local_138.Type = Dimensional;
    local_138._4_4_ = 0;
    local_138.Multiplier = 1;
    local_138._28_4_ = 0;
    local_138.LevelNames_DEPRECATED.ArrayMax = 0;
    local_138.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.DimensionNames.ArrayNum = 0;
    local_138.DimensionNames.ArrayMax = 0;
    local_138.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Expression.Data.ArrayNum = 0;
    local_138.Expression.Data.ArrayMax = 0;
    ::FName::FName(&local_res18,"Vertex");
    local_138.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.LevelNames_DEPRECATED.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&local_138.LevelNames_DEPRECATED.AllocatorInstance,1,
               &local_138.LevelNames_DEPRECATED.ArrayMax);
    *(FName *)local_138.LevelNames_DEPRECATED.AllocatorInstance.Data = local_res18;
    local_res20 = UOptimusNode::AddPinDirect
                            ((UOptimusNode *)this,UOptimusNodeSubGraph::GraphDefaultComponentPinName
                             ,Input,&local_138,(FOptimusDataTypeRef *)local_f8,
                             (UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UOptimusNodePin *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&(this->DefaultComponentPin).WeakPtr,(FObjectPtr)&local_res20);
    if ((FName *)local_138.LevelNames_DEPRECATED.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_138.LevelNames_DEPRECATED.AllocatorInstance.Data);
    }
    if (local_138.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Expression.Data.AllocatorInstance.Data);
    }
    if (local_138.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.DimensionNames.AllocatorInstance.Data);
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    iVar1 = *(int *)&pUVar4[4].field_0x8;
    pFVar7 = *(FName **)(pUVar4 + 4);
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (*(int *)&pUVar4[4].field_0x8 != iVar1) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      local_b8._0_8_ = pFVar7[1];
      local_b8._8_8_ = pFVar7[2];
      FSoftObjectPath::FSoftObjectPath(&local_a8,(FSoftObjectPath *)(pFVar7 + 3));
      UOptimusNode::AddPinDirect
                ((UOptimusNode *)this,*pFVar7,Input,(FOptimusDataDomain *)(pFVar7 + 7),
                 (FOptimusDataTypeRef *)local_b8,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
      pFVar7 = pFVar7 + 0x10;
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    iVar1 = *(int *)&pUVar4[4].field_0x18;
    pFVar7 = *(FName **)&pUVar4[4].field_0x10;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (*(int *)&pUVar4[4].field_0x18 != iVar1) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      local_88._0_8_ = pFVar7[1];
      local_88._8_8_ = pFVar7[2];
      FSoftObjectPath::FSoftObjectPath(&local_78,(FSoftObjectPath *)(pFVar7 + 3));
      UOptimusNode::AddPinDirect
                ((UOptimusNode *)this,*pFVar7,Output,(FOptimusDataDomain *)(pFVar7 + 7),
                 (FOptimusDataTypeRef *)local_88,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
      pFVar7 = pFVar7 + 0x10;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetBindingPinsByDirection @ 14e1bbd30

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_SubGraphReference::GetBindingPinsByDirection
          (UOptimusNode_SubGraphReference *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EOptimusNodePinDirection param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  int iVar10;
  UObject *local_38 [2];
  
  UOptimusNode::GetPinsByDirection((UOptimusNode *)this,__return_storage_ptr__,param_1,false);
  local_38[0] = FWeakObjectPtr::Get(&(this->DefaultComponentPin).WeakPtr);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar5;
  }
  iVar1 = __return_storage_ptr__->ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    bVar4 = *(UObject **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar9 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UObject **)(pFVar2 + lVar6 * 8) != pUVar9));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar9 = local_38[0];
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    __return_storage_ptr__->ArrayNum = iVar10;
  }
  return __return_storage_ptr__;
}

// GetDefaultComponentBinding @ 14e1c2f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_SubGraphReference::GetDefaultComponentBinding
          (UOptimusNode_SubGraphReference *this,FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusComponentSourceBinding *pUVar4;
  UClass *pUVar5;
  UOptimusNodePin *pUVar6;
  longlong *plVar7;
  UOptimusDeformer *this_00;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UOptimusNodeSubGraph *this_01;
  undefined1 auStackY_a8 [32];
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> local_78;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7575750353644158856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                       ,0x78,"DefaultComponentPin.IsValid()");
    if (!bVar3) {
      return (UOptimusComponentSourceBinding *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
    return pUVar4;
  }
  this_01 = (UOptimusNodeSubGraph *)this[-1]._padding_;
  if (this_01 == (UOptimusNodeSubGraph *)0x0) {
LAB_14e1c2ffd:
    this_01 = (UOptimusNodeSubGraph *)0x0;
  }
  else {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e1c2ffd;
  }
  pUVar6 = (UOptimusNodePin *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UOptimusNodeGraph::GetComponentSourceBindingsForPin
            ((UOptimusNodeGraph *)this_01,&local_68,pUVar6,param_1);
  if (local_68.Elements._8_4_ != local_68.Elements._52_4_) {
    if (local_68.Elements._8_4_ - local_68.Elements._52_4_ == 1) {
      pTVar8 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
               ::Array(&local_68,&local_78);
      if ((pTVar8->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
        return pUVar4;
      }
      pUVar4 = *(UOptimusComponentSourceBinding **)(pTVar8->AllocatorInstance).Data;
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      goto LAB_14e1c3160;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7575750353644158848>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                       ,0x80,"Bindings.Num() == 1");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
      return pUVar4;
    }
  }
  plVar7 = (longlong *)(**(code **)(this_01->_padding_ + 0x10))(&this_01->_padding_);
  if ((plVar7 != (longlong *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)(*plVar7 + 8))(plVar7),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar5 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar4 = UOptimusDeformer::GetPrimaryComponentBinding(this_00);
      goto LAB_14e1c3160;
    }
  }
  pUVar5 = UOptimusNodeSubGraph::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar5->_padding_)) || (this_01 == (UOptimusNodeSubGraph *)0x0)) {
    pUVar4 = (UOptimusComponentSourceBinding *)0x0;
  }
  else {
    pUVar4 = UOptimusNodeSubGraph::GetDefaultComponentBinding(this_01,param_1);
  }
LAB_14e1c3160:
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return pUVar4;
}

// GetDefaultComponentBindingPin @ 14e1c31d0

UOptimusNodePin * __thiscall
UOptimusNode_SubGraphReference::GetDefaultComponentBindingPin(UOptimusNode_SubGraphReference *this)

{
  UOptimusNodePin *pUVar1;
  
  pUVar1 = (UOptimusNodePin *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetDisplayName @ 14e1c4aa0

FText * __thiscall
UOptimusNode_SubGraphReference::GetDisplayName
          (UOptimusNode_SubGraphReference *this,FText *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_18;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    FText::FromString(__return_storage_ptr__,"<graph missing>");
  }
  else {
    pUVar1 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8.Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    FText::FromString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1caeb0

FName __thiscall
UOptimusNode_SubGraphReference::GetNodeCategory(UOptimusNode_SubGraphReference *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetNodeGraphToShow @ 14e1cafa0

UOptimusNodeGraph * __thiscall
UOptimusNode_SubGraphReference::GetNodeGraphToShow(UOptimusNode_SubGraphReference *this)

{
  UOptimusNodeGraph *pUVar1;
  
  pUVar1 = (UOptimusNodeGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetPinCounterpart @ 14e1cd060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FOptimusRoutedNodePin * __thiscall
UOptimusNode_SubGraphReference::GetPinCounterpart
          (UOptimusNode_SubGraphReference *this,FOptimusRoutedNodePin *__return_storage_ptr__,
          UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UObject *pUVar4;
  FOptimusRoutedNodePin *pFVar5;
  UOptimusNodeSubGraph *this_00;
  UOptimusNode_GraphTerminal *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ForElementType<IOptimusNodePinRouter_const_*> FVar7;
  longlong lVar8;
  EOptimusTerminalType EVar9;
  undefined1 auStackY_f8 [32];
  UOptimusNode_SubGraphReference *local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  UOptimusNodePin *local_90;
  FOptimusPinTraversalContext local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_1 == (UOptimusNodePin *)0x0) ||
     (pUVar3 = UOptimusNodePin::GetOwningNode(param_1),
     pUVar3 != (UOptimusNode *)&this[-1]._padding_)) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
    return __return_storage_ptr__;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7575750353644158897>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                       ,0x4f,"SubGraph.Get()");
    if (!bVar2) {
      __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
      (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
      (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
      (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
    return pFVar5;
  }
  if (param_1->Direction == Input) {
    EVar9 = Entry;
  }
  else {
    if (param_1->Direction != Output) goto LAB_14e1cd2ae;
    EVar9 = Return;
  }
  this_00 = (UOptimusNodeSubGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = UOptimusNodeSubGraph::GetTerminalNode(this_00,EVar9);
  if (this_01 != (UOptimusNode_GraphTerminal *)0x0) {
    pTVar6 = UOptimusNodePin::GetPinNamePath(param_1,&local_a0);
    local_90 = UOptimusNode::FindPinFromPath((UOptimusNode *)this_01,pTVar6);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_88,param_2);
    local_a8 = this;
    if (this == (UOptimusNode_SubGraphReference *)&DAT_00000108) {
      local_a8 = (UOptimusNode_SubGraphReference *)0x0;
    }
    FVar7 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar7 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar7 <= &local_a8) {
      FVar7 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
      if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
          (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        FVar7 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
      }
      if ((&local_a8 <
           (UOptimusNode_SubGraphReference **)
           ((longlong)FVar7 + (longlong)local_88.ReferenceNesting.ArrayMax * 8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
        return pFVar5;
      }
    }
    if (local_88.ReferenceNesting.ArrayNum == local_88.ReferenceNesting.ArrayMax) {
      local_88.ReferenceNesting.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                     (0x808,(ForElementType<IOptimusNodePinRouter_const_*> *)&local_88,
                      &local_88.ReferenceNesting.ArrayMax);
    }
    lVar8 = (longlong)local_88.ReferenceNesting.ArrayNum;
    FVar7 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar7 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    local_88.ReferenceNesting.ArrayNum = local_88.ReferenceNesting.ArrayNum + 1;
    *(UOptimusNode_SubGraphReference **)((longlong)FVar7 + lVar8 * 8) = local_a8;
    __return_storage_ptr__->NodePin = local_90;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&__return_storage_ptr__->TraversalContext,&local_88);
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData ==
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_88.ReferenceNesting.AllocatorInstance.SecondaryData);
    return __return_storage_ptr__;
  }
LAB_14e1cd2ae:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7575750353644158882>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                     ,0x5e,"CounterpartNode");
  if (!bVar2) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FOptimusRoutedNodePin *)(*pcVar1)();
  return pFVar5;
}

// GetPrivateStaticClass @ 14e1d7fa0

UClass * __cdecl UOptimusNode_SubGraphReference::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_SubGraphReference",
               &Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton,
               StaticRegisterNativesUOptimusNode_SubGraphReference,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_SubGraphReference>,
               InternalVTableHelperCtorCaller<UOptimusNode_SubGraphReference>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.InnerSingleton;
}

// GetReferencedSubGraph @ 14e1db750

UOptimusNodeSubGraph * __thiscall
UOptimusNode_SubGraphReference::GetReferencedSubGraph(UOptimusNode_SubGraphReference *this)

{
  UOptimusNodeSubGraph *pUVar1;
  
  pUVar1 = (UOptimusNodeSubGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetSerializedSubGraphName @ 14e1e0550

FName __thiscall
UOptimusNode_SubGraphReference::GetSerializedSubGraphName(UOptimusNode_SubGraphReference *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SubGraphName;
  return in_RDX;
}

// InitializeSerializedSubGraphName @ 14e1ed560

void __thiscall
UOptimusNode_SubGraphReference::InitializeSerializedSubGraphName
          (UOptimusNode_SubGraphReference *this,FName param_1)

{
  this->SubGraphName = param_1;
  return;
}

// InitializeTransientData @ 14e1edcf0

void __thiscall
UOptimusNode_SubGraphReference::InitializeTransientData(UOptimusNode_SubGraphReference *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *pUStackX_8;
  undefined1 auStack_a8 [24];
  code *pcStack_88;
  longlong lStack_80;
  code *pcStack_78;
  longlong lStack_70;
  code *pcStack_68;
  longlong lStack_60;
  code *pcStack_58;
  longlong lStack_50;
  code *pcStack_48;
  longlong lStack_40;
  code *pcStack_38;
  longlong lStack_30;
  
  pUVar5 = (UObject *)this->_padding_;
  if (pUVar5 == (UObject *)0x0) {
LAB_14e21a63d:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e21a63d;
  }
  pUStackX_8 = (UObject *)
               (**(code **)(*(longlong *)(pUVar5 + 1) + 0x30))(pUVar5 + 1,this->SubGraphName);
  if (pUStackX_8 != (UObject *)0x0) {
    pUVar4 = UOptimusNodeSubGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUStackX_8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUStackX_8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14e21a680;
  }
  pUStackX_8 = (UObject *)0x0;
LAB_14e21a680:
  this_00 = &this->SubGraph;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStackX_8);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&stack0x00000008);
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[4].field_0x20,
                       this);
    if (!bVar3) {
      auStack_a8._8_4_ = 0;
      auStack_a8._0_8_ = RecreateBindingPins;
      lStack_80 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_88 = RecreateBindingPins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[4].field_0x20,(UOptimusNode_SubGraphReference *)&stack0x00000010,
                 (pmf_6530ad38 *)this);
      auStack_a8._8_4_ = 0;
      auStack_a8._0_8_ = SyncPinsToBindings;
      lStack_70 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_78 = SyncPinsToBindings;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[5].field_0x18,(UOptimusNode_SubGraphReference *)&stack0x00000018,
                 (pmf_6530ad38 *)this);
      auStack_a8._8_4_ = 0;
      auStack_a8._0_8_ = AddPinForNewBinding;
      lStack_60 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_68 = AddPinForNewBinding;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[6].field_0x10,(UOptimusNode_SubGraphReference *)&stack0x00000020,
                 (pmf_6530ad38 *)this);
      auStack_a8._8_4_ = 0;
      auStack_a8._0_8_ = RemoveStalePins;
      lStack_50 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_58 = RemoveStalePins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[7].field_0x8,(UOptimusNode_SubGraphReference *)(auStack_a8 + 0x10),
                 (pmf_6530ad38 *)this);
      auStack_a8._0_8_ = RemoveStalePins;
      auStack_a8._8_4_ = 0;
      lStack_40 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_48 = RemoveStalePins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 (pUVar5 + 8),(UOptimusNode_SubGraphReference *)&stack0xffffffffffffff70,
                 (pmf_6530ad38 *)this);
      auStack_a8._8_4_ = 0;
      auStack_a8._0_8_ = OnBindingMoved;
      lStack_30 = (ulonglong)(uint)auStack_a8._12_4_ << 0x20;
      pcStack_38 = OnBindingMoved;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[8].field_0x20,(UOptimusNode_SubGraphReference *)auStack_a8,
                 (pmf_6530ad38 *)this);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7575750353644158800>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                     ,0xb0,
                     "SubGraph.IsValid() && !SubGraph->GetOnBindingArrayPasted().IsBoundToObject(this)"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// OnBindingMoved @ 14e1f4530

/* WARNING: Removing unreachable block (ram,0x00014e1f4645) */

void __thiscall
UOptimusNode_SubGraphReference::OnBindingMoved(UOptimusNode_SubGraphReference *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UOptimusNodePin *pUVar8;
  UOptimusNodePin *pUVar9;
  undefined8 *puVar10;
  uint uVar11;
  UOptimusNodePin *pUVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  UOptimusNodePin *pUVar16;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 local_b8;
  undefined8 local_b0;
  FName local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_70;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pUVar12 = (UOptimusNodePin *)0x0;
  uVar11 = 0;
  pUVar16 = pUVar12;
  uVar15 = uVar11;
  if (param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) {
    pUVar6 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    pUVar6 = pUVar6 + 4;
    pTVar7 = GetBindingPinsByDirection(this,&local_80,Input);
    local_60[0].AllocatorInstance.Data = local_80.AllocatorInstance.Data;
    if (&local_70 != pTVar7) {
      pUVar16 = (UOptimusNodePin *)(pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      uVar15 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
  }
  else {
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) goto LAB_14e1f48fc;
    pUVar6 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    pUVar6 = (UObject *)&pUVar6[4].field_0x10;
    pTVar7 = GetBindingPinsByDirection(this,local_60,Output);
    if (&local_70 != pTVar7) {
      pUVar16 = (UOptimusNodePin *)(pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      uVar15 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  if (pUVar6 != (UObject *)0x0) {
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    pUVar8 = pUVar12;
    for (pUVar9 = pUVar16; pUVar9 != (UOptimusNodePin *)(&pUVar16->_padding_ + (int)uVar15);
        pUVar9 = (UOptimusNodePin *)&pUVar9->_padding_) {
      local_b8 = *(undefined8 *)(pUVar9->_padding_ + 0x18);
      uVar4 = (uint)pUVar8;
      if (((local_90.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar4 = local_90.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar4 == local_90.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      local_90.ArrayNum = uVar4 + 1;
      *(undefined8 *)(local_90.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = local_b8;
      pUVar8 = (UOptimusNodePin *)(ulonglong)(uint)local_90.ArrayNum;
    }
    iVar1 = *(int *)&pUVar6->field_0x8;
    puVar10 = *(undefined8 **)pUVar6;
    puVar14 = puVar10 + (longlong)iVar1 * 0x10;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    pUVar8 = pUVar12;
    while( true ) {
      uVar4 = (uint)pUVar8;
      if (*(int *)&pUVar6->field_0x8 != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar4 = local_a0.ArrayNum;
      }
      if (puVar10 == puVar14) break;
      local_b0 = *puVar10;
      if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 <
           local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar4 = local_a0.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar4 == local_a0.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
      }
      local_a0.ArrayNum = uVar4 + 1;
      puVar10 = puVar10 + 0x10;
      *(undefined8 *)(local_a0.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = local_b0;
      pUVar8 = (UOptimusNodePin *)(ulonglong)(uint)local_a0.ArrayNum;
    }
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    bVar3 = Optimus::FindMovedItemInNameArray(&local_90,&local_a0,&local_res20,&local_a8);
    if (bVar3) {
      for (pUVar8 = pUVar16; pUVar8 != (UOptimusNodePin *)(&pUVar16->_padding_ + (int)uVar15);
          pUVar8 = (UOptimusNodePin *)&pUVar8->_padding_) {
        if (*(FName *)(pUVar8->_padding_ + 0x18) == local_res20) {
          uVar4 = (uint)((longlong)pUVar8 - (longlong)pUVar16 >> 3);
          goto LAB_14e1f485b;
        }
      }
      uVar4 = 0xffffffff;
LAB_14e1f485b:
      pUVar8 = pUVar16;
      if (local_a8 != (FName)0x0) {
        for (; pUVar8 != (UOptimusNodePin *)(&pUVar16->_padding_ + (int)uVar15);
            pUVar8 = (UOptimusNodePin *)&pUVar8->_padding_) {
          if (*(FName *)(pUVar8->_padding_ + 0x18) == local_a8) {
            uVar13 = (uint)((longlong)pUVar8 - (longlong)pUVar16 >> 3);
            if (uVar13 != 0xffffffff) {
              uVar5 = uVar11;
              if ((int)uVar13 < (int)uVar15) {
                uVar5 = ~uVar13 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pUVar12 = (UOptimusNodePin *)(&pUVar16->_padding_)[(int)uVar13];
            }
            break;
          }
        }
      }
      if ((int)uVar4 < (int)uVar15) {
        uVar11 = ~uVar4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UOptimusNode::MovePin
                ((UOptimusNode *)this,(UOptimusNodePin *)(&pUVar16->_padding_)[(int)uVar4],pUVar12);
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
LAB_14e1f48fc:
  if (pUVar16 != (UOptimusNodePin *)0x0) {
    FMemory::Free(pUVar16);
  }
  return;
}

// RecreateBindingPins @ 14e204a40

void __thiscall
UOptimusNode_SubGraphReference::RecreateBindingPins
          (UOptimusNode_SubGraphReference *this,FName param_1)

{
  UObject *pUVar1;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UOptimusNodePin *pUVar3;
  UOptimusNodePin *pUVar4;
  FName *pFVar5;
  int iVar6;
  FName *pFVar7;
  EOptimusNodePinDirection EVar8;
  UOptimusNodePin *pUVar9;
  undefined1 local_res10 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [16];
  FSoftObjectPath local_48;
  
  pUVar3 = (UOptimusNodePin *)0x0;
  iVar6 = 0;
  pUVar9 = pUVar3;
  if (param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) {
    pUVar1 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar8 = Input;
    pUVar1 = pUVar1 + 4;
    pTVar2 = GetBindingPinsByDirection(this,&local_78,Input);
    if (&local_68 != pTVar2) {
      pUVar9 = (UOptimusNodePin *)(pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar6 = pTVar2->ArrayNum;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    UOptimusNode::GetPinsByDirection((UOptimusNode *)this,&local_88,Output,false);
    if (0 < local_88.ArrayNum) {
      pUVar3 = *(UOptimusNodePin **)local_88.AllocatorInstance.Data;
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  else {
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) goto LAB_14e204c0b;
    pUVar1 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar8 = Output;
    pUVar1 = (UObject *)&pUVar1[4].field_0x10;
    pTVar2 = GetBindingPinsByDirection(this,&local_78,Output);
    if (&local_68 != pTVar2) {
      pUVar9 = (UOptimusNodePin *)(pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar6 = pTVar2->ArrayNum;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  if (pUVar1 != (UObject *)0x0) {
    for (pUVar4 = pUVar9; pUVar4 != (UOptimusNodePin *)(&pUVar9->_padding_ + iVar6);
        pUVar4 = (UOptimusNodePin *)&pUVar4->_padding_) {
      UOptimusNode::RemovePin((UOptimusNode *)this,(UOptimusNodePin *)pUVar4->_padding_);
    }
    iVar6 = *(int *)&pUVar1->field_0x8;
    pFVar5 = *(FName **)pUVar1;
    pFVar7 = pFVar5 + (longlong)iVar6 * 0x10;
    while( true ) {
      if (*(int *)&pUVar1->field_0x8 != iVar6) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar7) break;
      local_58._0_8_ = pFVar5[1];
      local_58._8_8_ = pFVar5[2];
      FSoftObjectPath::FSoftObjectPath(&local_48,(FSoftObjectPath *)(pFVar5 + 3));
      UOptimusNode::AddPin
                ((UOptimusNode *)this,*pFVar5,EVar8,(FOptimusDataDomain *)(pFVar5 + 7),
                 (FOptimusDataTypeRef *)local_58,pUVar3,(UOptimusNodePin *)0x0);
      pFVar5 = pFVar5 + 0x10;
    }
  }
LAB_14e204c0b:
  if (pUVar9 != (UOptimusNodePin *)0x0) {
    FMemory::Free(pUVar9);
  }
  return;
}

// RefreshSerializedSubGraphName @ 14e205970

void __thiscall
UOptimusNode_SubGraphReference::RefreshSerializedSubGraphName(UOptimusNode_SubGraphReference *this)

{
  undefined4 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
  uVar1 = *(undefined4 *)&pUVar2->field_0x1c;
  (this->SubGraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar2->field_0x18;
  (this->SubGraphName).Number = uVar1;
  return;
}

// RemoveStalePins @ 14e216cd0

void __thiscall
UOptimusNode_SubGraphReference::RemoveStalePins(UOptimusNode_SubGraphReference *this,FName param_1)

{
  longlong *plVar1;
  UOptimusNodePin *pUVar2;
  UObject *pUVar3;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  int iVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  EOptimusNodePinDirection EVar9;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar7 = (UObject *)0x0;
  if (param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) {
    pUVar3 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar9 = Input;
    pUVar3 = pUVar3 + 4;
  }
  else {
    iVar6 = 0;
    pUVar3 = pUVar7;
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) goto LAB_14e216d85;
    pUVar3 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    EVar9 = Output;
    pUVar3 = (UObject *)&pUVar3[4].field_0x10;
  }
  pTVar4 = GetBindingPinsByDirection(this,&local_38,EVar9);
  iVar6 = 0;
  if (&local_28 != pTVar4) {
    pUVar7 = (UObject *)(pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar6 = pTVar4->ArrayNum;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
LAB_14e216d85:
  pUVar8 = pUVar7;
  do {
    while( true ) {
      if (pUVar8 == (UObject *)((longlong)&pUVar7->field_0x0 + (longlong)iVar6 * 8)) {
        if (pUVar7 != (UObject *)0x0) {
          FMemory::Free(pUVar7);
          return;
        }
        return;
      }
      plVar1 = *(longlong **)pUVar3;
      pUVar2 = *(UOptimusNodePin **)pUVar8;
      plVar5 = plVar1;
      if (plVar1 != plVar1 + (longlong)*(int *)&pUVar3->field_0x8 * 0x10) break;
LAB_14e216dde:
      UOptimusNode::RemovePin((UOptimusNode *)this,pUVar2);
LAB_14e216de9:
      pUVar8 = (UObject *)&pUVar8->field_0x8;
    }
    do {
      if (*plVar5 == pUVar2->_padding_) {
        if ((int)((longlong)plVar5 - (longlong)plVar1 >> 7) == -1) goto LAB_14e216dde;
        goto LAB_14e216de9;
      }
      plVar5 = plVar5 + 0x10;
    } while (plVar5 != plVar1 + (longlong)*(int *)&pUVar3->field_0x8 * 0x10);
    UOptimusNode::RemovePin((UOptimusNode *)this,pUVar2);
    pUVar8 = (UObject *)&pUVar8->field_0x8;
  } while( true );
}

// ResolveSubGraphPointerAndSubscribe @ 14e21a600

void __thiscall
UOptimusNode_SubGraphReference::ResolveSubGraphPointerAndSubscribe
          (UOptimusNode_SubGraphReference *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *local_res8;
  undefined1 local_a8 [24];
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  pUVar5 = (UObject *)this->_padding_;
  if (pUVar5 == (UObject *)0x0) {
LAB_14e21a63d:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e21a63d;
  }
  local_res8 = (UObject *)
               (**(code **)(*(longlong *)(pUVar5 + 1) + 0x30))(pUVar5 + 1,this->SubGraphName);
  if (local_res8 != (UObject *)0x0) {
    pUVar4 = UOptimusNodeSubGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14e21a680;
  }
  local_res8 = (UObject *)0x0;
LAB_14e21a680:
  this_00 = &this->SubGraph;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&stack0x00000008);
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[4].field_0x20,
                       this);
    if (!bVar3) {
      local_a8._8_4_ = 0;
      local_a8._0_8_ = RecreateBindingPins;
      lStack_80 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_88 = RecreateBindingPins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[4].field_0x20,(UOptimusNode_SubGraphReference *)&stack0x00000010,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = SyncPinsToBindings;
      lStack_70 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_78 = SyncPinsToBindings;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[5].field_0x18,(UOptimusNode_SubGraphReference *)&stack0x00000018,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = AddPinForNewBinding;
      lStack_60 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_68 = AddPinForNewBinding;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[6].field_0x10,(UOptimusNode_SubGraphReference *)&stack0x00000020,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = RemoveStalePins;
      lStack_50 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_58 = RemoveStalePins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[7].field_0x8,(UOptimusNode_SubGraphReference *)(local_a8 + 0x10),
                 (pmf_6530ad38 *)this);
      local_a8._0_8_ = RemoveStalePins;
      local_a8._8_4_ = 0;
      lStack_40 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_48 = RemoveStalePins;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 (pUVar5 + 8),(UOptimusNode_SubGraphReference *)&stack0xffffffffffffff70,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = OnBindingMoved;
      lStack_30 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_38 = OnBindingMoved;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar5[8].field_0x20,(UOptimusNode_SubGraphReference *)local_a8,
                 (pmf_6530ad38 *)this);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7575750353644158800>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                     ,0xb0,
                     "SubGraph.IsValid() && !SubGraph->GetOnBindingArrayPasted().IsBoundToObject(this)"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// StaticRegisterNativesUOptimusNode_SubGraphReference @ 14e225d40

void __cdecl
UOptimusNode_SubGraphReference::StaticRegisterNativesUOptimusNode_SubGraphReference(void)

{
  return;
}

// SubscribeToSubGraph @ 14e226240

void __thiscall
UOptimusNode_SubGraphReference::SubscribeToSubGraph(UOptimusNode_SubGraphReference *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_a8 [32];
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  this_00 = &this->SubGraph;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x20,
                       this);
    if (!bVar2) {
      local_a8._0_8_ = RecreateBindingPins;
      local_a8._8_4_ = 0;
      lStack_80 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_88 = RecreateBindingPins;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar3[4].field_0x20,(UOptimusNode_SubGraphReference *)&stack0x00000008,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = SyncPinsToBindings;
      lStack_70 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_78 = SyncPinsToBindings;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar3[5].field_0x18,(UOptimusNode_SubGraphReference *)&stack0x00000010,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = AddPinForNewBinding;
      lStack_60 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_68 = AddPinForNewBinding;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar3[6].field_0x10,(UOptimusNode_SubGraphReference *)&stack0x00000018,
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = RemoveStalePins;
      lStack_50 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_58 = RemoveStalePins;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar3[7].field_0x8,(UOptimusNode_SubGraphReference *)&stack0x00000020,
                 (pmf_6530ad38 *)this);
      local_a8._0_8_ = RemoveStalePins;
      local_a8._8_4_ = 0;
      lStack_40 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_48 = RemoveStalePins;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 (pUVar3 + 8),(UOptimusNode_SubGraphReference *)(local_a8 + 0x10),
                 (pmf_6530ad38 *)this);
      local_a8._8_4_ = 0;
      local_a8._0_8_ = OnBindingMoved;
      lStack_30 = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      local_38 = OnBindingMoved;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
      AddUObject<UOptimusNode_SubGraphReference>
                ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &pUVar3[8].field_0x20,(UOptimusNode_SubGraphReference *)local_a8,
                 (pmf_6530ad38 *)this);
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7575750353644158800>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                     ,0xb0,
                     "SubGraph.IsValid() && !SubGraph->GetOnBindingArrayPasted().IsBoundToObject(this)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SyncPinsToBindings @ 14e226830

void __thiscall
UOptimusNode_SubGraphReference::SyncPinsToBindings
          (UOptimusNode_SubGraphReference *this,FName param_1)

{
  UOptimusNodePin *pUVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FName *pFVar14;
  uint local_res10;
  FScriptContainerElement *local_res18;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  undefined1 local_68 [16];
  FSoftObjectPath local_58;
  
  uVar11 = 0;
  local_res18 = (FScriptContainerElement *)0x0;
  local_res10 = 0;
  uVar9 = uVar11;
  if (param_1 == UOptimusNodeSubGraph::InputBindingsPropertyName) {
    pUVar6 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    pUVar6 = pUVar6 + 4;
    pTVar7 = GetBindingPinsByDirection(this,&local_a8,Input);
    local_88.AllocatorInstance.Data = local_a8.AllocatorInstance.Data;
    if (&local_98 != pTVar7) {
      local_res18 = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_res10 = pTVar7->ArrayNum;
      uVar9 = (ulonglong)local_res10;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
  }
  else {
    if (param_1 != UOptimusNodeSubGraph::OutputBindingsPropertyName) goto LAB_14e226aff;
    pUVar6 = FWeakObjectPtr::Get(&(this->SubGraph).WeakPtr);
    pUVar6 = (UObject *)&pUVar6[4].field_0x10;
    pTVar7 = GetBindingPinsByDirection(this,&local_88,Output);
    if (&local_98 != pTVar7) {
      local_res18 = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_res10 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      uVar9 = (ulonglong)local_res10;
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (pUVar6 != (UObject *)0x0) {
    if ((*(uint *)&pUVar6->field_0x8 != local_res10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingArrayPtr->Num() == BindingPins.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SubGraphReference.cpp"
                           ,0x16c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = uVar11;
    pFVar13 = local_res18;
    if (0 < *(int *)&pUVar6->field_0x8) {
      do {
        uVar10 = (uint)uVar11;
        uVar5 = 0;
        if ((int)uVar10 < (int)uVar9) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar1 = *(UOptimusNodePin **)pFVar13;
        uVar5 = 0;
        if ((int)uVar10 < *(int *)&pUVar6->field_0x8) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (FName *)(*(longlong *)pUVar6 + uVar12);
        if ((FName)pUVar1->_padding_ != *pFVar14) {
          UOptimusNode::SetPinName((UOptimusNode *)this,pUVar1,*pFVar14);
        }
        pTVar8 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar14 + 1),&local_78);
        FOptimusDataTypeRef::Resolve(&pUVar1->DataType,&local_b8);
        pFVar2 = pTVar8->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (local_b8.Object != pFVar2) {
          local_68._0_8_ = pFVar14[1];
          local_68._8_8_ = pFVar14[2];
          FSoftObjectPath::FSoftObjectPath(&local_58,(FSoftObjectPath *)(pFVar14 + 3));
          UOptimusNode::SetPinDataType((UOptimusNode *)this,pUVar1,(FOptimusDataTypeRef *)local_68);
        }
        bVar4 = FOptimusDataDomain::operator==
                          (&pUVar1->DataDomain,(FOptimusDataDomain *)(pFVar14 + 7));
        if (!bVar4) {
          UOptimusNode::SetPinDataDomain
                    ((UOptimusNode *)this,pUVar1,(FOptimusDataDomain *)(pFVar14 + 7));
        }
        uVar9 = (ulonglong)local_res10;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x80;
        pFVar13 = pFVar13 + 8;
      } while ((int)(uVar10 + 1) < *(int *)&pUVar6->field_0x8);
    }
  }
LAB_14e226aff:
  if (local_res18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res18);
  }
  return;
}

// UnsubscribeFromSubGraph @ 14e22b3d0

void __thiscall
UOptimusNode_SubGraphReference::UnsubscribeFromSubGraph(UOptimusNode_SubGraphReference *this)

{
  TWeakObjectPtr<UOptimusNodeSubGraph,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  this_00 = &this->SubGraph;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 8),this);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x20,this);
  }
  return;
}

// _getUObject @ 14e239020

UObject * __thiscall
UOptimusNode_SubGraphReference::_getUObject(UOptimusNode_SubGraphReference *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e239030

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_SubGraphReference::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_SubGraphReference::_getUObject_adjustor_8__(UOptimusNode_SubGraphReference *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_SubGraphReference *)&this[-1].SubGraph);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e239040

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_SubGraphReference::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_SubGraphReference::_getUObject_adjustor_16__(UOptimusNode_SubGraphReference *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_SubGraphReference *)&this[-1].DefaultComponentPin);
  return (UObject *)pUVar1;
}

