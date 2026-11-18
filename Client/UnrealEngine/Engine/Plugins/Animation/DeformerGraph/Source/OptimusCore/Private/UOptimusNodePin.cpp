// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 43

// StaticClass @ 14e1054e0

UClass * __cdecl UOptimusNodePin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePin",
               &Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton,
               StaticRegisterNativesUOptimusNodePin,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePin>,InternalVTableHelperCtorCaller<UOptimusNodePin>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton;
}

// UOptimusNodePin @ 14e15abb0

UOptimusNodePin * __thiscall
UOptimusNodePin::UOptimusNodePin(UOptimusNodePin *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsGroupingPin = false;
  this->Direction = Unknown;
  this->_padding_ = (longlong)&___7UOptimusNodePin__6B_;
  this->StorageType_DEPRECATED = Value;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->SubPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPins).ArrayNum = 0;
  (this->SubPins).ArrayMax = 0;
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  return this;
}

// ~UOptimusNodePin @ 14e163040

void __thiscall UOptimusNodePin::~UOptimusNodePin(UOptimusNodePin *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UOptimusNodePin__6B_;
  pFVar1 = (this->SubPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddSubPin @ 14e1793e0

void __thiscall
UOptimusNodePin::AddSubPin(UOptimusNodePin *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UOptimusNodePin>_u_0 local_res8;
  
  iVar5 = (this->SubPins).ArrayNum;
  if (param_2 != (UOptimusNodePin *)0x0) {
    pFVar1 = (this->SubPins).AllocatorInstance.Data;
    for (pFVar4 = pFVar1; pFVar4 != pFVar1 + (longlong)iVar5 * 8; pFVar4 = pFVar4 + 8) {
      if ((*(UOptimusNodePin **)pFVar4 != (UOptimusNodePin *)0x0) &&
         (*(UOptimusNodePin **)pFVar4 == param_2)) {
        pFVar6 = pFVar1;
        if ((int)((longlong)pFVar4 - (longlong)pFVar1 >> 3) != -1) goto LAB_14e1794a3;
        break;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7986583113880829393>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                       ,0x22f,"SubPins.IndexOfByKey(InBeforePin) != INDEX_NONE");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  goto LAB_14e179459;
  while (pFVar6 = pFVar6 + 8, pFVar6 != pFVar1 + (longlong)iVar5 * 8) {
LAB_14e1794a3:
    if ((*(UOptimusNodePin **)pFVar6 != (UOptimusNodePin *)0x0) &&
       (*(UOptimusNodePin **)pFVar6 == param_2)) {
      iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
      goto LAB_14e179459;
    }
  }
  iVar5 = -1;
LAB_14e179459:
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UOptimusNodePin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
            (&this->SubPins,(TObjectPtr<UOptimusNodePin> *)&local_res8.ObjectPtr,iVar5);
  return;
}

// CanCannect @ 14e181330

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOptimusNodePin::CanCannect(UOptimusNodePin *this,UOptimusNodePin *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  UOptimusNode *pUVar7;
  FOptimusDataType *pFVar8;
  FOptimusDataType *pFVar9;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar10;
  atomic<int> *paVar11;
  UOptimusNodePin *pUVar12;
  UOptimusNodePin *pUVar13;
  FString local_f8;
  undefined1 local_e8 [16];
  FSoftObjectPath local_d8;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  undefined1 local_68 [32];
  void *local_48;
  
  bVar4 = false;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7986583113880829515>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                       ,0x1b5,"InOtherPin");
    if (!bVar4) {
      if (param_2 != (FString *)0x0) {
        ::FString::operator=(param_2,L"No pin given.");
      }
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pUVar7 = GetOwningNode(this);
  bVar6 = UOptimusNode::CanConnectPinToPin(pUVar7,this,param_1,param_2);
  if (!bVar6) {
    return false;
  }
  pUVar7 = GetOwningNode(param_1);
  bVar6 = UOptimusNode::CanConnectPinToPin(pUVar7,param_1,this,param_2);
  if (!bVar6) {
    return false;
  }
  if ((this->bIsGroupingPin == false) && (param_1->bIsGroupingPin == false)) {
    pUVar12 = param_1;
    if (this->Direction == Output) {
      pUVar12 = this;
    }
    pUVar13 = param_1;
    if (this->Direction == Input) {
      pUVar13 = this;
    }
    pFVar8 = FOptimusDataTypeRef::operator->(&this->DataType);
    if (((pFVar8->ShaderValueType).ValueTypePtr != (FShaderValueType *)0x0) &&
       (pFVar8 = FOptimusDataTypeRef::operator->(&param_1->DataType),
       (pFVar8->ShaderValueType).ValueTypePtr != (FShaderValueType *)0x0)) {
      pFVar8 = FOptimusDataTypeRef::operator->(&this->DataType);
      pFVar9 = FOptimusDataTypeRef::operator->(&param_1->DataType);
      if ((pFVar8->ShaderValueType).ValueTypePtr == (pFVar9->ShaderValueType).ValueTypePtr)
      goto LAB_14e18148b;
    }
    if (((this->DataType).TypeName != (param_1->DataType).TypeName) ||
       (bVar4 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)
                           &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8), !bVar4)) {
      if (param_2 == (FString *)0x0) {
        return false;
      }
      FOptimusDataTypeRef::Resolve(&pUVar13->DataType,&local_a8);
      if ((local_a8.Object == (FOptimusDataType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FText::ToString(&(local_a8.Object)->DisplayName);
      FOptimusDataTypeRef::Resolve(&pUVar12->DataType,&local_b8);
      if ((local_b8.Object == (FOptimusDataType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FText::ToString(&(local_b8.Object)->DisplayName);
      ::FString::PrintfImpl(&local_f8,L"Incompatible pin types (%s vs %s).");
      if (param_2 != &local_f8) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_f8.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_f8.Data.ArrayMax;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      return false;
    }
LAB_14e18148b:
    bVar4 = FOptimusDataDomain::AreCompatible(&pUVar12->DataDomain,&pUVar13->DataDomain,param_2);
    return bVar4;
  }
  this_00 = FOptimusDataTypeRegistry::Get();
  pUVar10 = UOptimusComponentSourceBinding::StaticClass();
  FOptimusDataTypeRegistry::FindType(this_00,&local_98,pUVar10);
  FVar3.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.SubPathString.Data.ArrayNum = 0;
  local_d8.SubPathString.Data.ArrayMax = 0;
  local_e8._8_8_ = 0;
  local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.AssetName.Number = 0;
  local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_d8.SubPathString,0);
  local_88.Object = local_98.Object;
  local_88.SharedReferenceCount.ReferenceController =
       local_98.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_e8,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  if (((this->DataType).TypeName == (FName)local_e8._0_8_) &&
     (bVar6 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8,
                         &local_d8), bVar6)) {
LAB_14e1816b1:
    bVar6 = true;
    if (!bVar4) goto LAB_14e1816cb;
  }
  else {
    local_78.Object = local_98.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_68,&local_78);
    if (((param_1->DataType).TypeName == (FName)local_68._0_8_) &&
       (bVar4 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)
                           &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)(local_68 + 0x10)), bVar4)) {
      bVar4 = true;
      goto LAB_14e1816b1;
    }
    bVar6 = false;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14e1816cb:
  if (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return bVar6;
}

// ClearSubPins @ 14e181f40

void __thiscall UOptimusNodePin::ClearSubPins(UOptimusNodePin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SubPins).AllocatorInstance.Data;
  iVar2 = (this->SubPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    Optimus::RemoveObject(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  (this->SubPins).ArrayNum = 0;
  if ((this->SubPins).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SubPins).AllocatorInstance,0,&(this->SubPins).ArrayMax);
  }
  return;
}

// GetActionStack @ 14e1b79d0

UOptimusActionStack * __thiscall UOptimusNodePin::GetActionStack(UOptimusNodePin *this)

{
  UOptimusNode *this_00;
  UOptimusActionStack *pUVar1;
  
  this_00 = GetOwningNode(this);
  pUVar1 = UOptimusNode::GetActionStack(this_00);
  return pUVar1;
}

// GetComponentSourceBindings @ 14e1bebc0

TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
* __thiscall
UOptimusNodePin::GetComponentSourceBindings
          (UOptimusNodePin *this,
          TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  UOptimusNode *pUVar2;
  UClass *pUVar3;
  UOptimusNodeGraph *this_00;
  
  pUVar2 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar2->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e1bec10;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1bec10:
  UOptimusNodeGraph::GetComponentSourceBindingsForPin(this_00,__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// GetComponentSourceBindingsRecursively @ 14e1bfd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
* __thiscall
UOptimusNodePin::GetComponentSourceBindingsRecursively
          (UOptimusNodePin *this,
          TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FOptimusPinTraversalContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusNodePin *this_00;
  int iVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  UOptimusNodeGraph *this_01;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_b0;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  GetSubPinsRecursively(this,&local_b0,true);
  iVar3 = local_b0.ArrayNum;
  uVar6 = (ulonglong)local_b0.ArrayNum;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  pFVar1 = local_b0.AllocatorInstance.Data + uVar6 * 8;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  FVar7.Data = local_b0.AllocatorInstance.Data;
  do {
    if ((uint)uVar6 != iVar3) {
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (FVar7.Data == pFVar1) {
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    this_00 = *(UOptimusNodePin **)FVar7.Data;
    pUVar4 = GetOwningNode(this_00);
    this_01 = (UOptimusNodeGraph *)pUVar4->_padding_;
    if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e1bfe62:
      this_01 = (UOptimusNodeGraph *)0x0;
    }
    else {
      pUVar5 = UOptimusNodeGraph::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) goto LAB_14e1bfe62;
    }
    UOptimusNodeGraph::GetComponentSourceBindingsForPin(this_01,&local_98,this_00,param_1);
    TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>(__return_storage_ptr__,&local_98);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    uVar6 = (ulonglong)(uint)local_b0.ArrayNum;
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetConnectedPins @ 14e1c03b0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodePin::GetConnectedPins
          (UOptimusNodePin *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UOptimusNodeGraph *this_00;
  code *pcVar2;
  bool bVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pUVar4 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar4->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UOptimusNodeGraph::GetConnectedPins(this_00,__return_storage_ptr__,this);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7986583113880829533>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                     ,0x1a3,"Graph != nullptr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar6;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConnectedPinsWithRouting @ 14e1c0cf0

TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodePin::GetConnectedPinsWithRouting
          (UOptimusNodePin *this,
          TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  UOptimusNode *pUVar2;
  UClass *pUVar3;
  UOptimusNodeGraph *this_00;
  
  pUVar2 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar2->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e1c0d40;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1c0d40:
  UOptimusNodeGraph::GetConnectedPinsWithRouting(this_00,__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14e1c4330

FText * __thiscall
UOptimusNodePin::GetDisplayName(UOptimusNodePin *this,FText *__return_storage_ptr__)

{
  FOptimusDataTypeRegistry *pFVar1;
  FFieldClass *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  FString *pFVar5;
  FName FVar6;
  FOptimusDataType *pFVar7;
  bool bVar8;
  bool bVar9;
  FName local_res8;
  FString local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FString local_38;
  
  FVar6 = (FName)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar1 = FOptimusDataTypeRegistry::Get();
  pFVar2 = FBoolProperty::StaticClass();
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar1->RegisteredTypes,pFVar2->Name);
  pFVar7 = (FOptimusDataType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar7 = (FOptimusDataType *)FVar6;
  }
  if (pFVar7 == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar7 = (FOptimusDataType *)FVar6;
  }
  else {
    FVar6 = pFVar7->TypeName;
    pFVar7 = (FOptimusDataType *)(pFVar7->DisplayName).TextData.Reference;
    if (pFVar7 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar7->DisplayName).TextData.Reference =
           *(int *)&(pFVar7->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  FOptimusDataTypeRef::Resolve(&this->DataType,&local_48);
  bVar8 = (FName)local_48.Object == FVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  bVar9 = this->DisplayName == (FName)0x0;
  if (bVar9) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_48);
    pTVar4 = &local_48;
  }
  else {
    pTVar4 = (TSharedPtr<FOptimusDataType_const_,1> *)
             ::FName::ToString(&this->DisplayName,&local_38);
  }
  local_58.Data.AllocatorInstance.Data =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar4->Object)->AllocatorInstance).Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar4->Object)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)&(pTVar4->SharedReferenceCount).ReferenceController;
  local_58.Data.ArrayMax =
       *(int *)((longlong)&(pTVar4->SharedReferenceCount).ReferenceController + 4);
  (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (bVar9) {
    if (local_48.Object != (FOptimusDataType *)0x0) {
      FMemory::Free(local_48.Object);
    }
  }
  if ((!bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FName::NameToDisplayString(&local_38,&local_58,bVar8);
  FText::FromString(__return_storage_ptr__,pFVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return __return_storage_ptr__;
}

// GetIsExpanded @ 14e1c8cf0

bool __thiscall UOptimusNodePin::GetIsExpanded(UOptimusNodePin *this)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UOptimusNode *pUVar5;
  FName FVar6;
  ForElementType<FSetElementId> FVar7;
  
  pUVar5 = GetOwningNode(this);
  FVar6 = GetUniqueName(this);
  lVar1 = *(longlong *)FVar6;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(pUVar5->ExpandedPins).Elements.field_0x8 !=
      *(int *)&(pUVar5->ExpandedPins).Elements.field_0x34) {
    FVar7 = (pUVar5->ExpandedPins).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(pUVar5->ExpandedPins).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((pUVar5->ExpandedPins).HashSize - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar3)
                    * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(pUVar5->ExpandedPins).Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x10) == lVar1) goto LAB_14e1c8d7a;
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14e1c8d7a:
  return iVar4 != -1;
}

// GetNextPin @ 14e1ca860

UOptimusNodePin * __thiscall UOptimusNodePin::GetNextPin(UOptimusNodePin *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UOptimusNode *pUVar5;
  UOptimusNodePin *pUVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  
  lVar9 = this->_padding_;
  if (lVar9 != 0) {
    pUVar4 = StaticClass();
    lVar9 = *(longlong *)(lVar9 + 0x10);
    iVar8 = (int)pUVar4->_padding_;
    if ((iVar8 <= *(int *)(lVar9 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar4->_padding_)) {
      lVar9 = this->_padding_;
      if (lVar9 == 0) {
LAB_14e1ca8d8:
        lVar9 = 0;
      }
      else {
        pUVar4 = StaticClass();
        iVar8 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar4->_padding_)) goto LAB_14e1ca8d8;
      }
      pFVar10 = *(FScriptContainerElement **)(lVar9 + 0xa0);
      iVar8 = *(int *)(lVar9 + 0xa8);
      goto LAB_14e1ca8f9;
    }
  }
  pUVar5 = GetOwningNode(this);
  pFVar10 = (pUVar5->Pins).AllocatorInstance.Data;
  iVar8 = (pUVar5->Pins).ArrayNum;
LAB_14e1ca8f9:
  if ((iVar8 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UOptimusNodePin *)(*pcVar1)();
    return pUVar6;
  }
  uVar12 = iVar8 - 1;
  uVar11 = 0;
  if ((int)uVar12 < iVar8) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UOptimusNodePin *)(*pcVar1)();
    return pUVar6;
  }
  if (*(UOptimusNodePin **)(pFVar10 + (longlong)(int)uVar12 * 8) == this) {
    pUVar6 = (UOptimusNodePin *)0x0;
  }
  else {
    for (pFVar7 = pFVar10; pFVar7 != pFVar10 + (longlong)iVar8 * 8; pFVar7 = pFVar7 + 8) {
      if (*(UOptimusNodePin **)pFVar7 == this) {
        iVar3 = (int)((longlong)pFVar7 - (longlong)pFVar10 >> 3);
        goto LAB_14e1ca9a3;
      }
    }
    iVar3 = -1;
LAB_14e1ca9a3:
    uVar11 = iVar3 + 1;
    uVar12 = 0;
    if ((int)uVar11 < iVar8) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UOptimusNodePin *)(*pcVar1)();
      return pUVar6;
    }
    pUVar6 = *(UOptimusNodePin **)(pFVar10 + (longlong)(int)uVar11 * 8);
  }
  return pUVar6;
}

// GetNextPin @ 14e1caa20

UOptimusNodePin * __thiscall UOptimusNodePin::GetNextPin(UOptimusNodePin *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UOptimusNode *pUVar5;
  UOptimusNodePin *pUVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  
  lVar9 = this->_padding_;
  if (lVar9 != 0) {
    pUVar4 = StaticClass();
    lVar9 = *(longlong *)(lVar9 + 0x10);
    iVar8 = (int)pUVar4->_padding_;
    if ((iVar8 <= *(int *)(lVar9 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar4->_padding_)) {
      lVar9 = this->_padding_;
      if (lVar9 == 0) {
LAB_14e1caa98:
        lVar9 = 0;
      }
      else {
        pUVar4 = StaticClass();
        iVar8 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar4->_padding_)) goto LAB_14e1caa98;
      }
      pFVar10 = *(FScriptContainerElement **)(lVar9 + 0xa0);
      iVar8 = *(int *)(lVar9 + 0xa8);
      goto LAB_14e1caab9;
    }
  }
  pUVar5 = GetOwningNode(this);
  pFVar10 = (pUVar5->Pins).AllocatorInstance.Data;
  iVar8 = (pUVar5->Pins).ArrayNum;
LAB_14e1caab9:
  if ((iVar8 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UOptimusNodePin *)(*pcVar1)();
    return pUVar6;
  }
  uVar12 = iVar8 - 1;
  uVar11 = 0;
  if ((int)uVar12 < iVar8) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UOptimusNodePin *)(*pcVar1)();
    return pUVar6;
  }
  if (*(UOptimusNodePin **)(pFVar10 + (longlong)(int)uVar12 * 8) == this) {
    pUVar6 = (UOptimusNodePin *)0x0;
  }
  else {
    for (pFVar7 = pFVar10; pFVar7 != pFVar10 + (longlong)iVar8 * 8; pFVar7 = pFVar7 + 8) {
      if (*(UOptimusNodePin **)pFVar7 == this) {
        iVar3 = (int)((longlong)pFVar7 - (longlong)pFVar10 >> 3);
        goto LAB_14e1cab63;
      }
    }
    iVar3 = -1;
LAB_14e1cab63:
    uVar11 = iVar3 + 1;
    uVar12 = 0;
    if ((int)uVar11 < iVar8) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UOptimusNodePin *)(*pcVar1)();
      return pUVar6;
    }
    pUVar6 = *(UOptimusNodePin **)(pFVar10 + (longlong)(int)uVar11 * 8);
  }
  return pUVar6;
}

// GetOwningNode @ 14e1cc0b0

UOptimusNode * __thiscall UOptimusNodePin::GetOwningNode(UOptimusNodePin *this)

{
  int iVar1;
  UOptimusNode *pUVar2;
  UClass *pUVar3;
  UOptimusNodePin *pUVar4;
  
  while (pUVar4 = this, this = (UOptimusNodePin *)pUVar4->_padding_, this != (UOptimusNodePin *)0x0)
  {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) break;
  }
  pUVar2 = (UOptimusNode *)pUVar4->_padding_;
  if (pUVar2 != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNode *)0x0;
}

// GetParentPin @ 14e1cc2c0

UOptimusNodePin * __thiscall UOptimusNodePin::GetParentPin(UOptimusNodePin *this)

{
  int iVar1;
  UOptimusNodePin *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOptimusNodePin *)this->_padding_;
  if (pUVar2 != (UOptimusNodePin *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNodePin *)0x0;
}

// GetParentPin @ 14e1cc310

UOptimusNodePin * __thiscall UOptimusNodePin::GetParentPin(UOptimusNodePin *this)

{
  int iVar1;
  UOptimusNodePin *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOptimusNodePin *)this->_padding_;
  if (pUVar2 != (UOptimusNodePin *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNodePin *)0x0;
}

// GetPinNamePath @ 14e1d36a0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodePin::GetPinNamePath
          (UOptimusNodePin *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  UOptimusNodePin *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  UOptimusNodePin *local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,&local_28,0,(int *)((longlong)&local_20 + 4));
  local_38 = this;
  if (this != (UOptimusNodePin *)0x0) {
    while( true ) {
      if (((local_28.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_28.Data + (longlong)local_20._4_4_ * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = (int)local_20;
      if ((int)local_20 == local_20._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_28,(int *)((longlong)&local_20 + 4));
      }
      local_20 = CONCAT44(local_20._4_4_,iVar6 + 1);
      *(UOptimusNodePin **)(local_28.Data + (longlong)iVar6 * 8) = local_38;
      pUVar2 = (UOptimusNodePin *)local_38->_padding_;
      if (pUVar2 == (UOptimusNodePin *)0x0) break;
      pUVar9 = StaticClass();
      iVar6 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar6) ||
         (local_38 = pUVar2,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar6 * 8)
         != &pUVar9->_padding_)) break;
    }
    local_38 = (UOptimusNodePin *)0x0;
  }
  uVar10 = local_20 & 0xffffffff;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (0 < (int)local_20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_20,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    uVar10 = local_20 & 0xffffffff;
  }
  uVar12 = (ulonglong)(int)uVar10;
  if (0 < (int)uVar10) {
    lVar13 = uVar12 * 8;
    while( true ) {
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
      lVar13 = lVar13 + -8;
      uVar7 = 0;
      if ((int)uVar11 < (int)uVar10) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      local_30 = *(undefined8 *)(*(longlong *)(local_28.Data + lVar13) + 0x18);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_30;
      if ((int)uVar11 < 1) break;
      uVar10 = local_20 & 0xffffffff;
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// GetPinNamePathFromString @ 14e1d3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusNodePin::GetPinNamePathFromString
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  wchar_t **ppwVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  int iVar14;
  ulonglong uVar15;
  ForElementType<TStringView<wchar_t>_> FVar16;
  ForElementType<TStringView<wchar_t>_> FVar17;
  undefined1 auStackY_138 [32];
  undefined1 local_e8 [16];
  wchar_t *local_d8;
  wchar_t *pwStack_d0;
  wchar_t *local_c8;
  int iStack_c0;
  uchar auStack_bc [4];
  undefined1 local_b8 [16];
  wchar_t *local_a8;
  int iStack_a0;
  uchar auStack_9c [4];
  FName local_98;
  ForElementType<TStringView<wchar_t>_> local_90;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d8 = param_1->DataPtr;
  pwStack_d0 = *(wchar_t **)&param_1->Size;
  local_44 = 4;
  local_90.SecondaryData = (ForElementType<TStringView<wchar_t>_>)0x0;
  local_48 = 0;
  local_b8._0_8_ = local_d8;
  local_b8._8_8_ = pwStack_d0;
  iVar8 = UE::String::FindFirstChar((TStringView<wchar_t> *)local_b8,L'.',CaseSensitive);
  while (iVar11 = (int)pwStack_d0, iVar8 != -1) {
    if (0 < iVar8) {
      iVar9 = 0;
      if (iVar11 < 0) {
        iVar9 = iVar11;
      }
      iVar14 = iVar11 - iVar9;
      if (iVar8 < iVar11 - iVar9) {
        iVar14 = iVar8;
      }
      local_c8 = local_d8 + iVar9;
      iStack_c0 = 0;
      if (0 < iVar14) {
        iStack_c0 = iVar14;
      }
      FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
      if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
        FVar16 = local_90.SecondaryData;
      }
      if ((ulonglong)FVar16 <= &local_c8) {
        FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
        if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
          FVar16 = local_90.SecondaryData;
        }
        if ((&local_c8 < (wchar_t **)((longlong)(int)local_44 * 0x10 + (longlong)FVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                             (0x810,&local_90,(int *)&local_44);
      }
      FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
      if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
        FVar16 = local_90.SecondaryData;
      }
      ppwVar2 = (wchar_t **)((longlong)FVar16 + (longlong)(int)local_48 * 0x10);
      local_48 = local_48 + 1;
      *ppwVar2 = local_c8;
      ppwVar2[1] = (wchar_t *)CONCAT44(auStack_bc,iStack_c0);
    }
    iVar11 = iVar8 + 1;
    iVar9 = 0x7fffffff;
    if (iVar11 < 0) {
      iVar9 = iVar8 + -0x80000000;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    iVar8 = (int)pwStack_d0;
    if (iVar8 < iVar11) {
      iVar11 = iVar8;
    }
    iVar14 = iVar8 - iVar11;
    if (iVar9 < iVar8 - iVar11) {
      iVar14 = iVar9;
    }
    local_d8 = local_d8 + iVar11;
    iStack_a0 = 0;
    if (0 < iVar14) {
      iStack_a0 = iVar14;
    }
    pwStack_d0 = (wchar_t *)CONCAT44(auStack_9c,iStack_a0);
    local_b8._0_8_ = local_d8;
    local_b8._8_8_ = pwStack_d0;
    local_a8 = local_d8;
    iVar8 = UE::String::FindFirstChar((TStringView<wchar_t> *)local_b8,L'.',CaseSensitive);
  }
  if (iVar11 != 0) {
    FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
    if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar16 = local_90.SecondaryData;
    }
    if ((ulonglong)FVar16 <= &local_d8) {
      FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
      if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
        FVar16 = local_90.SecondaryData;
      }
      if ((&local_d8 < (wchar_t **)((longlong)(int)local_44 * 0x10 + (longlong)FVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
    }
    uVar10 = local_48;
    if (local_48 == local_44) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                         (0x810,&local_90,(int *)&local_44);
    }
    local_48 = uVar10 + 1;
    FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
    if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar16 = local_90.SecondaryData;
    }
    ppwVar2 = (wchar_t **)((longlong)FVar16 + (longlong)(int)uVar10 * 0x10);
    *ppwVar2 = local_d8;
    ppwVar2[1] = pwStack_d0;
  }
  uVar15 = (ulonglong)local_48;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (-1 < (int)local_48) {
    if (0 < (int)local_48) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_48,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
      uVar15 = (ulonglong)local_48;
    }
    iVar8 = (int)uVar15;
    FVar16 = (ForElementType<TStringView<wchar_t>_>)&local_90;
    if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar16 = local_90.SecondaryData;
    }
    FVar17 = (ForElementType<TStringView<wchar_t>_>)((longlong)iVar8 * 0x10 + (longlong)FVar16);
    while( true ) {
      if ((int)uVar15 != iVar8) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (FVar16 == FVar17) break;
      iVar11 = __return_storage_ptr__->ArrayNum;
      pwVar5 = *(wchar_t **)FVar16;
      pwVar6 = *(wchar_t **)((longlong)FVar16 + 8);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar13 = ::FName::FName(&local_98,(int)pwVar6,pwVar5,FNAME_Find);
      FVar16 = (ForElementType<TStringView<wchar_t>_>)((longlong)FVar16 + 0x10);
      *(FName *)(pFVar3 + (longlong)iVar11 * 8) = *pFVar13;
      uVar15 = (ulonglong)local_48;
    }
    if (local_90.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FMemory::Free((void *)local_90.SecondaryData);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar15);
}

// GetPinPath @ 14e1d3d90

FString * __thiscall
UOptimusNodePin::GetPinPath(UOptimusNodePin *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FName this_00;
  FString *pFVar2;
  UOptimusNode *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  longlong lVar6;
  FName local_res10 [2];
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  this_00 = GetUniqueName(this);
  pFVar2 = ::FName::ToString((FName *)this_00,&local_18);
  pUVar3 = GetOwningNode(this);
  local_res10[0] = (FName)pUVar3->_padding_;
  ::FName::ToString(local_res10,&local_38);
  pUVar3 = GetOwningNode(this);
  lVar6 = pUVar3->_padding_;
  if (lVar6 != 0) {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14e1d3e15;
  }
  lVar6 = 0;
LAB_14e1d3e15:
  pFVar5 = (FString *)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(lVar6 + 0x28,local_28);
  UOptimusNodeGraph::ConstructPath(__return_storage_ptr__,pFVar5,&local_38,pFVar2);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d6f30

UClass * __cdecl UOptimusNodePin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePin",
               &Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton,
               StaticRegisterNativesUOptimusNodePin,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePin>,InternalVTableHelperCtorCaller<UOptimusNodePin>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePin.InnerSingleton;
}

// GetPropertyFromPin @ 14e1d9ed0

FProperty * __thiscall UOptimusNodePin::GetPropertyFromPin(UOptimusNodePin *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UOptimusNode *pUVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  uint uVar7;
  UStruct *this_00;
  FProperty *pFVar8;
  FProperty *pFVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar4 = GetOwningNode(this);
  this_00 = (UStruct *)pUVar4->_padding_;
  GetPinNamePath(this,&local_18);
  pFVar8 = (FProperty *)0x0;
  pFVar5 = pFVar8;
  pFVar9 = pFVar8;
  if (0 < local_18.ArrayNum) {
    do {
      uVar7 = (uint)pFVar5;
      uVar3 = 0;
      if ((int)uVar7 < local_18.ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FProperty *)(*pcVar1)();
        return pFVar5;
      }
      pFVar6 = UStruct::FindPropertyByName
                         (this_00,*(FName *)(local_18.AllocatorInstance.Data +
                                            (longlong)(int)uVar7 * 8));
      pFVar9 = pFVar8;
      if (((pFVar6 == (FProperty *)0x0) || (pFVar9 = pFVar6, uVar7 == local_18.ArrayNum - 1U)) ||
         (pFVar9 = pFVar8, (*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0)) break;
      this_00 = (UStruct *)pFVar6[1]._padding_;
      pFVar5 = (FProperty *)(ulonglong)(uVar7 + 1);
      pFVar9 = pFVar6;
    } while ((int)(uVar7 + 1) < local_18.ArrayNum);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pFVar9;
}

// GetPropertyValuePtr @ 14e1db360

uchar * __thiscall UOptimusNodePin::GetPropertyValuePtr(UOptimusNodePin *this)

{
  FProperty *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  UClass *pUVar6;
  UOptimusNode *pUVar7;
  UOptimusNodePin *this_01;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  FProperty *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  puVar5 = (uchar *)0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,&local_40,0,(int *)((longlong)&local_38 + 4));
  this_01 = this;
  if (this != (UOptimusNodePin *)0x0) {
    while( true ) {
      local_48 = GetPropertyFromPin(this_01);
      if (local_48 == (FProperty *)0x0) goto LAB_14e1db5b2;
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar1)();
        return puVar5;
      }
      iVar3 = (int)local_38;
      if ((int)local_38 == local_38._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)((longlong)&local_38 + 4));
      }
      local_38 = CONCAT44(local_38._4_4_,iVar3 + 1);
      *(FProperty **)(local_40.Data + (longlong)iVar3 * 8) = local_48;
      this_01 = (UOptimusNodePin *)this_01->_padding_;
      if (this_01 == (UOptimusNodePin *)0x0) break;
      pUVar6 = StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) break;
    }
  }
  pUVar7 = GetOwningNode(this);
  uVar9 = (ulonglong)(int)local_38;
  if (0 < (int)local_38) {
    lVar10 = uVar9 * 8;
    do {
      lVar10 = lVar10 + -8;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
      uVar4 = 0;
      if ((int)uVar8 < (int)local_38) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar1)();
        return puVar5;
      }
      this_00 = *(FProperty **)(local_40.Data + lVar10);
      if (puVar5 == (uchar *)0x0) {
        puVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)pUVar7,0);
      }
      else {
        if ((this_00->ArrayDim < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar1)();
          return puVar5;
        }
        puVar5 = puVar5 + this_00->Offset_Internal;
      }
    } while (0 < (int)uVar8);
  }
LAB_14e1db5b2:
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return puVar5;
}

// GetRootPin @ 14e1dffb0

UOptimusNodePin * __thiscall UOptimusNodePin::GetRootPin(UOptimusNodePin *this)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNodePin *pUVar3;
  
  while( true ) {
    pUVar3 = this;
    this = (UOptimusNodePin *)pUVar3->_padding_;
    if (this == (UOptimusNodePin *)0x0) {
      return pUVar3;
    }
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar1) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetRootPin @ 14e1e0010

UOptimusNodePin * __thiscall UOptimusNodePin::GetRootPin(UOptimusNodePin *this)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNodePin *pUVar3;
  
  while( true ) {
    pUVar3 = this;
    this = (UOptimusNodePin *)pUVar3->_padding_;
    if (this == (UOptimusNodePin *)0x0) {
      return pUVar3;
    }
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar1) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetSubPinsRecursively @ 14e1e40d0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNodePin::GetSubPinsRecursively
          (UOptimusNodePin *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1
          )

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res18 [8];
  longlong local_48;
  UOptimusNodePin *local_40;
  undefined8 *local_38;
  
  puVar10 = (undefined8 *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar8 = ::operator_new(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar10 = puVar8;
  }
  local_38 = puVar10;
  puVar8 = ::operator_new(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = this;
    *local_38 = puVar8;
    local_38 = puVar8;
  }
  if (param_1) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_40 = this;
    if (((pFVar2 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_40;
  }
  do {
    puVar8 = (undefined8 *)*puVar10;
    if (puVar8 == (undefined8 *)0x0) {
      do {
        puVar8 = (undefined8 *)*puVar10;
        ::operator_delete(puVar10,0x10);
        puVar10 = puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      return __return_storage_ptr__;
    }
    lVar3 = puVar8[1];
    puVar8[1] = 0;
    ::operator_delete(puVar10,0x10);
    plVar11 = *(longlong **)(lVar3 + 0xa0);
    iVar6 = *(int *)(lVar3 + 0xa8);
    plVar1 = plVar11 + iVar6;
    while( true ) {
      if (*(int *)(lVar3 + 0xa8) != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      puVar10 = puVar8;
      if (plVar11 == plVar1) break;
      local_48 = *plVar11;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_48;
      if ((*(int *)(local_48 + 0xa8) != 0) &&
         (puVar10 = ::operator_new(0x10), puVar10 != (undefined8 *)0x0)) {
        *puVar10 = 0;
        puVar10[1] = local_48;
        *local_38 = puVar10;
        local_38 = puVar10;
      }
      plVar11 = plVar11 + 1;
    }
  } while( true );
}

// GetTooltipText @ 14e1e6fb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UOptimusNodePin::GetTooltipText(UOptimusNodePin *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FText *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1e8;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TSharedPtr<FOptimusDataType_const_,1> local_188;
  TSharedPtr<FOptimusDataType_const_,1> local_178;
  TSharedPtr<FOptimusDataType_const_,1> local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FString local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_118;
  FText local_108;
  FText local_f8;
  TSharedPtr<FOptimusDataType_const_,1> local_e8;
  TSharedPtr<FOptimusDataType_const_,1> local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FString local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  if (this->bIsGroupingPin == false) {
    if (((this->DataDomain).Type == Dimensional) &&
       ((this->DataDomain).DimensionNames.ArrayNum == 0)) {
      pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_188);
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      if ((pFVar2->ShaderValueType).ValueTypePtr == (FShaderValueType *)0x0) {
        pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_118);
        pFVar2 = pTVar8->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        local_1c8 = (FName)this->_padding_;
        ::FName::ToString(&local_1c8,&local_1a8);
        pFVar7 = FText::FromString(&local_f8,&local_1a8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_108,L"OptimusDeformer",L"OptimusNodePin_Tooltip_Value",
                             L"Name:\t{0}\nType:\t{1}\nStorage:\tValue");
        pFVar12 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
        local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.ArrayNum = 0;
        local_1e8.ArrayMax = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,&local_1e8.AllocatorInstance,0,&local_1e8.ArrayMax);
        iVar6 = local_1e8.ArrayNum;
        if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
        }
        FVar4.Data = local_1e8.AllocatorInstance.Data;
        local_1e8.ArrayNum = iVar6 + 1;
        lVar14 = (longlong)iVar6 * 0x20;
        *(undefined4 *)&local_1e8.AllocatorInstance.Data[lVar14].field_0x0 = 4;
        FText::FText((FText *)(local_1e8.AllocatorInstance.Data + lVar14 + 0x10),pFVar7);
        if ((*(longlong *)&FVar4.Data[lVar14 + 0x10].field_0x0 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar3)();
          return pFVar7;
        }
        iVar6 = local_1e8.ArrayNum;
        if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
        }
        local_1e8.ArrayNum = iVar6 + 1;
        pFVar15 = local_1e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
        *(undefined4 *)&pFVar15->field_0x0 = 4;
        *(undefined8 *)(pFVar15 + 0x10) = 0;
        pIVar1 = (pFVar2->DisplayName).TextData.Reference;
        *(ITextData **)(pFVar15 + 0x10) = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
        }
        *(uint *)(pFVar15 + 0x18) = (pFVar2->DisplayName).Flags;
        if ((*(longlong *)(pFVar15 + 0x10) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar3)();
          return pFVar7;
        }
        FText::FormatOrderedImpl(__return_storage_ptr__,pFVar12,&local_1e8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
        if ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        local_78.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
          local_78.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
        }
      }
      else {
        pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_178);
        pFVar2 = pTVar8->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        pFVar9 = FShaderValueType::ToString
                           ((pFVar2->ShaderValueType).ValueTypePtr,&local_128,&local_res20);
        pFVar7 = FText::FromString(&local_138,pFVar9);
        pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_168);
        pFVar2 = pTVar8->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        local_1d0 = (FName)this->_padding_;
        ::FName::ToString(&local_1d0,&local_1b8);
        pFVar10 = FText::FromString(&local_148,&local_1b8);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"OptimusDeformer",L"OptimusNodePin_Tooltip_ShaderValue",
                             L"Name:\t{0}\nType:\t{1} ({2})\nStorage:\tValue");
        pFVar12 = FTextFormat::FTextFormat(&local_68,pFVar11,Default);
        FText::FormatOrdered<FText,FText_const_&,FText>
                  (__return_storage_ptr__,pFVar12,pFVar10,&pFVar2->DisplayName,pFVar7);
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        if (local_138.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
          local_78.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        }
      }
    }
    else {
      pFVar9 = FOptimusDataDomain::GetDisplayName(&this->DataDomain,&local_78);
      pFVar7 = FText::FromString(&local_88,pFVar9);
      pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_e8);
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      local_1d8.ComparisonIndex.Value = 0;
      local_1d8.Number = 0;
      pFVar9 = FShaderValueType::ToString
                         ((pFVar2->ShaderValueType).ValueTypePtr,&local_98,&local_1d8);
      pFVar10 = FText::FromString(&local_a8,pFVar9);
      pTVar8 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_d8);
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      local_1c0 = (FName)this->_padding_;
      ::FName::ToString(&local_1c0,&local_198);
      pFVar11 = FText::FromString(&local_b8,&local_198);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"OptimusDeformer",L"OptimusNodePin_Tooltip_Resource",
                           L"Name:\t{0}\nType:\t{1} ({2})\nStorage:\tResource\nDomain:\t{3}");
      pFVar12 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
      FText::FormatOrdered<FText,FText_const_&,FText,FText>
                (__return_storage_ptr__,pFVar12,pFVar11,&pFVar2->DisplayName,pFVar10,pFVar7);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  return __return_storage_ptr__;
}

// GetUniqueName @ 14e1e82a0

FName __thiscall UOptimusNodePin::GetUniqueName(UOptimusNodePin *this)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FName in_RDX;
  ForAnyElementType FVar5;
  FName *this_00;
  int iVar6;
  undefined1 local_res10 [8];
  FString local_58;
  FString local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar4 = GetPinNamePath(this,&local_38);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar3 = true;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  this_00 = (FName *)(pTVar4->AllocatorInstance).Data;
  iVar2 = pTVar4->ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (pTVar4->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar1) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_58,L".",1);
    }
    ::FName::ToString(this_00,&local_48);
    iVar6 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar5.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetValueAsString @ 14e1e9400

FString * __thiscall
UOptimusNodePin::GetValueAsString(UOptimusNodePin *this,FString *__return_storage_ptr__)

{
  FProperty *pFVar1;
  uchar *puVar2;
  UOptimusNode *pUVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar1 = GetPropertyFromPin(this);
  puVar2 = GetPropertyValuePtr(this);
  if ((pFVar1 != (FProperty *)0x0) && (puVar2 != (uchar *)0x0)) {
    pUVar3 = GetOwningNode(this);
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,__return_storage_ptr__,puVar2,0,0,pUVar3,0,0);
  }
  return __return_storage_ptr__;
}

// InitializeWithData @ 14e1edd00

void __thiscall
UOptimusNodePin::InitializeWithData
          (UOptimusNodePin *this,EOptimusNodePinDirection param_1,FOptimusDataDomain *param_2,
          FOptimusDataTypeRef *param_3)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->Direction = param_1;
  (this->DataDomain).Type = param_2->Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).DimensionNames,&param_2->DimensionNames);
  (this->DataDomain).Multiplier = param_2->Multiplier;
  ::FString::operator=(&(this->DataDomain).Expression,&param_2->Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).LevelNames_DEPRECATED,&param_2->LevelNames_DEPRECATED);
  (this->DataType).TypeName = param_3->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_3->TypeObject);
  pFVar1 = (param_2->LevelNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Expression).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->DimensionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(param_3->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// InitializeWithGrouping @ 14e1eddd0

void __thiscall
UOptimusNodePin::InitializeWithGrouping(UOptimusNodePin *this,EOptimusNodePinDirection param_1)

{
  this->Direction = param_1;
  this->bIsGroupingPin = true;
  return;
}

// IsMutable @ 14e1ef0c0

bool __thiscall
UOptimusNodePin::IsMutable(UOptimusNodePin *this,FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UClass *pUVar4;
  UOptimusNodeGraph *this_00;
  
  pUVar3 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar3->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14e1ef109;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1ef109:
  bVar2 = UOptimusNodeGraph::IsPinMutable(this_00,this,param_1);
  return bVar2;
}

// Notify @ 14e1f3c80

void __thiscall UOptimusNodePin::Notify(UOptimusNodePin *this,EOptimusGraphNotifyType param_1)

{
  int iVar1;
  UOptimusNode *pUVar2;
  UClass *pUVar3;
  UOptimusNodeGraph *this_00;
  
  pUVar2 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar2->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e1f3cc8;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1f3cc8:
  UOptimusNodeGraph::Notify(this_00,param_1,(UObject *)this);
  return;
}

// PostLoad @ 14e1fbd40

void __thiscall UOptimusNodePin::PostLoad(UOptimusNodePin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  FGuid local_68;
  FOptimusDataDomain local_58;
  
  UObject::PostLoad((UObject *)this);
  pFVar3 = (this->SubPins).AllocatorInstance.Data;
  iVar2 = (this->SubPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  local_68 = FOptimusObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_68);
  if (iVar2 < 7) {
    if ((this->DataDomain).LevelNames_DEPRECATED.ArrayNum != 0) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&(this->DataDomain).DimensionNames,&(this->DataDomain).LevelNames_DEPRECATED);
      iVar2 = (this->DataDomain).LevelNames_DEPRECATED.ArrayMax;
      (this->DataDomain).LevelNames_DEPRECATED.ArrayNum = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance,0,
                   &(this->DataDomain).LevelNames_DEPRECATED.ArrayMax);
      }
    }
    if (this->StorageType_DEPRECATED == Value) {
      local_58.Type = Dimensional;
      local_58._4_4_ = 0;
      local_58.Multiplier = 1;
      local_58._28_4_ = 0;
      local_58.LevelNames_DEPRECATED.ArrayMax = 0;
      local_58.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.DimensionNames.ArrayNum = 0;
      local_58.DimensionNames.ArrayMax = 0;
      local_58.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Expression.Data.ArrayNum = 0;
      local_58.Expression.Data.ArrayMax = 0;
      ::FName::FName(&local_res10,"Vertex");
      local_58.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.LevelNames_DEPRECATED.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&local_58.LevelNames_DEPRECATED.AllocatorInstance,1,
                 &local_58.LevelNames_DEPRECATED.ArrayMax);
      *(FName *)local_58.LevelNames_DEPRECATED.AllocatorInstance.Data = local_res10;
      FOptimusDataDomain::operator=(&this->DataDomain,&local_58);
      if ((FName *)local_58.LevelNames_DEPRECATED.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_58.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      if (local_58.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Expression.Data.AllocatorInstance.Data);
      }
      if (local_58.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DimensionNames.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetDataType @ 14e21dba0

bool __thiscall UOptimusNodePin::SetDataType(UOptimusNodePin *this,FOptimusDataTypeRef *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  FOptimusDataTypeRef::Resolve(param_1,&local_28);
  if (local_28.Object != (FOptimusDataType *)0x0) {
    FOptimusDataTypeRef::Resolve(&this->DataType,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (local_28.Object != local_18.Object) {
      if (((this->DataDomain).Type != Dimensional) ||
         ((this->DataDomain).DimensionNames.ArrayNum != 0)) {
        if ((local_28.Object == (FOptimusDataType *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (((local_28.Object)->UsageFlags & Resource) == None) goto LAB_14e21dc3f;
      }
      (this->DataType).TypeName = param_1->TypeName;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TypeObject);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pvVar1 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      return true;
    }
  }
LAB_14e21dc3f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return false;
}

// SetDisplayName @ 14e21dfa0

bool __thiscall UOptimusNodePin::SetDisplayName(UOptimusNodePin *this,FName *param_1)

{
  if (this->DisplayName == *param_1) {
    return false;
  }
  this->DisplayName = *param_1;
  return true;
}

// SetIsExpanded @ 14e21ebb0

void __thiscall UOptimusNodePin::SetIsExpanded(UOptimusNodePin *this,bool param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  UOptimusNode *pUVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  FName local_res10;
  FName local_res18;
  
  pUVar5 = GetOwningNode(this);
  GetUniqueName(this);
  FVar2 = local_res18;
  uVar7 = local_res18.Number;
  if (param_1) {
    uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    if (*(int *)&(pUVar5->ExpandedPins).Elements.field_0x8 !=
        *(int *)&(pUVar5->ExpandedPins).Elements.field_0x34) {
      FVar6 = (pUVar5->ExpandedPins).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(pUVar5->ExpandedPins).Hash;
      }
      iVar4 = *(int *)((longlong)FVar6 +
                      (ulonglong)((pUVar5->ExpandedPins).HashSize - 1U & uVar7 + uVar3) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&(pUVar5->ExpandedPins).Elements;
        do {
          if (*(FName *)(lVar1 + (longlong)iVar4 * 0x10) == local_res18) {
            return;
          }
          iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&pUVar5->ExpandedPins,&local_res10,(bool *)&local_res18);
  }
  else {
    uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    if (*(int *)&(pUVar5->ExpandedPins).Elements.field_0x8 ==
        *(int *)&(pUVar5->ExpandedPins).Elements.field_0x34) {
      return;
    }
    FVar6 = (pUVar5->ExpandedPins).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(pUVar5->ExpandedPins).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((pUVar5->ExpandedPins).HashSize - 1U & uVar7 + uVar3) * 4);
    if (iVar4 == -1) {
      return;
    }
    lVar1 = *(longlong *)&(pUVar5->ExpandedPins).Elements;
    while (*(FName *)(lVar1 + (longlong)iVar4 * 0x10) != FVar2) {
      iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      if (iVar4 == -1) {
        return;
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&pUVar5->ExpandedPins,local_res18);
  }
  Notify(this,PinExpansionChanged);
  return;
}

// SetName @ 14e21f020

bool __thiscall UOptimusNodePin::SetName(UOptimusNodePin *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  UOptimusNodeGraph *this_00;
  FName local_res10 [3];
  FString local_18;
  
  if ((FName)this->_padding_ == param_1) {
    return false;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x170);
  local_res10[0] = param_1;
  pFVar3 = ::FName::ToString(local_res10,&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(this,pwVar6,0,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar4 = GetOwningNode(this);
  this_00 = (UOptimusNodeGraph *)pUVar4->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e21f0bb;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e21f0bb:
  UOptimusNodeGraph::Notify(this_00,PinRenamed,(UObject *)this);
  return true;
}

// SetValueFromString @ 14e222f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOptimusNodePin::SetValueFromString(UOptimusNodePin *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UOptimusNode *this_00;
  UOptimusActionStack *this_01;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FOptimusAction,1> local_18;
  
  this_00 = GetOwningNode(this);
  this_01 = UOptimusNode::GetActionStack(this_00);
  pTVar4 = ::operator_new(0x58);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = ___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinValue___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeAction_SetPinValue::FOptimusNodeAction_SetPinValue
              ((FOptimusNodeAction_SetPinValue *)(pTVar4 + 1),this,param_1);
    local_18.Object = (FOptimusAction *)(pTVar4 + 1);
    if (local_18.Object == (FOptimusAction *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar2 = UOptimusActionStack::RunAction(this_01,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// SetValueFromStringDirect @ 14e223060

bool __thiscall UOptimusNodePin::SetValueFromStringDirect(UOptimusNodePin *this,FString *param_1)

{
  code *pcVar1;
  FFeedbackContext *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  FProperty *this_00;
  uchar *puVar5;
  UOptimusNode *pUVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  
  this_00 = GetPropertyFromPin(this);
  puVar5 = GetPropertyValuePtr(this);
  if (this_00 == (FProperty *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7986583113880829637>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                       ,0x13b,"Property");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else if (puVar5 != (uchar *)0x0) {
    pUVar6 = GetOwningNode(this);
    pFVar2 = GWarn;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)GWarn);
    if ((bVar3) && ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0)) {
      lVar7 = (**(code **)(this_00->_padding_ + 0xe8))
                        (this_00,pwVar8,puVar5,0,pUVar6,0x8000000,pFVar2);
    }
    else {
      lVar7 = 0;
    }
    Notify(this,PinValueChanged);
    return lVar7 != 0;
  }
  return false;
}

// StaticRegisterNativesUOptimusNodePin @ 14e225be0

void __cdecl UOptimusNodePin::StaticRegisterNativesUOptimusNodePin(void)

{
  return;
}

// VerifyValue @ 14e230970

bool __thiscall UOptimusNodePin::VerifyValue(UOptimusNodePin *this,FString *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  FProperty *pFVar4;
  FCoreTexts *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  
  pFVar4 = GetPropertyFromPin(this);
  if (pFVar4 != (FProperty *)0x0) {
    uVar1 = *(ulonglong *)(pFVar4->_padding_ + 0x18);
    if ((uVar1 >> 0x11 & 1) != 0) {
      pFVar5 = FCoreTexts::Get();
      pwVar9 = L"";
      if ((param_1->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"1");
      if (iVar3 != 0) {
        if ((param_1->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"True");
        if (iVar3 != 0) {
          pFVar6 = FText::ToString(pFVar5->True);
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          if ((param_1->Data).ArrayNum == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
          if (iVar3 != 0) {
            if ((param_1->Data).ArrayNum == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"Yes");
            if (iVar3 != 0) {
              pFVar6 = FText::ToString(pFVar5->Yes);
              if ((pFVar6->Data).ArrayNum == 0) {
                pwVar8 = L"";
              }
              else {
                pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
              }
              if ((param_1->Data).ArrayNum == 0) {
                pwVar7 = L"";
              }
              else {
                pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
              }
              iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
              if (iVar3 != 0) {
                if ((param_1->Data).ArrayNum == 0) {
                  pwVar8 = L"";
                }
                else {
                  pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                }
                iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"0");
                if (iVar3 != 0) {
                  if ((param_1->Data).ArrayNum == 0) {
                    pwVar8 = L"";
                  }
                  else {
                    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                  }
                  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"False");
                  if (iVar3 != 0) {
                    pFVar6 = FText::ToString(pFVar5->False);
                    if ((pFVar6->Data).ArrayNum == 0) {
                      pwVar8 = L"";
                    }
                    else {
                      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                    }
                    if ((param_1->Data).ArrayNum == 0) {
                      pwVar7 = L"";
                    }
                    else {
                      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                    }
                    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
                    if (iVar3 != 0) {
                      if ((param_1->Data).ArrayNum == 0) {
                        pwVar8 = L"";
                      }
                      else {
                        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"No");
                      if (iVar3 != 0) {
                        pFVar6 = FText::ToString(pFVar5->No);
                        if ((pFVar6->Data).ArrayNum == 0) {
                          pwVar8 = L"";
                        }
                        else {
                          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                        }
                        if ((param_1->Data).ArrayNum != 0) {
                          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
                        if (iVar3 != 0) {
                          return false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return true;
    }
    if ((char)uVar1 < '\0') {
      bVar2 = FDefaultValueHelper::IsStringValidInteger(param_1);
      return bVar2;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      bVar2 = FDefaultValueHelper::IsStringValidFloat(param_1);
      return bVar2;
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      return true;
    }
  }
  return false;
}

